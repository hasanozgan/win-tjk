//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "jokeyindexi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TfrmJokeyIndex *frmJokeyIndex;
//---------------------------------------------------------------------------
__fastcall TfrmJokeyIndex::TfrmJokeyIndex(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyIndex::BitBtn1Click(TObject *Sender)
{
    BitBtn2->Enabled = false;
    Animate1->Active = true;

    tblJOKEYANA->First();
    while (!tblJOKEYANA->Eof) {
        CGauge1->Progress = (tblJOKEYANA->RecNo*100)/tblJOKEYANA->RecordCount;
        if (tblJOKEYANAKAYITTURU->Value == "JOKEY") {
            queryJOKEYHAR->Close();
            queryJOKEYHAR->ParamByName("JOKEY")->AsString = tblJOKEYANAADISOYADI->Value;
            queryJOKEYHAR->Open();
            tblJOKEYANA->Edit();
            tblJOKEYANATOPLAMKOSU->Value = queryJOKEYHAR->RecordCount;
            tblJOKEYANA->Post();
            queryJOKEYKACINCI->Close();
            queryJOKEYKACINCI->ParamByName("JOKEY")->AsString = tblJOKEYANAADISOYADI->Value;
            queryJOKEYKACINCI->Open();
            tblJOKEYANA->Edit();
            tblJOKEYANATOPLAMBIRINCI->Value = queryJOKEYKACINCI->RecordCount;
            tblJOKEYANA->Post();
        }
        else {
            queryANTRENORHAR->Close();
            queryANTRENORHAR->ParamByName("ANTRENOR")->AsString = tblJOKEYANAADISOYADI->Value;
            queryANTRENORHAR->Open();
            tblJOKEYANA->Edit();
            tblJOKEYANATOPLAMKOSU->Value = queryANTRENORHAR->RecordCount;
            tblJOKEYANA->Post();
            queryANTRENORKACINCI->Close();
            queryANTRENORKACINCI->ParamByName("ANTRENOR")->AsString = tblJOKEYANAADISOYADI->Value;
            queryANTRENORKACINCI->Open();
            tblJOKEYANA->Edit();
            tblJOKEYANATOPLAMBIRINCI->Value = queryANTRENORKACINCI->RecordCount;
            tblJOKEYANA->Post();
        }
        tblJOKEYANA->Next();
    }
    Animate1->Active = false;
    BitBtn2->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyIndex::BitBtn2Click(TObject *Sender)
{
    frmJokeyIndex->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyIndex::FormShow(TObject *Sender)
{
    CGauge1->Progress = 0;
    tblJOKEYANA->Active = true;
    queryJOKEYHAR->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyIndex::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblJOKEYANA->Active = false;
    queryJOKEYHAR->Active = false;
}
//---------------------------------------------------------------------------

