//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "gazete.h"
#include "kayit.h"
#include "jokeyayari.h"
#include "pistgir.h"
#include "jokeyindexi.h"
#include "sonucgir.h"
#include "jokeygir.h"
#include "kayitcet.h"
#include "odul.h"
#include "hakkinda.h"
#include "at.h"
#include "ayarlar.h"
#include "handikap.h"
#include "rapor.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHorse *frmHorse;
//---------------------------------------------------------------------------
__fastcall TfrmHorse::TfrmHorse(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::Hakknda1Click(TObject *Sender)
{
    frmHakkinda->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton7Click(TObject *Sender)
{
    frmHakkinda->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton1Click(TObject *Sender)
{
    frmGazeteler->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::FormClose(TObject *Sender, TCloseAction &Action)
{
    frmGazeteRapor->querySONUC->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::HandikapPuanGiri1Click(TObject *Sender)
{
    frmHandikap->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::KaytGirileri1Click(TObject *Sender)
{
    frmKayitGirisi->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHorse::Giriler2Click(TObject *Sender)
{
    frmJokeyGiris->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::SonuGirii1Click(TObject *Sender)
{
    frmSonucGirisi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::PistGirii1Click(TObject *Sender)
{
    frmPistGirisi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::Ayarlar2Click(TObject *Sender)
{
    Application->CreateForm(__classid(TfrmJokeyAyarlari), &frmJokeyAyarlari);
    frmJokeyAyarlari->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::DosyaDzenleme1Click(TObject *Sender)
{
    frmJokeyIndex->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHorse::GazeteGirileri2Click(TObject *Sender)
{
    frmGazete->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::GazeteHareket1Click(TObject *Sender)
{
    frmGazeteler->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::AtKaytGirii1Click(TObject *Sender)
{
    KayitGirisKontrolu = false;
    frmAt->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton2Click(TObject *Sender)
{
    KayitGirisKontrolu = false;
    frmAt->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton8Click(TObject *Sender)
{
    frmTabloGoruntule->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton6Click(TObject *Sender)
{
    frmKayitGirisi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton5Click(TObject *Sender)
{
    frmJokeyGiris->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::ToolButton9Click(TObject *Sender)
{
    frmSonucGirisi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHorse::AprantiKontrolListesi1Click(TObject *Sender)
{
    frmTabloGoruntule->Show();    
}
//---------------------------------------------------------------------------

