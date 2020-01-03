﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sListBox.pas' rev: 27.00 (Windows)

#ifndef SlistboxHPP
#define SlistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <acSBUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Slistbox
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TBeforeDrawItemEvent)(HDC aDC, int aIndex, System::Types::TRect &aRect);

class DELPHICLASS TsCustomListBox;
class PASCALIMPLEMENTATION TsCustomListBox : public Vcl::Stdctrls::TListBox
{
	typedef Vcl::Stdctrls::TListBox inherited;
	
private:
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	Scommondata::TsBoundLabel* FBoundLabel;
	System::Classes::TNotifyEvent FOnVScroll;
	bool FullPaint;
	TBeforeDrawItemEvent FOnBeforeItemDraw;
	System::Byte FLeftPadding;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	MESSAGE void __fastcall WMNCCaclSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMPaint &Message);
	void __fastcall WMPrint(Winapi::Messages::TWMPaint &Message);
	System::UnicodeString __fastcall GetItemTextDirect(int AIndex);
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	void __fastcall SetLeftPadding(const System::Byte Value);
	
protected:
	bool FAutoHideScroll;
	Scommondata::TsScrollWndData* FCommonData;
	System::Word FAutoCompleteDelay;
	Sconst::TsDisabledKind FDisabledKind;
	void __fastcall SetAutoHideScroll(const bool Value);
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	
public:
	Acsbutils::TacScrollWnd* ListSW;
	__fastcall virtual TsCustomListBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	__fastcall virtual ~TsCustomListBox(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Font = {stored=FontStored};
	__property ParentFont = {stored=FontStored, default=1};
	__property System::Word AutoCompleteDelay = {read=FAutoCompleteDelay, write=FAutoCompleteDelay, default=500};
	__property bool AutoHideScroll = {read=FAutoHideScroll, write=SetAutoHideScroll, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property System::Byte LeftPadding = {read=FLeftPadding, write=SetLeftPadding, default=0};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property TBeforeDrawItemEvent OnBeforeItemDraw = {read=FOnBeforeItemDraw, write=FOnBeforeItemDraw};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::Classes::TNotifyEvent OnVScroll = {read=FOnVScroll, write=FOnVScroll};
	__property Color = {stored=ColorStored, default=-16777211};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomListBox(HWND ParentWindow) : Vcl::Stdctrls::TListBox(ParentWindow) { }
	
};


class DELPHICLASS TsListBox;
class PASCALIMPLEMENTATION TsListBox : public TsCustomListBox
{
	typedef TsCustomListBox inherited;
	
public:
	/* TsCustomListBox.Create */ inline __fastcall virtual TsListBox(System::Classes::TComponent* AOwner) : TsCustomListBox(AOwner) { }
	/* TsCustomListBox.Destroy */ inline __fastcall virtual ~TsListBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsListBox(HWND ParentWindow) : TsCustomListBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Slistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SLISTBOX)
using namespace Slistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SlistboxHPP
