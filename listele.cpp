//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "listele.h"
#include "kayitcet.h"
#include "jokeyayari.h"
#include "at.h"
#include "atarama.h"
#include "kayit.h"
#include "main.h"
#include "atlist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmListele *frmListele;
//---------------------------------------------------------------------------
__fastcall TfrmListele::TfrmListele(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmListele::FormShow(TObject *Sender)
{
    tblPISTAYARI->Active = true;
    queryJOKEY->Active = true;
    queryAPRANTI->Active = true;
    queryANTRENOR->Active = true;

    frmListele->Caption =
        DateToStr(frmTabloGoruntule->datetimecomboBASLANGIC->Date)+" - "+
        DateToStr(frmTabloGoruntule->datetimecomboBITIS->Date)+
        " arasý " + frmTabloGoruntule->comboPIST->Text + " Pistine ait; kazanç tablosu";

    queryJOKEY->Close();
    queryJOKEY->ParamByName("SINIR")->AsFloat =
         tblPISTAYARIGECISSAYISI->Value;
    queryJOKEY->Open();

    queryAPRANTI->Close();
    queryAPRANTI->ParamByName("SINIR")->AsFloat =
         tblPISTAYARIGECISSAYISI->Value;
    queryAPRANTI->Open();

    queryANTRENOR->Close();
    queryANTRENOR->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmListele::SpeedButton1Click(TObject *Sender)
{
    FILE *fpDosya;
    char chVeri[300];
    int nVeriToplami;
    AnsiString DosyaAdi;

    SaveDialog1->Execute();
    DosyaAdi = SaveDialog1->FileName+".TXT";

    if ((fpDosya = fopen(DosyaAdi.c_str(), "wb")) == NULL)
        Application->MessageBoxA("Dosya yaratýlamýyor! ! !. \nDiskinizde yer olmayabilir...",
        "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        fwrite(" > > > * * * Jokeylerin Ilk 10 Kosusu * * * < < <  ", 50, 1, fpDosya);
        fputc('\r', fpDosya);
        fwrite("---------------------------------------------------", 50, 1, fpDosya);
        fputc('\r', fpDosya);
        queryJOKEY->First();
        while (!queryJOKEY->Eof) {
            if (queryJOKEY->RecNo > 15)
                break;
            //------------------ ADI SOYADI ------------------
            strcpy(chVeri, AnsiString(queryJOKEYADISOYADI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //---------------- KOÞU TOPLAMI -----------------
            strcpy(chVeri, AnsiString(queryJOKEYKOSUTOPLAMI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- BÝRÝNCÝ -------------------
            strcpy(chVeri, AnsiString(queryJOKEYBIRINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- ÝKÝNCÝ ------------------
            strcpy(chVeri, AnsiString(queryJOKEYIKINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //-------------------- ÜÇÜNCÜ --------------------
            strcpy(chVeri, AnsiString(queryJOKEYUCUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ DÖRDÜNCÜ ------------------
            strcpy(chVeri, AnsiString(queryJOKEYDORDUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ YÜZDESÝ ------------------
            strcpy(chVeri, AnsiString(queryJOKEYIKILIYUZDESI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //--------------- SON 10 YARIÞI ---------------
            strcpy(chVeri, AnsiString(queryJOKEYSONONYARISI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            //----------------- Satýr Sonu -----------------
            fputc('\r', fpDosya);
            queryJOKEY->Next();
        }
        fwrite(" > > > * * * Aprantilerin Ilk 10 Kosusu * * * < < <  ", 52, 1, fpDosya);
        fputc('\r', fpDosya);
        fwrite("-----------------------------------------------------", 52, 1, fpDosya);
        fputc('\r', fpDosya);
        queryAPRANTI->First();
        while (!queryAPRANTI->Eof) {
            if (queryAPRANTI->RecNo > 15)
                break;
            //------------------ ADI SOYADI ------------------
            strcpy(chVeri, AnsiString(queryAPRANTIADISOYADI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //---------------- KOÞU TOPLAMI -----------------
            strcpy(chVeri, AnsiString(queryAPRANTIKOSUTOPLAMI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- BÝRÝNCÝ -------------------
            strcpy(chVeri, AnsiString(queryAPRANTIBIRINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- ÝKÝNCÝ ------------------
            strcpy(chVeri, AnsiString(queryAPRANTIIKINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //-------------------- ÜÇÜNCÜ --------------------
            strcpy(chVeri, AnsiString(queryAPRANTIUCUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ DÖRDÜNCÜ ------------------
            strcpy(chVeri, AnsiString(queryAPRANTIDORDUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ YÜZDESÝ ------------------
            strcpy(chVeri, AnsiString(queryAPRANTIIKILIYUZDESI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //--------------- SON 10 YARIÞI ---------------
            strcpy(chVeri, AnsiString(queryAPRANTISONONYARISI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            //----------------- Satýr Sonu -----------------
            fputc('\r', fpDosya);
            queryAPRANTI->Next();
        }
        fwrite(" > > > * * * Antrenorlerin Ilk 10 Kosusu * * * < < <  ", 53, 1, fpDosya);
        fputc('\r', fpDosya);
        fwrite("------------------------------------------------------", 53, 1, fpDosya);
        fputc('\r', fpDosya);
        queryANTRENOR->First();
        while (!queryANTRENOR->Eof) {
            if (queryANTRENOR->RecNo > 15)
                break;
            //------------------ ADI SOYADI ------------------
            strcpy(chVeri, AnsiString(queryANTRENORADISOYADI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //---------------- KOÞU TOPLAMI -----------------
            strcpy(chVeri, AnsiString(queryANTRENORKOSUTOPLAMI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- BÝRÝNCÝ -------------------
            strcpy(chVeri, AnsiString(queryANTRENORBIRINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------- ÝKÝNCÝ ------------------
            strcpy(chVeri, AnsiString(queryANTRENORIKINCI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //-------------------- ÜÇÜNCÜ --------------------
            strcpy(chVeri, AnsiString(queryANTRENORUCUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ DÖRDÜNCÜ ------------------
            strcpy(chVeri, AnsiString(queryANTRENORDORDUNCU->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //------------------ YÜZDESÝ ------------------
            strcpy(chVeri, AnsiString(queryANTRENORIKILIYUZDESI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            fputc('\t', fpDosya);
            //--------------- SON 10 YARIÞI ---------------
            strcpy(chVeri, AnsiString(queryANTRENORSONONYARISI->Value).c_str());
            nVeriToplami = strlen(chVeri);
            frmKayitGirisi->PCtoMacConvert(chVeri);
            fwrite(&chVeri, nVeriToplami, 1, fpDosya);
            //----------------- Satýr Sonu -----------------
            fputc('\r', fpDosya);
            queryANTRENOR->Next();
        }
        fclose(fpDosya);
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmListele::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblPISTAYARI->Active = false;
    queryJOKEY->Active = false;
    queryAPRANTI->Active = false;
    queryANTRENOR->Active = false;
}
//---------------------------------------------------------------------------

