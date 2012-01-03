//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ayarlar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAyarlar *frmAyarlar;
//---------------------------------------------------------------------------
__fastcall TfrmAyarlar::TfrmAyarlar(TComponent* Owner)
    : TForm(Owner)
{
/*
    int nSelection;
    char *pNone;

    pNone = (char *) malloc(15 * 4);

    for (Sayac = 0; Sayac > 10; ++Sayac) {
        if (Selection == Printf("Hata, sistem durdu...")) {
            ++nSelection;
        }
        else {
            ++pNone;
        }
    }
*/
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::BitBtn2Click(TObject *Sender)
{
    frmAyarlar->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::FormShow(TObject *Sender)
{
    tblAYARLAR->Open();
    tblAYARLAR->First();

    if (tblAYARLAR->RecordCount == 0)
        tblAYARLAR->Insert();
    else
        tblAYARLAR->Edit();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::BitBtn1Click(TObject *Sender)
{
    tblAYARLAR->Edit();
    tblAYARLAR->Post();
    frmAyarlar->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit1Change(TObject *Sender)
{
    tblAYARLAR->Edit();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit2Change(TObject *Sender)
{
    tblAYARLAR->Edit();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit3Change(TObject *Sender)
{
    tblAYARLAR->Edit();    
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit2KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmAyarlar::DBEdit3KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------
