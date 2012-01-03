//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
//---------------------------------------------------------------------------
class TfrmHorse : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Gazete1;
        TMenuItem *Kaytlar1;
        TMenuItem *Yardm1;
        TStatusBar *StatusBar1;
        TMenuItem *KaytGirileri1;
        TBevel *Bevel1;
    TToolBar *ToolBar1;
    TImageList *ImageList1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton7;
    TMenuItem *erik1;
    TMenuItem *Hakknda1;
    TImage *Image2;
    TToolButton *ToolButton3;
    TLabel *Label1;
    TMenuItem *N1;
    TMenuItem *HandikapPuanGiri1;
    TMenuItem *JokeyAprantiler1;
    TMenuItem *Giriler2;
    TMenuItem *N3;
    TMenuItem *AprantiKontrolListesi1;
    TMenuItem *SonuGirii1;
    TMenuItem *PistGirii1;
    TMenuItem *N4;
    TMenuItem *Ayarlar2;
    TMenuItem *DosyaDzenleme1;
    TMenuItem *GazeteGirileri2;
    TMenuItem *GazeteHareket1;
    TMenuItem *AtKaytGirii1;
    TToolButton *ToolButton5;
    TToolButton *ToolButton2;
    TImageList *ImageList2;
    TToolButton *ToolButton6;
    TToolButton *ToolButton8;
    TToolButton *ToolButton9;
    TToolButton *ToolButton4;
    void __fastcall Hakknda1Click(TObject *Sender);
    void __fastcall ToolButton7Click(TObject *Sender);
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall HandikapPuanGiri1Click(TObject *Sender);
    void __fastcall KaytGirileri1Click(TObject *Sender);
    void __fastcall Giriler2Click(TObject *Sender);
    void __fastcall SonuGirii1Click(TObject *Sender);
    void __fastcall PistGirii1Click(TObject *Sender);
    void __fastcall Ayarlar2Click(TObject *Sender);
    void __fastcall DosyaDzenleme1Click(TObject *Sender);
    void __fastcall GazeteGirileri2Click(TObject *Sender);
    void __fastcall GazeteHareket1Click(TObject *Sender);
    void __fastcall AtKaytGirii1Click(TObject *Sender);
    void __fastcall ToolButton2Click(TObject *Sender);
    void __fastcall ToolButton8Click(TObject *Sender);
    void __fastcall ToolButton6Click(TObject *Sender);
    void __fastcall ToolButton5Click(TObject *Sender);
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall AprantiKontrolListesi1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmHorse(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHorse *frmHorse;
//---------------------------------------------------------------------------
#endif
