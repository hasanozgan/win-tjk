//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "handikap.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHandikap *frmHandikap;
//---------------------------------------------------------------------------
__fastcall TfrmHandikap::TfrmHandikap(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHandikap::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        if (DBGrid1->SelectedIndex == DBGrid1->FieldCount-1) {
            DBGrid1->SelectedIndex = 2;
            tblHANDIKAP->Next(); // ..::Database bir sonraki elemana geçiyor::..
        }
        else
            ++DBGrid1->SelectedIndex;
        Key = 0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmHandikap::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblHANDIKAP->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHandikap::FormShow(TObject *Sender)
{
    tblHANDIKAP->Open();
}
//---------------------------------------------------------------------------

