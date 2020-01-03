// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sStrEdit.pas' rev: 30.00 (Windows)

#ifndef SstreditHPP
#define SstreditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <sSkinProvider.hpp>
#include <sButton.hpp>
#include <sMemo.hpp>
#include <sLabel.hpp>
#include <sPanel.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sstredit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStrEditDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStrEditDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Dialogs::TOpenDialog* OpenDialog;
	Vcl::Dialogs::TSaveDialog* SaveDialog;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Slabel::TsLabel* LineCount;
	Smemo::TsMemo* Memo;
	Spanel::TsPanel* sPanel1;
	Sbutton::TsButton* OKBtn;
	Sbutton::TsButton* CancelBtn;
	Sbutton::TsButton* HelpBtn;
	Sbutton::TsButton* LoadBtn;
	Sbutton::TsButton* SaveBtn;
	void __fastcall FileOpen(System::TObject* Sender);
	void __fastcall FileSave(System::TObject* Sender);
	void __fastcall UpdateStatus(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall MemoKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	
private:
	System::UnicodeString SingleLine;
	System::UnicodeString MultipleLines;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TStrEditDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TStrEditDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TStrEditDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStrEditDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sstredit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSTREDIT)
using namespace Sstredit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SstreditHPP
