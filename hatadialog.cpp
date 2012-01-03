//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hatadialog.h"
#include "sonucgir.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHataMesaji *frmHataMesaji;
//---------------------------------------------------------------------------
__fastcall TfrmHataMesaji::TfrmHataMesaji(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnIptalClick(TObject *Sender)
{
    frmHataMesaji->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnJokeyClick(TObject *Sender)
{
    frmSonucGirisi->tblJOKEYANA->Insert();
    frmSonucGirisi->tblJOKEYANA->Edit();
    frmSonucGirisi->tblJOKEYANAADISOYADI->Value = frmSonucGirisi->tblJOKEYHARJOKEY->Value;
    frmSonucGirisi->tblJOKEYANAKAYITTURU->Value = "JOKEY";
    frmSonucGirisi->tblJOKEYANATERFI->Value = true;
    frmSonucGirisi->tblJOKEYANADEVIRTOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANADEVIRBIRINCILIGI->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMBIRINCI->Value = 0;
    frmSonucGirisi->tblJOKEYANA->Post();
    frmHataMesaji->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnJokeyKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        btnJokeyClick(Sender);
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnIptalKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        frmHataMesaji->Close();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnAPRANTIClick(TObject *Sender)
{
    frmSonucGirisi->tblJOKEYANA->Insert();
    frmSonucGirisi->tblJOKEYANA->Edit();
    frmSonucGirisi->tblJOKEYANAADISOYADI->Value = frmSonucGirisi->tblJOKEYHARJOKEY->Value;
    frmSonucGirisi->tblJOKEYANAKAYITTURU->Value = "JOKEY";
    frmSonucGirisi->tblJOKEYANATERFI->Value = false;
    frmSonucGirisi->tblJOKEYANADEVIRTOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANADEVIRBIRINCILIGI->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMBIRINCI->Value = 0;
    frmSonucGirisi->tblJOKEYANA->Post();
    frmHataMesaji->Close();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmHataMesaji::btnAPRANTIKeyPress(TObject *Sender, char &Key)
{
    frmSonucGirisi->tblJOKEYANA->Insert();
    frmSonucGirisi->tblJOKEYANA->Edit();
    frmSonucGirisi->tblJOKEYANAADISOYADI->Value = frmSonucGirisi->tblJOKEYHARJOKEY->Value;
    frmSonucGirisi->tblJOKEYANAKAYITTURU->Value = "JOKEY";
    frmSonucGirisi->tblJOKEYANATERFI->Value = false;
    frmSonucGirisi->tblJOKEYANADEVIRTOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANADEVIRBIRINCILIGI->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMKOSU->Value = 0;
    frmSonucGirisi->tblJOKEYANATOPLAMBIRINCI->Value = 0;
    frmSonucGirisi->tblJOKEYANA->Post();
    frmHataMesaji->Close();    
}
//---------------------------------------------------------------------------
