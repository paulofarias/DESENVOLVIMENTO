// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMemo.pas' rev: 32.00 (Windows)

#ifndef SmemoHPP
#define SmemoHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <sConst.hpp>
#include <sCommonData.hpp>
#include <sDefaults.hpp>
#include <acSBUtils.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Smemo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsMemo;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsMemo : public Vcl::Stdctrls::TMemo
{
	typedef Vcl::Stdctrls::TMemo inherited;
	
private:
	System::Classes::TNotifyEvent FOnVScroll;
	System::Classes::TNotifyEvent FOnScrollCaret;
	Scommondata::TsBoundLabel* FBoundLabel;
	Scommondata::TsScrollWndData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	
public:
	Acsbutils::TacScrollWnd* ListSW;
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsMemo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsMemo(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Text = {default=0};
	__property CharCase = {default=0};
	__property System::Classes::TNotifyEvent OnScrollCaret = {read=FOnScrollCaret, write=FOnScrollCaret};
	__property System::Classes::TNotifyEvent OnVScroll = {read=FOnVScroll, write=FOnVScroll};
	__property Color = {stored=ColorStored, default=-16777211};
	__property Font = {stored=FontStored};
	__property ParentFont = {stored=FontStored, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsMemo(HWND ParentWindow) : Vcl::Stdctrls::TMemo(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Smemo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SMEMO)
using namespace Smemo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SmemoHPP
