//---------------------------------------------------------------------------

#ifndef jokeyindexiH
#define jokeyindexiH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include "CGAUGES.h"
//---------------------------------------------------------------------------
class TfrmJokeyIndex : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TTable *tblJOKEYANA;
    TQuery *queryJOKEYHAR;
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
    TStringField *queryJOKEYHARREFERANS;
    TDateField *queryJOKEYHARTARIH;
    TStringField *queryJOKEYHARPIST;
    TFloatField *queryJOKEYHARKACINCI;
    TStringField *queryJOKEYHARJOKEY;
    TStringField *queryJOKEYHARANTRENOR;
    TBooleanField *queryJOKEYHARISARETLE;
    TBitBtn *BitBtn2;
    TBitBtn *BitBtn1;
    TBooleanField *tblJOKEYANATERFI;
    TQuery *queryJOKEYKACINCI;
    TStringField *StringField1;
    TDateField *DateField1;
    TStringField *StringField2;
    TFloatField *FloatField1;
    TStringField *StringField3;
    TStringField *StringField4;
    TBooleanField *BooleanField1;
    TCGauge *CGauge1;
    TAnimate *Animate1;
    TStringField *queryANTRENORKACINCIStringField5;
    TDateField *queryANTRENORKACINCIDateField2;
    TStringField *queryANTRENORKACINCIStringField6;
    TFloatField *queryANTRENORKACINCIFloatField2;
    TStringField *queryANTRENORKACINCIStringField7;
    TStringField *queryANTRENORKACINCIStringField8;
    TBooleanField *queryANTRENORKACINCIBooleanField2;
    TQuery *queryANTRENORHAR;
    TStringField *StringField9;
    TDateField *DateField3;
    TStringField *StringField10;
    TFloatField *FloatField3;
    TStringField *StringField11;
    TStringField *StringField12;
    TBooleanField *BooleanField3;
    TQuery *queryANTRENORKACINCI;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmJokeyIndex(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmJokeyIndex *frmJokeyIndex;
//---------------------------------------------------------------------------
#endif
