//---------------------------------------------------------------------------

#ifndef jokeygirH
#define jokeygirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmJokeyGiris : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TImageList *ImageList1;
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TLabel *Label1;
    TDBEdit *dbeditAdiSoyadi;
    TGroupBox *GroupBox2;
    TLabel *Label4;
    TLabel *Label5;
    TDBEdit *dbeditYuzde;
    TDBEdit *dbeditOnYarisi;
    TLabel *Label2;
    TBevel *Bevel1;
    TLabel *Label3;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TDBEdit *dbeditDorduncu;
    TDBEdit *dbeditUcuncu;
    TDBEdit *dbeditIkinci;
    TDBEdit *dbeditBirincilik;
    TDBEdit *dbeditKosuToplami;
    TStatusBar *StatusBar1;
    TDataSource *dsrcJOKEYANA;
    TTable *tblJOKEYANA;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TComboBox *comboPist;
    TQuery *queryADKONTROL;
    TDBEdit *dbeditTopKosSay;
    TDBEdit *dbeditTopBirSay;
    TLabel *Label11;
    TLabel *Label12;
    TToolButton *ToolButton3;
    TLabel *Label10;
    TComboBox *comboKayitTuru;
    TIntegerField *queryADKONTROLREFERANS;
    TStringField *queryADKONTROLADISOYADI;
    TStringField *queryADKONTROLKAYITTURU;
    TFloatField *queryADKONTROLDEVIRBIRINCILIGI;
    TFloatField *queryADKONTROLDEVIRTOPLAMKOSU;
    TStringField *queryADKONTROLKOSTUGUYER;
    TFloatField *queryADKONTROLKOSUTOPLAMI;
    TFloatField *queryADKONTROLBIRINCI;
    TFloatField *queryADKONTROLIKINCI;
    TFloatField *queryADKONTROLUCUNCU;
    TFloatField *queryADKONTROLDORDUNCU;
    TSmallintField *queryADKONTROLIKILIYUZDESI;
    TStringField *queryADKONTROLSONONYARISI;
    TAutoIncField *tblJOKEYANAREFERANS;
    TStringField *tblJOKEYANAADISOYADI;
    TStringField *tblJOKEYANAKAYITTURU;
    TFloatField *tblJOKEYANADEVIRBIRINCILIGI;
    TFloatField *tblJOKEYANADEVIRTOPLAMKOSU;
    TFloatField *tblJOKEYANATOPLAMKOSU;
    TFloatField *tblJOKEYANATOPLAMBIRINCI;
    TStringField *tblJOKEYANAKOSTUGUYER;
    TFloatField *tblJOKEYANAKOSUTOPLAMI;
    TFloatField *tblJOKEYANABIRINCI;
    TFloatField *tblJOKEYANAIKINCI;
    TFloatField *tblJOKEYANAUCUNCU;
    TFloatField *tblJOKEYANADORDUNCU;
    TSmallintField *tblJOKEYANAIKILIYUZDESI;
    TStringField *tblJOKEYANASONONYARISI;
    TDBEdit *dbeditTOPKOS;
    TDBEdit *dbeditTOPBIR;
    TBooleanField *tblJOKEYANATERFI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall tbtnYENIClick(TObject *Sender);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall tbtnSILClick(TObject *Sender);
    void __fastcall dbcomboKayitTuruChange(TObject *Sender);
    void __fastcall dbeditAdiSoyadiChange(TObject *Sender);
    void __fastcall comboPistChange(TObject *Sender);
    void __fastcall dbeditKosuToplamiChange(TObject *Sender);
    void __fastcall dbeditBirincilikChange(TObject *Sender);
    void __fastcall dbeditIkinciChange(TObject *Sender);
    void __fastcall dbeditUcuncuChange(TObject *Sender);
    void __fastcall dbeditDorduncuChange(TObject *Sender);
    void __fastcall dbeditYuzdeChange(TObject *Sender);
    void __fastcall dbeditOnYarisiChange(TObject *Sender);
    void __fastcall dbcomboKayitTuruKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditAdiSoyadiKeyPress(TObject *Sender, char &Key);
    void __fastcall comboPistKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall tbtnACClick(TObject *Sender);
    void __fastcall dbeditTopKosSayKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditTopBirSayKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditTopKosSayChange(TObject *Sender);
    void __fastcall dbeditTopBirSayChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmJokeyGiris(TComponent* Owner);
    void __fastcall KosuPistiYukle(void);
    void __fastcall Kilit(void);
    void __fastcall Anahtar(void);   
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmJokeyGiris *frmJokeyGiris;
extern bool KayitAsamasi;
//---------------------------------------------------------------------------
#endif
