//---------------------------------------------------------------------------

#ifndef pistgirH
#define pistgirH
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
class TfrmPistGirisi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcPIST;
    TTable *tblPIST;
    TStringField *tblPISTPISTYERI;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmPistGirisi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPistGirisi *frmPistGirisi;
//---------------------------------------------------------------------------
#endif
