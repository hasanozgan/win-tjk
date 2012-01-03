//---------------------------------------------------------------------------

#ifndef jokeylistH
#define jokeylistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmJokeyListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TEdit *Edit1;
    TDataSource *dsrcJOKEYLIST;
    TQuery *queryJOKEYLIST;
    TIntegerField *queryJOKEYLISTREFERANS;
    TStringField *queryJOKEYLISTADISOYADI;
    TStringField *queryJOKEYLISTKAYITTURU;
    TFloatField *queryJOKEYLISTDEVIRBIRINCILIGI;
    TFloatField *queryJOKEYLISTDEVIRTOPLAMKOSU;
    TStringField *queryJOKEYLISTKOSTUGUYER;
    TFloatField *queryJOKEYLISTKOSUTOPLAMI;
    TFloatField *queryJOKEYLISTBIRINCI;
    TFloatField *queryJOKEYLISTIKINCI;
    TFloatField *queryJOKEYLISTUCUNCU;
    TFloatField *queryJOKEYLISTDORDUNCU;
    TSmallintField *queryJOKEYLISTIKILIYUZDESI;
    TStringField *queryJOKEYLISTSONONYARISI;
    TFloatField *queryJOKEYLISTTOPLAMKOSU;
    TFloatField *queryJOKEYLISTTOPLAMBIRINCI;
    TBooleanField *queryJOKEYLISTTERFI;
    void __fastcall Edit1Change(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmJokeyListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmJokeyListesi *frmJokeyListesi;
//---------------------------------------------------------------------------
#endif
