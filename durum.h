//---------------------------------------------------------------------------

#ifndef durumH
#define durumH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmIlerlemeDurumu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TCheckBox *CheckBox1;
    TCheckBox *CheckBox2;
    TCheckBox *CheckBox3;
    TCheckBox *CheckBox4;
    TCheckBox *CheckBox5;
    TCheckBox *CheckBox6;
    TCheckBox *CheckBox7;
    TGroupBox *GroupBox2;
    TProgressBar *ProgressBar1;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall GanyanToplami(void);
    void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmIlerlemeDurumu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmIlerlemeDurumu *frmIlerlemeDurumu;
//---------------------------------------------------------------------------
#endif
