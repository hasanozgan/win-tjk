//---------------------------------------------------------------------------

#ifndef handikapH
#define handikapH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHandikap : public TForm
{
__published:	// IDE-managed Components
    TDBGrid *DBGrid1;
    TGroupBox *GroupBox1;
    TDataSource *dsrcHANDIKAP;
    TTable *tblHANDIKAP;
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHandikap(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHandikap *frmHandikap;
//---------------------------------------------------------------------------
#endif
