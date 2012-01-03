//---------------------------------------------------------------------------

#ifndef ataramaH
#define ataramaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfrmAtArama : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TEdit *Edit1;
    TButton *Button1;
    TButton *Button2;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAtArama(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAtArama *frmAtArama;
//---------------------------------------------------------------------------
#endif
