// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ac3rdPartyEditor.pas' rev: 32.00 (Windows)

#ifndef Ac3rdpartyeditorHPP
#define Ac3rdpartyeditorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Variants.hpp>
#include <acntTypes.hpp>
#include <sBitBtn.hpp>
#include <Vcl.ComCtrls.hpp>
#include <sListView.hpp>
#include <sSkinManager.hpp>
#include <sSkinProvider.hpp>
#include <sSpeedButton.hpp>
#include <sPanel.hpp>
#include <sConst.hpp>
#include <sCheckListBox.hpp>
#include <sCheckBox.hpp>
#include <sLabel.hpp>
#include <sListBox.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ac3rdpartyeditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TForm3rdPartyEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TForm3rdPartyEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Slistview::TsListView* sListView1;
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sspeedbutton::TsSpeedButton* sBitBtn2;
	Sspeedbutton::TsSpeedButton* sBitBtn3;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Vcl::Menus::TPopupMenu* PopupMenu1;
	Vcl::Menus::TMenuItem* Addnew1;
	Vcl::Menus::TMenuItem* Delete1;
	Vcl::Menus::TMenuItem* Defaultsettings1;
	Vcl::Menus::TMenuItem* N1;
	Vcl::Menus::TMenuItem* Exit1;
	Sspeedbutton::TsSpeedButton* sSpeedButton1;
	Sspeedbutton::TsSpeedButton* sSpeedButton4;
	Sspeedbutton::TsSpeedButton* sSpeedButton5;
	Vcl::Dialogs::TSaveDialog* SaveDialog1;
	Vcl::Dialogs::TOpenDialog* OpenDialog1;
	Sspeedbutton::TsSpeedButton* sSpeedButton6;
	Spanel::TsPanel* sPanel1;
	Slistbox::TsListBox* sListBox1;
	Spanel::TsPanel* sPanel2;
	Schecklistbox::TsCheckListBox* sListBox2;
	Vcl::Menus::TMenuItem* Edit1;
	Sspeedbutton::TsSpeedButton* sSpeedButton2;
	Scheckbox::TsCheckBox* sCheckBox1;
	void __fastcall sBitBtn2Click(System::TObject* Sender);
	void __fastcall sBitBtn1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall sBitBtn3Click(System::TObject* Sender);
	void __fastcall sSpeedButton1Click(System::TObject* Sender);
	void __fastcall sListView1Change(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TItemChange Change);
	void __fastcall sListBox1Click(System::TObject* Sender);
	void __fastcall sSpeedButton2Click(System::TObject* Sender);
	void __fastcall sListView1ColumnClick(System::TObject* Sender, Vcl::Comctrls::TListColumn* Column);
	void __fastcall sSpeedButton4Click(System::TObject* Sender);
	void __fastcall sSpeedButton5Click(System::TObject* Sender);
	void __fastcall sSpeedButton6Click(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall Edit1Click(System::TObject* Sender);
	void __fastcall sCheckBox1Click(System::TObject* Sender);
	void __fastcall sListView1DblClick(System::TObject* Sender);
	
public:
	Acnttypes::TStringLists Lists;
	System::Classes::TComponent* Cmp;
	void __fastcall UpdateNames(void);
	void __fastcall Populate(bool ControlRepaint = true);
	void __fastcall SelectCtrls(int TypeIndex);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TForm3rdPartyEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm3rdPartyEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm3rdPartyEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TForm3rdPartyEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


typedef System::StaticArray<System::UnicodeString, 18> Ac3rdpartyeditor__2;

typedef System::StaticArray<System::UnicodeString, 15> Ac3rdpartyeditor__3;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TForm3rdPartyEditor* Form3rdPartyEditor;
extern DELPHI_PACKAGE Ac3rdpartyeditor__2 acLiteCtrls;
extern DELPHI_PACKAGE Ac3rdpartyeditor__3 acCtrlsArray;
}	/* namespace Ac3rdpartyeditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_AC3RDPARTYEDITOR)
using namespace Ac3rdpartyeditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ac3rdpartyeditorHPP
