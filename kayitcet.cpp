//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kayitcet.h"
#include "pistgir.h"
#include "listele.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTabloGoruntule *frmTabloGoruntule;
unsigned int nSayac;
//---------------------------------------------------------------------------
__fastcall TfrmTabloGoruntule::TfrmTabloGoruntule(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTabloGoruntule::IkinciEtap(void)
{
    int nSecici;

    nSayac = 0;
    queryLISTELE->First();
    while (!queryLISTELE->Eof) {
        nSayac = ((queryLISTELE->RecNo * 100) / queryLISTELE->RecordCount);
        ProgressBar1->Position = nSayac;
        Label5->Caption = "% "+IntToStr(nSayac);
        // Jokey bilgisi arttýrýlýyoooooo....
        queryATSORGUSU->Close();
        queryATSORGUSU->ParamByName("ADISOYADI")->AsString = queryLISTELEJOKEY->Value;
        queryATSORGUSU->ParamByName("KAYITTURU")->AsString = "JOKEY";
        queryATSORGUSU->Open();

        if (queryATSORGUSUADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryATSORGUSUREFERANS->Value)+"'";
            tblJOKEYANA->Filtered = true;

            nSecici = queryLISTELEKACINCI->Value;
            switch (nSecici) {
                case 1:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANABIRINCI->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 2:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAIKINCI->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 3:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAUCUNCU->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 4:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANADORDUNCU->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                default:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
            }
            tblJOKEYANA->Edit();
            tblJOKEYANASONONYARISI->Value =
                Son10KosuyuDuzenle(tblJOKEYANASONONYARISI->Value, nSecici);
            tblJOKEYANAIKILIYUZDESI->Value = (((tblJOKEYANABIRINCI->Value + tblJOKEYANAIKINCI->Value) * 100)
                / tblJOKEYANAKOSUTOPLAMI->Value);
            tblJOKEYANA->Post();
        }
        // Antrenör bilgisi arttýrýlýyoooooo....
        queryATSORGUSU->Close();
        queryATSORGUSU->ParamByName("ADISOYADI")->AsString = queryLISTELEANTRENOR->Value;
        queryATSORGUSU->ParamByName("KAYITTURU")->AsString = "ANTRENOR";
        queryATSORGUSU->Open();

        if (queryATSORGUSUADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Filter = "[REFERANS]='"+IntToStr(queryATSORGUSUREFERANS->Value)+"'";
            tblJOKEYANA->Filtered = true;

            nSecici = queryLISTELEKACINCI->Value;
            switch (nSecici) {
                case 1:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANABIRINCI->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 2:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAIKINCI->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 3:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAUCUNCU->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                case 4:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANADORDUNCU->Value;
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
                    break;
                default:
                    tblJOKEYANA->Edit();
                    ++tblJOKEYANAKOSUTOPLAMI->Value;
                    tblJOKEYANA->Post();
            }
            tblJOKEYANA->Edit();
            tblJOKEYANASONONYARISI->Value =
                Son10KosuyuDuzenle(tblJOKEYANASONONYARISI->Value, nSecici);
            tblJOKEYANAIKILIYUZDESI->Value = ((tblJOKEYANABIRINCI->Value + tblJOKEYANAIKINCI->Value) * 100)
                / tblJOKEYANAKOSUTOPLAMI->Value;
            tblJOKEYANA->Post();
        }
        queryLISTELE->Next();
    }
}

AnsiString __fastcall TfrmTabloGoruntule::Son10KosuyuDuzenle(AnsiString Dizi, int Kosu)
{
    char Gecici1[20], Gecici2[20];

    memset(Gecici1, 0, 20);
    memset(Gecici2, 0, 20);
    strcpy(Gecici1, Dizi.c_str());
    strncpy(Gecici2, &Gecici1[1], 9);
    Gecici2[9] = (char) (Kosu + '0'); // numara char olarak çevrildi
    Gecici2[10] = '\0';
    return AnsiString(Gecici2);
}

