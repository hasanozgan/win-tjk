//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("vidin.res");
USEFORM("main.cpp", frmHorse);
USEFORM("gazete.cpp", frmGazete);
USEFORM("at.cpp", frmAt);
USEFORM("odul.cpp", frmGazeteler);
USEFORM("hakkinda.cpp", frmHakkinda);
USEFORM("rapor.cpp", frmGazeteRapor);
USEFORM("ayarlar.cpp", frmAyarlar);
USEFORM("handikap.cpp", frmHandikap);
USEFORM("jokeyayari.cpp", frmJokeyAyarlari);
USEFORM("kayit.cpp", frmKayitGirisi);
USEFORM("atlist.cpp", frmAtListesi);
USEFORM("jokeygir.cpp", frmJokeyGiris);
USEFORM("kayitcet.cpp", frmTabloGoruntule);
USEFORM("sonucgir.cpp", frmSonucGirisi);
USEFORM("pistgir.cpp", frmPistGirisi);
USEFORM("jokeylist.cpp", frmJokeyListesi);
USEFORM("atarama.cpp", frmAtArama);
USEFORM("antrenorlist.cpp", frmAntrenorListesi);
USEFORM("jokeyindexi.cpp", frmJokeyIndex);
USEFORM("listele.cpp", frmListele);
USEFORM("hatadialog.cpp", frmHataMesaji);
USEFORM("hata2dialog.cpp", frmHataMesaji2);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
             Application->Initialize();
             Application->CreateForm(__classid(TfrmHorse), &frmHorse);
         Application->CreateForm(__classid(TfrmGazete), &frmGazete);
         Application->CreateForm(__classid(TfrmAt), &frmAt);
         Application->CreateForm(__classid(TfrmGazeteler), &frmGazeteler);
         Application->CreateForm(__classid(TfrmHakkinda), &frmHakkinda);
         Application->CreateForm(__classid(TfrmGazeteRapor), &frmGazeteRapor);
         Application->CreateForm(__classid(TfrmAyarlar), &frmAyarlar);
         Application->CreateForm(__classid(TfrmHandikap), &frmHandikap);
         Application->CreateForm(__classid(TfrmKayitGirisi), &frmKayitGirisi);
         Application->CreateForm(__classid(TfrmAtListesi), &frmAtListesi);
         Application->CreateForm(__classid(TfrmJokeyGiris), &frmJokeyGiris);
         Application->CreateForm(__classid(TfrmTabloGoruntule), &frmTabloGoruntule);
         Application->CreateForm(__classid(TfrmSonucGirisi), &frmSonucGirisi);
         Application->CreateForm(__classid(TfrmPistGirisi), &frmPistGirisi);
         Application->CreateForm(__classid(TfrmJokeyListesi), &frmJokeyListesi);
         Application->CreateForm(__classid(TfrmAtArama), &frmAtArama);
         Application->CreateForm(__classid(TfrmAntrenorListesi), &frmAntrenorListesi);
         Application->CreateForm(__classid(TfrmJokeyIndex), &frmJokeyIndex);
         Application->CreateForm(__classid(TfrmListele), &frmListele);
         Application->CreateForm(__classid(TfrmHataMesaji), &frmHataMesaji);
         Application->CreateForm(__classid(TfrmHataMesaji2), &frmHataMesaji2);
         Application->Run();
        }
        catch (Exception &exception)
        {
            Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
