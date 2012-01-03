//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "at.h"
#include "atlist.h"
#include "kayit.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAt *frmAt;
int DataSayac = 0;
bool nAtKayitKontrol;
//---------------------------------------------------------------------------
__fastcall TfrmAt::TfrmAt(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton1Click(TObject *Sender)
{
    int nDeger;

    if (ToolButton2->Enabled == true) {
        nDeger = Application->MessageBox("Bir �nceki kay�t bilgileri kay�t edilmedi!!! Kaydetmek ister misiniz?", "Eski hareket ne olacak ?",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES)
            ToolButton2Click(Sender);
        else
            tblAT->Cancel();
    }
    else
        tblAT->Cancel();

    if (comboCINSI->Text.Length() != 0) {
        Anahtar();
        tblAT->Open();
        tblAT->Filtered = false;
        nAtKayitKontrol = false;
        tblAT->Insert();
        ToolButton2->Enabled = false;
    }
    else {
        Application->MessageBoxA("Karde�im, bu at�n cinsi yok mu?\n"
            "                               Programc�  :p",
            "Uyar� Mesaj�", MB_OK + MB_ICONEXCLAMATION);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton2Click(TObject *Sender)
{
    queryKAYITKONTROL->Close();
    queryKAYITKONTROL->ParamByName("ATINADI")->AsString = dbeditATIN_ADI->Text;
    queryKAYITKONTROL->ParamByName("CINSI")->AsString = comboCINSI->Text;
    queryKAYITKONTROL->Open();

    if (queryKAYITKONTROLATIN_ADI->Value.Length() != 0 && nAtKayitKontrol == false) {
        Application->MessageBoxA("Bu kayd� daha �nce girmi�siniz !!! ",
            "Uyar� Mesaj�", MB_OK + MB_ICONEXCLAMATION);
    }
    else if (dbeditATIN_ADI->Text.Length() == 0)
        Application->MessageBoxA("Ata ��yle fiyakal� bir isim bulunca gel.\n                                     Programc� :p",
            "Uyar� Mesaj�", MB_OK + MB_ICONEXCLAMATION);
    else if (comboCINSI->Text.Length() == 0)
        Application->MessageBoxA("At�n cinsini ��rende gel.\n                 Programc� :p",
            "Uyar� Mesaj�", MB_OK + MB_ICONEXCLAMATION);
    else {
        tblAT->Edit();
        tblATCINSI->Value = comboCINSI->Text;
        nAtKayitKontrol = true;
        tblAT->Post();
        ToolButton2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton3Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kayd� silmek son karar�n�z m�?", "Silme onay�",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblAT->Delete();
        Kilit();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton5Click(TObject *Sender)
{
    frmAtListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::Anahtar(void)
{
    tblAT->Open();
    ToolButton2->Enabled = true;
    IleriGeri();

    dbeditATIN_ADI->Enabled = true;
    dbeditANASI->Enabled = true;
    dbeditBABASI->Enabled = true;
    dbeditDOGTAR->Enabled = true;
    dbeditHANDIKAP->Enabled = true;
    dbeditSAHIBI->Enabled = true;
    dbeditANTRENOR->Enabled = true;
    editYAS->Enabled = true;

    editYAS->Color = clWhite;
    dbeditATIN_ADI->Color = clWhite;
    dbeditANASI->Color = clWhite;
    dbeditBABASI->Color = clWhite;
    dbeditDOGTAR->Color = clWhite;
    dbeditHANDIKAP->Color = clWhite;
    dbeditSAHIBI->Color = clWhite;
    dbeditANTRENOR->Color = clWhite;
}

void __fastcall TfrmAt::Kilit(void)
{
    tblAT->Close();
    ToolButton2->Enabled = false;
    ToolButton9->Enabled = false;
    ToolButton8->Enabled = false;


    editYAS->Enabled = false;
    dbeditATIN_ADI->Enabled = false;
    dbeditANASI->Enabled = false;
    dbeditBABASI->Enabled = false;
    dbeditDOGTAR->Enabled = false;
    dbeditHANDIKAP->Enabled = false;
    dbeditSAHIBI->Enabled = false;
    dbeditANTRENOR->Enabled = false;

    dbeditATIN_ADI->Color = clGray;
    editYAS->Color = clGray;
    editYAS->Clear();
    dbeditANASI->Color = clGray;
    dbeditBABASI->Color = clGray;
    dbeditDOGTAR->Color = clGray;
    dbeditHANDIKAP->Color = clGray;
    dbeditSAHIBI->Color = clGray;
    dbeditANTRENOR->Color = clGray;
}

void __fastcall TfrmAt::FormShow(TObject *Sender)
{
    Kilit();
    AtListesiKontrolu = false;

    if (KayitGirisKontrolu == true) {
        switch (frmKayitGirisi->PageControl1->ActivePageIndex) {
            case 0:
                if (frmKayitGirisi->tblACIKLAMATUR01->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT01ATIN_ADI->Value;

                break;
            case 1:
                if (frmKayitGirisi->tblACIKLAMATUR02->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT02ATIN_ADI->Value;

                break;
            case 2:
                if (frmKayitGirisi->tblACIKLAMATUR03->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT03ATIN_ADI->Value;

                break;
            case 3:
                if (frmKayitGirisi->tblACIKLAMATUR04->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT04ATIN_ADI->Value;

                break;
            case 4:
                if (frmKayitGirisi->tblACIKLAMATUR05->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT05ATIN_ADI->Value;

                break;
            case 5:
                if (frmKayitGirisi->tblACIKLAMATUR06->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT06ATIN_ADI->Value;

                break;
            case 6:
                if (frmKayitGirisi->tblACIKLAMATUR07->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT07ATIN_ADI->Value;

                break;
            case 7:
                if (frmKayitGirisi->tblACIKLAMATUR08->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT08ATIN_ADI->Value;

                break;
            case 8:
                if (frmKayitGirisi->tblACIKLAMATUR09->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT09ATIN_ADI->Value;

                break;
            case 9:
                if (frmKayitGirisi->tblACIKLAMATUR10->Value == "ARAP")
                    comboCINSI->ItemIndex = 1;
                else
                    comboCINSI->ItemIndex = 0;

                // Yeni Kay�t Giri� Ekran�
                ToolButton1Click(Sender);
                tblAT->Edit();
                tblATATIN_ADI->Value = frmKayitGirisi->tblKAYIT10ATIN_ADI->Value;
                break;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditBABASIChange(TObject *Sender)
{
    ToolButton2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditANASIChange(TObject *Sender)
{
    ToolButton2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditATIN_ADIChange(TObject *Sender)
{
    ToolButton2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditDOGTARChange(TObject *Sender)
{
    ToolButton2->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditHANDIKAPChange(TObject *Sender)
{
    ToolButton2->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditSAHIBIChange(TObject *Sender)
{
    ToolButton2->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditANTRENORChange(TObject *Sender)
{
    ToolButton2->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbcboxCINSIChange(TObject *Sender)
{
    ToolButton2->Enabled = true;

    queryKAYITKONTROL->Close();
    queryKAYITKONTROL->ParamByName("ATINADI")->AsString = dbeditATIN_ADI->Text;
    queryKAYITKONTROL->ParamByName("CINSI")->AsString = comboCINSI->Text;
    queryKAYITKONTROL->Open();

    if (queryKAYITKONTROLATIN_ADI->Value.Length() != 0) {
        nAtKayitKontrol = true;
        tblAT->Cancel();
        tblAT->Filtered = true;
        tblAT->Filter = "[REFERANSNO] = '"+
            IntToStr(queryKAYITKONTROLREFERANSNO->Value)+"'";
        ToolButton2->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::FormClose(TObject *Sender, TCloseAction &Action)
{
    frmHorse->Visible = true;
    Kilit();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::FormCloseQuery(TObject *Sender, bool &CanClose)
{
    int nDeger;

    if (ToolButton2->Enabled == true) {
        nDeger = Application->MessageBox("De�i�iklikler kaydedilmedi !!! \nKaydetmek ister misiniz?", "��kmadan �nce !!!",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES)
            ToolButton2Click(Sender);
        else
            tblAT->Cancel();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton9Click(TObject *Sender)
{
    if (ToolButton2->Enabled == false) {
        if (tblAT->Filtered == true) {
            DataSayac = tblAT->RecNo;
            tblAT->Filtered = false;
            tblAT->RecNo = DataSayac;
        }
        ++tblAT->RecNo;
        IleriGeri();
        ToolButton2->Enabled = false;
    }
    else
        ToolButton2Click(Sender);
    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::IleriGeri(void)
{
    if (tblAT->RecNo >= tblAT->RecordCount) {
        ToolButton8->Enabled = true;
        ToolButton9->Enabled = false;
    }
    else if (tblAT->RecNo <= 1) {
        ToolButton8->Enabled = false;
        ToolButton9->Enabled = true;
    }
    else {
        ToolButton8->Enabled = true;
        ToolButton9->Enabled = true;
    }

    if (tblAT->RecordCount <= 0) {
        ToolButton8->Enabled = false;
        ToolButton9->Enabled = false;
    }
}

void __fastcall TfrmAt::ToolButton8Click(TObject *Sender)
{
    if (ToolButton2->Enabled == false) {
        if (tblAT->Filtered == true) {
            DataSayac = tblAT->RecNo;
            tblAT->Filtered = false;
            tblAT->RecNo = DataSayac;
        }
        --tblAT->RecNo;
        IleriGeri();
        ToolButton2->Enabled = false;
    }
    else
        ToolButton2Click(Sender);

}
//---------------------------------------------------------------------------
void __fastcall TfrmAt::dbeditATIN_ADIKeyPress(TObject *Sender, char &Key)
{
    unsigned short nGun, nAy, nYil;
    TDateTime tmTarih;
    int Sonuc;

    tmTarih = tmTarih.CurrentDate();
    tmTarih.DecodeDate(&nYil, &nAy, &nGun);

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tblAT->Edit();
        dbeditATIN_ADI->Text = AnsiUpperCase(dbeditATIN_ADI->Text);

        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ATINADI")->AsString = dbeditATIN_ADI->Text;
        queryKAYITKONTROL->ParamByName("CINSI")->AsString = comboCINSI->Text;
        queryKAYITKONTROL->Open();

        if (queryKAYITKONTROLATIN_ADI->Value.Length() != 0) {
            nAtKayitKontrol = true;
            tblAT->Cancel();
            tblAT->Filtered = true;
            tblAT->Filter = "[REFERANSNO] = '"+
                IntToStr(queryKAYITKONTROLREFERANSNO->Value)+"'";
            ToolButton2->Enabled = false;
            Sonuc = nYil - tblATDOGUMTAR->Value;
            editYAS->Text = IntToStr(Sonuc);
        }
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditANASIKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tblAT->Edit();
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditBABASIKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tblAT->Edit();
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditDOGTARKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        ToolButton2Click(Sender); // Kaydet Butonu
        ToolButton1Click(Sender); // Yeni Kay�t Butonu
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditHANDIKAPKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditSAHIBIKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbeditANTRENORKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::dbcboxCINSIKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::Yeni1Click(TObject *Sender)
{
    ToolButton1Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::Kaydet1Click(TObject *Sender)
{
    ToolButton2Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::Sil1Click(TObject *Sender)
{
    ToolButton3Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::nceki1Click(TObject *Sender)
{
    ToolButton8Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::Sonraki1Click(TObject *Sender)
{
    ToolButton9Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::DosyaA1Click(TObject *Sender)
{
    ToolButton5Click(Sender);    
}
//---------------------------------------------------------------------------


void __fastcall TfrmAt::Yazdr1Click(TObject *Sender)
{
    ToolButton6Click(Sender);    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::ToolButton6Click(TObject *Sender)
{
    ;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::k1Click(TObject *Sender)
{
    frmAt->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::editYASKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tblAT->Edit();
        editYASChange(Sender);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::editYASChange(TObject *Sender)
{
    unsigned short nGun, nAy, nYil;
    TDateTime tmTarih;

    tmTarih = tmTarih.CurrentDate();
    tmTarih.DecodeDate(&nYil, &nAy, &nGun);

    if (editYAS->Text.Length() != 0) {
        tblAT->Edit();
        tblATDOGUMTAR->Value = nYil - StrToInt(editYAS->Text);
        tblAT->Post();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAt::comboCINSIChange(TObject *Sender)
{
    unsigned short nGun, nAy, nYil;
    TDateTime tmTarih;
    int Sonuc;

    if (tblAT->Active == true) {
        tmTarih = tmTarih.CurrentDate();
        tmTarih.DecodeDate(&nYil, &nAy, &nGun);

        tblAT->Edit();
        dbeditATIN_ADI->Text = AnsiUpperCase(dbeditATIN_ADI->Text);

        queryKAYITKONTROL->Close();
        queryKAYITKONTROL->ParamByName("ATINADI")->AsString = dbeditATIN_ADI->Text;
        queryKAYITKONTROL->ParamByName("CINSI")->AsString = comboCINSI->Text;
        queryKAYITKONTROL->Open();

        if (queryKAYITKONTROLATIN_ADI->Value.Length() != 0) {
            nAtKayitKontrol = true;
            tblAT->Cancel();
            tblAT->Filtered = true;
            tblAT->Filter = "[REFERANSNO] = '"+
                IntToStr(queryKAYITKONTROLREFERANSNO->Value)+"'";
            ToolButton2->Enabled = false;
            Sonuc = nYil - tblATDOGUMTAR->Value;
            editYAS->Text = IntToStr(Sonuc);
        }
    }
}
//---------------------------------------------------------------------------

