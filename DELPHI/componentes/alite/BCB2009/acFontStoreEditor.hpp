// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acfontstoreeditor.pas' rev: 20.00

#ifndef AcfontstoreeditorHPP
#define AcfontstoreeditorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Sspeedbutton.hpp>	// Pascal unit
#include <Smemo.hpp>	// Pascal unit
#include <Slistbox.hpp>	// Pascal unit
#include <Schecklistbox.hpp>	// Pascal unit
#include <Sbutton.hpp>	// Pascal unit
#include <Scheckbox.hpp>	// Pascal unit
#include <Spanel.hpp>	// Pascal unit
#include <Sedit.hpp>	// Pascal unit
#include <Sskinprovider.hpp>	// Pascal unit
#include <Acfontstore.hpp>	// Pascal unit
#include <Slistview.hpp>	// Pascal unit
#include <Acalphaimagelist.hpp>	// Pascal unit
#include <Sbitbtn.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acfontstoreeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TFormFontStore;
class PASCALIMPLEMENTATION TFormFontStore : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
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
	void __fastcall sCheckBox1MouseUp(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall sCheckBox2MouseUp(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall sListView1Change(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall sPanel1Paint(System::TObject* Sender, Graphics::TCanvas* Canvas);
	void __fastcall sButton3Click(System::TObject* Sender);
	void __fastcall sButton5Click(System::TObject* Sender);
	void __fastcall sButton4Click(System::TObject* Sender);
	void __fastcall sListBox1Click(System::TObject* Sender);
	void __fastcall ItemUpdated(void);
	void __fastcall sEdit1Change(System::TObject* Sender);
	void __fastcall sCheckBox3Click(System::TObject* Sender);
	void __fastcall sSpeedButton1Click(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	
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
	/* TCustomForm.Create */ inline __fastcall virtual TFormFontStore(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormFontStore(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormFontStore(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormFontStore(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TFormFontStore* FormFontStore;

}	/* namespace Acfontstoreeditor */
using namespace Acfontstoreeditor;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcfontstoreeditorHPP
