//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "at.h"
#include "atarama.h"
#include "kayit.h"
#include "main.h"
#include "atlist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmKayitGirisi *frmKayitGirisi;
AtKayitBilgisi Bilgi;
bool YeniKayit = false;
bool KayitGirisKontrolu = false;
//---------------------------------------------------------------------------
__fastcall TfrmKayitGirisi::TfrmKayitGirisi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::YeniKayitEkle(void)
{
    tblACIKLAMA->Insert();
    tblACIKLAMA->Edit();
    tblACIKLAMAKOSU01->Value = ". KOÞU : (";
    tblACIKLAMAKOSU02->Value = ". KOÞU : (";
    tblACIKLAMAKOSU03->Value = ". KOÞU : (";
    tblACIKLAMAKOSU04->Value = ". KOÞU : (";
    tblACIKLAMAKOSU05->Value = ". KOÞU : (";
    tblACIKLAMAKOSU06->Value = ". KOÞU : (";
    tblACIKLAMAKOSU07->Value = ". KOÞU : (";
    tblACIKLAMAKOSU08->Value = ". KOÞU : (";
    tblACIKLAMAKOSU09->Value = ". KOÞU : (";
    tblACIKLAMAKOSU10->Value = ". KOÞU : (";
    tblACIKLAMATARIH->Value = DateTimePicker1->Date;
}

