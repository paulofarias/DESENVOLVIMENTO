// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sListBox.pas' rev: 32.00 (Windows)

#ifndef SlistboxHPP
#define SlistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <acSBUtils.hpp>
#include <sConst.hpp>
#include <sDefaults.hpp>
#include <sCommonData.hpp>

//-- user supplied -----------------------------------------------------------

namespace Slistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsCustomListBox;
class DELPHICLASS TsListBox;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TBeforeDrawItemEvent)(HDC aDC, int aIndex, System::Types::TRect &aRect);

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
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
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
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


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
