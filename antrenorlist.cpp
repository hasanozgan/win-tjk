//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "antrenorlist.h"
#include "sonucgir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAntrenorListesi *frmAntrenorListesi;
//---------------------------------------------------------------------------
__fastcall TfrmAntrenorListesi::TfrmAntrenorListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAntrenorListesi::ComboBox1Change(TObject *Sender)
{
    queryJOKEYANA->Close();
    queryJOKEYANA->ParamByName("KAYITTURU")->AsString = AnsiUpperCase(ComboBox1->Text);
    queryJOKEYANA->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(Edit1->Text)+"%";
    queryJOKEYANA->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAntrenorListesi::Edit1Change(TObject *Sender)
{
    queryJOKEYANA->Close();
    queryJOKEYANA->ParamByName("KAYITTURU")->AsString = AnsiUpperCase(ComboBox1->Text);
    queryJOKEYANA->ParamByName("ADISOYADI")->AsString = AnsiUpperCase(Edit1->Text)+"%";
    queryJOKEYANA->Open();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmAntrenorListesi::FormShow(TObject *Sender)
{
    ComboBox1->ItemIndex = 0;
    Edit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAntrenorListesi::DBGrid1CellClick(TColumn *Column)
{
    if (queryJOKEYANAKAYITTURU->Value == "JOKEY") {
        frmSonucGirisi->tblJOKEYHAR->Edit();
        frmSonucGirisi->tblJOKEYHARJOKEY->Value = queryJOKEYANAADISOYADI->Value;
        frmSonucGirisi->tblJOKEYHAR->Post();
    }
    else {
        frmSonucGirisi->tblJOKEYHAR->Edit();
        frmSonucGirisi->tblJOKEYHARANTRENOR->Value = queryJOKEYANAADISOYADI->Value;
        frmSonucGirisi->tblJOKEYHAR->Post();
    }
    frmAntrenorListesi->Close();
}
//---------------------------------------------------------------------------
