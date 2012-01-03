//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "jokeyayari.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmJokeyAyarlari *frmJokeyAyarlari;
//---------------------------------------------------------------------------
__fastcall TfrmJokeyAyarlari::TfrmJokeyAyarlari(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmJokeyAyarlari::BitBtn1Click(TObject *Sender)
{
    tblPISTAYARI->Edit();
    tblPISTAYARI->Post();
    frmJokeyAyarlari->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyAyarlari::FormShow(TObject *Sender)
{
    tblPISTAYARI->Active = true;
    tblPISTAYARI->Insert();
    tblPISTAYARI->First();
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyAyarlari::dbeditAYARLARKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        tblPISTAYARI->Edit();
        tblPISTAYARI->Post();
        frmJokeyAyarlari->Close();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmJokeyAyarlari::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    tblPISTAYARI->Active = false;    
}
//---------------------------------------------------------------------------

