//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "atarama.h"
#include "kayit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAtArama *frmAtArama;
//---------------------------------------------------------------------------
__fastcall TfrmAtArama::TfrmAtArama(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtArama::Button1Click(TObject *Sender)
{
    bool AtinSonucu;

    switch (frmKayitGirisi->PageControl1->ActivePageIndex) {
        case 0:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT01, frmKayitGirisi->tblKAYIT01ATIN_ADI);
            break;
        case 1:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT02, frmKayitGirisi->tblKAYIT02ATIN_ADI);
            break;
        case 2:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT03, frmKayitGirisi->tblKAYIT03ATIN_ADI);
            break;
        case 3:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT04, frmKayitGirisi->tblKAYIT04ATIN_ADI);
            break;
        case 4:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT05, frmKayitGirisi->tblKAYIT05ATIN_ADI);
            break;
        case 5:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT06, frmKayitGirisi->tblKAYIT06ATIN_ADI);
            break;
        case 6:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT07, frmKayitGirisi->tblKAYIT07ATIN_ADI);
            break;
        case 7:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT08, frmKayitGirisi->tblKAYIT08ATIN_ADI);
            break;
        case 8:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT09, frmKayitGirisi->tblKAYIT09ATIN_ADI);
            break;
        case 9:
            AtinSonucu = frmKayitGirisi->AtArama(Edit1->Text,
                frmKayitGirisi->tblKAYIT10, frmKayitGirisi->tblKAYIT10ATIN_ADI);
            break;
    }

    if (AtinSonucu == true) {
        switch (frmKayitGirisi->PageControl1->ActivePageIndex) {
            case 0: frmKayitGirisi->DBGrid1->SelectedIndex = 5; break;
            case 1: frmKayitGirisi->DBGrid2->SelectedIndex = 5; break;
            case 2: frmKayitGirisi->DBGrid3->SelectedIndex = 5; break;
            case 3: frmKayitGirisi->DBGrid4->SelectedIndex = 5; break;
            case 4: frmKayitGirisi->DBGrid5->SelectedIndex = 5; break;
            case 5: frmKayitGirisi->DBGrid6->SelectedIndex = 5; break;
            case 6: frmKayitGirisi->DBGrid7->SelectedIndex = 5; break;
            case 7: frmKayitGirisi->DBGrid8->SelectedIndex = 5; break;
            case 8: frmKayitGirisi->DBGrid9->SelectedIndex = 5; break;
            case 9: frmKayitGirisi->DBGrid10->SelectedIndex = 5; break;
        }
        frmAtArama->Close();
    }
    else {
        frmAtArama->Close();
        Application->MessageBoxA("Böyle bir ata rastlanamadý...\n",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);

    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtArama::Button2Click(TObject *Sender)
{
    frmAtArama->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAtArama::Edit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Button1Click(Sender);
        Key = 0;
    }
    else if (Key == Char(VK_ESCAPE))
        frmAtArama->Close();
}
//---------------------------------------------------------------------------

