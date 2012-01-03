//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "jokeylist.h"
#include "jokeygir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmJokeyListesi *frmJokeyListesi;
//---------------------------------------------------------------------------
__fastcall TfrmJokeyListesi::TfrmJokeyListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyListesi::Edit1Change(TObject *Sender)
{
    queryJOKEYLIST->Close();
    queryJOKEYLIST->ParamByName("ADISOYADI")->AsString = Edit1->Text+"%";
    queryJOKEYLIST->ParamByName("KAYITTURU")->AsString = "%";
    queryJOKEYLIST->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyListesi::DBGrid1CellClick(TColumn *Column)
{
    if (queryJOKEYLISTADISOYADI->Value.Length() != 0) {
        frmJokeyGiris->Anahtar();
        frmJokeyGiris->tblJOKEYANA->Active = true;
        frmJokeyGiris->tblJOKEYANA->Filtered = false;
        frmJokeyGiris->tblJOKEYANA->Filter = "[REFERANS]='"+
            IntToStr(queryJOKEYLISTREFERANS->Value)+"'";
        frmJokeyGiris->tblJOKEYANA->Filtered = true;
        frmJokeyGiris->StatusBar1->Panels->Items[1]->Text =
            FloatToStr(frmJokeyGiris->tblJOKEYANATOPLAMKOSU->Value);
        frmJokeyGiris->StatusBar1->Panels->Items[3]->Text =
            FloatToStr(frmJokeyGiris->tblJOKEYANATOPLAMBIRINCI->Value);

        if (frmJokeyGiris->tblJOKEYANAKAYITTURU->Value == AnsiString("JOKEY")) {
            if (queryJOKEYLISTTERFI->Value == true)
                frmJokeyGiris->comboKayitTuru->ItemIndex = 0;
            else
                frmJokeyGiris->comboKayitTuru->ItemIndex = 2;
        }
        else
            frmJokeyGiris->comboKayitTuru->ItemIndex = 1;

        KayitAsamasi = true;
        frmJokeyGiris->tbtnSIL->Enabled = true;
        frmJokeyGiris->tbtnKAYDET->Enabled = false;
        frmJokeyListesi->Close();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyListesi::FormShow(TObject *Sender)
{
    queryJOKEYLIST->Active = true;
    queryJOKEYLIST->Close();
    queryJOKEYLIST->ParamByName("ADISOYADI")->AsString = Edit1->Text+"%";
    queryJOKEYLIST->ParamByName("KAYITTURU")->AsString = "%";
    queryJOKEYLIST->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyListesi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    queryJOKEYLIST->Active = false;    
}
//---------------------------------------------------------------------------

