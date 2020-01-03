// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sInternalSkins.pas' rev: 29.00 (Windows)

#ifndef SinternalskinsHPP
#define SinternalskinsHPP

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
#include <Vcl.FileCtrl.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>
#include <sSkinManager.hpp>
#include <acntUtils.hpp>
#include <sSkinProvider.hpp>
#include <sPanel.hpp>
#include <sButton.hpp>
#include <sListBox.hpp>
#include <sLabel.hpp>
#include <Vcl.ComCtrls.hpp>
#include <sBitBtn.hpp>
#include <sSpeedButton.hpp>
#include <sGroupBox.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sinternalskins
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormInternalSkins;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormInternalSkins : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
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
	/* TCustomForm.Create */ inline __fastcall virtual TFormInternalSkins(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormInternalSkins(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormInternalSkins(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormInternalSkins(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFormInternalSkins* FormInternalSkins;
}	/* namespace Sinternalskins */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SINTERNALSKINS)
using namespace Sinternalskins;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SinternalskinsHPP
