//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
{
	TContact->Insert();

   //	TContact->FieldByName("회사") ->AsString = DBEdit2->Text;
  	TContact->FieldByName("성")->AsString = DBEdit3->Text;
	TContact->FieldByName("이름") -> AsString ="bi";
	TContact->Post();



}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
	TContact->Delete();
}
//---------------------------------------------------------------------------






