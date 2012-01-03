//---------------------------------------------------------------------------

#ifndef sonucgirH
#define sonucgirH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmSonucGirisi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TImageList *ImageList1;
    TComboBox *comboKosuNo;
    TComboBox *comboPist;
    TDateTimePicker *DateTimePicker1;
    TDataSource *dsrcJOKEYHAR;
    TTable *tblJOKEYHAR;
    TPopupMenu *PopupMenu1;
    TMenuItem *Yeni1;
    TMenuItem *Kaydet1;
    TMenuItem *Sil1;
    TImageList *ImageList2;
    TQuery *querySONUCSILME;
    TSpeedButton *SpeedButton2;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton3;
    TQuery *queryKAYITKONTROL;
    TSpeedButton *SpeedButton4;
    TStringField *tblJOKEYHARREFERANS;
    TDateField *tblJOKEYHARTARIH;
    TStringField *tblJOKEYHARPIST;
    TFloatField *tblJOKEYHARKACINCI;
    TStringField *tblJOKEYHARJOKEY;
    TStringField *tblJOKEYHARANTRENOR;
    TIntegerField *queryKAYITKONTROLREFERANS;
    TStringField *queryKAYITKONTROLADISOYADI;
    TStringField *queryKAYITKONTROLKAYITTURU;
    TFloatField *queryKAYITKONTROLDEVIRBIRINCILIGI;
    TFloatField *queryKAYITKONTROLDEVIRTOPLAMKOSU;
    TFloatField *queryKAYITKONTROLTOPLAMKOSU;
    TFloatField *queryKAYITKONTROLTOPLAMBIRINCI;
    TStringField *queryKAYITKONTROLKOSTUGUYER;
    TFloatField *queryKAYITKONTROLKOSUTOPLAMI;
    TFloatField *queryKAYITKONTROLBIRINCI;
    TFloatField *queryKAYITKONTROLIKINCI;
    TFloatField *queryKAYITKONTROLUCUNCU;
    TFloatField *queryKAYITKONTROLDORDUNCU;
    TSmallintField *queryKAYITKONTROLIKILIYUZDESI;
    TStringField *queryKAYITKONTROLSONONYARISI;
    TTable *tblJOKEYANA;
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
    TBooleanField *tblJOKEYHARISARETLE;
    TBooleanField *tblJOKEYANATERFI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DateTimePicker1Change(TObject *Sender);
    void __fastcall comboPistChange(TObject *Sender);
    void __fastcall comboKosuNoChange(TObject *Sender);
    void __fastcall tblJOKEYHARBeforePost(TDataSet *DataSet);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall dsrcJOKEYHARDataChange(TObject *Sender, TField *Field);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall SpeedButton4Click(TObject *Sender);
    void __fastcall tblJOKEYHARAfterInsert(TDataSet *DataSet);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSonucGirisi(TComponent* Owner);
    void __fastcall KosuPistiYukle(void);
    void __fastcall ListeFiltrele(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSonucGirisi *frmSonucGirisi;
//---------------------------------------------------------------------------
#endif
