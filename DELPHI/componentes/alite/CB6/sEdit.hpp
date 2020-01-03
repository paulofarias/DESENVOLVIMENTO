// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sEdit.pas' rev: 6.00

#ifndef sEditHPP
#define sEditHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sGlyphUtils.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sedit
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsEdit;
class PASCALIMPLEMENTATION TsEdit : public Stdctrls::TEdit 
{
	typedef Stdctrls::TEdit inherited;
	
private:
	Scommondata::TsBoundLabel* FBoundLabel;
	Sglyphutils::TacAddedGlyph* FAddedGlyph;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	bool NCDown;
	Acnttypes::TacPadding* FPadding;
	Classes::TNotifyEvent FOnSelectionChanged;
	Sconst::TVerticalAlignment FVerticalAlignment;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	bool __fastcall ColorStored(void);
	bool __fastcall FontStored(void);
	MESSAGE void __fastcall WMNCLButtonDblClick(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	void __fastcall SetVerticalAlignment(const Sconst::TVerticalAlignment Value);
	
protected:
	#pragma pack(push, 1)
	Types::TRect FAddedPadding;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FAddedGlyphRect;
	#pragma pack(pop)
	
	int __fastcall TextHeight(void);
	bool __fastcall AddedGlyphVisible(void);
	int __fastcall AddedGlyphSpace(void);
	void __fastcall PaintAddedGlyph(void);
	void __fastcall PaintBorder(void);
	void __fastcall PaintAddedGlyphStd(void);
	Types::TRect __fastcall AddedGlyphRect();
	virtual bool __fastcall PrepareCache(void);
	Types::TRect __fastcall TextRect();
	virtual void __fastcall PaintText(void);
	void __fastcall OurPaintHandler(HDC aDC = (HDC)(0x0));
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PaddingChanged(System::TObject* Sender);
	
public:
	__property Classes::TNotifyEvent OnSelectionChanged = {read=FOnSelectionChanged, write=FOnSelectionChanged};
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TsEdit(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Align  = {default=0};
	__property ParentFont  = {stored=FontStored, default=1};
	__property Color  = {stored=ColorStored, default=-2147483643};
	__property Font  = {stored=FontStored};
	__property Sglyphutils::TacAddedGlyph* AddedGlyph = {read=FAddedGlyph, write=FAddedGlyph};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Acnttypes::TacPadding* Padding = {read=FPadding, write=FPadding};
	__property Sconst::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, default=0};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsEdit(HWND ParentWindow) : Stdctrls::TEdit(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int __fastcall EditBorderWidth(Stdctrls::TEdit* aEditCtrl);

}	/* namespace Sedit */
using namespace Sedit;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sEdit
