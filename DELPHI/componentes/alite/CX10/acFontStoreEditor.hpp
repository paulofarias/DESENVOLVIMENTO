// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFontStoreEditor.pas' rev: 30.00 (Windows)

#ifndef AcfontstoreeditorHPP
#define AcfontstoreeditorHPP

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
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <sSpeedButton.hpp>
#include <sMemo.hpp>
#include <sListBox.hpp>
#include <sCheckListBox.hpp>
#include <sButton.hpp>
#include <sCheckBox.hpp>
#include <sPanel.hpp>
#include <sEdit.hpp>
#include <sSkinProvider.hpp>
#include <acFontStore.hpp>
#include <sListView.hpp>
#include <acAlphaImageList.hpp>
#include <sBitBtn.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acfontstoreeditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormFontStore;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormFontStore : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Slistbox::TsListBox* sListBox1;
	Sedit::TsEdit* sDirectoryEdit1;
	Spanel::TsPanel* sPanel1;
	Scheckbox::TsCheckBox* sCheckBox1;
	Scheckbox::TsCheckBox* sCheckBox2;
	Sbitbtn::TsBitBtn* sButton1;
	Sbitbtn::TsBitBtn* sButton2;
	Acfontstore::TsFontStore* sFontStore1;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Slistview::TsListView* sListView1;
	Sbitbtn::TsBitBtn* sButton3;
	Sbitbtn::TsBitBtn* sButton4;
	Sbitbtn::TsBitBtn* sButton5;
	Scheckbox::TsCheckBox* sCheckBox3;
	Sedit::TsEdit* sEdit1;
	Sspeedbutton::TsSpeedButton* sSpeedButton1;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall sDirectoryEdit1Change(System::TObject* Sender);
	void __fastcall sCheckBox1MouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall sCheckBox2MouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall sListView1Change(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TItemChange Change);
	void __fastcall sPanel1Paint(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas);
	void __fastcall sButton3Click(System::TObject* Sender);
	void __fastcall sButton5Click(System::TObject* Sender);
	void __fastcall sButton4Click(System::TObject* Sender);
	void __fastcall sListBox1Click(System::TObject* Sender);
	void __fastcall ItemUpdated(void);
	void __fastcall sEdit1Change(System::TObject* Sender);
	void __fastcall sCheckBox3Click(System::TObject* Sender);
	void __fastcall sSpeedButton1Click(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	
private:
	bool WarningShown;
	bool Updating;
	System::UnicodeString FCurrentName;
	void __fastcall SetCurrentName(const System::UnicodeString Value);
	__property System::UnicodeString CurrentName = {read=FCurrentName, write=SetCurrentName};
	void __fastcall ClearListView(void);
	
public:
	Acfontstore::TsFontStore* FontStore;
	void __fastcall InitEditor(Acfontstore::TsFontStore* aFontStore);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormFontStore(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormFontStore(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormFontStore(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormFontStore(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFormFontStore* FormFontStore;
}	/* namespace Acfontstoreeditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACFONTSTOREEDITOR)
using namespace Acfontstoreeditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcfontstoreeditorHPP
