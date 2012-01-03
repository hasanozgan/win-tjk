//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "durum.h"
#include "odul.h"
#include "gazete.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmIlerlemeDurumu *frmIlerlemeDurumu;
//---------------------------------------------------------------------------
__fastcall TfrmIlerlemeDurumu::TfrmIlerlemeDurumu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmIlerlemeDurumu::BitBtn1Click(TObject *Sender)
{
    frmIlerlemeDurumu->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmIlerlemeDurumu::GanyanToplami(void)
{
    int KosanAtAdedi, Kiyas = 0;
    AnsiString Birinci, Ekuri, KosmayanAtlar;

    // 1. Koþu Hesaplanýyor . . .
    KosanAtAdedi = frmGazeteler->tblKOSU01KOSAN_AT_ADEDI->Value;
    Ekuri = frmGazeteler->tblKOSU01EKURI_AT->Value;
    Birinci = frmGazeteler->tblKOSU01BIRINCI->Value;
    KosmayanAtlar = frmGazeteler->tblKOSU01CIKAN_ATLAR->Value;

    if (frmGazeteler->Karsilastir(Ekuri, Birinci) == 0) {
        frmGazeteler->tblTAHMIN->First();
        frmGazeteler->tblSONUC->First();
        while (!frmGazeteler->tblTAHMIN->Eof) {
            Kiyas = frmGazeteler->Karsilastir(frmGazeteler->tblTAHMINKOSU01->Value, Birinci);
            frmGazeteler->tblSONUC->Edit();
            frmGazeteler->tblSONUCGANYANTOP->Value += frmGazeteler->GTPuanlama(KosanAtAdedi, Kiyas);
            frmGazeteler->tblTAHMIN->Next();
            frmGazeteler->tblSONUC->Next();
        }
    }
    else {
        frmGazeteler->tblTAHMIN->First();
        frmGazeteler->tblSONUC->First();
        while (!frmGazeteler->tblTAHMIN->Eof) {
            Kiyas = frmGazeteler->Karsilastir(frmGazeteler->tblTAHMINKOSU01->Value, Ekuri);
            frmGazeteler->tblSONUC->Edit();
            frmGazeteler->tblSONUCGANYANTOP->Value += frmGazeteler->GTPuanlama(KosanAtAdedi, Kiyas);
            frmGazeteler->tblTAHMIN->Next();
            frmGazeteler->tblSONUC->Next();
        }
    }
    CheckBox1->Checked = true;
}



void __fastcall TfrmIlerlemeDurumu::BitBtn2Click(TObject *Sender)
{
    GanyanToplami();     
}
//---------------------------------------------------------------------------

