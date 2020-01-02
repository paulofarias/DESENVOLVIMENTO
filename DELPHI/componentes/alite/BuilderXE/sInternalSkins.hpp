// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sInternalSkins.pas' rev: 22.00

#ifndef SinternalskinsHPP
#define SinternalskinsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <FileCtrl.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sSkinProvider.hpp>	// Pascal unit
#include <sPanel.hpp>	// Pascal unit
#include <sButton.hpp>	// Pascal unit
#include <sListBox.hpp>	// Pascal unit
#include <sLabel.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <sBitBtn.hpp>	// Pascal unit
#include <sSpeedButton.hpp>	// Pascal unit
#include <sGroupBox.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sinternalskins
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TFormInternalSkins;
class PASCALIMPLEMENTATION TFormInternalSkins : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Spanel::TsPanel* sPanel1;
	Spanel::TsPanel* sPanel3;
	Spanel::TsPanel* sPanel6;
	Sspeedbutton::TsSpeedButton* sSpeedButton1;
	Sspeedbutton::TsSpeedButton* sSpeedButton2;
	Sspeedbutton::TsSpeedButton* sSpeedButton3;
	Sspeedbutton::TsSpeedButton* sSpeedButton4;
	Sspeedbutton::TsSpeedButton* sSpeedButton5;
	Slistbox::TsListBox* ListBox1;
	Sgroupbox::TsGroupBox* sGroupBox1;
	Slabel::TsLabel* sLabel10;
	Slabel::TsLabel* sLabel11;
	Slabel::TsLabel* sLabel12;
	Slabel::TsLabel* sLabel9;
	Slabel::TsLabel* sLabel5;
	Slabel::TsLabel* sLabel4;
	Slabel::TsLabel* sLabel8;
	Slabel::TsLabel* sLabel7;
	Slabel::TsLabel* sLabel3;
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sgroupbox::TsGroupBox* sGroupBox2;
	Sbitbtn::TsBitBtn* sButton6;
	Slabel::TsLabel* sLabel1;
	void __fastcall ListBox1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall sSpeedButton1Click(System::TObject* Sender);
	void __fastcall sSpeedButton2Click(System::TObject* Sender);
	void __fastcall sSpeedButton3Click(System::TObject* Sender);
	void __fastcall sButton6Click(System::TObject* Sender);
	void __fastcall sBitBtn1Click(System::TObject* Sender);
	void __fastcall sSpeedButton4Click(System::TObject* Sender);
	void __fastcall sSpeedButton5Click(System::TObject* Sender);
	
public:
	System::UnicodeString NewDir;
	System::UnicodeString NewName;
	bool ListChanged;
	Sskinmanager::TsSkinManager* SkinManager;
	void __fastcall AddNewSkin(void);
	void __fastcall UpdateMyActions(void);
	virtual void __fastcall Loaded(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormInternalSkins(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormInternalSkins(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormInternalSkins(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormInternalSkins(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TFormInternalSkins* FormInternalSkins;

}	/* namespace Sinternalskins */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sinternalskins;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SinternalskinsHPP
