// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sScrollBar.pas' rev: 32.00 (Windows)

#ifndef SscrollbarHPP
#define SscrollbarHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <System.Types.hpp>
#include <acntUtils.hpp>
#include <sConst.hpp>
#include <sCommonData.hpp>
#include <sDefaults.hpp>
#include <sSkinManager.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sscrollbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsScrollBar;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsScrollBar : public Vcl::Stdctrls::TScrollBar
{
	typedef Vcl::Stdctrls::TScrollBar inherited;
	
private:
	System::Types::TRect FBtn1Rect;
	System::Types::TRect FBtn2Rect;
	System::Types::TRect FBar1Rect;
	System::Types::TRect FBar2Rect;
	System::Types::TRect FSliderRect;
	int FCurrPos;
	int FBtn1State;
	int FBar2State;
	int FBtn2State;
	int FBar1State;
	int FSliderState;
	bool FBeginTrack;
	bool SkinnedRecreate;
	bool MustBeRecreated;
	Vcl::Extctrls::TTimer* Timer;
	tagSCROLLINFO FSI;
	Scommondata::TsCommonData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	HIDESBASE MESSAGE void __fastcall CNHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CNVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	void __fastcall SetInteger(int Index, int Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	void __fastcall SetSkinManager(Sskinmanager::TsSkinManager* const Value);
	
protected:
	Sconst::TCacheInfo CI;
	bool AppShowHint;
	int RecreateCount;
	DYNAMIC void __fastcall Change(void);
	void __fastcall CheckRecreate(void);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall Paint(HDC MsgDC);
	void __fastcall DrawSlider(Vcl::Graphics::TBitmap* b);
	int __fastcall BtnWidth(void);
	System::Types::TRect __fastcall Bar1Rect(void);
	System::Types::TRect __fastcall Bar2Rect(void);
	System::Types::TRect __fastcall Btn1Rect(void);
	System::Types::TRect __fastcall Btn2Rect(void);
	int __fastcall WorkSize(void);
	System::Types::TRect __fastcall SliderRect(void);
	int __fastcall SliderSize(void);
	System::Types::TPoint __fastcall CoordToPoint(const System::Types::TPoint &p);
	int __fastcall CoordToPosition(const System::Types::TPoint &p);
	int __fastcall PositionToCoord(void);
	bool __fastcall BarIsHot(void);
	void __fastcall PrepareTimer(void);
	void __fastcall PrepareBtnTimer(void);
	void __fastcall PrepareBarTimer(void);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall IncPos(int Offset);
	void __fastcall SetPos(int Pos);
	
public:
	int ScrollCode;
	int MouseOffset;
	bool RepaintNeeded;
	bool DoSendChanges;
	bool DrawingForbidden;
	Vcl::Controls::TWinControl* LinkedControl;
	__fastcall virtual TsScrollBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsScrollBar(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	void __fastcall UpdateBar(void);
	void __fastcall OnTimer(System::TObject* Sender);
	void __fastcall OnBtnTimer(System::TObject* Sender);
	void __fastcall OnBarTimer(System::TObject* Sender);
	__property int Btn1State = {read=FBtn1State, write=SetInteger, index=0, nodefault};
	__property int Btn2State = {read=FBtn2State, write=SetInteger, index=1, nodefault};
	__property int Bar1State = {read=FBar1State, write=SetInteger, index=2, nodefault};
	__property int Bar2State = {read=FBar2State, write=SetInteger, index=3, nodefault};
	__property int SliderState = {read=FSliderState, write=SetInteger, index=4, nodefault};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	
__published:
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager};
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsScrollBar(HWND ParentWindow) : Vcl::Stdctrls::TScrollBar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall UpdateControlScrollBar(Vcl::Controls::TWinControl* Control, TsScrollBar* &ScrollBar, Vcl::Forms::TScrollBarKind Kind, bool Free = true);
}	/* namespace Sscrollbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSCROLLBAR)
using namespace Sscrollbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SscrollbarHPP
