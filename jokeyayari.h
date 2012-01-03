//---------------------------------------------------------------------------

#ifndef jokeyayariH
#define jokeyayariH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmJokeyAyarlari : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TDBEdit *dbeditAYARLAR;
    TBitBtn *BitBtn1;
    TDataSource *dsrcPISTAYARI;
    TTable *tblPISTAYARI;
    TFloatField *tblPISTAYARIGECISSAYISI;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall dbeditAYARLARKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmJokeyAyarlari(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmJokeyAyarlari *frmJokeyAyarlari;
//---------------------------------------------------------------------------
#endif
