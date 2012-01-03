//---------------------------------------------------------------------------

#ifndef odulH
#define odulH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ToolWin.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmGazeteler : public TForm
{
__published:	// IDE-managed Components
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TTabSheet *TabSheet4;
    TTabSheet *TabSheet5;
    TToolBar *ToolBar1;
    TBevel *Bevel1;
    TDateTimePicker *DateTimePicker1;
    TDBGrid *DBGrid1;
    TDBGrid *DBGrid2;
    TDBGrid *DBGrid3;
    TDBGrid *DBGrid4;
    TGroupBox *GroupBox1;
    TPageControl *PageControl2;
    TTabSheet *TabSheet6;
    TTabSheet *TabSheet7;
    TTabSheet *TabSheet8;
    TTabSheet *TabSheet9;
    TTabSheet *TabSheet10;
    TTabSheet *TabSheet11;
    TTabSheet *TabSheet12;
    TTabSheet *TabSheet13;
    TTabSheet *TabSheet14;
    TTabSheet *TabSheet15;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TDBCheckBox *DBCheckBox1;
    TDBCheckBox *DBCheckBox2;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBEdit *DBEdit6;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TDBCheckBox *DBCheckBox3;
    TDBCheckBox *DBCheckBox4;
    TDBEdit *DBEdit7;
    TDBEdit *DBEdit8;
    TDBEdit *DBEdit9;
    TDBEdit *DBEdit10;
    TDBEdit *DBEdit11;
    TDBEdit *DBEdit12;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TLabel *Label15;
    TDBCheckBox *DBCheckBox5;
    TDBCheckBox *DBCheckBox6;
    TDBEdit *DBEdit13;
    TDBEdit *DBEdit14;
    TDBEdit *DBEdit15;
    TDBEdit *DBEdit16;
    TDBEdit *DBEdit17;
    TDBEdit *DBEdit18;
    TLabel *Label16;
    TLabel *Label17;
    TLabel *Label18;
    TLabel *Label19;
    TLabel *Label20;
    TLabel *Label21;
    TDBCheckBox *DBCheckBox7;
    TDBCheckBox *DBCheckBox8;
    TDBEdit *DBEdit19;
    TDBEdit *DBEdit20;
    TDBEdit *DBEdit21;
    TDBEdit *DBEdit22;
    TDBEdit *DBEdit23;
    TDBEdit *DBEdit24;
    TLabel *Label22;
    TLabel *Label23;
    TLabel *Label24;
    TLabel *Label25;
    TLabel *Label26;
    TLabel *Label27;
    TDBCheckBox *DBCheckBox9;
    TDBCheckBox *DBCheckBox10;
    TDBEdit *DBEdit25;
    TDBEdit *DBEdit26;
    TDBEdit *DBEdit27;
    TDBEdit *DBEdit28;
    TDBEdit *DBEdit29;
    TDBEdit *DBEdit30;
    TLabel *Label28;
    TLabel *Label29;
    TLabel *Label30;
    TLabel *Label31;
    TLabel *Label32;
    TLabel *Label33;
    TDBCheckBox *DBCheckBox11;
    TDBCheckBox *DBCheckBox12;
    TDBEdit *DBEdit31;
    TDBEdit *DBEdit32;
    TDBEdit *DBEdit33;
    TDBEdit *DBEdit34;
    TDBEdit *DBEdit35;
    TDBEdit *DBEdit36;
    TLabel *Label34;
    TLabel *Label35;
    TLabel *Label36;
    TLabel *Label37;
    TLabel *Label38;
    TLabel *Label39;
    TDBCheckBox *DBCheckBox13;
    TDBCheckBox *DBCheckBox14;
    TDBEdit *DBEdit37;
    TDBEdit *DBEdit38;
    TDBEdit *DBEdit39;
    TDBEdit *DBEdit40;
    TDBEdit *DBEdit41;
    TDBEdit *DBEdit42;
    TLabel *Label40;
    TLabel *Label41;
    TLabel *Label42;
    TLabel *Label43;
    TLabel *Label44;
    TLabel *Label45;
    TDBCheckBox *DBCheckBox15;
    TDBCheckBox *DBCheckBox16;
    TDBEdit *DBEdit43;
    TDBEdit *DBEdit44;
    TDBEdit *DBEdit45;
    TDBEdit *DBEdit46;
    TDBEdit *DBEdit47;
    TDBEdit *DBEdit48;
    TLabel *Label46;
    TLabel *Label47;
    TLabel *Label48;
    TLabel *Label49;
    TLabel *Label50;
    TLabel *Label51;
    TDBCheckBox *DBCheckBox17;
    TDBCheckBox *DBCheckBox18;
    TDBEdit *DBEdit49;
    TDBEdit *DBEdit50;
    TDBEdit *DBEdit51;
    TDBEdit *DBEdit52;
    TDBEdit *DBEdit53;
    TDBEdit *DBEdit54;
    TLabel *Label52;
    TLabel *Label53;
    TLabel *Label54;
    TLabel *Label55;
    TLabel *Label56;
    TLabel *Label57;
    TDBCheckBox *DBCheckBox19;
    TDBCheckBox *DBCheckBox20;
    TDBEdit *DBEdit55;
    TDBEdit *DBEdit56;
    TDBEdit *DBEdit57;
    TDBEdit *DBEdit58;
    TDBEdit *DBEdit59;
    TDBEdit *DBEdit60;
    TLabel *Label58;
    TLabel *Label59;
    TLabel *Label60;
    TStaticText *StaticText1;
    TStaticText *StaticText2;
    TStaticText *StaticText3;
    TStaticText *StaticText4;
    TStaticText *StaticText5;
    TStaticText *StaticText6;
    TImageList *ImageList1;
    TStaticText *StaticText7;
    TStaticText *StaticText8;
    TStaticText *StaticText9;
    TStaticText *StaticText10;
    TGroupBox *GroupBox2;
    TLabel *Label61;
    TLabel *Label62;
    TLabel *Label63;
    TLabel *Label64;
    TLabel *Label65;
    TBevel *Bevel2;
    TLabel *Label66;
    TLabel *Label67;
    TDBEdit *dbeditKOSUSAYISI;
    TDBEdit *dbeditBIRINCICIFTE;
    TDBEdit *dbeditIKINCICIFTE;
    TDBEdit *dbeditUCUNCUCIFTE;
    TDBEdit *dbeditDORDUNCUCIFTE;
    TDBEdit *dbeditALTILIILKKOSU;
    TDBEdit *dbeditUCLUILKKOSU;
    TDataSource *dsrcTAHMIN;
    TTable *tblTAHMIN;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *tbtnSIL;
    TToolButton *tbtnKAYDET;
    TDataSource *dsrcGANYAN;
    TTable *tblGANYAN;
    TDataSource *dsrcIKILI;
    TTable *tblIKILI;
    TDataSource *dsrcYARIS;
    TTable *tblYARIS;
    TDataSource *dsrcKOSU01;
    TTable *tblKOSU01;
        TDataSource *dsrcSONUC;
        TTable *tblSONUC;
    TToolButton *tbtnCALISTIR;
    TToolButton *ToolButton6;
    TDataSource *dsrcKOSU02;
    TTable *tblKOSU02;
    TDataSource *dsrcKOSU03;
    TTable *tblKOSU03;
    TDataSource *dsrcKOSU04;
    TTable *tblKOSU04;
    TDataSource *dsrcKOSU05;
    TTable *tblKOSU05;
    TDataSource *dsrcKOSU06;
    TTable *tblKOSU06;
    TDataSource *dsrcKOSU07;
    TTable *tblKOSU07;
    TDataSource *dsrcKOSU08;
    TTable *tblKOSU08;
    TDataSource *dsrcKOSU09;
    TTable *tblKOSU09;
    TDataSource *dsrcKOSU10;
    TTable *tblKOSU10;
    TDateField *tblSONUCTARIH;
    TStringField *tblSONUCGAZETELER;
    TFloatField *tblSONUCGENTOP;
    TFloatField *tblSONUCALTILI;
    TFloatField *tblSONUCIKILI;
    TFloatField *tblSONUCCITE;
    TFloatField *tblSONUCSIRALIUCLU;
    TFloatField *tblSONUCTABELADORTLU;
    TFloatField *tblSONUCUCLUGANYAN;
    TFloatField *tblSONUCGANYANTOP;
    TDateField *tblYARISTARIH;
    TFloatField *tblYARISKOSU_SAYISI;
    TStringField *tblYARISBIRINCI_CIFTE;
    TStringField *tblYARISIKINCI_CIFTE;
    TStringField *tblYARISUCUNCU_CIFTE;
    TStringField *tblYARISDORDUNCU_CIFTE;
    TFloatField *tblYARISALTILI_GANYAN;
    TFloatField *tblYARISUCLU_GANYAN;
    TStringField *tblIKILIGAZETE;
    TDateField *tblIKILITARIH;
    TStringField *tblIKILIIKILIKOSU;
    TStringField *tblIKILIIKILITAHMIN;
    TStringField *tblIKILICIFTEKOSU;
    TStringField *tblIKILICIFTETAHMIN;
    TDateField *tblKOSU10TARIH;
    TFloatField *tblKOSU10KOSAN_AT_ADEDI;
    TStringField *tblKOSU10EKURI_AT;
    TStringField *tblKOSU10BIRINCI;
    TStringField *tblKOSU10IKINCI;
    TStringField *tblKOSU10UCUNCU;
    TStringField *tblKOSU10DORDUNCU;
    TBooleanField *tblKOSU10IKILI_BAHIS;
    TBooleanField *tblKOSU10UCLU_BAHIS;
    TDateField *tblKOSU01TARIH;
    TFloatField *tblKOSU01KOSAN_AT_ADEDI;
    TStringField *tblKOSU01EKURI_AT;
    TStringField *tblKOSU01BIRINCI;
    TStringField *tblKOSU01IKINCI;
    TStringField *tblKOSU01UCUNCU;
    TStringField *tblKOSU01DORDUNCU;
    TBooleanField *tblKOSU01IKILI_BAHIS;
    TBooleanField *tblKOSU01UCLU_BAHIS;
    TDateField *tblKOSU08TARIH;
    TFloatField *tblKOSU08KOSAN_AT_ADEDI;
    TStringField *tblKOSU08EKURI_AT;
    TStringField *tblKOSU08BIRINCI;
    TStringField *tblKOSU08IKINCI;
    TStringField *tblKOSU08UCUNCU;
    TStringField *tblKOSU08DORDUNCU;
    TBooleanField *tblKOSU08IKILI_BAHIS;
    TBooleanField *tblKOSU08UCLU_BAHIS;
    TDateField *tblKOSU07TARIH;
    TFloatField *tblKOSU07KOSAN_AT_ADEDI;
    TStringField *tblKOSU07EKURI_AT;
    TStringField *tblKOSU07BIRINCI;
    TStringField *tblKOSU07IKINCI;
    TStringField *tblKOSU07UCUNCU;
    TStringField *tblKOSU07DORDUNCU;
    TBooleanField *tblKOSU07IKILI_BAHIS;
    TBooleanField *tblKOSU07UCLU_BAHIS;
    TDateField *tblKOSU06TARIH;
    TFloatField *tblKOSU06KOSAN_AT_ADEDI;
    TStringField *tblKOSU06EKURI_AT;
    TStringField *tblKOSU06BIRINCI;
    TStringField *tblKOSU06IKINCI;
    TStringField *tblKOSU06UCUNCU;
    TStringField *tblKOSU06DORDUNCU;
    TBooleanField *tblKOSU06IKILI_BAHIS;
    TBooleanField *tblKOSU06UCLU_BAHIS;
    TDateField *tblKOSU05TARIH;
    TFloatField *tblKOSU05KOSAN_AT_ADEDI;
    TStringField *tblKOSU05EKURI_AT;
    TStringField *tblKOSU05BIRINCI;
    TStringField *tblKOSU05IKINCI;
    TStringField *tblKOSU05UCUNCU;
    TStringField *tblKOSU05DORDUNCU;
    TBooleanField *tblKOSU05IKILI_BAHIS;
    TBooleanField *tblKOSU05UCLU_BAHIS;
    TDateField *tblKOSU04TARIH;
    TFloatField *tblKOSU04KOSAN_AT_ADEDI;
    TStringField *tblKOSU04EKURI_AT;
    TStringField *tblKOSU04BIRINCI;
    TStringField *tblKOSU04IKINCI;
    TStringField *tblKOSU04UCUNCU;
    TStringField *tblKOSU04DORDUNCU;
    TBooleanField *tblKOSU04IKILI_BAHIS;
    TBooleanField *tblKOSU04UCLU_BAHIS;
    TDateField *tblKOSU03TARIH;
    TFloatField *tblKOSU03KOSAN_AT_ADEDI;
    TStringField *tblKOSU03EKURI_AT;
    TStringField *tblKOSU03BIRINCI;
    TStringField *tblKOSU03IKINCI;
    TStringField *tblKOSU03UCUNCU;
    TStringField *tblKOSU03DORDUNCU;
    TBooleanField *tblKOSU03IKILI_BAHIS;
    TBooleanField *tblKOSU03UCLU_BAHIS;
    TDateField *tblKOSU02TARIH;
    TFloatField *tblKOSU02KOSAN_AT_ADEDI;
    TStringField *tblKOSU02EKURI_AT;
    TStringField *tblKOSU02BIRINCI;
    TStringField *tblKOSU02IKINCI;
    TStringField *tblKOSU02UCUNCU;
    TStringField *tblKOSU02DORDUNCU;
    TBooleanField *tblKOSU02IKILI_BAHIS;
    TBooleanField *tblKOSU02UCLU_BAHIS;
    TQuery *queryGAZETELER;
    TStringField *queryGAZETELERGAZETE_ADI;
    TStringField *queryGAZETELERYETKILI;
    TStringField *queryGAZETELERTELEFON;
    TStringField *queryGAZETELERFAX;
    TDateField *tblKOSU09TARIH;
    TFloatField *tblKOSU09KOSAN_AT_ADEDI;
    TStringField *tblKOSU09EKURI_AT;
    TStringField *tblKOSU09BIRINCI;
    TStringField *tblKOSU09IKINCI;
    TStringField *tblKOSU09UCUNCU;
    TStringField *tblKOSU09DORDUNCU;
    TBooleanField *tblKOSU09IKILI_BAHIS;
    TBooleanField *tblKOSU09UCLU_BAHIS;
    TQuery *querySIL;
    TLabel *Label68;
    TLabel *Label69;
    TDBEdit *DBEdit61;
    TDBEdit *DBEdit62;
    TLabel *Label70;
    TLabel *Label71;
    TDBEdit *DBEdit63;
    TDBEdit *DBEdit64;
    TLabel *Label72;
    TLabel *Label73;
    TDBEdit *DBEdit65;
    TDBEdit *DBEdit66;
    TLabel *Label74;
    TLabel *Label75;
    TDBEdit *DBEdit67;
    TDBEdit *DBEdit68;
    TLabel *Label76;
    TLabel *Label77;
    TDBEdit *DBEdit69;
    TDBEdit *DBEdit70;
    TLabel *Label78;
    TLabel *Label79;
    TDBEdit *DBEdit71;
    TDBEdit *DBEdit72;
    TLabel *Label80;
    TLabel *Label81;
    TDBEdit *DBEdit73;
    TDBEdit *DBEdit74;
    TLabel *Label82;
    TLabel *Label83;
    TDBEdit *DBEdit75;
    TDBEdit *DBEdit76;
    TLabel *Label84;
    TLabel *Label85;
    TDBEdit *DBEdit77;
    TDBEdit *DBEdit78;
    TLabel *Label86;
    TLabel *Label87;
    TDBEdit *DBEdit79;
    TDBEdit *DBEdit80;
    TStringField *tblKOSU01CIKAN_ATLAR;
    TStringField *tblKOSU01EFG;
    TStringField *tblKOSU08CIKAN_ATLAR;
    TStringField *tblKOSU08EFG;
    TStringField *tblKOSU07CIKAN_ATLAR;
    TStringField *tblKOSU07EFG;
    TStringField *tblKOSU06CIKAN_ATLAR;
    TStringField *tblKOSU06EFG;
    TStringField *tblKOSU05CIKAN_ATLAR;
    TStringField *tblKOSU05EFG;
    TStringField *tblKOSU04CIKAN_ATLAR;
    TStringField *tblKOSU04EFG;
    TStringField *tblKOSU03CIKAN_ATLAR;
    TStringField *tblKOSU03EFG;
    TStringField *tblKOSU02CIKAN_ATLAR;
    TStringField *tblKOSU02EFG;
    TStringField *tblKOSU09CIKAN_ATLAR;
    TStringField *tblKOSU09EFG;
    TStringField *tblKOSU10CIKAN_ATLAR;
    TStringField *tblKOSU10EFG;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TDBEdit *dbeditTABELA;
    TLabel *Label88;
    TStringField *tblYARISTABELAKOSUSU;
    TToolButton *ToolButton5;
    TToolButton *ToolButton7;
    TLabel *Label89;
    TDBEdit *DBEdit81;
    TToolButton *ToolButton8;
    TToolButton *ToolButton9;
    TFloatField *tblYARISALTILI_IKRAMIYE;
    TDataSource *dsrcAYARLAR;
    TTable *tblAYARLAR;
    TFloatField *tblAYARLARCIKARILACAKFIYAT;
    TFloatField *tblAYARLARVERILECEKPUAN;
    TFloatField *tblAYARLARBOLUNECEKPUAN;
    TFloatField *tblAYARLARALTILIPUAN;
    TFloatField *tblAYARLARIKILIPUAN;
    TFloatField *tblAYARLARCIFTEPUAN;
    TFloatField *tblAYARLARSIRALIUCLUPUAN;
    TFloatField *tblAYARLARTABELASIRALIPUAN;
    TFloatField *tblAYARLARTABELAKARISIKPUAN;
    TFloatField *tblAYARLARUCLUGANYANPUAN;
    TDateField *tblTAHMINTARIH;
    TStringField *tblTAHMINGAZETELER;
    TStringField *tblTAHMINKOSU01;
    TStringField *tblTAHMINKOSU02;
    TStringField *tblTAHMINKOSU03;
    TStringField *tblTAHMINKOSU04;
    TStringField *tblTAHMINKOSU05;
    TStringField *tblTAHMINKOSU06;
    TStringField *tblTAHMINKOSU07;
    TStringField *tblTAHMINKOSU08;
    TStringField *tblTAHMINKOSU09;
    TStringField *tblTAHMINKOSU10;
    TStringField *tblGANYANGAZETE;
    TDateField *tblGANYANTARIH;
    TStringField *tblGANYANAYAK01;
    TStringField *tblGANYANAYAK02;
    TStringField *tblGANYANAYAK03;
    TStringField *tblGANYANAYAK04;
    TStringField *tblGANYANAYAK05;
    TStringField *tblGANYANAYAK06;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DateTimePicker1Change(TObject *Sender);
    void __fastcall DBEdit1Change(TObject *Sender);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall DBEdit2Change(TObject *Sender);
    void __fastcall DBEdit3Change(TObject *Sender);
    void __fastcall DBEdit4Change(TObject *Sender);
    void __fastcall DBEdit5Change(TObject *Sender);
    void __fastcall DBEdit6Change(TObject *Sender);
    void __fastcall DBCheckBox2Click(TObject *Sender);
    void __fastcall DBCheckBox1Click(TObject *Sender);
    void __fastcall dbeditKOSUSAYISIChange(TObject *Sender);
    void __fastcall dbeditBIRINCICIFTEChange(TObject *Sender);
    void __fastcall dbeditIKINCICIFTEChange(TObject *Sender);
    void __fastcall dbeditUCUNCUCIFTEChange(TObject *Sender);
    void __fastcall dbeditDORDUNCUCIFTEChange(TObject *Sender);
    void __fastcall dbeditALTILIILKKOSUChange(TObject *Sender);
    void __fastcall dbeditUCLUILKKOSUChange(TObject *Sender);
    void __fastcall DBEdit7Change(TObject *Sender);
    void __fastcall DBEdit8Change(TObject *Sender);
    void __fastcall DBEdit9Change(TObject *Sender);
    void __fastcall DBEdit10Change(TObject *Sender);
    void __fastcall DBEdit11Change(TObject *Sender);
    void __fastcall DBEdit12Change(TObject *Sender);
    void __fastcall DBEdit13Change(TObject *Sender);
    void __fastcall DBEdit14Change(TObject *Sender);
    void __fastcall DBEdit15Change(TObject *Sender);
    void __fastcall DBEdit16Change(TObject *Sender);
    void __fastcall DBEdit17Change(TObject *Sender);
    void __fastcall DBEdit18Change(TObject *Sender);
    void __fastcall DBEdit19Change(TObject *Sender);
    void __fastcall DBEdit20Change(TObject *Sender);
    void __fastcall DBEdit21Change(TObject *Sender);
    void __fastcall DBEdit22Change(TObject *Sender);
    void __fastcall DBEdit23Change(TObject *Sender);
    void __fastcall DBEdit24Change(TObject *Sender);
    void __fastcall DBEdit25Change(TObject *Sender);
    void __fastcall DBEdit26Change(TObject *Sender);
    void __fastcall DBEdit27Change(TObject *Sender);
    void __fastcall DBEdit28Change(TObject *Sender);
    void __fastcall DBEdit29Change(TObject *Sender);
    void __fastcall DBEdit30Change(TObject *Sender);
    void __fastcall DBEdit31Change(TObject *Sender);
    void __fastcall DBEdit32Change(TObject *Sender);
    void __fastcall DBEdit33Change(TObject *Sender);
    void __fastcall DBEdit34Change(TObject *Sender);
    void __fastcall DBEdit35Change(TObject *Sender);
    void __fastcall DBEdit36Change(TObject *Sender);
    void __fastcall DBEdit37Change(TObject *Sender);
    void __fastcall DBEdit38Change(TObject *Sender);
    void __fastcall DBEdit39Change(TObject *Sender);
    void __fastcall DBEdit40Change(TObject *Sender);
    void __fastcall DBEdit41Change(TObject *Sender);
    void __fastcall DBEdit42Change(TObject *Sender);
    void __fastcall DBEdit43Change(TObject *Sender);
    void __fastcall DBEdit44Change(TObject *Sender);
    void __fastcall DBEdit45Change(TObject *Sender);
    void __fastcall DBEdit46Change(TObject *Sender);
    void __fastcall DBEdit47Change(TObject *Sender);
    void __fastcall DBEdit48Change(TObject *Sender);
    void __fastcall DBEdit49Change(TObject *Sender);
    void __fastcall DBEdit50Change(TObject *Sender);
    void __fastcall DBEdit51Change(TObject *Sender);
    void __fastcall DBEdit52Change(TObject *Sender);
    void __fastcall DBEdit53Change(TObject *Sender);
    void __fastcall DBEdit54Change(TObject *Sender);
    void __fastcall DBEdit55Change(TObject *Sender);
    void __fastcall DBEdit56Change(TObject *Sender);
    void __fastcall DBEdit57Change(TObject *Sender);
    void __fastcall DBEdit58Change(TObject *Sender);
    void __fastcall DBEdit59Change(TObject *Sender);
    void __fastcall DBEdit60Change(TObject *Sender);
    void __fastcall DBCheckBox4Click(TObject *Sender);
    void __fastcall DBCheckBox3Click(TObject *Sender);
    void __fastcall DBCheckBox6Click(TObject *Sender);
    void __fastcall DBCheckBox5Click(TObject *Sender);
    void __fastcall DBCheckBox8Click(TObject *Sender);
    void __fastcall DBCheckBox7Click(TObject *Sender);
    void __fastcall DBCheckBox10Click(TObject *Sender);
    void __fastcall DBCheckBox9Click(TObject *Sender);
    void __fastcall DBCheckBox12Click(TObject *Sender);
    void __fastcall DBCheckBox11Click(TObject *Sender);
    void __fastcall DBCheckBox14Click(TObject *Sender);
    void __fastcall DBCheckBox13Click(TObject *Sender);
    void __fastcall DBCheckBox16Click(TObject *Sender);
    void __fastcall DBCheckBox15Click(TObject *Sender);
    void __fastcall DBCheckBox18Click(TObject *Sender);
    void __fastcall DBCheckBox17Click(TObject *Sender);
    void __fastcall DBCheckBox20Click(TObject *Sender);
    void __fastcall DBCheckBox19Click(TObject *Sender);
    void __fastcall tbtnSILClick(TObject *Sender);
    void __fastcall tbtnCALISTIRClick(TObject *Sender);
    void __fastcall DBEdit79Change(TObject *Sender);
    void __fastcall DBEdit80Change(TObject *Sender);
    void __fastcall DBEdit77Change(TObject *Sender);
    void __fastcall DBEdit78Change(TObject *Sender);
    void __fastcall DBEdit75Change(TObject *Sender);
    void __fastcall DBEdit76Change(TObject *Sender);
    void __fastcall DBEdit73Change(TObject *Sender);
    void __fastcall DBEdit74Change(TObject *Sender);
    void __fastcall DBEdit71Change(TObject *Sender);
    void __fastcall DBEdit72Change(TObject *Sender);
    void __fastcall DBEdit69Change(TObject *Sender);
    void __fastcall DBEdit70Change(TObject *Sender);
    void __fastcall DBEdit67Change(TObject *Sender);
    void __fastcall DBEdit68Change(TObject *Sender);
    void __fastcall DBEdit65Change(TObject *Sender);
    void __fastcall DBEdit66Change(TObject *Sender);
    void __fastcall DBEdit63Change(TObject *Sender);
    void __fastcall DBEdit64Change(TObject *Sender);
    void __fastcall DBEdit61Change(TObject *Sender);
    void __fastcall DBEdit62Change(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid2CellClick(TColumn *Column);
    void __fastcall DBGrid3CellClick(TColumn *Column);
    void __fastcall DBEdit1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit2KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit3KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit4KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit5KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit6KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit61KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit62KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit7KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit8KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit9KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit10KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit11KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit12KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit63KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit64KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit13KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit14KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit15KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit16KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit17KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit18KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit65KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit66KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit19KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit20KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit21KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit22KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit23KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit24KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit67KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit68KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit25KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit26KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit27KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit28KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit29KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit30KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit69KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit70KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit31KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit32KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit33KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit34KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit35KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit36KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit71KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit72KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit37KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit38KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit39KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit40KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit41KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit42KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit73KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit74KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit43KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit44KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit45KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit46KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit47KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit48KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit75KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit76KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit49KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit50KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit51KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit52KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit53KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit54KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit77KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit78KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit55KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit56KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit57KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit58KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit59KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit60KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit79KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit80KeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditKOSUSAYISIKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditBIRINCICIFTEKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditIKINCICIFTEKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditUCUNCUCIFTEKeyPress(TObject *Sender, char &Key);
    void __fastcall dbeditDORDUNCUCIFTEKeyPress(TObject *Sender, char &Key);
    void __fastcall ToolButton4Click(TObject *Sender);
    void __fastcall ToolButton7Click(TObject *Sender);
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid2KeyPress(TObject *Sender, char &Key);
    void __fastcall DBGrid3KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmGazeteler(TComponent* Owner);
    void __fastcall KosuBilgisiGetir(struct Kosucu *KB, int KosuNo, int KosuTuru);
    void __fastcall IkiliBahisToplami(void);
    void __fastcall AltiliGanyanPuanlamasi(bool PuanDurumu, int Sayac);
    void __fastcall Filtrele(TDateTime Tarih);
    void __fastcall YeniKayit(TDateTime Tarih);
    int __fastcall SayiGetir(AnsiString SayiDizi, int Kacinci);
    void __fastcall Kaydet(void);
    float __fastcall GTPuanlama(int AtSayisi, int Kacinci);
    void __fastcall GanyanToplami(void);
    void __fastcall AltiliGanyanToplami(void);
    int __fastcall Yuvarla(float Sayi);
    void __fastcall CifteToplami(void);
    void __fastcall UcluBahisToplami(void);
    int __fastcall AltiliBilenleriHesapla(void);
    void __fastcall UcluBahisPuanlamasi(int VerilecekPuan, int Sayac);
    int __fastcall CifteGetir(int Kacinci);
    void __fastcall UcluGanyanToplami(void);
    void __fastcall DigerVeriKontrol(AnsiString *Veri);
    int __fastcall GirisKontrol(AnsiString Veri);
    void __fastcall GenelToplam(void);
    AnsiString __fastcall VeriDegistir(AnsiString Veri);
    void __fastcall TabelaBahisToplami(void);
    int __fastcall Karsilastir(AnsiString KontrolEdilen, AnsiString KontrolEden,
        AnsiString Filtre);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmGazeteler *frmGazeteler;
//---------------------------------------------------------------------------
#endif
