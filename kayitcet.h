//---------------------------------------------------------------------------

#ifndef kayitcetH
#define kayitcetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <ExtCtrls.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmTabloGoruntule : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TDateTimePicker *datetimecomboBASLANGIC;
    TLabel *Label2;
    TDateTimePicker *datetimecomboBITIS;
    TLabel *Label3;
    TComboBox *comboPIST;
    TBevel *Bevel1;
    TAnimate *Animate1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TProgressBar *ProgressBar1;
    TQuery *queryLISTELE;
    TTable *tblJOKEYANA;
    TQuery *queryATSORGUSU;
    TLabel *Label5;
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
    TStringField *queryLISTELEREFERANS;
    TDateField *queryLISTELETARIH;
    TStringField *queryLISTELEPIST;
    TFloatField *queryLISTELEKACINCI;
    TStringField *queryLISTELEJOKEY;
    TStringField *queryLISTELEANTRENOR;
    TIntegerField *queryATSORGUSUREFERANS;
    TStringField *queryATSORGUSUADISOYADI;
    TStringField *queryATSORGUSUKAYITTURU;
    TFloatField *queryATSORGUSUDEVIRBIRINCILIGI;
    TFloatField *queryATSORGUSUDEVIRTOPLAMKOSU;
    TFloatField *queryATSORGUSUTOPLAMKOSU;
    TFloatField *queryATSORGUSUTOPLAMBIRINCI;
    TStringField *queryATSORGUSUKOSTUGUYER;
    TFloatField *queryATSORGUSUKOSUTOPLAMI;
    TFloatField *queryATSORGUSUBIRINCI;
    TFloatField *queryATSORGUSUIKINCI;
    TFloatField *queryATSORGUSUUCUNCU;
    TFloatField *queryATSORGUSUDORDUNCU;
    TSmallintField *queryATSORGUSUIKILIYUZDESI;
    TStringField *queryATSORGUSUSONONYARISI;
    TBooleanField *tblJOKEYANATERFI;
    TBooleanField *queryATSORGUSUTERFI;
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall datetimecomboBASLANGICChange(TObject *Sender);
    void __fastcall datetimecomboBITISChange(TObject *Sender);
    void __fastcall comboPISTChange(TObject *Sender);
    void __fastcall comboKATEGORIChange(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmTabloGoruntule(TComponent* Owner);
    void __fastcall BirinciEtap(void);
    void __fastcall IkinciEtap(void);
    AnsiString __fastcall Son10KosuyuDuzenle(AnsiString Dizi, int Kosu);        
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTabloGoruntule *frmTabloGoruntule;
//---------------------------------------------------------------------------
#endif
