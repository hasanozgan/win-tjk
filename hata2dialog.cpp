//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sonucgir.h"
#include "hata2dialog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHataMesaji2 *frmHataMesaji2;
//---------------------------------------------------------------------------
__fastcall TfrmHataMesaji2::TfrmHataMesaji2(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji2::btnEvetClick(TObject *Sender)
{
    frmSonucGirisi->tblJOKEYANA->Insert();
    frmSonucGirisi->tblJOKEYANA->Edit();
    frmSonucGirisi->tblJOKEYANAADISOYADI->Value = frmSonucGirisi->tblJOKEYHARANTRENOR->Value;
    frmSonucGirisi->tblJOKEYANAKAYITTURU->Value = "ANTRENOR";
    frmSonucGirisi->tblJOKEYANADEVIRTOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANADEVIRBIRINCILIGI->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMBIRINCI->Value = 0;
    frmSonucGirisi->tblJOKEYANA->Post();
    frmHataMesaji2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji2::btnHayirClick(TObject *Sender)
{
    frmHataMesaji2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji2::btnEvetKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        btnEvetClick(Sender);
        Key = 0;
    }
}
//---------------------------------------------------------------------------
