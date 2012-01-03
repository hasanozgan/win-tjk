//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "pistgir.h"
#include "jokeygir.h"
#include "jokeylist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmJokeyGiris *frmJokeyGiris;
bool KayitAsamasi = false;
//---------------------------------------------------------------------------
__fastcall TfrmJokeyGiris::TfrmJokeyGiris(TComponent* Owner)
    : TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TfrmJokeyGiris::KosuPistiYukle(void)
{
    comboPist->Items->Clear();
    frmPistGirisi->tblPIST->First();

    while (!frmPistGirisi->tblPIST->Eof) {
        comboPist->Items->Add(frmPistGirisi->tblPISTPISTYERI->Value);
        frmPistGirisi->tblPIST->Next();
    }
}

//---------------------------------------------------------------------------
void __fastcall TfrmJokeyGiris::FormShow(TObject *Sender)
{
    comboKayitTuru->ItemIndex = 0;
    KosuPistiYukle();
    tblJOKEYANA->Active = true;
    queryADKONTROL->Active = true;
    Kilit();
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::tbtnYENIClick(TObject *Sender)
{
    tblJOKEYANA->Active = true;
    tblJOKEYANA->Filtered = false;
    comboKayitTuru->Color = clWhite;
    dbeditAdiSoyadi->Color = clWhite;
    comboKayitTuru->Enabled = true;
    dbeditAdiSoyadi->Enabled = true;
    dbeditTopKosSay->Color = clWhite;
    dbeditTopBirSay->Color = clWhite;
    dbeditTopKosSay->Enabled = true;
    dbeditTopBirSay->Enabled = true;

    tbtnKAYDET->Enabled = false;
    tbtnSIL->Enabled = true;
    KayitAsamasi = false;
    tblJOKEYANA->Insert();
    StatusBar1->Panels->Items[1]->Text = "0";
    StatusBar1->Panels->Items[3]->Text = "0";
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::tbtnKAYDETClick(TObject *Sender)
{
    tblJOKEYANA->Edit();
    dbeditAdiSoyadi->Text = AnsiUpperCase(dbeditAdiSoyadi->Text);

    if (comboKayitTuru->Text.Length() == 0)
        Application->MessageBox("Offf sýkýldým ama kardeþim...\nÝnsan kayýt türünüde unutur mu beee?",
                    "Kayýt Uyarýsý :p", MB_OK|MB_ICONINFORMATION);
    else if (dbeditAdiSoyadi->Text.Length() == 0)
        Application->MessageBox("Oooo sen nebiçim operatörsün yaaa..\nKardeþim insan Adý/Soyadý hanesini atlar mý?\nKovarým haaaa!!!",
                    "Kayýt Uyarýsý :p", MB_OK|MB_ICONINFORMATION);
    else {
        queryADKONTROL->Close();
        queryADKONTROL->ParamByName("ADISOYADI")->AsString = dbeditAdiSoyadi->Text;
        queryADKONTROL->ParamByName("KAYITTURU")->AsString = comboKayitTuru->Text;
        queryADKONTROL->Open();

        if (queryADKONTROLADISOYADI->Value.Length() != 0 && KayitAsamasi == false) {
            Application->MessageBox("Bu kiþi daha önceden girilmiþ. Lütfen ismini deðiþtirin.",
                        "Kayýt Uyarýsý !!!", MB_OK|MB_ICONINFORMATION);
            tblJOKEYANA->Cancel();
        }
        else {
            tblJOKEYANA->Edit();
            if (dbeditTopKosSay->Text.Length() == 0)
                tblJOKEYANADEVIRTOPLAMKOSU->Value = 0;

            if (dbeditTopBirSay->Text.Length() == 0)
                tblJOKEYANADEVIRBIRINCILIGI->Value = 0;

            if (dbeditTOPKOS->Text.Length() == 0)
                tblJOKEYANATOPLAMKOSU->Value = 0;

            if (dbeditTOPBIR->Text.Length() == 0)
                tblJOKEYANATOPLAMBIRINCI->Value = 0;

            if (comboKayitTuru->Text != "APRANTI") {
                tblJOKEYANAKAYITTURU->Value = comboKayitTuru->Text;
                tblJOKEYANATERFI->Value = true; // Jokey terfisi
            }
            else {
                tblJOKEYANAKAYITTURU->Value = "JOKEY";
                tblJOKEYANATERFI->Value = false; // terfiye onay verme
            }
            tblJOKEYANA->Post();
            KayitAsamasi = true;
            tbtnKAYDET->Enabled = false;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::tbtnSILClick(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tblJOKEYANA->Delete();
        Kilit();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::Anahtar(void)
{
    dbeditTopKosSay->Color = clWhite;
    dbeditTopBirSay->Color = clWhite;
    comboKayitTuru->Color = clWhite;
    dbeditAdiSoyadi->Color = clWhite;
    comboPist->Color = clWhite;
    dbeditKosuToplami->Color = clWhite;
    dbeditBirincilik->Color = clWhite;
    dbeditIkinci->Color = clWhite;
    dbeditUcuncu->Color = clWhite;
    dbeditDorduncu->Color = clWhite;
    dbeditYuzde->Color = clWhite;
    dbeditOnYarisi->Color = clWhite;

    comboKayitTuru->Enabled = true;
    dbeditAdiSoyadi->Enabled = true;
    dbeditTopKosSay->Enabled = true;
    dbeditTopBirSay->Enabled = true;
    comboPist->Enabled = true;
/*
    dbeditKosuToplami->Enabled = true;
    dbeditBirincilik
    dbeditIkinci
    dbeditUcuncu
    dbeditDorduncu
    dbeditYuzde
    dbeditOnYarisi*/
}

void __fastcall TfrmJokeyGiris::Kilit(void)
{
    dbeditTopKosSay->Color = clGray;
    dbeditTopBirSay->Color = clGray;
    comboKayitTuru->Color = clGray;
    dbeditAdiSoyadi->Color = clGray;
    comboPist->Color = clGray;
    dbeditKosuToplami->Color = clGray;
    dbeditBirincilik->Color = clGray;
    dbeditIkinci->Color = clGray;
    dbeditUcuncu->Color = clGray;
    dbeditDorduncu->Color = clGray;
    dbeditYuzde->Color = clGray;
    dbeditOnYarisi->Color = clGray;

    dbeditTopKosSay->Enabled = false;
    dbeditTopBirSay->Enabled = false;
    comboKayitTuru->Enabled = false;
    dbeditAdiSoyadi->Enabled = false;
    comboPist->Enabled = false;
    dbeditKosuToplami->Enabled = false;
    dbeditBirincilik->Enabled = false;
    dbeditIkinci->Enabled = false;
    dbeditUcuncu->Enabled = false;
    dbeditDorduncu->Enabled = false;
    dbeditYuzde->Enabled = false;
    dbeditOnYarisi->Enabled = false;

    tblJOKEYANA->Active = false;
    tbtnKAYDET->Enabled = false;
    tbtnSIL->Enabled = false;
}
void __fastcall TfrmJokeyGiris::dbcomboKayitTuruChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditAdiSoyadiChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::comboPistChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditKosuToplamiChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditBirincilikChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditIkinciChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditUcuncuChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditDorduncuChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditYuzdeChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditOnYarisiChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbcomboKayitTuruKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditAdiSoyadiKeyPress(TObject *Sender,
      char &Key)
{
    AnsiString YedekAdiSoyadi;

    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditAdiSoyadi->Text = AnsiUpperCase(dbeditAdiSoyadi->Text);
        YedekAdiSoyadi = dbeditAdiSoyadi->Text;
        queryADKONTROL->Close();
        queryADKONTROL->ParamByName("ADISOYADI")->AsString = dbeditAdiSoyadi->Text;
        if (comboKayitTuru->Text != "APRANTI")
            queryADKONTROL->ParamByName("KAYITTURU")->AsString = comboKayitTuru->Text;
        else
            queryADKONTROL->ParamByName("KAYITTURU")->AsString = "JOKEY";
        queryADKONTROL->Open();

        if (queryADKONTROLADISOYADI->Value.Length() != 0) {
            tblJOKEYANA->Cancel();
            tblJOKEYANA->Filtered = true;
            tblJOKEYANA->Filter = "[REFERANS]='"+AnsiString(queryADKONTROLREFERANS->Value)+"'";
            KayitAsamasi = true;
            StatusBar1->Panels->Items[1]->Text = FloatToStr(tblJOKEYANATOPLAMKOSU->Value);
            StatusBar1->Panels->Items[3]->Text = FloatToStr(tblJOKEYANATOPLAMBIRINCI->Value);
        }
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::comboPistKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Kilit();
    tblJOKEYANA->Active = false;
    queryADKONTROL->Active = false;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::tbtnACClick(TObject *Sender)
{
    frmJokeyListesi->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyGiris::dbeditTopKosSayKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }        
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditTopBirSayKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        tbtnKAYDETClick(Sender);
        tbtnYENIClick(Sender);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditTopKosSayChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;      
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyGiris::dbeditTopBirSayChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;      
}
//---------------------------------------------------------------------------

