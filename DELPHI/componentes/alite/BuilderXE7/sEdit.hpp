// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sEdit.pas' rev: 28.00 (Windows)

#ifndef SeditHPP
#define SeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sGlyphUtils.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sedit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsEdit;
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
	bool __fastcall ColorStored(void);
	bool __fastcall FontStored(void);
	MESSAGE void __fastcall WMNCLButtonDblClick(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall SetVerticalAlignment(const System::Classes::TVerticalAlignment Value);
	
protected:
	System::Types::TRect FAddedPadding;
	System::Types::TRect FAddedGlyphRect;
	int __fastcall TextHeight(void);
	bool __fastcall AddedGlyphVisible(void);
	int __fastcall AddedGlyphSpace(void);
	void __fastcall PaintAddedGlyph(void);
	void __fastcall PaintBorder(void);
	void __fastcall PaintAddedGlyphStd(void);
	System::Types::TRect __fastcall AddedGlyphRect(void);
	virtual bool __fastcall PrepareCache(void);
	System::Types::TRect __fastcall TextRect(void);
	virtual void __fastcall PaintText(void);
	void __fastcall OurPaintHandler(HDC aDC = (HDC)(0x0));
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall PaddingChanged(System::TObject* Sender);
	
public:
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsEdit(void);
	virtual void __fastcall Loaded(void);
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