void __fastcall TfrmKayitGirisi::ToolButton3Click(TObject *Sender)
{
    YeniKayitEkle();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::Anahtar(void)
{
    tblKAYIT01->Active = true;
    tblKAYIT02->Active = true;
    tblKAYIT03->Active = true;
    tblKAYIT04->Active = true;
    tblKAYIT05->Active = true;
    tblKAYIT06->Active = true;
    tblKAYIT07->Active = true;
    tblKAYIT08->Active = true;
    tblKAYIT09->Active = true;
    tblKAYIT10->Active = true;
    tblACIKLAMA->Active = true;
    dbeditKAYIT01->Enabled = true;
    DBComboBox2->Enabled = true;
    DBGrid1->Enabled = true;
    dbeditKAYIT02->Enabled = true;
    DBComboBox3->Enabled = true;
    DBGrid2->Enabled = true;
    dbeditKAYIT03->Enabled = true;
    DBComboBox4->Enabled = true;
    DBGrid3->Enabled = true;
    dbeditKAYIT04->Enabled = true;
    DBComboBox5->Enabled = true;
    DBGrid4->Enabled = true;
    dbeditKAYIT05->Enabled = true;
    DBComboBox6->Enabled = true;
    DBGrid5->Enabled = true;
    dbeditKAYIT06->Enabled = true;
    DBComboBox7->Enabled = true;
    DBGrid6->Enabled = true;
    dbeditKAYIT07->Enabled = true;
    DBComboBox8->Enabled = true;
    DBGrid7->Enabled = true;
    dbeditKAYIT08->Enabled = true;
    DBComboBox9->Enabled = true;
    DBGrid8->Enabled = true;
    dbeditKAYIT09->Enabled = true;
    DBComboBox10->Enabled = true;
    DBGrid9->Enabled = true;
    dbeditKAYIT10->Enabled = true;
    DBComboBox1->Enabled = true;
    DBGrid10->Enabled = true;

    dbeditKAYIT01->Color = clWhite;
    DBComboBox2->Color = clWhite;
    DBGrid1->Color = clWhite;
    dbeditKAYIT02->Color = clWhite;
    DBComboBox3->Color = clWhite;
    DBGrid2->Color = clWhite;
    dbeditKAYIT03->Color = clWhite;
    DBComboBox4->Color = clWhite;
    DBGrid3->Color = clWhite;
    dbeditKAYIT04->Color = clWhite;
    DBComboBox5->Color = clWhite;
    DBGrid4->Color = clWhite;
    dbeditKAYIT05->Color = clWhite;
    DBComboBox6->Color = clWhite;
    DBGrid5->Color = clWhite;
    dbeditKAYIT06->Color = clWhite;
    DBComboBox7->Color = clWhite;
    DBGrid6->Color = clWhite;
    dbeditKAYIT07->Color = clWhite;
    DBComboBox8->Color = clWhite;
    DBGrid7->Color = clWhite;
    dbeditKAYIT08->Color = clWhite;
    DBComboBox9->Color = clWhite;
    DBGrid8->Color = clWhite;
    dbeditKAYIT09->Color = clWhite;
    DBComboBox10->Color = clWhite;
    DBGrid9->Color = clWhite;
    dbeditKAYIT10->Color = clWhite;
    DBComboBox1->Color = clWhite;
    DBGrid10->Color = clWhite;
}

void __fastcall TfrmKayitGirisi::Kilit(void)
{
    tblKAYIT01->Active = false;
    tblKAYIT02->Active = false;
    tblKAYIT03->Active = false;
    tblKAYIT04->Active = false;
    tblKAYIT05->Active = false;
    tblKAYIT06->Active = false;
    tblKAYIT07->Active = false;
    tblKAYIT08->Active = false;
    tblKAYIT09->Active = false;
    tblKAYIT10->Active = false;
    tblACIKLAMA->Active = false;
    dbeditKAYIT01->Enabled = false;
    DBComboBox2->Enabled = false;
    DBGrid1->Enabled = false;
    dbeditKAYIT02->Enabled = false;
    DBComboBox3->Enabled = false;
    DBGrid2->Enabled = false;
    dbeditKAYIT03->Enabled = false;
    DBComboBox4->Enabled = false;
    DBGrid3->Enabled = false;
    dbeditKAYIT04->Enabled = false;
    DBComboBox5->Enabled = false;
    DBGrid4->Enabled = false;
    dbeditKAYIT05->Enabled = false;
    DBComboBox6->Enabled = false;
    DBGrid5->Enabled = false;
    dbeditKAYIT06->Enabled = false;
    DBComboBox7->Enabled = false;
    DBGrid6->Enabled = false;
    dbeditKAYIT07->Enabled = false;
    DBComboBox8->Enabled = false;
    DBGrid7->Enabled = false;
    dbeditKAYIT08->Enabled = false;
    DBComboBox9->Enabled = false;
    DBGrid8->Enabled = false;
    dbeditKAYIT09->Enabled = false;
    DBComboBox10->Enabled = false;
    DBGrid9->Enabled = false;
    dbeditKAYIT10->Enabled = false;
    DBComboBox1->Enabled = false;
    DBGrid10->Enabled = false;

    dbeditKAYIT01->Color = clGray;
    DBComboBox2->Color = clGray;
    DBGrid1->Color = clGray;
    dbeditKAYIT02->Color = clGray;
    DBComboBox3->Color = clGray;
    DBGrid2->Color = clGray;
    dbeditKAYIT03->Color = clGray;
    DBComboBox4->Color = clGray;
    DBGrid3->Color = clGray;
    dbeditKAYIT04->Color = clGray;
    DBComboBox5->Color = clGray;
    DBGrid4->Color = clGray;
    dbeditKAYIT05->Color = clGray;
    DBComboBox6->Color = clGray;
    DBGrid5->Color = clGray;
    dbeditKAYIT06->Color = clGray;
    DBComboBox7->Color = clGray;
    DBGrid6->Color = clGray;
    dbeditKAYIT07->Color = clGray;
    DBComboBox8->Color = clGray;
    DBGrid7->Color = clGray;
    dbeditKAYIT08->Color = clGray;
    DBComboBox9->Color = clGray;
    DBGrid8->Color = clGray;
    dbeditKAYIT09->Color = clGray;
    DBComboBox10->Color = clGray;
    DBGrid9->Color = clGray;
    dbeditKAYIT10->Color = clGray;
    DBComboBox1->Color = clGray;
    DBGrid10->Color = clGray;
}

void __fastcall TfrmKayitGirisi::FormShow(TObject *Sender)
{
    if (tblKAYIT01ATIN_ADI->Value.Length() == 0)
        YeniKayitEkle();        

    DateTimePicker1->Date = DateTimePicker1->Date.CurrentDate();
    PageControl1->ActivePageIndex = 0;
    Filtrele(DateTimePicker1->Date);
    KayitGirisKontrolu = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::Filtrele(TDateTime Tarih)
{
    tblKAYIT01->Filtered = true;
    tblKAYIT01->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT02->Filtered = true;
    tblKAYIT02->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT03->Filtered = true;
    tblKAYIT03->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT04->Filtered = true;
    tblKAYIT04->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT05->Filtered = true;
    tblKAYIT05->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT06->Filtered = true;
    tblKAYIT06->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT07->Filtered = true;
    tblKAYIT07->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT08->Filtered = true;
    tblKAYIT08->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT09->Filtered = true;
    tblKAYIT09->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKAYIT10->Filtered = true;
    tblKAYIT10->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblACIKLAMA->Filtered = true;
    tblACIKLAMA->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
}

void __fastcall TfrmKayitGirisi::DateTimePicker1Change(TObject *Sender)
{
    if (tblKAYIT01->Active == true)
        Filtrele(DateTimePicker1->Date);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::ToolButton5Click(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Tarih ComboBox'ýndaki tarihe göre KAYIT 01 siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT01");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre GANYAN'lar siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT02");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre IKILI'ler siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT03");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre Yarýþ Bilgileri siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT04");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre SONUC'lar siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT05");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 6. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT06");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 7. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT07");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 8. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT08");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 9. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT09");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 10. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KAYIT10");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre Açýklama siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM ACIKLAMA");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();
    }

    tblKAYIT01->Close();
    tblKAYIT02->Close();
    tblKAYIT03->Close();
    tblKAYIT04->Close();
    tblKAYIT05->Close();
    tblKAYIT06->Close();
    tblKAYIT07->Close();
    tblKAYIT08->Close();
    tblKAYIT09->Close();
    tblKAYIT10->Close();
    tblACIKLAMA->Close();
    tblKAYIT01->Open();
    tblKAYIT02->Open();
    tblKAYIT03->Open();
    tblKAYIT04->Open();
    tblKAYIT05->Open();
    tblKAYIT06->Open();
    tblKAYIT07->Open();
    tblKAYIT08->Open();
    tblKAYIT09->Open();
    tblKAYIT10->Open();
    tblACIKLAMA->Open();

    YeniKayitEkle();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::Sil1Click(TObject *Sender)
{
    switch (PageControl1->ActivePageIndex) {
        case 0:
            tblKAYIT01->Delete(); break;
        case 1:
            tblKAYIT02->Delete(); break;
        case 2:
            tblKAYIT03->Delete(); break;
        case 3:
            tblKAYIT04->Delete(); break;
        case 4:
            tblKAYIT05->Delete(); break;
        case 5:
            tblKAYIT06->Delete(); break;
        case 6:
            tblKAYIT07->Delete(); break;
        case 7:
            tblKAYIT08->Delete(); break;
        case 8:
            tblKAYIT09->Delete(); break;
        case 9:
            tblKAYIT10->Delete(); break;
    }
}
//---------------------------------------------------------------------------
bool __fastcall TfrmKayitGirisi::ParantezKontrol(void)
{
    char geciciVeri[200];

    memset(geciciVeri, 0, 200);
    strcpy(geciciVeri, AnsiString(queryATLISTESIANASI->Value).c_str());
    strrev(geciciVeri);

    if (geciciVeri[0] == ')')
        return true;

    return false;
}

