// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMemo.pas' rev: 6.00

#ifndef sMemoHPP
#define sMemoHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Graphics.hpp>	// Pascal unit
#include <acSBUtils.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smemo
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsMemo;
class PASCALIMPLEMENTATION TsMemo : public Stdctrls::TMemo 
{
	typedef Stdctrls::TMemo inherited;
	
private:
	Classes::TNotifyEvent FOnVScroll;
	Classes::TNotifyEvent FOnScrollCaret;
	Scommondata::TsBoundLabel* FBoundLabel;
	Scommondata::TsScrollWndData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	
protected:
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	
public:
	Acsbutils::TacScrollWnd* ListSW;
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsMemo(Classes::TComponent* AOwner);
	__fastcall virtual ~TsMemo(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Text ;
	__property CharCase  = {default=0};
	__property Classes::TNotifyEvent OnScrollCaret = {read=FOnScrollCaret, write=FOnScrollCaret};
	__property Classes::TNotifyEvent OnVScroll = {read=FOnVScroll, write=FOnVScroll};
	__property Color  = {stored=ColorStored, default=-2147483643};
	__property Font  = {stored=FontStored};
	__property ParentFont  = {stored=FontStored, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsMemo(HWND ParentWindow) : Stdctrls::TMemo(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Smemo */
using namespace Smemo;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sMemo
