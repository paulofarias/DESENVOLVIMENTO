﻿// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sTrackBar.pas' rev: 33.00 (Windows)

#ifndef StrackbarHPP
#define StrackbarHPP

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
#include <Vcl.ComCtrls.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Types.hpp>
#include <sConst.hpp>
#include <acntUtils.hpp>
#include <sGraphUtils.hpp>
#include <sDefaults.hpp>
#include <sCommonData.hpp>
#include <sFade.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Strackbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsTrackBar;
class DELPHICLASS TsRangeSelector;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Types::TPoint> TAPoint;

class PASCALIMPLEMENTATION TsTrackBar : public Vcl::Comctrls::TTrackBar
{
	typedef Vcl::Comctrls::TTrackBar inherited;
	
private:
	System::Classes::TNotifyEvent FOnUserChange;
	System::Classes::TNotifyEvent FOnUserChanged;
	bool EventFlag;
	bool FReversed;
	bool FShowFocus;
	bool AppShowHint;
	bool FPosByClick;
	bool FShowProgress;
	Vcl::Graphics::TBitmap* Thumb;
	Vcl::Graphics::TBitmap* FThumbGlyph;
	Vcl::Graphics::TCanvas* FCanvas;
	System::Types::TPoint FBarOffset;
	Scommondata::TsCommonData* FCommonData;
	Sconst::TPaintEvent FOnSkinPaint;
	int FShowProgressFrom;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	int __fastcall GetHBarOffset();
	int __fastcall GetVBarOffset();
	void __fastcall SetHBarOffset(const int Value);
	void __fastcall SetVBarOffset(const int Value);
	void __fastcall SetThumbGlyph(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetShowProgressFrom(const int Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall WMMouseMsg(Winapi::Messages::TWMMouse &Message);
	void __fastcall TBMGetThumbRect(Winapi::Messages::TMessage &Message);
	bool __fastcall ActReversed();
	
protected:
	int TickHeight;
	int __fastcall GetNdxProgress(bool Horz);
	int __fastcall GetNdxSlider(bool Horz);
	int __fastcall GetNdxThumb(bool Horz);
	int __fastcall GetNdxThick(bool Horz);
	void __fastcall StdPaintBG(Vcl::Graphics::TBitmap* Bmp);
	void __fastcall StdPaintBar(Vcl::Graphics::TBitmap* Bmp);
	void __fastcall StdPaintThumb();
	void __fastcall PaintBody();
	void __fastcall PaintBar();
	void __fastcall PaintTicksHor();
	void __fastcall PaintTicksVer();
	void __fastcall PaintTick(const System::Types::TPoint &P, bool Horz);
	void __fastcall PaintProgress(const System::Types::TRect &R, bool Horz);
	void __fastcall PaintThumb();
	void __fastcall Paint();
	void __fastcall PrepareCache();
	virtual void __fastcall PaintWindow(HDC DC);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall SetPosByMouse(const System::Types::TPoint &p);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	void __fastcall UserChanged(bool Finished);
	
public:
	System::Types::TRect __fastcall ThumbRect();
	System::Types::TRect __fastcall ChannelRect();
	int __fastcall TickPos(int i);
	int __fastcall TickCount();
	TAPoint __fastcall TicksArray(const System::Types::TRect &ChRect);
	__fastcall virtual TsTrackBar(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd();
	__fastcall virtual ~TsTrackBar();
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall Loaded();
	int __fastcall Mode();
	
__published:
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property ThumbLength = {default=23};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property bool Reversed = {read=FReversed, write=SetBoolean, index=0, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=0};
	__property bool ShowProgress = {read=FShowProgress, write=SetBoolean, index=2, default=0};
	__property bool PosByClick = {read=FPosByClick, write=FPosByClick, index=3, default=0};
	__property Vcl::Graphics::TBitmap* ThumbGlyph = {read=FThumbGlyph, write=SetThumbGlyph};
	__property Sconst::TPaintEvent OnSkinPaint = {read=FOnSkinPaint, write=FOnSkinPaint};
	__property TickStyle = {default=1};
	__property TickMarks = {default=0};
	__property System::Classes::TNotifyEvent OnUserChange = {read=FOnUserChange, write=FOnUserChange};
	__property System::Classes::TNotifyEvent OnUserChanged = {read=FOnUserChanged, write=FOnUserChanged};
	__property int BarOffsetV = {read=GetVBarOffset, write=SetVBarOffset, default=0};
	__property int BarOffsetH = {read=GetHBarOffset, write=SetHBarOffset, default=0};
	__property int ShowProgressFrom = {read=FShowProgressFrom, write=SetShowProgressFrom, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsTrackBar(HWND ParentWindow) : Vcl::Comctrls::TTrackBar(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


enum DECLSPEC_DENUM TacChangingMode : unsigned char { cmDepended, cmUndepended, cmIgnoredSecond };

class PASCALIMPLEMENTATION TsRangeSelector : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FMax;
	int FMin;
	int FState1;
	int FState2;
	int FFrequency;
	int FPosition2;
	int FPosition1;
	bool FShowFocus;
	bool FShowRange;
	Scommondata::TsCommonData* FCommonData;
	Vcl::Comctrls::TTrackBarOrientation FOrientation;
	Vcl::Comctrls::TTickStyle FTickStyle;
	Vcl::Comctrls::TTickMark FTickMarks;
	System::Types::TPoint PrevMousePos;
	TacChangingMode FChangingMode;
	System::Classes::TNotifyEvent FOnChange;
	int FChannelMargin;
	void __fastcall WMMouseMsg(Winapi::Messages::TWMMouse &Message);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetOrientation(const Vcl::Comctrls::TTrackBarOrientation Value);
	void __fastcall SetTickMarks(const Vcl::Comctrls::TTickMark Value);
	void __fastcall SetTickStyle(const Vcl::Comctrls::TTickStyle Value);
	void __fastcall SetState(const int Index, const int Value);
	void __fastcall SetPosition(const int Index, const int Value);
	
protected:
	double iStep;
	int TickHeight;
	int ActThumbSize;
	int __fastcall GetNdxProgress(bool Horz);
	int __fastcall GetNdxSlider(bool Horz);
	int __fastcall GetNdxThumb(bool Horz);
	int __fastcall GetNdxThick(bool Horz);
	void __fastcall PrepareCache();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall StdPaintBG(Vcl::Graphics::TBitmap* Bmp);
	void __fastcall StdPaintBar(Vcl::Graphics::TBitmap* Bmp);
	void __fastcall StdPaintThumb(int Index);
	virtual void __fastcall Paint();
	void __fastcall PaintBar();
	void __fastcall PaintBody();
	void __fastcall PaintTicksHor();
	void __fastcall PaintTicksVer();
	void __fastcall PaintTick(const System::Types::TPoint &P, bool Horz);
	void __fastcall PaintRange(const System::Types::TRect &R, bool Horz);
	void __fastcall PaintThumb(int Index, int State);
	int __fastcall Mode();
	System::Types::TSize __fastcall ThumbSize();
	System::Types::TSize __fastcall ChannelSize();
	int __fastcall TickCount();
	int __fastcall TickPos(int i);
	int __fastcall Coord(int Index);
	System::Types::TRect __fastcall ThumbRect(int Coord);
	System::Types::TRect __fastcall RangeRect(const System::Types::TRect &aRect);
	TAPoint __fastcall InitTicksArray(const System::Types::TRect &ChRect);
	__property int State1 = {read=FState1, write=SetState, index=0, default=0};
	__property int State2 = {read=FState2, write=SetState, index=1, default=0};
	HIDESBASEDYNAMIC void __fastcall Changed();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	System::Types::TRect __fastcall ChannelRect();
	
public:
	__fastcall virtual TsRangeSelector(System::Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction();
	virtual void __fastcall CreateWnd();
	__fastcall virtual ~TsRangeSelector();
	virtual void __fastcall Loaded();
	void __fastcall InvalidateNow();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
	__property int Max = {read=FMax, write=SetInteger, index=3, default=10};
	__property int Min = {read=FMin, write=SetInteger, index=2, default=0};
	__property int Frequency = {read=FFrequency, write=SetInteger, index=4, default=1};
	__property int ChannelMargin = {read=FChannelMargin, write=SetInteger, index=5, default=8};
	__property int Position2 = {read=FPosition2, write=SetPosition, index=1, default=10};
	__property int Position1 = {read=FPosition1, write=SetPosition, index=0, default=0};
	__property Vcl::Comctrls::TTrackBarOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property TacChangingMode ChangingMode = {read=FChangingMode, write=FChangingMode, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=0};
	__property bool ShowRange = {read=FShowRange, write=SetBoolean, index=2, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property Vcl::Comctrls::TTickMark TickMarks = {read=FTickMarks, write=SetTickMarks, default=0};
	__property Vcl::Comctrls::TTickStyle TickStyle = {read=FTickStyle, write=SetTickStyle, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsRangeSelector(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Strackbar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STRACKBAR)
using namespace Strackbar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StrackbarHPP
