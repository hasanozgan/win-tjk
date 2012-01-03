//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
// --- Koþu Türleri Tanýmlanýyor ---
#define TAHMIN          0
#define ALTILIGANYAN    1
#define IKILI           2
#define UCLUGANYAN      3
#define CIFTE           4
#define UCLUBAHIS       5
#define TABELABAHIS     6

// Puan Flag'i
#define PUAN_VER    true
#define PUAN_VERME  false

// Veri Kontrol Fonksiyonu
#define NOKTA_SAYISI    1
#define DEGER_DISI      2

struct Kosucu {
    AnsiString Birinci,
        Ikinci,
        Ucuncu,
        Dorduncu,
        Ekuri,
        KosmayanAtlar,
        Tahmin,
        EFG;
    int KosanAtAdedi;
    bool UcluBahisKontrol;
};

#include "odul.h"
#include "gazete.h"
#include "ayarlar.h"
#include "rapor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmGazeteler *frmGazeteler;

//---------------------------------------------------------------------------
__fastcall TfrmGazeteler::TfrmGazeteler(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::FormShow(TObject *Sender)
{
    DateTimePicker1->Date = DateTimePicker1->Date.CurrentDate();
    Filtrele(DateTimePicker1->Date);
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::Kaydet(void)
{
    tblSONUC->Edit();
    tblYARIS->Edit();
    tblIKILI->Edit();
    tblGANYAN->Edit();
    tblTAHMIN->Edit();
    tblKOSU10->Edit();
    tblKOSU09->Edit();
    tblKOSU08->Edit();
    tblKOSU07->Edit();
    tblKOSU06->Edit();
    tblKOSU05->Edit();
    tblKOSU04->Edit();
    tblKOSU03->Edit();
    tblKOSU02->Edit();
    tblKOSU01->Edit();

    tblSONUC->Post();
    tblYARIS->Post();
    tblIKILI->Post();
    tblGANYAN->Post();
    tblTAHMIN->Post();
    tblKOSU10->Post();
    tblKOSU09->Post();
    tblKOSU08->Post();
    tblKOSU07->Post();
    tblKOSU06->Post();
    tblKOSU05->Post();
    tblKOSU04->Post();
    tblKOSU03->Post();
    tblKOSU02->Post();
    tblKOSU01->Post();
}

int __fastcall TfrmGazeteler::SayiGetir(AnsiString SayiDizi, int Kacinci)
{
    int KontrolSayaci = -1,
        DiziTutucuSayaci = 0,
        DonusturulecekDegerSayaci = 0;

    char DonusturulecekDeger[25];
    char DiziTutucu[25];

    // Deðerler NULL ile dolduruluyor...
    // ---------------------------------
    memset(DonusturulecekDeger, 0x0, 25);
    memset(DiziTutucu, 0x0, 25);

    // AnsiString türündeki SayiDizi, char türüne
    // çevrilip DiziTutucu'ya kopyalanýyor....
    // ------------------------------------------
    strcpy(DiziTutucu, SayiDizi.c_str());

    do {
        if (DiziTutucu[DiziTutucuSayaci] == '.') { // Çok haneli sayi bulunur...
            DiziTutucuSayaci++;
            DonusturulecekDegerSayaci = 0;
            memset(DonusturulecekDeger, 0x0, 25);
            while (DiziTutucu[DiziTutucuSayaci] != '.') {
                DonusturulecekDeger[DonusturulecekDegerSayaci]
                    = DiziTutucu[DiziTutucuSayaci];
                DiziTutucuSayaci++;
                DonusturulecekDegerSayaci++;
            }
            KontrolSayaci++;
            DiziTutucuSayaci++;
        }
        else { // Tek haneli sayi bulunur...
            DonusturulecekDegerSayaci = 0;
            memset(DonusturulecekDeger, 0x0, 25);
            DonusturulecekDeger[DonusturulecekDegerSayaci]
                = DiziTutucu[DiziTutucuSayaci];
            DiziTutucuSayaci++;
            KontrolSayaci++;
        }
    }
    while (KontrolSayaci != Kacinci); // Ýstenilen sayýya kadar döngüde kal...

    if (DonusturulecekDeger[0] != 0x0) // Eðer sayýnýn deðeri yoksa return 0x0
        return StrToInt(AnsiString(DonusturulecekDeger));

    return 0x0;
}

void __fastcall TfrmGazeteler::Filtrele(TDateTime Tarih)
{
    /*--------------- Filtreleme Ýþlemi Buradan Baþlýyor ---------------*/
    /*------------------------------------------------------------------*/
    tblSONUC->Filtered = true; // Filtre iþlemi aktif ediliyor...
    tblYARIS->Filtered = true;
    tblIKILI->Filtered = true;
    tblGANYAN->Filtered = true;
    tblTAHMIN->Filtered = true;
    tblKOSU10->Filtered = true;
    tblKOSU09->Filtered = true;
    tblKOSU08->Filtered = true;
    tblKOSU07->Filtered = true;
    tblKOSU06->Filtered = true;
    tblKOSU05->Filtered = true;
    tblKOSU04->Filtered = true;
    tblKOSU03->Filtered = true;
    tblKOSU02->Filtered = true;
    tblKOSU01->Filtered = true;

    tblSONUC->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";  //Parametrede
    tblYARIS->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";  // belirtilen
    tblIKILI->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";  // tarihe göre
    tblGANYAN->Filter = "[TARIH]='"+DateToStr(Tarih)+"'"; // filtreleniyor...
    tblTAHMIN->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU10->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU09->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU08->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU07->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU06->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU05->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU04->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU03->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU02->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    tblKOSU01->Filter = "[TARIH]='"+DateToStr(Tarih)+"'";
    /*--------------- Filtreleme Ýþlemi Burada Bitiyor ---------------*/
    /*----------------------------------------------------------------*/

    if (tblTAHMINGAZETELER->Value.Length() == 0) { // Eðer filtreleme sonucunda
        YeniKayit(Tarih);                // kayýt yoksa yeni kayýt oluþturulur.
    }
}

void __fastcall TfrmGazeteler::DateTimePicker1Change(TObject *Sender)
{
    Filtrele(DateTimePicker1->Date);
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::YeniKayit(TDateTime Tarih)
{
    queryGAZETELER->First();

    while (!queryGAZETELER->Eof) {
        tblTAHMIN->Insert();
        tblGANYAN->Insert();
        tblIKILI->Insert();
        tblSONUC->Insert();
        tblSONUCTARIH->Value = Tarih;
        tblGANYANTARIH->Value = Tarih;
        tblTAHMINTARIH->Value = Tarih;
        tblIKILITARIH->Value = Tarih;
        tblSONUCGAZETELER->Value = queryGAZETELERGAZETE_ADI->Value;
        tblIKILIGAZETE->Value = queryGAZETELERGAZETE_ADI->Value;
        tblTAHMINGAZETELER->Value = queryGAZETELERGAZETE_ADI->Value;
        tblGANYANGAZETE->Value = queryGAZETELERGAZETE_ADI->Value;
        queryGAZETELER->Next();
    }

    // Yeni kayda tarih parametresi ekleniyor...
    // -----------------------------------------
    tblYARIS->Insert();
    tblYARIS->Edit();
    tblYARISTARIH->Value = Tarih;
    tblKOSU01->Insert();
    tblKOSU01->Edit();
    tblKOSU01TARIH->Value = Tarih;
    tblKOSU02->Insert();
    tblKOSU02->Edit();
    tblKOSU02TARIH->Value = Tarih;
    tblKOSU03->Insert();
    tblKOSU03->Edit();
    tblKOSU03TARIH->Value = Tarih;
    tblKOSU04->Insert();
    tblKOSU04->Edit();
    tblKOSU04TARIH->Value = Tarih;
    tblKOSU05->Insert();
    tblKOSU05->Edit();
    tblKOSU05TARIH->Value = Tarih;
    tblKOSU06->Insert();
    tblKOSU06->Edit();
    tblKOSU06TARIH->Value = Tarih;
    tblKOSU07->Insert();
    tblKOSU07->Edit();
    tblKOSU07TARIH->Value = Tarih;
    tblKOSU08->Insert();
    tblKOSU08->Edit();
    tblKOSU08TARIH->Value = Tarih;
    tblKOSU09->Insert();
    tblKOSU09->Edit();
    tblKOSU09TARIH->Value = Tarih;
    tblKOSU10->Insert();
    tblKOSU10->Edit();
    tblKOSU10TARIH->Value = Tarih;
    // -----------------------------------------
    // Yeni kayda tarih parametresi ekleniyor...


    // CheckBox ile ilgili ilk deðerler veriliyor...
    // ---------------------------------------------
    tblKOSU01IKILI_BAHIS->Value = false;
    tblKOSU01UCLU_BAHIS->Value = false;
    tblKOSU02IKILI_BAHIS->Value = false;
    tblKOSU02UCLU_BAHIS->Value = false;
    tblKOSU03IKILI_BAHIS->Value = false;
    tblKOSU03UCLU_BAHIS->Value = false;
    tblKOSU04IKILI_BAHIS->Value = false;
    tblKOSU04UCLU_BAHIS->Value = false;
    tblKOSU05IKILI_BAHIS->Value = false;
    tblKOSU05UCLU_BAHIS->Value = false;
    tblKOSU06IKILI_BAHIS->Value = false;
    tblKOSU06UCLU_BAHIS->Value = false;
    tblKOSU07IKILI_BAHIS->Value = false;
    tblKOSU07UCLU_BAHIS->Value = false;
    tblKOSU08IKILI_BAHIS->Value = false;
    tblKOSU08UCLU_BAHIS->Value = false;
    tblKOSU09IKILI_BAHIS->Value = false;
    tblKOSU09UCLU_BAHIS->Value = false;
    tblKOSU10IKILI_BAHIS->Value = false;
    tblKOSU10UCLU_BAHIS->Value = false;
    // ---------------------------------------------
    // CheckBox ile ilgili ilk deðerler verildi....
}
void __fastcall TfrmGazeteler::DBEdit1Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::tbtnKAYDETClick(TObject *Sender)
{
    Kaydet();
    tbtnKAYDET->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit2Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit3Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit4Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit5Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit6Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox2Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox1Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditKOSUSAYISIChange(TObject *Sender)
{
    if (dbeditKOSUSAYISI->Text.c_str()[0] >= '0' || dbeditKOSUSAYISI->Text.c_str()[0] <= '9') {
        tblYARIS->Edit();
        tblYARISALTILI_GANYAN->Value =  StrToFloat(dbeditKOSUSAYISI->Text) - 5;
        tblYARIS->Edit();
        tblYARISUCLU_GANYAN->Value = StrToFloat(dbeditKOSUSAYISI->Text) - 2;
    }

    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditBIRINCICIFTEChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditIKINCICIFTEChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditUCUNCUCIFTEChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditDORDUNCUCIFTEChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditALTILIILKKOSUChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditUCLUILKKOSUChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit7Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit8Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit9Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit10Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit11Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit12Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit13Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit14Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit15Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit16Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit17Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit18Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit19Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit20Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit21Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit22Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit23Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit24Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit25Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit26Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit27Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit28Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit29Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit30Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit31Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit32Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit33Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit34Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit35Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit36Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit37Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit38Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit39Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit40Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit41Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit42Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit43Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit44Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit45Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit46Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit47Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit48Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit49Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit50Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit51Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit52Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit53Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit54Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit55Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit56Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit57Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit58Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit59Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit60Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox4Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox3Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox6Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox5Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox8Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox7Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox10Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox9Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox12Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox11Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox14Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox13Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox16Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox15Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox18Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox17Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox20Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBCheckBox19Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------


void __fastcall TfrmGazeteler::tbtnSILClick(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        // Tarih ComboBox'ýndaki tarihe göre TAHMÝN'ler siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM TAHMIN");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre GANYAN'lar siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM GANYAN");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre IKILI'ler siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM IKILI");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre Yarýþ Bilgileri siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM YARISBIL");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre SONUC'lar siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM SONUC");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 1. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU01");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 2. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU02");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 3. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU03");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 4. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU04");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 5. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU05");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 6. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU06");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 7. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU07");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 8. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU08");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 9. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU09");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Tarih ComboBox'ýndaki tarihe göre 10. Koþu siliniyor
        querySIL->SQL->Clear();
        querySIL->SQL->Add("DELETE FROM KOSU10");
        querySIL->SQL->Add("WHERE TARIH='"+DateToStr(DateTimePicker1->Date)+"'");
        querySIL->ExecSQL();

        // Filtreleme yapýlarak temiz bir sayfa açýlýyor...
        Filtrele(DateTimePicker1->Date);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::tbtnCALISTIRClick(TObject *Sender)
{
    int nDeger;

    nDeger = Application->MessageBox("Ýþlemi onaylýyor musunuz?", "Onay Sorusu",
        MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        PageControl1->ActivePage = TabSheet5;
        DBGrid4->Columns->Items[1]->Color = cl3DLight;
        GanyanToplami();
        DBGrid4->Columns->Items[1]->Color = clWhite;
        DBGrid4->Columns->Items[2]->Color = cl3DLight;
        AltiliGanyanToplami();
        DBGrid4->Columns->Items[2]->Color = clWhite;
        DBGrid4->Columns->Items[3]->Color = cl3DLight;
        IkiliBahisToplami();
        DBGrid4->Columns->Items[3]->Color = clWhite;
        DBGrid4->Columns->Items[4]->Color = cl3DLight;
        CifteToplami();
        DBGrid4->Columns->Items[4]->Color = clWhite;
        DBGrid4->Columns->Items[5]->Color = cl3DLight;
        UcluBahisToplami();
        DBGrid4->Columns->Items[5]->Color = clWhite;
        DBGrid4->Columns->Items[6]->Color = cl3DLight;
        TabelaBahisToplami();
        DBGrid4->Columns->Items[6]->Color = clWhite;
        DBGrid4->Columns->Items[7]->Color = cl3DLight;
        UcluGanyanToplami();
        DBGrid4->Columns->Items[7]->Color = clWhite;
        DBGrid4->Columns->Items[8]->Color = cl3DLight;
        GenelToplam();
        DBGrid4->Columns->Items[8]->Color = clWhite;
    }
}
//---------------------------------------------------------------------------

int __fastcall TfrmGazeteler::Karsilastir(AnsiString KontrolEdilen,
    AnsiString KontrolEden, AnsiString Filtre)
{
    int KEdilen[15], KEden[15], FiltreDizi[15], Sayac, Sayac2, Deger;

    memset(KEdilen, 0, sizeof(int)*15);
    memset(KEden, 0, sizeof(int)*15);
    memset(FiltreDizi, 0, sizeof(int)*15);

    // Filtre Dizisi Oluþturuluyor...
    // ------------------------------
    Sayac = 0; // Sayac sýfýrlanýyor...
    Deger = 1; // Deðer sýfýrdan büyük bir sayý atanýyor...
    while (Deger > 0 && Sayac <= 14) {
        // Filtreleme iþlemi için burada bir döngü açýlýyor...
        Deger = SayiGetir(Filtre, Sayac);
        FiltreDizi[Sayac] = Deger;
        ++Sayac;
    }
    // Kontrol Edilen Dizisi Oluþturuluyor
    // -----------------------------------
    Sayac = 0; // Sayac sýfýrlanýyor...
    Deger = 1; // Deðer sýfýrdan büyük bir sayý atanýyor...
    while (Deger > 0 && Sayac <= 14) {
        // Filtreleme iþlemi için burada bir döngü açýlýyor...
        Deger = SayiGetir(KontrolEdilen, Sayac);
        KEdilen[Sayac] = Deger;
        ++Sayac;
    }
    // Kontrol Eden Dizisi Oluþturuluyor
    // ---------------------------------
    Sayac = 0; // Sayac sýfýrlanýyor...
    Deger = 1; // Deger sýfýr dýþý bir deðer atanýyor...
    while (Deger > 0 && Sayac <= 14) {
        Deger = SayiGetir(KontrolEden, Sayac);
        KEden[Sayac] = Deger;
        ++Sayac;
    }

    Sayac = 0; // Sayac sýfýrlanýyor . . .
    Sayac2 = 0;
    do {
        Deger = 0; // Burada ikinci bir sayac olarak kullanýlýyor . . .
        while (KEden[Deger] != 0) {
            if (KEden[Deger] == KEdilen[Sayac])
                return Sayac+1-Sayac2;
            ++Deger;
        }
        // Burada bir filtreleme iþlemi gerçekleþtiriliyor...
        Deger = 0; // Burada ikinci bir sayac olarak kullanýlýyor . . .
        while (FiltreDizi[Deger] != 0) {
            if (FiltreDizi[Deger] == KEdilen[Sayac]) {
                ++Sayac2;
                break;
            }
            ++Deger;
        }
        ++Sayac;
    } while (KEdilen[Sayac] != 0);

    return 0;
}

float __fastcall TfrmGazeteler::GTPuanlama(int AtSayisi, int Kacinci)
{
    float Puan;

    if (Kacinci == 0)
        return 0;

    if (Kacinci > 0 && Kacinci < 5)
        Puan = (float)AtSayisi / (float)Kacinci;
    else
        return 0;

    return Yuvarla(Puan);
}

int __fastcall TfrmGazeteler::Yuvarla(float Sayi)
{
    int DogalSayi;
    float KontrolSayisi;

    DogalSayi = (int) Sayi;
    KontrolSayisi = (Sayi - (float)0.49);

    if ((int)KontrolSayisi == DogalSayi)
        ++DogalSayi; // Sayi yuvarlandý...

    return DogalSayi;
}

void __fastcall TfrmGazeteler::DBEdit79Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit80Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit77Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit78Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit75Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit76Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit73Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit74Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit71Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit72Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit69Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit70Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit67Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit68Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit65Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit66Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit63Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit64Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit61Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit62Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBGrid1CellClick(TColumn *Column)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBGrid2CellClick(TColumn *Column)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBGrid3CellClick(TColumn *Column)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit1->Text = VeriDegistir(DBEdit1->Text);
        DigerVeriKontrol(&(DBEdit1->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit2KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit2->Text = VeriDegistir(DBEdit2->Text);
        DigerVeriKontrol(&(DBEdit2->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit3KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit3->Text = VeriDegistir(DBEdit3->Text);
        DigerVeriKontrol(&(DBEdit3->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit4KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit4->Text = VeriDegistir(DBEdit4->Text);
        DigerVeriKontrol(&(DBEdit4->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit5KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit5->Text = VeriDegistir(DBEdit5->Text);
        DigerVeriKontrol(&(DBEdit5->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit6KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit6->Text = VeriDegistir(DBEdit6->Text);
        DigerVeriKontrol(&(DBEdit6->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit61KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit61->Text = VeriDegistir(DBEdit61->Text);
        DigerVeriKontrol(&(DBEdit61->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit62KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit62->Text = VeriDegistir(DBEdit62->Text);
        DigerVeriKontrol(&(DBEdit62->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit7KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit7->Text = VeriDegistir(DBEdit7->Text);
        DigerVeriKontrol(&(DBEdit7->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit8KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit8->Text = VeriDegistir(DBEdit8->Text);
        DigerVeriKontrol(&(DBEdit8->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit9KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit9->Text = VeriDegistir(DBEdit9->Text);
        DigerVeriKontrol(&(DBEdit9->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit10KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit10->Text = VeriDegistir(DBEdit10->Text);
        DigerVeriKontrol(&(DBEdit10->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit11KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit11->Text = VeriDegistir(DBEdit11->Text);
        DigerVeriKontrol(&(DBEdit11->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit12KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit12->Text = VeriDegistir(DBEdit12->Text);
        DigerVeriKontrol(&(DBEdit12->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit63KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit63->Text = VeriDegistir(DBEdit63->Text);
        DigerVeriKontrol(&(DBEdit63->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit64KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit64->Text = VeriDegistir(DBEdit64->Text);
        DigerVeriKontrol(&(DBEdit64->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit13KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit13->Text = VeriDegistir(DBEdit13->Text);
        DigerVeriKontrol(&(DBEdit13->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit14KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit14->Text = VeriDegistir(DBEdit14->Text);
        DigerVeriKontrol(&(DBEdit14->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit15KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit15->Text = VeriDegistir(DBEdit15->Text);
        DigerVeriKontrol(&(DBEdit15->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit16KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit16->Text = VeriDegistir(DBEdit16->Text);
        DigerVeriKontrol(&(DBEdit16->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit17KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit17->Text = VeriDegistir(DBEdit17->Text);
        DigerVeriKontrol(&(DBEdit17->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit18KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit18->Text = VeriDegistir(DBEdit18->Text);
        DigerVeriKontrol(&(DBEdit18->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit65KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit65->Text = VeriDegistir(DBEdit65->Text);
        DigerVeriKontrol(&(DBEdit65->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit66KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit66->Text = VeriDegistir(DBEdit66->Text);
        DigerVeriKontrol(&(DBEdit66->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit19KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit19->Text = VeriDegistir(DBEdit19->Text);
        DigerVeriKontrol(&(DBEdit19->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit20KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit20->Text = VeriDegistir(DBEdit20->Text);
        DigerVeriKontrol(&(DBEdit20->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit21KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit21->Text = VeriDegistir(DBEdit21->Text);
        DigerVeriKontrol(&(DBEdit21->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit22KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit22->Text = VeriDegistir(DBEdit22->Text);
        DigerVeriKontrol(&(DBEdit22->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit23KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit23->Text = VeriDegistir(DBEdit23->Text);
        DigerVeriKontrol(&(DBEdit23->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit24KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit24->Text = VeriDegistir(DBEdit24->Text);
        DigerVeriKontrol(&(DBEdit24->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit67KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit67->Text = VeriDegistir(DBEdit67->Text);
        DigerVeriKontrol(&(DBEdit67->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit68KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit68->Text = VeriDegistir(DBEdit68->Text);
        DigerVeriKontrol(&(DBEdit68->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit25KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit25->Text = VeriDegistir(DBEdit25->Text);
        DigerVeriKontrol(&(DBEdit25->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit26KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit26->Text = VeriDegistir(DBEdit26->Text);
        DigerVeriKontrol(&(DBEdit26->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit27KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit27->Text = VeriDegistir(DBEdit27->Text);
        DigerVeriKontrol(&(DBEdit27->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit28KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit28->Text = VeriDegistir(DBEdit28->Text);
        DigerVeriKontrol(&(DBEdit28->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit29KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit29->Text = VeriDegistir(DBEdit29->Text);
        DigerVeriKontrol(&(DBEdit29->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit30KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit30->Text = VeriDegistir(DBEdit30->Text);
        DigerVeriKontrol(&(DBEdit30->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit69KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit69->Text = VeriDegistir(DBEdit69->Text);
        DigerVeriKontrol(&(DBEdit69->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit70KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit70->Text = VeriDegistir(DBEdit70->Text);
        DigerVeriKontrol(&(DBEdit70->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit31KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit31->Text = VeriDegistir(DBEdit31->Text);
        DigerVeriKontrol(&(DBEdit31->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit32KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit32->Text = VeriDegistir(DBEdit32->Text);
        DigerVeriKontrol(&(DBEdit32->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit33KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit33->Text = VeriDegistir(DBEdit33->Text);
        DigerVeriKontrol(&(DBEdit33->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit34KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit34->Text = VeriDegistir(DBEdit34->Text);
        DigerVeriKontrol(&(DBEdit34->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit35KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit35->Text = VeriDegistir(DBEdit35->Text);
        DigerVeriKontrol(&(DBEdit35->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit36KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit36->Text = VeriDegistir(DBEdit36->Text);
        DigerVeriKontrol(&(DBEdit36->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit71KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit71->Text = VeriDegistir(DBEdit71->Text);
        DigerVeriKontrol(&(DBEdit71->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit72KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit72->Text = VeriDegistir(DBEdit72->Text);
        DigerVeriKontrol(&(DBEdit72->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit37KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit73->Text = VeriDegistir(DBEdit73->Text);
        DigerVeriKontrol(&(DBEdit73->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit38KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit38->Text = VeriDegistir(DBEdit38->Text);
        DigerVeriKontrol(&(DBEdit38->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit39KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit39->Text = VeriDegistir(DBEdit39->Text);
        DigerVeriKontrol(&(DBEdit39->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit40KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit40->Text = VeriDegistir(DBEdit40->Text);
        DigerVeriKontrol(&(DBEdit40->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit41KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit41->Text = VeriDegistir(DBEdit41->Text);
        DigerVeriKontrol(&(DBEdit41->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit42KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit42->Text = VeriDegistir(DBEdit42->Text);
        DigerVeriKontrol(&(DBEdit42->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit73KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit73->Text = VeriDegistir(DBEdit73->Text);
        DigerVeriKontrol(&(DBEdit73->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit74KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit74->Text = VeriDegistir(DBEdit74->Text);
        DigerVeriKontrol(&(DBEdit74->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit43KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit43->Text = VeriDegistir(DBEdit43->Text);
        DigerVeriKontrol(&(DBEdit43->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit44KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit44->Text = VeriDegistir(DBEdit44->Text);
        DigerVeriKontrol(&(DBEdit44->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit45KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit45->Text = VeriDegistir(DBEdit45->Text);
        DigerVeriKontrol(&(DBEdit45->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit46KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit46->Text = VeriDegistir(DBEdit46->Text);
        DigerVeriKontrol(&(DBEdit46->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit47KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit47->Text = VeriDegistir(DBEdit47->Text);
        DigerVeriKontrol(&(DBEdit47->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit48KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit48->Text = VeriDegistir(DBEdit48->Text);
        DigerVeriKontrol(&(DBEdit48->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit75KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit75->Text = VeriDegistir(DBEdit75->Text);
        DigerVeriKontrol(&(DBEdit75->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit76KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit76->Text = VeriDegistir(DBEdit76->Text);
        DigerVeriKontrol(&(DBEdit76->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit49KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit49->Text = VeriDegistir(DBEdit49->Text);
        DigerVeriKontrol(&(DBEdit49->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit50KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit50->Text = VeriDegistir(DBEdit50->Text);
        DigerVeriKontrol(&(DBEdit50->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit51KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit51->Text = VeriDegistir(DBEdit51->Text);
        DigerVeriKontrol(&(DBEdit51->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit52KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit52->Text = VeriDegistir(DBEdit52->Text);
        DigerVeriKontrol(&(DBEdit52->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit53KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit53->Text = VeriDegistir(DBEdit53->Text);
        DigerVeriKontrol(&(DBEdit53->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit54KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit54->Text = VeriDegistir(DBEdit54->Text);
        DigerVeriKontrol(&(DBEdit54->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit77KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit77->Text = VeriDegistir(DBEdit77->Text);
        DigerVeriKontrol(&(DBEdit77->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit78KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit78->Text = VeriDegistir(DBEdit78->Text);
        DigerVeriKontrol(&(DBEdit78->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit55KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit55->Text = VeriDegistir(DBEdit55->Text);
        DigerVeriKontrol(&(DBEdit55->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit56KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit56->Text = VeriDegistir(DBEdit56->Text);
        DigerVeriKontrol(&(DBEdit56->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit57KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit57->Text = VeriDegistir(DBEdit57->Text);
        DigerVeriKontrol(&(DBEdit57->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit58KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit58->Text = VeriDegistir(DBEdit58->Text);
        DigerVeriKontrol(&(DBEdit58->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit59KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit59->Text = VeriDegistir(DBEdit59->Text);
        DigerVeriKontrol(&(DBEdit59->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit60KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit60->Text = VeriDegistir(DBEdit60->Text);
        DigerVeriKontrol(&(DBEdit60->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit79KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit79->Text = VeriDegistir(DBEdit79->Text);
        DigerVeriKontrol(&(DBEdit79->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBEdit80KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        DBEdit80->Text = VeriDegistir(DBEdit80->Text);
        DigerVeriKontrol(&(DBEdit80->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditKOSUSAYISIKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditKOSUSAYISI->Text = VeriDegistir(dbeditKOSUSAYISI->Text);
        DigerVeriKontrol(&(dbeditKOSUSAYISI->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditBIRINCICIFTEKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditBIRINCICIFTE->Text = VeriDegistir(dbeditBIRINCICIFTE->Text);
        DigerVeriKontrol(&(dbeditBIRINCICIFTE->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditIKINCICIFTEKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditIKINCICIFTE->Text = VeriDegistir(dbeditIKINCICIFTE->Text);
        DigerVeriKontrol(&(dbeditIKINCICIFTE->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditUCUNCUCIFTEKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditUCUNCUCIFTE->Text = VeriDegistir(dbeditUCUNCUCIFTE->Text);
        DigerVeriKontrol(&(dbeditUCUNCUCIFTE->Text));
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::dbeditDORDUNCUCIFTEKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        dbeditDORDUNCUCIFTE->Text = VeriDegistir(dbeditDORDUNCUCIFTE->Text);
        DigerVeriKontrol(&(dbeditDORDUNCUCIFTE->Text));
    }
}
//---------------------------------------------------------------------------

 void __fastcall TfrmGazeteler::GanyanToplami(void)
{
    AnsiString Birinci;
    int Kiyas = 0, Sayac = 1;
    struct Kosucu KB;

    for (Sayac = 1; Sayac <= 10; ++Sayac) {
        // Koþu Bilgisi Çaðrýlýyor ...
        KosuBilgisiGetir(&KB, Sayac, TAHMIN);
        // Koþu Bilgileri KB'ye atandý...
        if (Karsilastir(KB.Ekuri, KB.Birinci, AnsiString("0")) == 0)
            Birinci = KB.Birinci;
        else
            Birinci = KB.Ekuri;

        tblTAHMIN->First();
        tblSONUC->First();
        while (!tblTAHMIN->Eof) {
            // Koþu Bilgisi Çaðrýlýyor ...
            KosuBilgisiGetir(&KB, Sayac, TAHMIN);
            // Koþu Bilgileri KB'ye atandý...
            Kiyas = Karsilastir(KB.Tahmin, Birinci, KB.KosmayanAtlar);
            tblSONUC->Edit();
            // Ýþlem tekrarlandýrýldýðýnda sonucu sýfýrlar...
            if (Sayac == 1)
                tblSONUCGANYANTOP->Value = GTPuanlama(KB.KosanAtAdedi, Kiyas);
            else
                tblSONUCGANYANTOP->Value += GTPuanlama(KB.KosanAtAdedi, Kiyas);
            // Ýþlem tekrarýna göre sýfýrlama iþlemi sonu...
            tblTAHMIN->Next();
            tblSONUC->Next();
        }
    }
    tblTAHMIN->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::KosuBilgisiGetir(struct Kosucu *KB,
    int KosuNo, int KosuTuru)
{
    int KosuBaslangici;

    if (KosuTuru == TAHMIN)
        KosuBaslangici = 0;
    else if (KosuTuru == ALTILIGANYAN)
        KosuBaslangici = StrToFloat(dbeditKOSUSAYISI->Text) - 6;
    else if (KosuTuru == UCLUGANYAN)
        KosuBaslangici = StrToFloat(dbeditKOSUSAYISI->Text) - 3;
    else if (KosuTuru == IKILI)
        KosuBaslangici = 0;
    else if (KosuTuru == CIFTE)
        KosuBaslangici = 0;
    else if (KosuTuru == UCLUBAHIS)
        KosuBaslangici = 0;
    else if (KosuTuru == TABELABAHIS)
        KosuBaslangici = 0;

    switch (KosuBaslangici+KosuNo) {
        case 1:
            KB->Birinci = tblKOSU01BIRINCI->Value;
            KB->Ikinci = tblKOSU01IKINCI->Value;
            KB->Ucuncu = tblKOSU01UCUNCU->Value;
            KB->Dorduncu = tblKOSU01DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU01KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU01EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU01CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU01EFG->Value;
            KB->UcluBahisKontrol = tblKOSU01UCLU_BAHIS->Value;
            break;
        case 2:
            KB->Birinci = tblKOSU02BIRINCI->Value;
            KB->Ikinci = tblKOSU02IKINCI->Value;
            KB->Ucuncu = tblKOSU02UCUNCU->Value;
            KB->Dorduncu = tblKOSU02DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU02KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU02EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU02CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU02EFG->Value;
            KB->UcluBahisKontrol = tblKOSU02UCLU_BAHIS->Value;
            break;
        case 3:
            KB->Birinci = tblKOSU03BIRINCI->Value;
            KB->Ikinci = tblKOSU03IKINCI->Value;
            KB->Ucuncu = tblKOSU03UCUNCU->Value;
            KB->Dorduncu = tblKOSU03DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU03KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU03EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU03CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU03EFG->Value;
            KB->UcluBahisKontrol = tblKOSU03UCLU_BAHIS->Value;
            break;
        case 4:
            KB->Birinci = tblKOSU04BIRINCI->Value;
            KB->Ikinci = tblKOSU04IKINCI->Value;
            KB->Ucuncu = tblKOSU04UCUNCU->Value;
            KB->Dorduncu = tblKOSU04DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU04KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU04EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU04CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU04EFG->Value;
            KB->UcluBahisKontrol = tblKOSU04UCLU_BAHIS->Value;
            break;
        case 5:
            KB->Birinci = tblKOSU05BIRINCI->Value;
            KB->Ikinci = tblKOSU05IKINCI->Value;
            KB->Ucuncu = tblKOSU05UCUNCU->Value;
            KB->Dorduncu = tblKOSU05DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU05KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU05EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU05CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU05EFG->Value;
            KB->UcluBahisKontrol = tblKOSU05UCLU_BAHIS->Value;
            break;
        case 6:
            KB->Birinci = tblKOSU06BIRINCI->Value;
            KB->Ikinci = tblKOSU06IKINCI->Value;
            KB->Ucuncu = tblKOSU06UCUNCU->Value;
            KB->Dorduncu = tblKOSU06DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU06KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU06EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU06CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU06EFG->Value;
            KB->UcluBahisKontrol = tblKOSU06UCLU_BAHIS->Value;
            break;
        case 7:
            KB->Birinci = tblKOSU07BIRINCI->Value;
            KB->Ikinci = tblKOSU07IKINCI->Value;
            KB->Ucuncu = tblKOSU07UCUNCU->Value;
            KB->Dorduncu = tblKOSU07DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU07KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU07EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU07CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU07EFG->Value;
            KB->UcluBahisKontrol = tblKOSU07UCLU_BAHIS->Value;
            break;
        case 8:
            KB->Birinci = tblKOSU08BIRINCI->Value;
            KB->Ikinci = tblKOSU08IKINCI->Value;
            KB->Ucuncu = tblKOSU08UCUNCU->Value;
            KB->Dorduncu = tblKOSU08DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU08KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU08EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU08CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU08EFG->Value;
            KB->UcluBahisKontrol = tblKOSU08UCLU_BAHIS->Value;
            break;
        case 9:
            KB->Birinci = tblKOSU09BIRINCI->Value;
            KB->Ikinci = tblKOSU09IKINCI->Value;
            KB->Ucuncu = tblKOSU09UCUNCU->Value;
            KB->Dorduncu = tblKOSU09DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU09KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU09EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU09CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU09EFG->Value;
            KB->UcluBahisKontrol = tblKOSU09UCLU_BAHIS->Value;
            break;
        case 10:
            KB->Birinci = tblKOSU10BIRINCI->Value;
            KB->Ikinci = tblKOSU10IKINCI->Value;
            KB->Ucuncu = tblKOSU10UCUNCU->Value;
            KB->Dorduncu = tblKOSU10DORDUNCU->Value;
            KB->KosanAtAdedi = tblKOSU10KOSAN_AT_ADEDI->Value;
            KB->Ekuri = tblKOSU10EKURI_AT->Value;
            KB->KosmayanAtlar = tblKOSU10CIKAN_ATLAR->Value;
            KB->EFG = tblKOSU10EFG->Value;
            KB->UcluBahisKontrol = tblKOSU10UCLU_BAHIS->Value;
            break;
    }

    switch (KosuNo) {
        case 1:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU01->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK01->Value;
            else if (KosuTuru == UCLUGANYAN)
                KB->Tahmin = tblGANYANAYAK04->Value;
            break; // Ýþlem Sonu . . .
        case 2:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU02->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK02->Value;
            else if (KosuTuru == UCLUGANYAN)
                KB->Tahmin = tblGANYANAYAK05->Value;
            break; // Ýþlem Sonu . . .
        case 3:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU03->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK03->Value;
            else if (KosuTuru == UCLUGANYAN)
                KB->Tahmin = tblGANYANAYAK06->Value;
            break; // Ýþlem Sonu . . .
        case 4:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU04->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK04->Value;
            break; // Ýþlem Sonu . . .
        case 5:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU05->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK05->Value;
            break; // Ýþlem Sonu . . .
        case 6:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU06->Value;
            else if (KosuTuru == ALTILIGANYAN)
                KB->Tahmin = tblGANYANAYAK06->Value;
            break; // Ýþlem Sonu . . .
        case 7:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU07->Value;
            break; // Ýþlem Sonu . . .
        case 8:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU08->Value;
            break; // Ýþlem Sonu . . .
        case 9:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU09->Value;
            break; // Ýþlem Sonu . . .
        case 10:
            if (KosuTuru == TAHMIN || KosuTuru == UCLUBAHIS || KosuTuru == TABELABAHIS)
                KB->Tahmin = tblTAHMINKOSU10->Value;
            break; // Ýþlem Sonu . . .
    }
    if (KosuTuru == IKILI)
        KB->Tahmin = tblIKILIIKILITAHMIN->Value;
    else if (KosuTuru == CIFTE)
        KB->Tahmin = tblIKILICIFTETAHMIN->Value;
}

void __fastcall TfrmGazeteler::AltiliGanyanPuanlamasi(bool PuanDurumu, int Sayac)
{
    if (PuanDurumu == true) {
        // Ýþlem tekrarlandýrýldýðýnda sonucu sýfýrlar.
        if (Sayac == 1)
            tblSONUCALTILI->Value = frmAyarlar->tblAYARLARALTILIPUAN->Value;
        else
            tblSONUCALTILI->Value += frmAyarlar->tblAYARLARALTILIPUAN->Value;
        // Ýþlem tekrarýna göre sýfýrlama iþlemi sonu...
    }
    else {
        // Ýþlem tekrarlandýrýldýðýnda sonucu sýfýrlar.
        if (Sayac == 1)
            tblSONUCALTILI->Value = 0;
        else
            tblSONUCALTILI->Value += 0;
        // Ýþlem tekrarýna göre sýfýrlama iþlemi sonu...
    }
}

void __fastcall TfrmGazeteler::AltiliGanyanToplami(void)
{
    int Kiyaslama = 0, Sayac = 0;
    struct Kosucu KB;

    for (Sayac = 1; Sayac <= 6; ++Sayac) {
        tblGANYAN->First();
        KosuBilgisiGetir(&KB, Sayac, ALTILIGANYAN);
        if (Karsilastir(KB.Ekuri, KB.Birinci, AnsiString("0")) == 0) {
            tblGANYAN->First();
            tblSONUC->First();
            while (!tblGANYAN->Eof) {
                KosuBilgisiGetir(&KB, Sayac, ALTILIGANYAN);
                // Altýlý Tahminini Sonuç ile kýyaslanýyor.
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Birinci, AnsiString("0"));
                tblSONUC->Edit();
                if (Kiyaslama != 0) // Tahminimiz doðru...
                    AltiliGanyanPuanlamasi(PUAN_VER, Sayac);
                else {
                    // Altýlý Tahminimde çýkan atlar var mý?
                    Kiyaslama = Karsilastir(KB.Tahmin, KB.KosmayanAtlar, AnsiString("0"));
                    if (Kiyaslama != 0) { // Çýkan At Var...
                        // Sonuç, EFG'mi
                        Kiyaslama = Karsilastir(KB.Birinci, KB.EFG, AnsiString("0"));
                        if (Kiyaslama != 0)
                            AltiliGanyanPuanlamasi(PUAN_VER, Sayac);
                        else
                            AltiliGanyanPuanlamasi(PUAN_VERME, Sayac);
                    }
                    else
                        AltiliGanyanPuanlamasi(PUAN_VERME, Sayac);
                }

                // Altýlýyý bilenlere burada extra puan veriliyor...
                if (tblSONUCALTILI->Value == (frmAyarlar->tblAYARLARALTILIPUAN->Value*6))
                    tblSONUCALTILI->Value += (AltiliBilenleriHesapla() - frmAyarlar->tblAYARLARALTILIPUAN->Value);

                tblGANYAN->Next();
                tblSONUC->Next();
            }
        }              
        else {
            tblGANYAN->First();
            tblSONUC->First();
            while (!tblGANYAN->Eof) {
                KosuBilgisiGetir(&KB, Sayac, ALTILIGANYAN);
                // Altýlý Tahminini Sonuç ile kýyaslanýyor.
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Ekuri, AnsiString("0"));
                tblSONUC->Edit();
                if (Kiyaslama != 0) // Tahminimiz doðru...
                    AltiliGanyanPuanlamasi(PUAN_VER, Sayac);
                else {
                    // Altýlý Tahminimde çýkan atlar var mý?
                    Kiyaslama = Karsilastir(KB.Tahmin, KB.KosmayanAtlar, AnsiString("0"));
                    if (Kiyaslama != 0) { // Çýkan At Var...
                        // Sonuç, EFG'mi
                        Kiyaslama = Karsilastir(KB.Ekuri, KB.EFG, AnsiString("0"));
                        if (Kiyaslama != 0)
                            AltiliGanyanPuanlamasi(PUAN_VER, Sayac);
                        else
                            AltiliGanyanPuanlamasi(PUAN_VERME, Sayac);
                    }
                    else
                        AltiliGanyanPuanlamasi(PUAN_VERME, Sayac);
                }

                // Altýlýyý bilenlere burada extra puan veriliyor...
                if (tblSONUCALTILI->Value == (frmAyarlar->tblAYARLARALTILIPUAN->Value*6))
                    tblSONUCALTILI->Value += AltiliBilenleriHesapla();

                tblGANYAN->Next();
                tblSONUC->Next();
            }
        }
    }

    tblGANYAN->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::IkiliBahisToplami(void)
{
    int Kiyaslama = 0, KosuNo = 0;
    struct Kosucu KB;

    tblIKILI->First();
    tblSONUC->First();
    while (!tblIKILI->Eof) {
        tblSONUC->Edit();
        // -------------- Kosu No Bulunuyor ----------------
        if (tblIKILIIKILIKOSU->Value.Length() == 0)
            KosuNo = 0;
        else
            KosuNo = StrToInt(tblIKILIIKILIKOSU->Value);
        // ---------------- Kosu No Bulundu ----------------
        KosuBilgisiGetir(&KB, KosuNo, IKILI);
        Kiyaslama = Karsilastir(KB.Tahmin, KB.Birinci, AnsiString("0"));
        if (KB.KosanAtAdedi > 6) {
            if (Kiyaslama == 1 || Kiyaslama == 2) { // Birinci gelen at tahminimde var sa....
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Ikinci, AnsiString("0"));
                if (Kiyaslama == 2 || Kiyaslama == 1) // Birinci gelen at tahminimde var sa ..
                    tblSONUCIKILI->Value = frmAyarlar->tblAYARLARIKILIPUAN->Value;
                else // Tahminim Yanlýþ
                    tblSONUCIKILI->Value = 0;
            }
            else
                tblSONUCIKILI->Value = 0;
        }
        else {
            if (Kiyaslama == 1) { // Birinci gelen at tahminimde var sa....
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Ikinci, AnsiString("0"));
                if (Kiyaslama == 2) // Birinci gelen at tahminimde var sa ..
                    tblSONUCIKILI->Value = frmAyarlar->tblAYARLARIKILIPUAN->Value;
                else // Tahminim Yanlýþ
                    tblSONUCIKILI->Value = 0;
            }
                else
                    tblSONUCIKILI->Value = 0;
        }
        tblIKILI->Next();
        tblSONUC->Next();
    }
    tblIKILI->First();
    tblSONUC->First();
}

int __fastcall TfrmGazeteler::CifteGetir(int Kacinci)
{
    int CifteNo = 0;

    // -------------- Çifte No Bulunuyor ----------------
    if (tblIKILICIFTEKOSU->Value.Length() == 0)
        CifteNo = 0;
    else
        CifteNo = StrToInt(tblIKILICIFTEKOSU->Value);
    // ---------------- Çifte No Bulundu ----------------

    switch (CifteNo) {
        case 1:
            return SayiGetir(tblYARISBIRINCI_CIFTE->Value, Kacinci);
        case 2:
            return SayiGetir(tblYARISIKINCI_CIFTE->Value, Kacinci);
        case 3:
            return SayiGetir(tblYARISUCUNCU_CIFTE->Value, Kacinci);
        case 4:
            return SayiGetir(tblYARISDORDUNCU_CIFTE->Value, Kacinci);
    }
    return 0; // Geçersiz Deðer ......
}

void __fastcall TfrmGazeteler::CifteToplami(void)
{
    int Kiyaslama = 0, CifteKosusu = 0;
    struct Kosucu KB;
    AnsiString CifteTahmini;

    tblIKILI->First();
    tblSONUC->First();

    while (!tblIKILI->Eof) {
        tblSONUC->Edit();
        CifteKosusu = CifteGetir(0); // Çifte'nin ilk koþusu . . .
        KosuBilgisiGetir(&KB, CifteKosusu, CIFTE);
        // Birinci ayný zamanda eküri mi?
        CifteTahmini = IntToStr(SayiGetir(KB.Tahmin, 0));
        if (Karsilastir(KB.Ekuri, KB.Birinci, AnsiString("0")) == 0)
            Kiyaslama = Karsilastir("."+CifteTahmini+".", KB.Birinci, AnsiString("0"));
        else
            Kiyaslama = Karsilastir("."+CifteTahmini+".", KB.Ekuri, AnsiString("0"));
        // Birinci'nin ne olduðu buradan sonra belli oldu..
        if (Kiyaslama == 1) {
        // Birinci gelen at tahminimde varsa....
            CifteKosusu = CifteGetir(1); // Çifte'nin ikinci koþusu . . .
            KosuBilgisiGetir(&KB, CifteKosusu, CIFTE);
            // Birinci ayný zamanda eküri mi?
            CifteTahmini = IntToStr(SayiGetir(KB.Tahmin, 1));
            if (Karsilastir(KB.Ekuri, KB.Birinci, AnsiString("0")) == 0)
                Kiyaslama = Karsilastir("."+CifteTahmini+".", KB.Birinci, AnsiString("0"));
            else
                Kiyaslama = Karsilastir("."+CifteTahmini+".", KB.Ekuri, AnsiString("0"));
            // Birinci'nin ne olduðu buradan sonra belli oldu..
            if (Kiyaslama == 1)
                // Birinci gelen at tahminimde varsa ...
                tblSONUCCITE->Value = frmAyarlar->tblAYARLARCIFTEPUAN->Value;
            else // Tahminim Yanlýþ
                tblSONUCCITE->Value = 0;
        }
        else
            tblSONUCCITE->Value = 0;

        tblIKILI->Next();
        tblSONUC->Next();
    }
    tblIKILI->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::UcluBahisToplami(void)
{
    int Kiyasla = 0, KosuNo, Bayrak = 0, SiraliBayrak = 0;
    struct Kosucu KB;

    for (KosuNo = 1; KosuNo <= 10; ++KosuNo) {
        tblTAHMIN->First();
        tblSONUC->First();
        while (!tblTAHMIN->Eof) {
            tblSONUC->Edit();
            KosuBilgisiGetir(&KB, KosuNo, UCLUBAHIS);
            if (KB.UcluBahisKontrol == true) {
                // Birinci geleni bulmak için
                Kiyasla = Karsilastir(KB.Tahmin, KB.Birinci, KB.KosmayanAtlar);
                if (Kiyasla > 0 && Kiyasla < 4) { // Karýþýk olup olmadýðýný
                    ++SiraliBayrak;                           //anlamak için
                    if (Kiyasla == 1)
                        ++Bayrak;
                }
                // Ýkinci geleni bulmak için
                Kiyasla = Karsilastir(KB.Tahmin, KB.Ikinci, KB.KosmayanAtlar);
                if (Kiyasla > 0 && Kiyasla < 4) { // Karýþýk olup olmadýðýný
                    ++SiraliBayrak;                           //anlamak için
                    if (Kiyasla == 2)
                    ++Bayrak;
                }
                // Üçüncü geleni bulmak için
                Kiyasla = Karsilastir(KB.Tahmin, KB.Ucuncu, KB.KosmayanAtlar);
                if (Kiyasla > 0 && Kiyasla < 4) { // Karýþýk olup olmadýðýný
                    ++SiraliBayrak;                           //anlamak için
                    if (Kiyasla == 3)
                    ++Bayrak;
                }

                if (SiraliBayrak == 3 && Bayrak == 3)
                    UcluBahisPuanlamasi(frmAyarlar->tblAYARLARSIRALIUCLUPUAN->Value, KosuNo);
                else
                    UcluBahisPuanlamasi(0, KosuNo);
            }
            else
                UcluBahisPuanlamasi(0, KosuNo);

            // Bayrak deðerleri yeni döngü için temizleniyor //
            SiraliBayrak = 0;
            Bayrak = 0;
            // Temizleme iþlemi sonu //
            tblTAHMIN->Next();
            tblSONUC->Next();
        }
    }
    tblTAHMIN->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::UcluBahisPuanlamasi(int VerilecekPuan, int Sayac)
{
    if (Sayac == 1)
        tblSONUCSIRALIUCLU->Value = VerilecekPuan;
    else
        tblSONUCSIRALIUCLU->Value += VerilecekPuan;
}

void __fastcall TfrmGazeteler::TabelaBahisToplami(void)
{
    int Kiyasla = 0, KosuNo, Bayrak = 0, SiraliBayrak = 0;
    struct Kosucu KB;

    if (dbeditTABELA->Text.Length() == 0)
        KosuNo = tblYARISKOSU_SAYISI->Value - 1;
    else
        KosuNo = StrToInt(tblYARISTABELAKOSUSU->Value);

    tblTAHMIN->First();
    tblSONUC->First();
    while (!tblTAHMIN->Eof) {
        tblSONUC->Edit();
        KosuBilgisiGetir(&KB, KosuNo, TABELABAHIS);

        Kiyasla = Karsilastir(KB.Tahmin, KB.KosmayanAtlar, AnsiString("0"));
        if (Kiyasla > 0 && Kiyasla < 5) { // Çýkan At Varmý
            tblSONUCTABELADORTLU->Value = 0;
            tblTAHMIN->Next(); // Evet var. Bir sonraki gazeteye bak.
            tblSONUC->Next();
        }
        else { // Hayýr çýkan at yok.
            // Birinci geleni bulmak için
            Kiyasla = Karsilastir(KB.Tahmin, KB.Birinci, KB.KosmayanAtlar);
            if (Kiyasla > 0) { // Karýþýk olup olmadýðýný
                ++SiraliBayrak;                           //anlamak için
                if (Kiyasla == 1)
                ++Bayrak;
            }
            // Ýkinci geleni bulmak için
            Kiyasla = Karsilastir(KB.Tahmin, KB.Ikinci, KB.KosmayanAtlar);
            if (Kiyasla > 0) { // Karýþýk olup olmadýðýný
                ++SiraliBayrak;                           //anlamak için
                if (Kiyasla == 2)
                    ++Bayrak;
            }
            // Üçüncü geleni bulmak için
            Kiyasla = Karsilastir(KB.Tahmin, KB.Ucuncu, KB.KosmayanAtlar);
            if (Kiyasla > 0) { // Karýþýk olup olmadýðýný
                ++SiraliBayrak;                           //anlamak için
                if (Kiyasla == 3)
                    ++Bayrak;
            }
            // Dördüncü geleni bulmak için
            Kiyasla = Karsilastir(KB.Tahmin, KB.Dorduncu, KB.KosmayanAtlar);
                if (Kiyasla > 0) { // Karýþýk olup olmadýðýný
                    ++SiraliBayrak;                           //anlamak için
                if (Kiyasla == 4)
                    ++Bayrak;
            }
            if (SiraliBayrak == 4) {
                if (Bayrak == 4)
                    tblSONUCTABELADORTLU->Value =
                        frmAyarlar->tblAYARLARTABELASIRALIPUAN->Value;
                else
                    tblSONUCTABELADORTLU->Value =
                        frmAyarlar->tblAYARLARTABELAKARISIKPUAN->Value;
            }
            else
                tblSONUCTABELADORTLU->Value = 0;

            // Bayrak deðerleri yeni döngü için temizleniyor //
            SiraliBayrak = 0;
            Bayrak = 0;
            // Temizleme iþlemi sonu //
            tblTAHMIN->Next();
            tblSONUC->Next();
        }
    }
    tblTAHMIN->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::UcluGanyanToplami(void)
{
    int Kiyaslama = 0, Sayac = 0, GanyanBayragi = 0;
    struct Kosucu KB;

    tblGANYAN->First();
    tblSONUC->First();
    while (!tblGANYAN->Eof) {
        for (Sayac = 1; Sayac <= 3; ++Sayac) {
            KosuBilgisiGetir(&KB, Sayac, UCLUGANYAN);
            // ÜçlüGanyan Tahminini Sonuç ile kýyaslanýyor.
            if ((Karsilastir(KB.Ekuri, KB.Birinci, AnsiString("0"))) == 0) {
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Birinci, KB.KosmayanAtlar);
                if (Kiyaslama == 1)
                    ++GanyanBayragi; // Bu deðer sayesinde puan verilecek...
                else {
                    Kiyaslama = Karsilastir(KB.Tahmin, KB.KosmayanAtlar, AnsiString("0"));
                    if (Kiyaslama != 0) { // Çýkan At Var...
                        // Sonuç, EFG'mi
                        Kiyaslama = Karsilastir(KB.Birinci, KB.EFG, AnsiString("0"));
                        if (Kiyaslama != 0)
                            ++GanyanBayragi;
                    }
                }
            }
            else {
                Kiyaslama = Karsilastir(KB.Tahmin, KB.Ekuri, KB.KosmayanAtlar);
                if (Kiyaslama == 1)
                    ++GanyanBayragi; // Bu deðer sayesinde puan verilecek...
                else {
                    Kiyaslama = Karsilastir(KB.Tahmin, KB.KosmayanAtlar, AnsiString("0"));
                    if (Kiyaslama != 0) { // Çýkan At Var...
                        // Sonuç, EFG'mi
                        Kiyaslama = Karsilastir(KB.Ekuri, KB.EFG, AnsiString("0"));
                        if (Kiyaslama != 0)
                            ++GanyanBayragi;
                    }
                }
            }
        }

        tblSONUC->Edit();
        if (GanyanBayragi == 3)
            tblSONUCUCLUGANYAN->Value = frmAyarlar->tblAYARLARUCLUGANYANPUAN->Value;
        else
            tblSONUCUCLUGANYAN->Value = 0;

        GanyanBayragi = 0;
        tblGANYAN->Next();
        tblSONUC->Next();
    }
    tblGANYAN->First();
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::GenelToplam(void)
{
    tblSONUC->First();
    while (!tblSONUC->Eof) {
        tblSONUC->Edit();
        tblSONUCGENTOP->Value = tblSONUCGANYANTOP->Value;
        tblSONUCGENTOP->Value += tblSONUCUCLUGANYAN->Value;
        tblSONUCGENTOP->Value += tblSONUCTABELADORTLU->Value;
        tblSONUCGENTOP->Value += tblSONUCSIRALIUCLU->Value;
        tblSONUCGENTOP->Value += tblSONUCCITE->Value;
        tblSONUCGENTOP->Value += tblSONUCIKILI->Value;
        tblSONUCGENTOP->Value += tblSONUCALTILI->Value;
        tblSONUC->Next();
    }
    tblSONUC->First();
}

void __fastcall TfrmGazeteler::ToolButton4Click(TObject *Sender)
{
    frmGazeteRapor->querySONUC->Close();
    frmGazeteRapor->querySONUC->ParamByName("TARIH")->AsDate = DateTimePicker1->Date;
    frmGazeteRapor->querySONUC->Open();
    frmGazeteRapor->QRLabel1->Caption =
        DateToStr(DateTimePicker1->Date)+" Tarihli Gazete Yarýþmasý Sonuçlarý";
    frmGazeteRapor->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::ToolButton7Click(TObject *Sender)
{
    tblSONUC->First();
    while (!tblSONUC->Eof) {
        tblSONUC->Edit();
        tblSONUCGANYANTOP->Value = 0;
        tblSONUCUCLUGANYAN->Value = 0;
        tblSONUCTABELADORTLU->Value = 0;
        tblSONUCSIRALIUCLU->Value = 0;
        tblSONUCCITE->Value = 0;
        tblSONUCIKILI->Value = 0;
        tblSONUCALTILI->Value = 0;
        tblSONUCGENTOP->Value = 0;
        tblSONUC->Next();
    }
    tblSONUC->First();
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::ToolButton9Click(TObject *Sender)
{
    frmAyarlar->Show();
}
//---------------------------------------------------------------------------

int __fastcall TfrmGazeteler::AltiliBilenleriHesapla(void)
{
    double Puan, CikarilacakFiyat, BolunecekFiyat;

    Puan = frmAyarlar->tblAYARLARVERILECEKPUAN->Value;

    CikarilacakFiyat = frmAyarlar->tblAYARLARCIKARILACAKFIYAT->Value;
    BolunecekFiyat = frmAyarlar->tblAYARLARBOLUNECEKPUAN->Value;

    Puan += ((tblYARISALTILI_IKRAMIYE->Value - CikarilacakFiyat) / BolunecekFiyat);

    return Puan;
}

void __fastcall TfrmGazeteler::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    AnsiString Veri;

    if (Key == Char(VK_RETURN)) {
        Veri = DBGrid1->SelectedField->AsString;
        tblTAHMIN->Edit();
        DBGrid1->SelectedField->AsString = VeriDegistir(Veri);
        Veri = DBGrid1->SelectedField->AsString;
        switch ( GirisKontrol(Veri) ) {
            case NOKTA_SAYISI:
                Application->MessageBox("Sayýlarýn arasýndaki nokta sayýsýný kontrol edin...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case DEGER_DISI:
                Application->MessageBox("0 - 9 yada \'.\' dýþý bir deðer girdiniz...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case 0:
                if (DBGrid1->SelectedIndex == DBGrid1->FieldCount-1) {
                    DBGrid1->SelectedIndex = 1;
                    tblTAHMIN->Next(); // ..::Database bir sonraki elemana geçiyor::..
                }
                else
                    ++DBGrid1->SelectedIndex;
                Key = 0;
                break;
        }
    }
}
//---------------------------------------------------------------------------

int __fastcall TfrmGazeteler::GirisKontrol(AnsiString Veri)
{
    int Sayac, NoktaSayisi;
    char Data[30];

    memset(Data, 0, 30);
    strcpy(Data, Veri.c_str());

    Sayac = 0;
    NoktaSayisi = 0;
    while (Data[Sayac] != NULL) {
        if (Data[Sayac] == '.')
            ++NoktaSayisi;
        else if (!( (Data[Sayac] >= '0' && Data[Sayac] <= '9') || Data[Sayac] == '.') )
            return DEGER_DISI;
        ++Sayac;
    }
    if ((NoktaSayisi % 2) != 0)
        return NOKTA_SAYISI;

    return 0;
}

AnsiString __fastcall TfrmGazeteler::VeriDegistir(AnsiString Veri)
{
    int Sayac;
    char Data[30];

    memset(Data, 0x0, 30);
    strcpy(Data, Veri.c_str());

    Sayac = 0;
    while (Data[Sayac] != NULL) {
        if (Data[Sayac] == ',')
            Data[Sayac] = '.';
        ++Sayac;
    }
    return AnsiString(Data);
}

void __fastcall TfrmGazeteler::DBGrid2KeyPress(TObject *Sender, char &Key)
{
    AnsiString Veri;

    if (Key == Char(VK_RETURN)) {
        Veri = DBGrid2->SelectedField->AsString;
        tblGANYAN->Edit();
        DBGrid2->SelectedField->AsString = VeriDegistir(Veri);
        Veri = DBGrid2->SelectedField->AsString;
        switch ( GirisKontrol(Veri) ) {
            case NOKTA_SAYISI:
                Application->MessageBox("Sayýlarýn arasýndaki nokta sayýsýný kontrol edin...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case DEGER_DISI:
                Application->MessageBox("0 - 9 yada \'.\' dýþý bir deðer girdiniz...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case 0:
                if (DBGrid2->SelectedIndex == DBGrid2->FieldCount-1) {
                    DBGrid2->SelectedIndex = 1;
                    tblGANYAN->Next(); // ..::Database bir sonraki elemana geçiyor::..
                }
                else
                    ++DBGrid2->SelectedIndex;
                Key = 0;
                break;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DBGrid3KeyPress(TObject *Sender, char &Key)
{
    AnsiString Veri;

    if (Key == Char(VK_RETURN)) {
        Veri = DBGrid3->SelectedField->AsString;
        tblIKILI->Edit();
        DBGrid3->SelectedField->AsString = VeriDegistir(Veri);
        Veri = DBGrid3->SelectedField->AsString;
        switch ( GirisKontrol(Veri) ) {
            case NOKTA_SAYISI:
                Application->MessageBox("Sayýlarýn arasýndaki nokta sayýsýný kontrol edin...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case DEGER_DISI:
                Application->MessageBox("0 - 9 yada \'.\' dýþý bir deðer girdiniz...",
                    "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
                break;
            case 0:
                if (DBGrid3->SelectedIndex == DBGrid3->FieldCount-1) {
                    DBGrid3->SelectedIndex = 1;
                    tblIKILI->Next(); // ..::Database bir sonraki elemana geçiyor::..
                }
                else
                    ++DBGrid3->SelectedIndex;
                Key = 0;
                break;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmGazeteler::DigerVeriKontrol(AnsiString *Veri)
{
    switch ( GirisKontrol(*Veri) ) {
        case NOKTA_SAYISI:
            Application->MessageBox("Sayýlarýn arasýndaki nokta sayýsýný kontrol edin...",
                "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
            break;
        case DEGER_DISI:
            Application->MessageBox("0 - 9 yada \'.\' dýþý bir deðer girdiniz...",
                "Lütfen Kontrol Edin !!!", MB_OK|MB_ICONSTOP);
            break;
        case 0:
            PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}

