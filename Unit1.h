//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTimer *clientPencereAktif;
	TButton *Button1;
	TButton *Button2;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TTimer *Rogue;
	TButton *Button3;
	TLabel *Label3;
	TTimer *mobakos;
	TLabel *Label9;
	TTimer *slotkayit;
	TListBox *ListBox3;
	TListBox *ListBox4;
	TEdit *xx1;
	TEdit *yy1;
	TTimer *slotagit;
	TButton *Button13;
	TTimer *mobbekle;
	TButton *Button12;
	TBitBtn *BitBtn4;
	TListBox *ListBox2;
	TLabel *Label10;
	TCheckBox *CheckBox5;
	TGroupBox *GroupBox4;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TLabel *Label14;
	TLabel *Label15;
	TPageControl *PageControl2;
	TTabSheet *TabSheet6;
	TCheckBox *CheckBox1;
	TEdit *Edit2;
	TButton *Button6;
	TTabSheet *TabSheet7;
	TCheckBox *CheckBox3;
	TTabSheet *TabSheet8;
	TCheckBox *CheckBox2;
	TMemo *Memo2;
	TButton *Button7;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TCheckListBox *CheckListBox1;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *Edit1;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton5;
	TGroupBox *GroupBox2;
	TLabel *Label2;
	TButton *Button4;
	TEdit *Edit3;
	TButton *Button5;
	TListBox *ListBox1;
	TGroupBox *GroupBox3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TCheckBox *CheckBox4;
	TEdit *Edit4;
	TBitBtn *BitBtn3;
	TShape *Shape1;
	TEdit *Edit9;
	TLabel *Label16;
	TButton *Button14;
	TTabSheet *TabSheet9;
	TLabel *Label17;
	TEdit *Edit10;
	TLabel *Label18;
	TEdit *Edit11;
	TLabel *Label19;
	TEdit *Edit12;
	TLabel *Label20;
	TEdit *Edit13;
	TLabel *Label21;
	TEdit *Edit14;
	TLabel *Label22;
	TEdit *Edit15;
	TButton *Button15;
	TButton *Button16;
	TButton *Button10;
	TEdit *Edit5;
	TButton *Button11;
	TButton *Button8;
	TButton *Button9;
	TTabSheet *TabSheet1;
	void __fastcall clientPencereAktifTimer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall RogueTimer(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall ListBox1DblClick(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall BitBtn3Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall mobakosTimer(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall slotkayitTimer(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall slotagitTimer(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall mobbekleTimer(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
