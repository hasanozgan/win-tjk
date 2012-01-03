//---------------------------------------------------------------------------

#ifndef kayitH
#define kayitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <stdio.h>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
// At kayýt Bilgisi Yapýsýdýr
typedef struct ek_AtKayitBilgisi {
    double HandikapPuani;
    AnsiString AtinAdi;
    AnsiString Orjini;
    AnsiString Antrenor;
    double AtinYasi;
    bool Isaret;
} AtKayitBilgisi;
// At kayýt Bilgisi Yapýsý sonu ...

class TfrmKayitGirisi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TToolBar *ToolBar1;
    TDateTimePicker *DateTimePicker1;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TToolButton *ToolButton8;
    TToolButton *ToolButton9;
    TImageList *ImageList1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TTabSheet *TabSheet4;
    TTabSheet *TabSheet5;
    TTabSheet *TabSheet6;
    TTabSheet *TabSheet7;
    TTabSheet *TabSheet8;
    TTabSheet *TabSheet9;
    TTabSheet *TabSheet10;
    TDBGrid *DBGrid1;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid3;
    TDBGrid *DBGrid4;
    TDBGrid *DBGrid5;
    TDBGrid *DBGrid6;
    TDBGrid *DBGrid7;
    TDBGrid *DBGrid8;
    TDBGrid *DBGrid9;
    TDBGrid *DBGrid10;
    TDataSource *dsrcKAYIT01;
    TTable *tblKAYIT01;
    TDataSource *dsrcKAYIT02;
    TDataSource *dsrcKAYIT03;
    TDataSource *dsrcKAYIT04;
    TDataSource *dsrcKAYIT05;
    TDataSource *dsrcKAYIT06;
    TDataSource *dsrcKAYIT07;
    TDataSource *dsrcKAYIT08;
    TDataSource *dsrcKAYIT09;
    TTable *tblKAYIT02;
    TTable *tblKAYIT03;
    TTable *tblKAYIT04;
    TTable *tblKAYIT05;
    TTable *tblKAYIT06;
    TTable *tblKAYIT07;
    TTable *tblKAYIT08;
    TTable *tblKAYIT09;
    TDataSource *dsrcKAYIT10;
    TTable *tblKAYIT10;
    TDBEdit *dbeditKAYIT01;
    TDBEdit *dbeditKAYIT02;
    TDBEdit *dbeditKAYIT03;
    TDBEdit *dbeditKAYIT04;
    TDBEdit *dbeditKAYIT05;
    TDBEdit *dbeditKAYIT06;
    TDBEdit *dbeditKAYIT07;
    TDBEdit *dbeditKAYIT08;
    TDBEdit *dbeditKAYIT09;
    TDBEdit *dbeditKAYIT10;
    TToolButton *ToolButton10;
    TToolButton *ToolButton12;
    TDataSource *dsrcACIKLAMA;
    TTable *tblACIKLAMA;
    TPopupMenu *PopupMenu1;
    TMenuItem *Ekle1;
    TMenuItem *Sil1;
    TDateField *tblACIKLAMATARIH;
    TStringField *tblACIKLAMAKOSU01;
    TStringField *tblACIKLAMAKOSU02;
    TStringField *tblACIKLAMAKOSU03;
    TStringField *tblACIKLAMAKOSU04;
    TStringField *tblACIKLAMAKOSU05;
    TStringField *tblACIKLAMAKOSU06;
    TStringField *tblACIKLAMAKOSU07;
    TStringField *tblACIKLAMAKOSU08;
    TStringField *tblACIKLAMAKOSU09;
    TStringField *tblACIKLAMAKOSU10;
    TQuery *querySIL;
    TDBComboBox *DBComboBox1;
    TDBComboBox *DBComboBox2;
    TDBComboBox *DBComboBox3;
    TDBComboBox *DBComboBox4;
    TDBComboBox *DBComboBox5;
    TDBComboBox *DBComboBox6;
    TDBComboBox *DBComboBox7;
    TDBComboBox *DBComboBox8;
    TDBComboBox *DBComboBox9;
    TDBComboBox *DBComboBox10;
    TStringField *tblACIKLAMATUR01;
    TStringField *tblACIKLAMATUR02;
    TStringField *tblACIKLAMATUR03;
    TStringField *tblACIKLAMATUR04;
    TStringField *tblACIKLAMATUR05;
    TStringField *tblACIKLAMATUR06;
    TStringField *tblACIKLAMATUR07;
    TStringField *tblACIKLAMATUR08;
    TStringField *tblACIKLAMATUR09;
    TStringField *tblACIKLAMATUR10;
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
    TSaveDialog *SaveDialog1;
    TAutoIncField *tblKAYIT01REFERANS;
    TDateField *tblKAYIT01TARIH;
    TFloatField *tblKAYIT01HANDIKAP;
    TStringField *tblKAYIT01ATIN_ADI;
    TStringField *tblKAYIT01ORJINI;
    TStringField *tblKAYIT01ANTRENOR;
    TFloatField *tblKAYIT01YASI;
    TStringField *tblKAYIT01DERECESI;
    TAutoIncField *tblKAYIT02REFERANS;
    TDateField *tblKAYIT02TARIH;
    TFloatField *tblKAYIT02HANDIKAP;
    TStringField *tblKAYIT02ATIN_ADI;
    TStringField *tblKAYIT02ORJINI;
    TStringField *tblKAYIT02ANTRENOR;
    TFloatField *tblKAYIT02YASI;
    TStringField *tblKAYIT02DERECESI;
    TAutoIncField *tblKAYIT03REFERANS;
    TDateField *tblKAYIT03TARIH;
    TFloatField *tblKAYIT03HANDIKAP;
    TStringField *tblKAYIT03ATIN_ADI;
    TStringField *tblKAYIT03ORJINI;
    TStringField *tblKAYIT03ANTRENOR;
    TFloatField *tblKAYIT03YASI;
    TStringField *tblKAYIT03DERECESI;
    TAutoIncField *tblKAYIT04REFERANS;
    TDateField *tblKAYIT04TARIH;
    TFloatField *tblKAYIT04HANDIKAP;
    TStringField *tblKAYIT04ATIN_ADI;
    TStringField *tblKAYIT04ORJINI;
    TStringField *tblKAYIT04ANTRENOR;
    TFloatField *tblKAYIT04YASI;
    TStringField *tblKAYIT04DERECESI;
    TAutoIncField *tblKAYIT05REFERANS;
    TDateField *tblKAYIT05TARIH;
    TFloatField *tblKAYIT05HANDIKAP;
    TStringField *tblKAYIT05ATIN_ADI;
    TStringField *tblKAYIT05ORJINI;
    TStringField *tblKAYIT05ANTRENOR;
    TFloatField *tblKAYIT05YASI;
    TStringField *tblKAYIT05DERECESI;
    TAutoIncField *tblKAYIT06REFERANS;
    TDateField *tblKAYIT06TARIH;
    TFloatField *tblKAYIT06HANDIKAP;
    TStringField *tblKAYIT06ATIN_ADI;
    TStringField *tblKAYIT06ORJINI;
    TStringField *tblKAYIT06ANTRENOR;
    TFloatField *tblKAYIT06YASI;
    TStringField *tblKAYIT06DERECESI;
    TAutoIncField *tblKAYIT07REFERANS;
    TDateField *tblKAYIT07TARIH;
    TFloatField *tblKAYIT07HANDIKAP;
    TStringField *tblKAYIT07ATIN_ADI;
    TStringField *tblKAYIT07ORJINI;
    TStringField *tblKAYIT07ANTRENOR;
    TFloatField *tblKAYIT07YASI;
    TStringField *tblKAYIT07DERECESI;
    TAutoIncField *tblKAYIT08REFERANS;
    TDateField *tblKAYIT08TARIH;
    TFloatField *tblKAYIT08HANDIKAP;
    TStringField *tblKAYIT08ATIN_ADI;
    TStringField *tblKAYIT08ORJINI;
    TStringField *tblKAYIT08ANTRENOR;
    TFloatField *tblKAYIT08YASI;
    TStringField *tblKAYIT08DERECESI;
    TAutoIncField *tblKAYIT09REFERANS;
    TDateField *tblKAYIT09TARIH;
    TFloatField *tblKAYIT09HANDIKAP;
    TStringField *tblKAYIT09ATIN_ADI;
    TStringField *tblKAYIT09ORJINI;
    TStringField *tblKAYIT09ANTRENOR;
    TFloatField *tblKAYIT09YASI;
    TStringField *tblKAYIT09DERECESI;
    TAutoIncField *tblKAYIT10REFERANS;
    TDateField *tblKAYIT10TARIH;
    TFloatField *tblKAYIT10HANDIKAP;
    TStringField *tblKAYIT10ATIN_ADI;
    TStringField *tblKAYIT10ORJINI;
    TStringField *tblKAYIT10ANTRENOR;
    TFloatField *tblKAYIT10YASI;
    TStringField *tblKAYIT10DERECESI;
    TStatusBar *StatusBar1;
    TToolButton *ToolButton6;
    TToolButton *ToolButton13;
    TMenuItem *Ara1;
    TTable *tblAT;
    TStringField *tblATATIN_ADI;
    TStringField *tblATCINSI;
    TStringField *tblATBABASI;
    TStringField *tblATANASI;
    TFloatField *tblATHANDIKAP;
    TFloatField *tblATDOGUMTAR;
    TStringField *tblATSAHIBI;
    TStringField *tblATANTRENOR;
    TAutoIncField *tblATREFERANSNO;
    void __fastcall ToolButton3Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DateTimePicker1Change(TObject *Sender);
    void __fastcall ToolButton5Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall Ekle1Click(TObject *Sender);
    void __fastcall ToolButton4Click(TObject *Sender);
    void __fastcall tblKAYIT01BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT02BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT03BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT04BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT05BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT06BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT07BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT08BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT09BeforePost(TDataSet *DataSet);
    void __fastcall tblKAYIT10BeforePost(TDataSet *DataSet);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid2KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid3KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid4KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid5KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid6KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid7KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid8KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid9KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid10KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT01KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT02KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT03KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT04KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT06KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT07KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT08KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT09KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT10KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKAYIT05KeyPress(TObject *Sender, char &Key);
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall dbeditKAYIT01Change(TObject *Sender);
    void __fastcall dbeditKAYIT02Change(TObject *Sender);
    void __fastcall dbeditKAYIT03Change(TObject *Sender);
    void __fastcall dbeditKAYIT04Change(TObject *Sender);
    void __fastcall dbeditKAYIT06Change(TObject *Sender);
    void __fastcall dbeditKAYIT07Change(TObject *Sender);
    void __fastcall dbeditKAYIT08Change(TObject *Sender);
    void __fastcall dbeditKAYIT09Change(TObject *Sender);
    void __fastcall dbeditKAYIT10Change(TObject *Sender);
    void __fastcall dbeditKAYIT05Change(TObject *Sender);
    void __fastcall TabSheet10Show(TObject *Sender);
    void __fastcall TabSheet9Show(TObject *Sender);
    void __fastcall TabSheet8Show(TObject *Sender);
    void __fastcall TabSheet7Show(TObject *Sender);
    void __fastcall TabSheet6Show(TObject *Sender);
    void __fastcall TabSheet5Show(TObject *Sender);
    void __fastcall TabSheet4Show(TObject *Sender);
    void __fastcall TabSheet2Show(TObject *Sender);
    void __fastcall TabSheet1Show(TObject *Sender);
    void __fastcall tblKAYIT01AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT02AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT03AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT04AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT05AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT06AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT07AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT08AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT09AfterPost(TDataSet *DataSet);
    void __fastcall tblKAYIT10AfterPost(TDataSet *DataSet);
    void __fastcall TabSheet3Show(TObject *Sender);
    void __fastcall ToolButton6Click(TObject *Sender);
    void __fastcall ToolButton12Click(TObject *Sender);
    void __fastcall Ara1Click(TObject *Sender);
    void __fastcall DBComboBox2Change(TObject *Sender);
    void __fastcall DBComboBox3Change(TObject *Sender);
    void __fastcall DBComboBox4Change(TObject *Sender);
    void __fastcall DBComboBox5Change(TObject *Sender);
    void __fastcall DBComboBox6Change(TObject *Sender);
    void __fastcall DBComboBox7Change(TObject *Sender);
    void __fastcall DBComboBox8Change(TObject *Sender);
    void __fastcall DBComboBox9Change(TObject *Sender);
    void __fastcall DBComboBox10Change(TObject *Sender);
    void __fastcall DBComboBox1Change(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmKayitGirisi(TComponent* Owner);
    void __fastcall YeniKayitEkle(void);
    void __fastcall Filtrele(TDateTime Tarih);
    void __fastcall Kosu01(FILE *fpDosya);
    void __fastcall PCtoMacConvert(char *Dizi);
    void __fastcall Kosu02(FILE *fpDosya);
    void __fastcall Kosu03(FILE *fpDosya);
    void __fastcall Kosu04(FILE *fpDosya);
    void __fastcall Kosu05(FILE *fpDosya);
    void __fastcall Kosu06(FILE *fpDosya);
    void __fastcall Kosu07(FILE *fpDosya);
    void __fastcall Kosu08(FILE *fpDosya);
    void __fastcall Kosu09(FILE *fpDosya);
    void __fastcall Kosu10(FILE *fpDosya);
    void __fastcall AtBilgisiEkle(void);
    void __fastcall KayitaEk(void);
    void __fastcall AtDetayiYerlestir(void);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);
    bool __fastcall AtArama(AnsiString SorgulanacakAt,
        TTable *tblAtTablosu, TStringField *AtinAdi);
    bool __fastcall ParantezKontrol(void);
    void __fastcall AtGuncelle(AnsiString Adi, AnsiString Cinsi);
    AnsiString __fastcall BabayiGuncelle(AnsiString Orjin);
    AnsiString __fastcall AnayiGuncelle(AnsiString Orjin);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmKayitGirisi *frmKayitGirisi;
extern AtKayitBilgisi Bilgi;
extern bool YeniKayit;
extern bool AtListesiKontrolu;
extern bool KayitGirisKontrolu;
//---------------------------------------------------------------------------
#endif
