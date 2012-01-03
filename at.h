//---------------------------------------------------------------------------

#ifndef atH
#define atH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TfrmAt : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label8;
    TDBEdit *dbeditATIN_ADI;
    TDBEdit *dbeditANASI;
    TDBEdit *dbeditBABASI;
    TDBEdit *dbeditDOGTAR;
    TDBEdit *dbeditHANDIKAP;
    TDBEdit *dbeditANTRENOR;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TToolButton *ToolButton8;
    TToolButton *ToolButton9;
    TToolButton *ToolButton7;
    TToolButton *ToolButton5;
    TImageList *ImageList1;
    TDataSource *dsrcAT;
    TTable *tblAT;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *nceki1;
    TMenuItem *Sonraki1;
    TMenuItem *N2;
    TMenuItem *DosyaA1;
    TMenuItem *Yazdr1;
    TMenuItem *N3;
    TMenuItem *k1;
    TQuery *queryKAYITKONTROL;
    TStringField *queryKAYITKONTROLATIN_ADI;
    TStringField *queryKAYITKONTROLCINSI;
    TStringField *queryKAYITKONTROLBABASI;
    TStringField *queryKAYITKONTROLANASI;
    TFloatField *queryKAYITKONTROLHANDIKAP;
    TFloatField *queryKAYITKONTROLDOGUMTAR;
    TStringField *queryKAYITKONTROLSAHIBI;
    TStringField *queryKAYITKONTROLANTRENOR;
    TIntegerField *queryKAYITKONTROLREFERANSNO;
    TStringField *tblATATIN_ADI;
    TStringField *tblATCINSI;
    TStringField *tblATBABASI;
    TStringField *tblATANASI;
    TFloatField *tblATHANDIKAP;
    TFloatField *tblATDOGUMTAR;
    TStringField *tblATSAHIBI;
    TStringField *tblATANTRENOR;
    TAutoIncField *tblATREFERANSNO;
    TLabel *Label6;
    TDBEdit *dbeditSAHIBI;
    TEdit *editYAS;
    TLabel *Label7;
    TComboBox *comboCINSI;
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall ToolButton2Click(TObject *Sender);
    void __fastcall ToolButton3Click(TObject *Sender);
    void __fastcall ToolButton5Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall dbeditBABASIChange(TObject *Sender);
    void __fastcall dbeditANASIChange(TObject *Sender);
    void __fastcall dbeditATIN_ADIChange(TObject *Sender);
    void __fastcall dbeditDOGTARChange(TObject *Sender);
    void __fastcall dbeditHANDIKAPChange(TObject *Sender);
    void __fastcall dbeditSAHIBIChange(TObject *Sender);
    void __fastcall dbeditANTRENORChange(TObject *Sender);
    void __fastcall dbcboxCINSIChange(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall ToolButton8Click(TObject *Sender);
    void __fastcall dbeditATIN_ADIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditANASIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditBABASIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditDOGTARKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditHANDIKAPKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditSAHIBIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditANTRENORKeyPress(TObject *Sender, char &Key);
    void __fastcall dbcboxCINSIKeyPress(TObject *Sender, char &Key);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall nceki1Click(TObject *Sender);
    void __fastcall Sonraki1Click(TObject *Sender);
    void __fastcall DosyaA1Click(TObject *Sender);
    void __fastcall Yazdr1Click(TObject *Sender);
    void __fastcall ToolButton6Click(TObject *Sender);
    void __fastcall k1Click(TObject *Sender);
    void __fastcall editYASKeyPress(TObject *Sender, char &Key);
    void __fastcall editYASChange(TObject *Sender);
    void __fastcall comboCINSIChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    void __fastcall Anahtar(void);
    void __fastcall IleriGeri(void);
    void __fastcall Kilit(void);
    __fastcall TfrmAt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAt *frmAt;
extern bool nAtKayitKontrol;
extern bool AtListesiKontrolu;
extern bool KayitGirisKontrolu;
//---------------------------------------------------------------------------
#endif