void __fastcall TfrmKayitGirisi::AtBilgisiEkle(void)
{
    TDateTime nZaman;
    unsigned short nGun, nAy, nYil,
              BugunkiTarih, DogumTarihi;

    Bilgi.HandikapPuani = queryATLISTESIHANDIKAP->Value;
    Bilgi.AtinAdi = queryATLISTESIATIN_ADI->Value;

    if (ParantezKontrol() == false)
        Bilgi.Orjini = "("+queryATLISTESIBABASI->Value+
                       "-"+queryATLISTESIANASI->Value+")";
    else
        Bilgi.Orjini = "("+queryATLISTESIBABASI->Value+
                       "-"+queryATLISTESIANASI->Value;

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

void __fastcall TfrmKayitGirisi::AtDetayiYerlestir(void)
{
    int nDeger;
    AnsiString Cinsi, Adi;

    switch (PageControl1->ActivePageIndex) {
        case 0:
            Cinsi = DBComboBox2->Text;
            Adi = tblKAYIT01ATIN_ADI->Value;
            break;
        case 1:
            Cinsi = DBComboBox3->Text;
            Adi = tblKAYIT02ATIN_ADI->Value;
            break;
        case 2:
            Cinsi = DBComboBox4->Text;
            Adi = tblKAYIT03ATIN_ADI->Value;
            break;
        case 3:
            Cinsi = DBComboBox5->Text;
            Adi = tblKAYIT04ATIN_ADI->Value;
            break;
        case 4:
            Cinsi = DBComboBox6->Text;
            Adi = tblKAYIT05ATIN_ADI->Value;
            break;
        case 5:
            Cinsi = DBComboBox7->Text;
            Adi = tblKAYIT06ATIN_ADI->Value;
            break;
        case 6:
            Cinsi = DBComboBox8->Text;
            Adi = tblKAYIT07ATIN_ADI->Value;
            break;
        case 7:
            Cinsi = DBComboBox9->Text;
            Adi = tblKAYIT08ATIN_ADI->Value;
            break;
        case 8:
            Cinsi = DBComboBox10->Text;
            Adi = tblKAYIT09ATIN_ADI->Value;
            break;
        case 9:
            Cinsi = DBComboBox1->Text;
            Adi = tblKAYIT10ATIN_ADI->Value;
            break;
    }

    queryATLISTESI->Close();
    queryATLISTESI->ParamByName("CINSI")->AsString = Cinsi;
    queryATLISTESI->ParamByName("ADI")->AsString = Adi;
    queryATLISTESI->Open();
    // Girlilen At ismi sistemde kayýtlý mý?
    if (queryATLISTESIATIN_ADI->Value.Length() != 0) {
        // Sistemde kayýtlý . . .
        AtBilgisiEkle();
        KayitaEk();
    }
    else {
        // Sistemde kayýtlý deðil
        nDeger = Application->MessageBox((Cinsi+" cinsi "+Adi+" isimli atýn kaydý bulunamadý.\nBu atýn kayýt bilgisini girecek misiniz ?").c_str(),
            "Silme onayý", MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
            frmAt->Show();
    }
}

void __fastcall TfrmKayitGirisi::KayitaEk(void)
{
    if (Bilgi.Isaret == true) {
        switch (PageControl1->ActivePageIndex) {
            case 0:
                if (YeniKayit == true)
                    tblKAYIT01->Insert();
                tblKAYIT01->Edit();
                tblKAYIT01HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT01->Edit();
                tblKAYIT01ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT01->Edit();
                tblKAYIT01ORJINI->Value = Bilgi.Orjini;
                tblKAYIT01->Edit();
                tblKAYIT01ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT01->Edit();
                tblKAYIT01YASI->Value = Bilgi.AtinYasi;
                tblKAYIT01->Edit();
                tblKAYIT01TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 1:
                if (YeniKayit == true)
                    tblKAYIT02->Insert();
                tblKAYIT02->Edit();
                tblKAYIT02HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT02->Edit();
                tblKAYIT02ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT02->Edit();
                tblKAYIT02ORJINI->Value = Bilgi.Orjini;
                tblKAYIT02->Edit();
                tblKAYIT02ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT02->Edit();
                tblKAYIT02YASI->Value = Bilgi.AtinYasi;
                tblKAYIT02->Edit();
                tblKAYIT02TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 2:
                if (YeniKayit == true)
                    tblKAYIT03->Insert();
                tblKAYIT03->Edit();
                tblKAYIT03HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT03->Edit();
                tblKAYIT03ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT03->Edit();
                tblKAYIT03ORJINI->Value = Bilgi.Orjini;
                tblKAYIT03->Edit();
                tblKAYIT03ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT03->Edit();
                tblKAYIT03YASI->Value = Bilgi.AtinYasi;
                tblKAYIT03->Edit();
                tblKAYIT03TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 3:
                if (YeniKayit == true)
                    tblKAYIT04->Insert();
                tblKAYIT04->Edit();
                tblKAYIT04HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT04->Edit();
                tblKAYIT04ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT04->Edit();
                tblKAYIT04ORJINI->Value = Bilgi.Orjini;
                tblKAYIT04->Edit();
                tblKAYIT04ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT04->Edit();
                tblKAYIT04YASI->Value = Bilgi.AtinYasi;
                tblKAYIT04->Edit();
                tblKAYIT04TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 4:
                if (YeniKayit == true)
                    tblKAYIT05->Insert();
                tblKAYIT05->Edit();
                tblKAYIT05HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT05->Edit();
                tblKAYIT05ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT05->Edit();
                tblKAYIT05ORJINI->Value = Bilgi.Orjini;
                tblKAYIT05->Edit();
                tblKAYIT05ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT05->Edit();
                tblKAYIT05YASI->Value = Bilgi.AtinYasi;
                tblKAYIT05->Edit();
                tblKAYIT05TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 5:
                if (YeniKayit == true)
                    tblKAYIT06->Insert();
                tblKAYIT06->Edit();
                tblKAYIT06HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT06->Edit();
                tblKAYIT06ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT06->Edit();
                tblKAYIT06ORJINI->Value = Bilgi.Orjini;
                tblKAYIT06->Edit();
                tblKAYIT06ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT06->Edit();
                tblKAYIT06YASI->Value = Bilgi.AtinYasi;
                tblKAYIT06->Edit();
                tblKAYIT06TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 6:
                if (YeniKayit == true)
                    tblKAYIT07->Insert();
                tblKAYIT07->Edit();
                tblKAYIT07HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT07->Edit();
                tblKAYIT07ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT07->Edit();
                tblKAYIT07ORJINI->Value = Bilgi.Orjini;
                tblKAYIT07->Edit();
                tblKAYIT07ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT07->Edit();
                tblKAYIT07YASI->Value = Bilgi.AtinYasi;
                tblKAYIT07->Edit();
                tblKAYIT07TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 7:
                if (YeniKayit == true)
                    tblKAYIT08->Insert();
                tblKAYIT08->Edit();
                tblKAYIT08HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT08->Edit();
                tblKAYIT08ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT08->Edit();
                tblKAYIT08ORJINI->Value = Bilgi.Orjini;
                tblKAYIT08->Edit();
                tblKAYIT08ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT08->Edit();
                tblKAYIT08YASI->Value = Bilgi.AtinYasi;
                tblKAYIT08->Edit();
                tblKAYIT08TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 8:
                if (YeniKayit == true)
                    tblKAYIT09->Insert();
                tblKAYIT09->Edit();
                tblKAYIT09HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT09->Edit();
                tblKAYIT09ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT09->Edit();
                tblKAYIT09ORJINI->Value = Bilgi.Orjini;
                tblKAYIT09->Edit();
                tblKAYIT09ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT09->Edit();
                tblKAYIT09YASI->Value = Bilgi.AtinYasi;
                tblKAYIT09->Edit();
                tblKAYIT09TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
            case 9:
                if (YeniKayit == true)
                    tblKAYIT10->Insert();
                tblKAYIT10->Edit();
                tblKAYIT10HANDIKAP->Value = Bilgi.HandikapPuani;
                tblKAYIT10->Edit();
                tblKAYIT10ATIN_ADI->Value = Bilgi.AtinAdi;
                tblKAYIT10->Edit();
                tblKAYIT10ORJINI->Value = Bilgi.Orjini;
                tblKAYIT10->Edit();
                tblKAYIT10ANTRENOR->Value = Bilgi.Antrenor;
                tblKAYIT10->Edit();
                tblKAYIT10YASI->Value = Bilgi.AtinYasi;
                tblKAYIT10->Edit();
                tblKAYIT10TARIH->Value = DateTimePicker1->Date;
                YeniKayit = false;
                break;
        }
    }
}
void __fastcall TfrmKayitGirisi::Ekle1Click(TObject *Sender)
{
    AtListesiKontrolu = true;
    frmAtListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::ToolButton4Click(TObject *Sender)
{
//  -------------------------- Kayýt 1 ------ //
    tblKAYIT01->Edit();
    tblKAYIT01->Post();
//  -------------------------- Kayýt 2 ------ //
    tblKAYIT02->Edit();
    tblKAYIT02->Post();
//  -------------------------- Kayýt 3 ------ //
    tblKAYIT03->Edit();
    tblKAYIT03->Post();
//  -------------------------- Kayýt 4 ------ //
    tblKAYIT04->Edit();
    tblKAYIT04->Post();
//  -------------------------- Kayýt 5 ------ //
    tblKAYIT05->Edit();
    tblKAYIT05->Post();
//  -------------------------- Kayýt 6 ------ //
    tblKAYIT06->Edit();
    tblKAYIT06->Post();
//  -------------------------- Kayýt 7 ------ //
    tblKAYIT07->Edit();
    tblKAYIT07->Post();
//  -------------------------- Kayýt 8 ------ //
    tblKAYIT08->Edit();
    tblKAYIT08->Post();
//  -------------------------- Kayýt 9 ------ //
    tblKAYIT09->Edit();
    tblKAYIT09->Post();
//  ------------------------- Kayýt 10 ------ //
    tblKAYIT10->Edit();
    tblKAYIT10->Post();
//  ------------------------- Açýklama ------ //
    tblACIKLAMA->Edit();
    tblACIKLAMATARIH->Value = DateTimePicker1->Date;
    tblACIKLAMA->Post();
    ToolButton4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT01BeforePost(TDataSet *DataSet)
{
    tblKAYIT01->Edit();
    tblKAYIT01TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT02BeforePost(TDataSet *DataSet)
{
    tblKAYIT02->Edit();
    tblKAYIT02TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT03BeforePost(TDataSet *DataSet)
{
    tblKAYIT03->Edit();
    tblKAYIT03TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT04BeforePost(TDataSet *DataSet)
{
    tblKAYIT04->Edit();
    tblKAYIT04TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT05BeforePost(TDataSet *DataSet)
{
    tblKAYIT05->Edit();
    tblKAYIT05TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT06BeforePost(TDataSet *DataSet)
{
    tblKAYIT06->Edit();
    tblKAYIT06TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT07BeforePost(TDataSet *DataSet)
{
    tblKAYIT07->Edit();
    tblKAYIT07TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT08BeforePost(TDataSet *DataSet)
{
    tblKAYIT08->Edit();
    tblKAYIT08TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT09BeforePost(TDataSet *DataSet)
{
    tblKAYIT09->Edit();
    tblKAYIT09TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT10BeforePost(TDataSet *DataSet)
{
    tblKAYIT10->Edit();
    tblKAYIT10TARIH->Value = DateTimePicker1->Date;
}
//---------------------------------------------------------------------------
void __fastcall TfrmKayitGirisi::AtGuncelle(AnsiString Adi, AnsiString Cinsi)
{
    unsigned short nGun, nAy, nYil;
    TDateTime tmTarih;

    tmTarih = tmTarih.CurrentDate();
    tmTarih.DecodeDate(&nYil, &nAy, &nGun);

    queryATLISTESI->Close();
    queryATLISTESI->ParamByName("CINSI")->AsString = Cinsi;
    queryATLISTESI->ParamByName("ADI")->AsString = Adi;
    queryATLISTESI->Open();

    tblAT->Filtered = true;
    tblAT->Filter = "[REFERANSNO] = '"+
        IntToStr(queryATLISTESIREFERANSNO->Value)+"'";

    queryATLISTESI->Close();
    switch (PageControl1->ActivePageIndex) {
        case 0:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT01HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT01ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT01YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT01ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT01ORJINI->Value);
            tblAT->Post();
            break;
        case 1:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT02HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT02ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT02YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT02ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT02ORJINI->Value);
            tblAT->Post();
            break;
        case 2:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT03HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT03ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT03YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT03ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT03ORJINI->Value);
            tblAT->Post();
            break;
        case 3:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT04HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT04ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT04YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT04ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT04ORJINI->Value);
            tblAT->Post();
            break;
        case 4:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT05HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT05ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT05YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT05ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT05ORJINI->Value);
            tblAT->Post();
            break;
        case 5:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT06HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT06ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT06YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT06ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT06ORJINI->Value);
            tblAT->Post();
            break;
        case 6:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT07HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT07ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT07YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT07ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT07ORJINI->Value);
            tblAT->Post();
            break;
        case 7:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT08HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT08ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT08YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT08ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT08ORJINI->Value);
            tblAT->Post();
            break;
        case 8:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT09HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT09ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT09YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT09ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT09ORJINI->Value);
            tblAT->Post();
            break;
        case 9:
            tblAT->Edit();
            tblATHANDIKAP->Value = tblKAYIT10HANDIKAP->Value;
            tblATANTRENOR->Value = tblKAYIT10ANTRENOR->Value;
            tblATDOGUMTAR->Value = nYil - tblKAYIT10YASI->Value;
            tblATANASI->Value = AnayiGuncelle(tblKAYIT10ORJINI->Value);
            tblATBABASI->Value = BabayiGuncelle(tblKAYIT10ORJINI->Value);
            tblAT->Post();
            break;
    }
}

AnsiString __fastcall TfrmKayitGirisi::BabayiGuncelle(AnsiString Orjin)
{
    int nYerImi;
    char OrjinDizisi[350];
    char *gosterge;

    memset(OrjinDizisi, 0, 350);
    strcpy(OrjinDizisi, Orjin.c_str());

    gosterge = strchr(OrjinDizisi, '-');
    nYerImi = gosterge - OrjinDizisi;
    OrjinDizisi[nYerImi] = '\0';
    return AnsiString(&OrjinDizisi[1]);
}

AnsiString __fastcall TfrmKayitGirisi::AnayiGuncelle(AnsiString Orjin)
{
    int nYerImi;
    char OrjinDizisi[350];
    char *gosterge;

    memset(OrjinDizisi, 0, 350);
    strcpy(OrjinDizisi, Orjin.c_str());

    gosterge = strchr(OrjinDizisi, '-');
    nYerImi = gosterge - OrjinDizisi + 1;

    if (strchr((&OrjinDizisi[nYerImi]), '(') != '\0')
        return (&OrjinDizisi[nYerImi]);

    gosterge = strchr((&OrjinDizisi[nYerImi]), ')');
    if (gosterge != '\0')
        OrjinDizisi[gosterge - OrjinDizisi] = '\0';

    return AnsiString(&OrjinDizisi[nYerImi]);
}


void __fastcall TfrmKayitGirisi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid1->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT01ATIN_ADI->Value, tblACIKLAMATUR01->Value);

        tblKAYIT01->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid2KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid2->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT02ATIN_ADI->Value, tblACIKLAMATUR02->Value);

        tblKAYIT02->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid3KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid3->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT03ATIN_ADI->Value, tblACIKLAMATUR03->Value);

        tblKAYIT03->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid4KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid4->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT04ATIN_ADI->Value, tblACIKLAMATUR04->Value);

        tblKAYIT04->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid5KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid5->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT05ATIN_ADI->Value, tblACIKLAMATUR05->Value);

        tblKAYIT05->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid6KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid6->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT06ATIN_ADI->Value, tblACIKLAMATUR06->Value);

        tblKAYIT06->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid7KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid7->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT07ATIN_ADI->Value, tblACIKLAMATUR07->Value);

        tblKAYIT07->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid8KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid8->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT08ATIN_ADI->Value, tblACIKLAMATUR08->Value);

        tblKAYIT08->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid9KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid9->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT09ATIN_ADI->Value, tblACIKLAMATUR09->Value);

        tblKAYIT09->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBGrid10KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = true;

    if (Key == Char(VK_RETURN)) {
        if (DBGrid10->SelectedIndex == 1)
            AtDetayiYerlestir();
        else
            AtGuncelle(tblKAYIT10ATIN_ADI->Value, tblACIKLAMATUR10->Value);

        tblKAYIT10->Next(); // ..::Database bir sonraki elemana geçiyor::..
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT01KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT02KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT03KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT04KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT06KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT07KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT08KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT09KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------


void __fastcall TfrmKayitGirisi::dbeditKAYIT10KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT05KeyPress(TObject *Sender,
      char &Key)
{
    ToolButton4->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::ToolButton9Click(TObject *Sender)
{
    FILE *fpDosya;
    char chVeri[300];
    AnsiString DosyaAdi;
    int nVeriToplami;

    SaveDialog1->Execute();
    DosyaAdi = SaveDialog1->FileName+".txt";

    if (DosyaAdi.Length() != 0) {
        if ((fpDosya = fopen(DosyaAdi.c_str(), "wb")) == NULL)
            Application->MessageBoxA("Dosya yaratýlamýyor! ! !. \nDiskinizde yer olmayabilir...",
                "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        else {
            Filtrele(DateTimePicker1->Date);
            Kosu01(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu02(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu03(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu04(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu05(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu06(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu07(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu08(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu09(fpDosya);
            Filtrele(DateTimePicker1->Date);
            Kosu10(fpDosya);
            fclose(fpDosya);
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::Kosu01(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 1. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU01->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU01->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);

    tblKAYIT01->First();
    while (!tblKAYIT01->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT01HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT01ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT01ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT01ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT01YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT01DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT01->Next();
    }
}

void __fastcall TfrmKayitGirisi::Kosu02(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 2. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU02->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU02->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT02->First();

    while (!tblKAYIT02->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT02HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT02ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT02ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT02ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT02YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT02DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT02->Next();
    }
}

void __fastcall TfrmKayitGirisi::Kosu03(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 3. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU03->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU03->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT03->First();

    while (!tblKAYIT03->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT03HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT03ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT03ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT03ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT03YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT03DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT03->Next();
    }
}
void __fastcall TfrmKayitGirisi::Kosu04(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 4. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU04->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU04->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT04->First();

    while (!tblKAYIT04->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT04HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT04ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT04ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT04ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT04YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT04DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT04->Next();
    }
}
void __fastcall TfrmKayitGirisi::Kosu05(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 5. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU05->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU05->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT05->First();

    while (!tblKAYIT05->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT05HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT05ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT05ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT05ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT05YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT05DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT05->Next();
    }
}
void __fastcall TfrmKayitGirisi::Kosu06(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 6. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU06->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU06->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT06->First();

    while (!tblKAYIT06->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT06HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT06ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT06ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT06ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT06YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT06DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT06->Next();
    }
}

void __fastcall TfrmKayitGirisi::Kosu07(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 7. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU07->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU07->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT07->First();

    while (!tblKAYIT07->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT07HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT07ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT07ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT07ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT07YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT07DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT07->Next();
    }
}
void __fastcall TfrmKayitGirisi::Kosu08(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 8. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU08->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU08->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT08->First();

    while (!tblKAYIT08->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT08HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT08ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT08ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT08ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT08YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT08DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT08->Next();
    }
}
void __fastcall TfrmKayitGirisi::Kosu09(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 9. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU09->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU09->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT09->First();

    while (!tblKAYIT09->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT09HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT09ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT09ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT09ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("(  )", 4, 1, fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT09YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT09DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT09->Next();
    }
}

void __fastcall TfrmKayitGirisi::Kosu10(FILE *fpDosya)
{
    char chVeri[300];
    int nVeriToplami;

    // 10. Koþu dosyaya yazýlýyor...
    strcpy(chVeri, tblACIKLAMAKOSU10->Value.c_str());
    nVeriToplami = tblACIKLAMAKOSU10->Value.Length();
    PCtoMacConvert(chVeri);
    fwrite(&chVeri, nVeriToplami, 1, fpDosya);
    fputc('\r', fpDosya);
    tblKAYIT10->First();

    while (!tblKAYIT10->Eof) {
        fputc('\t', fpDosya);
        // HANDIKAP
        strcpy(chVeri, AnsiString(tblKAYIT10HANDIKAP->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('-', fpDosya);
        fputc('\t', fpDosya);
        // ATIN_ADI
        strcpy(chVeri, tblKAYIT10ATIN_ADI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite("()", 2, 1, fpDosya);
        fputc('\t', fpDosya);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc(' ', fpDosya);
        // ORJINI
        strcpy(chVeri, tblKAYIT10ORJINI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // ANTRENOR
        strcpy(chVeri, tblKAYIT10ANTRENOR->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // YASI
        strcpy(chVeri, AnsiString(tblKAYIT10YASI->Value).c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\t', fpDosya);
        // DERECESI
        strcpy(chVeri, tblKAYIT10DERECESI->Value.c_str());
        nVeriToplami = strlen(chVeri);
        PCtoMacConvert(chVeri);
        if (nVeriToplami == 0)
            fwrite("--------", 8, 1, fpDosya);
        else
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
        fputc('\r', fpDosya);
        // BIR SONRAKI KAYIT
        tblKAYIT10->Next();
    }
}

void __fastcall TfrmKayitGirisi::PCtoMacConvert(char *Dizi)
{
    int nSayac, nYer;

    char WinPC[12] = "ÞÝÖÜÐÇþýöüðç",
         MacPC[12] = "\xDE\xDC\x85\x86\xDA\x82\xDF\xDD\x9a\x9F\xDB\x8D";

    nSayac = 0;
    while (nSayac != 299) {
        nYer = (strchr(WinPC, Dizi[nSayac]) - WinPC);

        if (nYer >= 0 && nYer < 12)
            Dizi[nSayac] = MacPC[nYer];

        ++nSayac;
    }
}
void __fastcall TfrmKayitGirisi::dbeditKAYIT01Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT02Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT03Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT04Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT06Change(TObject *Sender)
{
    ToolButton4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT07Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT08Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT09Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT10Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::dbeditKAYIT05Change(TObject *Sender)
{
    ToolButton4->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet10Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT10->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "10 (On)";
}
//---------------------------------------------------------------------------


void __fastcall TfrmKayitGirisi::TabSheet9Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT09->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "9 (Dokuz)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet8Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT08->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "8 (Sekiz)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet7Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT07->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "7 (Yedi)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet6Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT06->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "6 (Altý)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet5Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT05->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "5 (Beþ)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet4Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT04->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "4 (Dört)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet2Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT02->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "2 (Ýki)";
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet1Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT01->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "1 (Bir)";
}
//---------------------------------------------------------------------------
void __fastcall TfrmKayitGirisi::tblKAYIT01AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT01->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT02AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT02->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT03AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT03->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT04AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT04->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT05AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT05->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT06AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT06->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT07AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT07->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT08AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT08->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT09AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT09->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::tblKAYIT10AfterPost(TDataSet *DataSet)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT10->RecordCount);
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::TabSheet3Show(TObject *Sender)
{
    // Toplam kayýt giriliyoooooo.......
    StatusBar1->Panels->Items[1]->Text = IntToStr(tblKAYIT03->RecordCount);
    // Koþu No yazýlýyooooo.......
    StatusBar1->Panels->Items[3]->Text = "3 (Üç)";
}
//---------------------------------------------------------------------------

bool __fastcall TfrmKayitGirisi::AtArama(AnsiString SorgulanacakAt,
    TTable *tblAtTablosu, TStringField *AtinAdi)
{
    SorgulanacakAt = AnsiUpperCase(SorgulanacakAt);

    tblAtTablosu->First();
    while (!tblAtTablosu->Eof) {
        if (AtinAdi->Value == SorgulanacakAt)
            return true;
        tblAtTablosu->Next();
    }
    return false;
}
void __fastcall TfrmKayitGirisi::ToolButton6Click(TObject *Sender)
{
    frmAtArama->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::ToolButton12Click(TObject *Sender)
{
    int nAktifSayfa;

    nAktifSayfa = PageControl1->ActivePageIndex;

    PageControl1->ActivePageIndex = 0;
    tblKAYIT01->First();
    while (!tblKAYIT01->Eof) {
        AtDetayiYerlestir();
        tblKAYIT01->Next();
    }

    PageControl1->ActivePageIndex = 1;
    tblKAYIT02->First();
    while (!tblKAYIT02->Eof) {
        AtDetayiYerlestir();
        tblKAYIT02->Next();
    }
    PageControl1->ActivePageIndex = 2;
    tblKAYIT03->First();
    while (!tblKAYIT03->Eof) {
        AtDetayiYerlestir();
        tblKAYIT03->Next();
    }

    PageControl1->ActivePageIndex = 3;
    tblKAYIT04->First();
    while (!tblKAYIT04->Eof) {
        AtDetayiYerlestir();
        tblKAYIT04->Next();
    }

    PageControl1->ActivePageIndex = 4;
    tblKAYIT05->First();
    while (!tblKAYIT05->Eof) {
        AtDetayiYerlestir();
        tblKAYIT05->Next();
    }

    PageControl1->ActivePageIndex = 5;
    tblKAYIT06->First();
    while (!tblKAYIT06->Eof) {
        AtDetayiYerlestir();
        tblKAYIT06->Next();
    }

    PageControl1->ActivePageIndex = 6;
    tblKAYIT07->First();
    while (!tblKAYIT07->Eof) {
        AtDetayiYerlestir();
        tblKAYIT07->Next();
    }

    PageControl1->ActivePageIndex = 7;
    tblKAYIT08->First();
    while (!tblKAYIT08->Eof) {
        AtDetayiYerlestir();
        tblKAYIT08->Next();
    }

    PageControl1->ActivePageIndex = 8;
    tblKAYIT09->First();
    while (!tblKAYIT09->Eof) {
        AtDetayiYerlestir();
        tblKAYIT09->Next();
    }

    PageControl1->ActivePageIndex = 9;
    tblKAYIT10->First();
    while (!tblKAYIT10->Eof) {
        AtDetayiYerlestir();
        tblKAYIT10->Next();
    }
    PageControl1->ActivePageIndex = nAktifSayfa;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::Ara1Click(TObject *Sender)
{
    frmAtArama->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox2Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox3Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox4Change(TObject *Sender)
{
    ToolButton4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox5Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox6Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox7Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox8Change(TObject *Sender)
{
    ToolButton4->Enabled = true;        
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox9Change(TObject *Sender)
{
    ToolButton4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox10Change(TObject *Sender)
{
    ToolButton4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::DBComboBox1Change(TObject *Sender)
{
    ToolButton4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmKayitGirisi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    KayitGirisKontrolu = false;    
}
//---------------------------------------------------------------------------

