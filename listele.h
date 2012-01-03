//---------------------------------------------------------------------------

#ifndef frmListeleDenemeH
#define frmListeleDenemeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <ToolWin.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TfrmListele : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDataSource *dsrcJOKEY;
    TQuery *queryJOKEY;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TDBGrid *DBGrid1;
    TIntegerField *queryJOKEYREFERANS;
    TStringField *queryJOKEYADISOYADI;
    TStringField *queryJOKEYKAYITTURU;
    TFloatField *queryJOKEYDEVIRBIRINCILIGI;
    TFloatField *queryJOKEYDEVIRTOPLAMKOSU;
    TFloatField *queryJOKEYTOPLAMKOSU;
    TFloatField *queryJOKEYTOPLAMBIRINCI;
    TStringField *queryJOKEYKOSTUGUYER;
    TFloatField *queryJOKEYKOSUTOPLAMI;
    TFloatField *queryJOKEYBIRINCI;
    TFloatField *queryJOKEYIKINCI;
    TFloatField *queryJOKEYUCUNCU;
    TFloatField *queryJOKEYDORDUNCU;
    TSmallintField *queryJOKEYIKILIYUZDESI;
    TStringField *queryJOKEYSONONYARISI;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid3;
    TDataSource *dsrcAPRANTI;
    TQuery *queryAPRANTI;
    TDataSource *dsrcANTRENOR;
    TQuery *queryANTRENOR;
    TCoolBar *CoolBar1;
    TSpeedButton *SpeedButton1;
    TTable *tblPISTAYARI;
    TFloatField *tblPISTAYARIGECISSAYISI;
    TSaveDialog *SaveDialog1;
    TIntegerField *queryAPRANTIREFERANS;
    TStringField *queryAPRANTIADISOYADI;
    TStringField *queryAPRANTIKAYITTURU;
    TFloatField *queryAPRANTIDEVIRBIRINCILIGI;
    TFloatField *queryAPRANTIDEVIRTOPLAMKOSU;
    TFloatField *queryAPRANTITOPLAMKOSU;
    TFloatField *queryAPRANTITOPLAMBIRINCI;
    TStringField *queryAPRANTIKOSTUGUYER;
    TFloatField *queryAPRANTIKOSUTOPLAMI;
    TFloatField *queryAPRANTIBIRINCI;
    TFloatField *queryAPRANTIIKINCI;
    TFloatField *queryAPRANTIUCUNCU;
    TFloatField *queryAPRANTIDORDUNCU;
    TSmallintField *queryAPRANTIIKILIYUZDESI;
    TStringField *queryAPRANTISONONYARISI;
    TIntegerField *queryANTRENORREFERANS;
    TStringField *queryANTRENORADISOYADI;
    TStringField *queryANTRENORKAYITTURU;
    TFloatField *queryANTRENORDEVIRBIRINCILIGI;
    TFloatField *queryANTRENORDEVIRTOPLAMKOSU;
    TFloatField *queryANTRENORTOPLAMKOSU;
    TFloatField *queryANTRENORTOPLAMBIRINCI;
    TStringField *queryANTRENORKOSTUGUYER;
    TFloatField *queryANTRENORKOSUTOPLAMI;
    TFloatField *queryANTRENORBIRINCI;
    TFloatField *queryANTRENORIKINCI;
    TFloatField *queryANTRENORUCUNCU;
    TFloatField *queryANTRENORDORDUNCU;
    TSmallintField *queryANTRENORIKILIYUZDESI;
    TStringField *queryANTRENORSONONYARISI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmListele(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmListele *frmListele;
//---------------------------------------------------------------------------
#endif
