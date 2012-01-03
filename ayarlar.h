//---------------------------------------------------------------------------

#ifndef ayarlarH
#define ayarlarH
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
class TfrmAyarlar : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TDataSource *dsrcAYARLAR;
    TTable *tblAYARLAR;
    TFloatField *tblAYARLARCIKARILACAKFIYAT;
    TFloatField *tblAYARLARVERILECEKPUAN;
    TFloatField *tblAYARLARBOLUNECEKPUAN;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TLabel *Label10;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBEdit *DBEdit6;
    TDBEdit *DBEdit7;
    TDBEdit *DBEdit8;
    TDBEdit *DBEdit9;
    TDBEdit *DBEdit10;
    TFloatField *tblAYARLARALTILIPUAN;
    TFloatField *tblAYARLARIKILIPUAN;
    TFloatField *tblAYARLARCIFTEPUAN;
    TFloatField *tblAYARLARSIRALIUCLUPUAN;
    TFloatField *tblAYARLARTABELASIRALIPUAN;
    TFloatField *tblAYARLARTABELAKARISIKPUAN;
    TFloatField *tblAYARLARUCLUGANYANPUAN;
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall DBEdit1Change(TObject *Sender);
    void __fastcall DBEdit2Change(TObject *Sender);
    void __fastcall DBEdit3Change(TObject *Sender);
    void __fastcall DBEdit1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit2KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit3KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAyarlar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAyarlar *frmAyarlar;
//---------------------------------------------------------------------------
#endif
