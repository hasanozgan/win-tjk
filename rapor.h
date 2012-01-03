//---------------------------------------------------------------------------

#ifndef raporH
#define raporH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Qrctrls.hpp>
//---------------------------------------------------------------------------
class TfrmGazeteRapor : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TDataSource *dsrcSONUC;
    TQuery *querySONUC;
    TDateField *querySONUCTARIH;
    TStringField *querySONUCGAZETELER;
    TFloatField *querySONUCGENTOP;
    TFloatField *querySONUCALTILI;
    TFloatField *querySONUCIKILI;
    TFloatField *querySONUCCITE;
    TFloatField *querySONUCSIRALIUCLU;
    TFloatField *querySONUCTABELADORTLU;
    TFloatField *querySONUCUCLUGANYAN;
    TFloatField *querySONUCGANYANTOP;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TQRDBText *QRDBText8;
    TQRDBText *QRDBText9;
    TQRLabel *QRLabel1;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmGazeteRapor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmGazeteRapor *frmGazeteRapor;
//---------------------------------------------------------------------------
#endif
