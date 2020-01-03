// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sEdit.pas' rev: 33.00 (Windows)

#ifndef SeditHPP
#define SeditHPP

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
#include <Vcl.StdCtrls.hpp>
#include <System.Types.hpp>
#include <acntTypes.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <sDefaults.hpp>
#include <sGlyphUtils.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	Scommondata::TsBoundLabel* FBoundLabel;
	Sglyphutils::TacAddedGlyph* FAddedGlyph;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	bool NCDown;
	Acnttypes::TacPadding* FPadding;
	System::Classes::TNotifyEvent FOnSelectionChanged;
	System::Classes::TVerticalAlignment FVerticalAlignment;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	bool __fastcall ColorStored();
	bool __fastcall FontStored();
	MESSAGE void __fastcall WMNCLButtonDblClick(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall SetVerticalAlignment(const System::Classes::TVerticalAlignment Value);
	
protected:
	System::Types::TRect FAddedPadding;
	System::Types::TRect FAddedGlyphRect;
	int __fastcall TextHeight();
	bool __fastcall AddedGlyphVisible();
	int __fastcall AddedGlyphSpace();
	void __fastcall PaintAddedGlyph();
	void __fastcall PaintBorder();
	void __fastcall PaintAddedGlyphStd();
	System::Types::TRect __fastcall AddedGlyphRect();
	virtual bool __fastcall PrepareCache();
	System::Types::TRect __fastcall TextRect();
	virtual void __fastcall PaintText();
	void __fastcall OurPaintHandler(HDC aDC = (HDC)(0x0));
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall PaddingChanged(System::TObject* Sender);
	
public:
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
	virtual void __fastcall AfterConstruction();
	__fastcall virtual TsEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsEdit();
	virtual void __fastcall Loaded();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Align = {default=0};
	__property MaxLength = {default=0};
	__property ParentFont = {stored=FontStored, default=1};
	__property Color = {stored=ColorStored, default=-16777211};
	__property Font = {stored=FontStored};
	__property Sglyphutils::TacAddedGlyph* AddedGlyph = {read=FAddedGlyph, write=FAddedGlyph};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Acnttypes::TacPadding* Padding = {read=FPadding, write=FPadding};
	__property System::Classes::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall EditBorderWidth(Vcl::Stdctrls::TEdit* aEditCtrl);
}	/* namespace Sedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SEDIT)
using namespace Sedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SeditHPP
