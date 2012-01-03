//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sonucgir.h"
#include "hatadialog.h"
#include "hata2dialog.h"
#include "pistgir.h"
#include "antrenorlist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSonucGirisi *frmSonucGirisi;
AnsiString Referans;
//---------------------------------------------------------------------------
__fastcall TfrmSonucGirisi::TfrmSonucGirisi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSonucGirisi::FormShow(TObject *Sender)
{
    tblJOKEYHAR->Active = true;
    tblJOKEYANA->Active = true;
    queryKAYITKONTROL->Active = true;
    querySONUCSILME->Active = true;

    KosuPistiYukle();
    comboPist->ItemIndex = 0;
    comboKosuNo->ItemIndex = 0;
    DateTimePicker1->Date = DateTimePicker1->Date.CurrentDate();
    ListeFiltrele();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSonucGirisi::KosuPistiYukle(void)
{
    comboPist->Items->Clear();
    frmPistGirisi->tblPIST->First();

    while (!frmPistGirisi->tblPIST->Eof) {
        comboPist->Items->Add(frmPistGirisi->tblPISTPISTYERI->Value);
        frmPistGirisi->tblPIST->Next();
    }
    comboPist->ItemIndex = 0;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::ListeFiltrele(void)
{
    unsigned short nGun, nAy, nYil;

    DateTimePicker1->Date.DecodeDate(&nYil, &nAy, &nGun);

    if (comboPist->Text.Length() != 0 &&
        comboKosuNo->Text.Length() != 0 ) {
        Referans = IntToStr(nYil)+IntToStr(nAy)+IntToStr(nGun)+
            comboPist->Text+IntToStr(comboKosuNo->ItemIndex);

        DBGrid1->Color = clWhite;
        tblJOKEYHAR->Active = true;
        tblJOKEYHAR->Filtered = true;
        tblJOKEYHAR->Filter = "[REFERANS]='"+Referans+"*'";
    }
    else {
        DBGrid1->Color = clGray;
        tblJOKEYHAR->Active = false;
    }
}

void __fastcall TfrmSonucGirisi::DateTimePicker1Change(TObject *Sender)
{
    ListeFiltrele();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::comboPistChange(TObject *Sender)
{
    ListeFiltrele();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::comboKosuNoChange(TObject *Sender)
{
    ListeFiltrele();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::tblJOKEYHARBeforePost(TDataSet *DataSet)
{
    if (Referans != " ") {
        tblJOKEYHARREFERANS->Value = Referans;
        tblJOKEYHARPIST->Value = comboPist->Text;
        tblJOKEYHARTARIH->Value = DateTimePicker1->Date;


    }
    else
        tblJOKEYHAR->Cancel();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        if (DBGrid1->SelectedIndex == 1) {
            tblJOKEYHAR->Edit();
            tblJOKEYHARJOKEY->Value = AnsiUpperCase(tblJOKEYHARJOKEY->Value);
            queryKAYITKONTROL->Close();
            queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARJOKEY->Value);
            queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "JOKEY";
            queryKAYITKONTROL->Open();

            if (queryKAYITKONTROLADISOYADI->Value.Length() == 0)
                frmHataMesaji->Show();
            else {
                ++DBGrid1->SelectedIndex;
                Key = 0;
            }
        }
        else if (DBGrid1->SelectedIndex == 2) {
            tblJOKEYHAR->Edit();
            tblJOKEYHARANTRENOR->Value = AnsiUpperCase(tblJOKEYHARANTRENOR->Value);
            queryKAYITKONTROL->Close();
            queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARANTRENOR->Value);
            queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "ANTRENOR";
            queryKAYITKONTROL->Open();

            if (queryKAYITKONTROLADISOYADI->Value.Length() == 0)
                frmHataMesaji2->Show();
            else {
                DBGrid1->SelectedIndex = 1;
                tblJOKEYHAR->Next(); // ..::Database bir sonraki elemana geçiyor::..
            }
        }
        else {
            ++DBGrid1->SelectedIndex;
            Key = 0;
        }
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmSonucGirisi::SpeedButton1Click(TObject *Sender)
{
    tblJOKEYHAR->Edit();
    tblJOKEYHAR->Post();
    SpeedButton1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::dsrcJOKEYHARDataChange(TObject *Sender,
      TField *Field)
{
    SpeedButton1->Enabled = true;    
}
//---------------------------------------------------------------------------
void __fastcall TfrmSonucGirisi::SpeedButton2Click(TObject *Sender)
{
    unsigned short nGun, nAy, nYil;
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblJOKEYHAR->First();
        while (!tblJOKEYHAR->Eof) {
            queryKAYITKONTROL->Close();
            queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARJOKEY->Value);
            queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "JOKEY";
            queryKAYITKONTROL->Open();

            if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
                tblJOKEYANA->Filtered = true;
                tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
                tblJOKEYANA->Edit();
                --tblJOKEYANATOPLAMKOSU->Value;
                if (tblJOKEYHARKACINCI->Value == 1)
                    --tblJOKEYANATOPLAMBIRINCI->Value;
                tblJOKEYANA->Post();
            }
            queryKAYITKONTROL->Close();
            queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARANTRENOR->Value);
            queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "ANTRENOR";
            queryKAYITKONTROL->Open();
            if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
                tblJOKEYANA->Filtered = true;
                tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
                tblJOKEYANA->Edit();
                --tblJOKEYANATOPLAMKOSU->Value;
                if (tblJOKEYHARKACINCI->Value == 1)
                    --tblJOKEYANATOPLAMBIRINCI->Value;
                tblJOKEYANA->Post();
            }
            tblJOKEYHAR->Next();
        }

        DateTimePicker1->Date.DecodeDate(&nYil, &nAy, &nGun);
        if (comboPist->Text.Length() != 0 &&
            comboKosuNo->Text.Length() != 0 ) {
            Referans = IntToStr(nYil)+IntToStr(nAy)+IntToStr(nGun)+
                comboPist->Text+IntToStr(comboKosuNo->ItemIndex);

            querySONUCSILME->SQL->Clear();
            querySONUCSILME->SQL->Add("DELETE FROM JOKEYHAR");
            querySONUCSILME->SQL->Add("WHERE REFERANS='"+Referans+"'");
            querySONUCSILME->ExecSQL();
            ListeFiltrele();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::SpeedButton3Click(TObject *Sender)
{
    KosuPistiYukle();      
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::Kaydet1Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARJOKEY->Value);
        queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "JOKEY";
        queryKAYITKONTROL->Open();

        if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filtered = true;
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
            tblJOKEYANA->Edit();
            --tblJOKEYANATOPLAMKOSU->Value;
            if (tblJOKEYHARKACINCI->Value == 1)
                --tblJOKEYANATOPLAMBIRINCI->Value;
            tblJOKEYANA->Post();
        }
        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARANTRENOR->Value);
        queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "ANTRENOR";
        queryKAYITKONTROL->Open();
        if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filtered = true;
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
            tblJOKEYANA->Edit();
            --tblJOKEYANATOPLAMKOSU->Value;
            if (tblJOKEYHARKACINCI->Value == 1)
                --tblJOKEYANATOPLAMBIRINCI->Value;
            tblJOKEYANA->Post();
        }
        tblJOKEYHAR->Delete();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::Yeni1Click(TObject *Sender)
{
    tblJOKEYHAR->Insert();
}
//---------------------------------------------------------------------------
void __fastcall TfrmSonucGirisi::SpeedButton4Click(TObject *Sender)
{
    int nSayac = 0;

    tblJOKEYHAR->First();
    while (!tblJOKEYHAR->Eof) {
        ++nSayac;
        tblJOKEYHAR->Edit();
        if (nSayac < 10)
            tblJOKEYHARKACINCI->Value = nSayac;
        else
            tblJOKEYHARKACINCI->Value = 0;
        tblJOKEYHAR->Post();

        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARJOKEY->Value);
        queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "JOKEY";
        queryKAYITKONTROL->Open();

        if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filtered = true;
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
            if (tblJOKEYHARISARETLE->Value == false) {
                tblJOKEYANA->Edit();
                ++tblJOKEYANATOPLAMKOSU->Value;
                if (tblJOKEYHARKACINCI->Value == 1)
                    ++tblJOKEYANATOPLAMBIRINCI->Value;
                tblJOKEYANA->Post();
            }
        }
        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(tblJOKEYHARANTRENOR->Value);
        queryKAYITKONTROL->ParamByName("KAYITTURU")->AsString = "ANTRENOR";
        queryKAYITKONTROL->Open();

        if (queryKAYITKONTROLADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filtered = true;
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryKAYITKONTROLREFERANS->Value)+"'";
            if (tblJOKEYHARISARETLE->Value == false) {
                tblJOKEYANA->Edit();
                ++tblJOKEYANATOPLAMKOSU->Value;
                if (tblJOKEYHARKACINCI->Value == 1)
                    ++tblJOKEYANATOPLAMBIRINCI->Value;
                // Ýþaret Burada yerleþiyor.
                tblJOKEYHAR->Edit();
                tblJOKEYHARISARETLE->Value = true;
                tblJOKEYHAR->Post();
                //----------------------------------
                tblJOKEYANA->Post();
            }
        }
        tblJOKEYHAR->Next();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmSonucGirisi::tblJOKEYHARAfterInsert(TDataSet *DataSet)
{
    tblJOKEYHAR->Edit();    
    tblJOKEYHARISARETLE->Value = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::Sil1Click(TObject *Sender)
{
    frmAntrenorListesi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmSonucGirisi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblJOKEYHAR->Active = false;
    tblJOKEYANA->Active = false;
    queryKAYITKONTROL->Active = false;
    querySONUCSILME->Active = false;
}
//---------------------------------------------------------------------------

