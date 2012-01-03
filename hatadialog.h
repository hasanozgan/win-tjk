//---------------------------------------------------------------------------

#ifndef hatadialogH
#define hatadialogH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmHataMesaji : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TImage *Image1;
    TLabel *Label2;
    TPanel *Panel1;
    TBitBtn *btnJokey;
    TBitBtn *btnIptal;
    TBitBtn *btnAPRANTI;
    void __fastcall btnIptalClick(TObject *Sender);
    void __fastcall btnJokeyClick(TObject *Sender);
    void __fastcall btnJokeyKeyPress(TObject *Sender, char &Key);
    void __fastcall btnIptalKeyPress(TObject *Sender, char &Key);
    void __fastcall btnAPRANTIClick(TObject *Sender);
    void __fastcall btnAPRANTIKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHataMesaji(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHataMesaji *frmHataMesaji;
//---------------------------------------------------------------------------
#endif
