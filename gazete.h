//---------------------------------------------------------------------------

#ifndef gazeyteH
#define gazeyteH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmGazete : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
    TDataSource *dsrcGAZETE;
    TTable *tblGAZETE;
    TStringField *tblGAZETEGAZETE_ADI;
    TStringField *tblGAZETEYETKILI;
    TStringField *tblGAZETETELEFON;
    TStringField *tblGAZETEFAX;
private:	// User declarations
public:		// User declarations
        __fastcall TfrmGazete(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmGazete *frmGazete;
//---------------------------------------------------------------------------
#endif
