//---------------------------------------------------------------------------

#ifndef atlistH
#define atlistH
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
class TfrmAtListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TComboBox *ComboBox1;
    TLabel *Label1;
    TEdit *Edit1;
    TLabel *Label2;
    TDataSource *dsrcATLISTESI;
    TQuery *queryATLISTESI;
    TStringField *queryATLISTESIATIN_ADI;
    TStringField *queryATLISTESICINSI;
    TStringField *queryATLISTESIBABASI;
    TStringField *queryATLISTESIANASI;
    TFloatField *queryATLISTESIHANDIKAP;
    TFloatField *queryATLISTESIDOGUMTAR;
    TStringField *queryATLISTESISAHIBI;
    TStringField *queryATLISTESIANTRENOR;
    TIntegerField *queryATLISTESIREFERANSNO;
    void __fastcall ComboBox1Change(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAtListesi(TComponent* Owner);
    void __fastcall AtBilgisiEkle(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAtListesi *frmAtListesi;
extern bool AtListesiKontrolu;
//---------------------------------------------------------------------------
#endif