void __fastcall TfrmTabloGoruntule::BirinciEtap(void)
{
    // Ýlk Etap tüm kayýtlarý sýfýrlanýyor.....
    nSayac = 0;

    tblJOKEYANA->Filtered = false;
    tblJOKEYANA->First();
    while (!tblJOKEYANA->Eof) {
        nSayac = ((tblJOKEYANA->RecNo * 100) / tblJOKEYANA->RecordCount);
        ProgressBar1->Position = nSayac;
        Label5->Caption = "% "+IntToStr(nSayac);
        tblJOKEYANA->Edit();
        tblJOKEYANASONONYARISI->Value = "----------";
        tblJOKEYANAIKILIYUZDESI->Value = 0;
        tblJOKEYANADORDUNCU->Value = 0;
        tblJOKEYANAUCUNCU->Value = 0;
        tblJOKEYANAIKINCI->Value = 0;
        tblJOKEYANABIRINCI->Value = 0;
        tblJOKEYANAKOSUTOPLAMI->Value = 0;
        tblJOKEYANA->Post();
        tblJOKEYANA->Next();
    }
}

void __fastcall TfrmTabloGoruntule::SpeedButton2Click(TObject *Sender)
{
    queryLISTELE->Close();
    queryLISTELE->ParamByName("BASTARIH")->AsDate = datetimecomboBASLANGIC->Date;
    queryLISTELE->ParamByName("BITTARIH")->AsDate = datetimecomboBITIS->Date;
    queryLISTELE->ParamByName("PIST")->AsString = comboPIST->Text;
    queryLISTELE->Open();

    SpeedButton2->Enabled = false;
    Animate1->Active = true;
    BirinciEtap();
    IkinciEtap();
    Animate1->Active = false;
    SpeedButton2->Caption = "Tamamlandý";
    SpeedButton1->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmTabloGoruntule::FormShow(TObject *Sender)
{
    tblJOKEYANA->Active = true;
    queryLISTELE->Active = true;
    queryATSORGUSU->Active = true;

    comboPIST->Items->Clear();
    frmPistGirisi->tblPIST->First();

    while (!frmPistGirisi->tblPIST->Eof) {
        comboPIST->Items->Add(frmPistGirisi->tblPISTPISTYERI->Value);
        frmPistGirisi->tblPIST->Next();
    }

    ProgressBar1->Position = 0;
    comboPIST->ItemIndex = 0;
    datetimecomboBASLANGIC->Date = datetimecomboBASLANGIC->Date.CurrentDate();
    datetimecomboBITIS->Date = datetimecomboBITIS->Date.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTabloGoruntule::datetimecomboBASLANGICChange(
      TObject *Sender)
{
    SpeedButton2->Enabled = true;
    SpeedButton2->Caption = "Baþlat";
    Label5->Caption = " ";
    ProgressBar1->Position = 0;

    queryLISTELE->Close();
    queryLISTELE->ParamByName("BASTARIH")->AsDate = datetimecomboBASLANGIC->Date;
    queryLISTELE->ParamByName("BITTARIH")->AsDate = datetimecomboBITIS->Date;
    queryLISTELE->ParamByName("PIST")->AsString = comboPIST->Text;
    queryLISTELE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTabloGoruntule::datetimecomboBITISChange(
      TObject *Sender)
{
    SpeedButton2->Enabled = true;
    SpeedButton2->Caption = "Baþlat";
    Label5->Caption = " ";
    ProgressBar1->Position = 0;

    queryLISTELE->Close();
    queryLISTELE->ParamByName("BASTARIH")->AsDate = datetimecomboBASLANGIC->Date;
    queryLISTELE->ParamByName("BITTARIH")->AsDate = datetimecomboBITIS->Date;
    queryLISTELE->ParamByName("PIST")->AsString = comboPIST->Text;
    queryLISTELE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTabloGoruntule::comboPISTChange(TObject *Sender)
{
    SpeedButton2->Enabled = true;
    SpeedButton2->Caption = "Baþlat";
    Label5->Caption = " ";
    ProgressBar1->Position = 0;

    queryLISTELE->Close();
    queryLISTELE->ParamByName("BASTARIH")->AsDate = datetimecomboBASLANGIC->Date;
    queryLISTELE->ParamByName("BITTARIH")->AsDate = datetimecomboBITIS->Date;
    queryLISTELE->ParamByName("PIST")->AsString = comboPIST->Text;
    queryLISTELE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmTabloGoruntule::comboKATEGORIChange(TObject *Sender)
{
    SpeedButton2->Enabled = true;
    SpeedButton2->Caption = "Baþlat";
    Label5->Caption = " ";
    ProgressBar1->Position = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmTabloGoruntule::SpeedButton1Click(TObject *Sender)
{
    frmListele->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmTabloGoruntule::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblJOKEYANA->Active = false;
    queryLISTELE->Active = false;
    queryATSORGUSU->Active = false;
}
//---------------------------------------------------------------------------

