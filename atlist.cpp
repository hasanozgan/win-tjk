//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "atlist.h"
#include "kayit.h"
#include "at.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAtListesi *frmAtListesi;
bool AtListesiKontrolu = false;
//---------------------------------------------------------------------------
__fastcall TfrmAtListesi::TfrmAtListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAtListesi::ComboBox1Change(TObject *Sender)
{
    queryATLISTESI->Close();
    queryATLISTESI->ParamByName("CINSI")->AsString = ComboBox1->Text+"%";
    queryATLISTESI->ParamByName("ADI")->AsString = Edit1->Text+"%";
    queryATLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtListesi::AtBilgisiEkle(void)
{
    TDateTime nZaman;
    unsigned short nGun, nAy, nYil,
              BugunkiTarih, DogumTarihi;

    Bilgi.HandikapPuani = queryATLISTESIHANDIKAP->Value;
    Bilgi.AtinAdi = queryATLISTESIATIN_ADI->Value;
    Bilgi.Orjini = "( "+queryATLISTESIBABASI->Value+
                   " - "+queryATLISTESIANASI->Value+" )";
    Bilgi.Antrenor = queryATLISTESIANTRENOR->Value;
    // -------------------- Atýn yaþý Hesaplanýyor ---------------
    DogumTarihi = queryATLISTESIDOGUMTAR->Value;
    nZaman = nZaman.CurrentDate();
    nZaman.DecodeDate(&nYil, &nAy, &nGun);
    BugunkiTarih = nYil;
    // ----------------- Atýn Yaþý hesaplandý --------------------
    Bilgi.AtinYasi = BugunkiTarih - DogumTarihi;
    Bilgi.Isaret = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtListesi::DBGrid1CellClick(TColumn *Column)
{
    unsigned short nGun, nAy, nYil;
    TDateTime tmTarih;
    int Sonuc, ReferansNo;

    tmTarih = tmTarih.CurrentDate();
    tmTarih.DecodeDate(&nYil, &nAy, &nGun);

    ReferansNo = queryATLISTESIREFERANSNO->Value;
    if (AtListesiKontrolu == false) {
        frmAt->Anahtar();
        frmAt->tblAT->Filtered = true;
        frmAt->tblAT->Filter = "[REFERANSNO] = "+IntToStr(ReferansNo);
        AtBilgisiEkle();
        YeniKayit = true;
        nAtKayitKontrol = true;
        if (frmAt->tblATCINSI->Value == "ARAP")
            frmAt->comboCINSI->ItemIndex = 1;
        else
            frmAt->comboCINSI->ItemIndex = 0;
        Sonuc = nYil - frmAt->tblATDOGUMTAR->Value;
        frmAt->editYAS->Text = IntToStr(Sonuc);
        frmAt->ToolButton2->Enabled = false;
    }
    else {
        AtBilgisiEkle();
        frmKayitGirisi->KayitaEk();
    }

    frmAtListesi->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtListesi::FormShow(TObject *Sender)
{
    queryATLISTESI->Close();
    queryATLISTESI->ParamByName("CINSI")->AsString = ComboBox1->Text+"%";
    queryATLISTESI->ParamByName("ADI")->AsString = Edit1->Text+"%";
    queryATLISTESI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtListesi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    queryATLISTESI->Close();
    Bilgi.Isaret = false;
}

//---------------------------------------------------------------------------

void __fastcall TfrmAtListesi::Edit1Change(TObject *Sender)
{
    queryATLISTESI->Close();
    queryATLISTESI->ParamByName("CINSI")->AsString = ComboBox1->Text+"%";
    queryATLISTESI->ParamByName("ADI")->AsString = Edit1->Text+"%";
    queryATLISTESI->Open();
}
//---------------------------------------------------------------------------

