// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sListBox.pas' rev: 6.00

#ifndef sListBoxHPP
#define sListBoxHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sCommonData.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acSBUtils.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Slistbox
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TBeforeDrawItemEvent)(HDC aDC, int aIndex, Types::TRect &aRect);

class DELPHICLASS TsCustomListBox;
class PASCALIMPLEMENTATION TsCustomListBox : public Stdctrls::TListBox 
{
	typedef Stdctrls::TListBox inherited;
	
private:
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Scommondata::TsBoundLabel* FBoundLabel;
	Classes::TNotifyEvent FOnVScroll;
	bool FullPaint;
	TBeforeDrawItemEvent FOnBeforeItemDraw;
	Byte FLeftPadding;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	MESSAGE void __fastcall WMNCCaclSize(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMPaint &Message);
	void __fastcall WMPrint(Messages::TWMPaint &Message);
	AnsiString __fastcall GetItemTextDirect(int AIndex);
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	void __fastcall SetLeftPadding(const Byte Value);
	
protected:
	bool FAutoHideScroll;
	Scommondata::TsScrollWndData* FCommonData;
	Word FAutoCompleteDelay;
	Sconst::TsDisabledKind FDisabledKind;
	void __fastcall SetAutoHideScroll(const bool Value);
	virtual void __fastcall DrawItem(int Index, const Types::TRect &Rect, Windows::TOwnerDrawState State);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	
public:
	Acsbutils::TacScrollWnd* ListSW;
	__fastcall virtual TsCustomListBox(Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	__fastcall virtual ~TsCustomListBox(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Font  = {stored=FontStored};
	__property ParentFont  = {stored=FontStored, default=1};
	__property Word AutoCompleteDelay = {read=FAutoCompleteDelay, write=FAutoCompleteDelay, default=500};
	__property bool AutoHideScroll = {read=FAutoHideScroll, write=SetAutoHideScroll, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Byte LeftPadding = {read=FLeftPadding, write=SetLeftPadding, default=0};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property TBeforeDrawItemEvent OnBeforeItemDraw = {read=FOnBeforeItemDraw, write=FOnBeforeItemDraw};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Classes::TNotifyEvent OnVScroll = {read=FOnVScroll, write=FOnVScroll};
	__property Color  = {stored=ColorStored, default=-2147483643};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsCustomListBox(HWND ParentWindow) : Stdctrls::TListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TsListBox;
class PASCALIMPLEMENTATION TsListBox : public TsCustomListBox 
{
	typedef TsCustomListBox inherited;
	
public:
	#pragma option push -w-inl
	/* TsCustomListBox.Create */ inline __fastcall virtual TsListBox(Classes::TComponent* AOwner) : TsCustomListBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TsCustomListBox.Destroy */ inline __fastcall virtual ~TsListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsListBox(HWND ParentWindow) : TsCustomListBox(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Slistbox */
using namespace Slistbox;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sListBox
