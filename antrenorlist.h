//---------------------------------------------------------------------------

#ifndef antrenorlistH
#define antrenorlistH
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
class TfrmAntrenorListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TComboBox *ComboBox1;
    TLabel *Label1;
    TEdit *Edit1;
    TLabel *Label2;
    TDBGrid *DBGrid1;
    TDataSource *dsrcJOKEYANA;
    TQuery *queryJOKEYANA;
    TIntegerField *queryJOKEYANAREFERANS;
    TStringField *queryJOKEYANAADISOYADI;
    TStringField *queryJOKEYANAKAYITTURU;
    TFloatField *queryJOKEYANADEVIRBIRINCILIGI;
    TFloatField *queryJOKEYANADEVIRTOPLAMKOSU;
    TFloatField *queryJOKEYANATOPLAMKOSU;
    TFloatField *queryJOKEYANATOPLAMBIRINCI;
    TStringField *queryJOKEYANAKOSTUGUYER;
    TFloatField *queryJOKEYANAKOSUTOPLAMI;
    TFloatField *queryJOKEYANABIRINCI;
    TFloatField *queryJOKEYANAIKINCI;
    TFloatField *queryJOKEYANAUCUNCU;
    TFloatField *queryJOKEYANADORDUNCU;
    TSmallintField *queryJOKEYANAIKILIYUZDESI;
    TStringField *queryJOKEYANASONONYARISI;
    void __fastcall ComboBox1Change(TObject *Sender);
    void __fastcall Edit1Change(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAntrenorListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAntrenorListesi *frmAntrenorListesi;
//---------------------------------------------------------------------------
#endif
