//---------------------------------------------------------------------------

#ifndef hata2dialogH
#define hata2dialogH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmHataMesaji2 : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TImage *Image1;
    TLabel *Label2;
    TPanel *Panel1;
    TBitBtn *btnEvet;
    TBitBtn *btnHayir;
    TLabel *Label3;
    void __fastcall btnEvetClick(TObject *Sender);
    void __fastcall btnHayirClick(TObject *Sender);
    void __fastcall btnEvetKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHataMesaji2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHataMesaji2 *frmHataMesaji2;
//---------------------------------------------------------------------------
#endif
