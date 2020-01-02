// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Strackbar.pas' rev: 11.00

#ifndef StrackbarHPP
#define StrackbarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sgraphutils.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sfade.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Strackbar
{
//-- type declarations -------------------------------------------------------
typedef DynamicArray<Types::TPoint >  TAPoint;

class DELPHICLASS TsTrackBar;
class PASCALIMPLEMENTATION TsTrackBar : public Comctrls::TTrackBar 
{
	typedef Comctrls::TTrackBar inherited;
	
private:
	Classes::TNotifyEvent FOnUserChange;
	Classes::TNotifyEvent FOnUserChanged;
	bool EventFlag;
	bool FReversed;
	bool FShowFocus;
	bool AppShowHint;
	bool FPosByClick;
	bool FShowProgress;
	Graphics::TBitmap* Thumb;
	Graphics::TBitmap* FThumbGlyph;
	Graphics::TCanvas* FCanvas;
	#pragma pack(push,1)
	Types::TPoint FBarOffset;
	#pragma pack(pop)
	Scommondata::TsCommonData* FCommonData;
	Sconst::TPaintEvent FOnSkinPaint;
	int FShowProgressFrom;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	int __fastcall GetHBarOffset(void);
	int __fastcall GetVBarOffset(void);
	void __fastcall SetHBarOffset(const int Value);
	void __fastcall SetVBarOffset(const int Value);
	void __fastcall SetThumbGlyph(const Graphics::TBitmap* Value);
	void __fastcall SetShowProgressFrom(const int Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	void __fastcall WMMouseMsg(Messages::TWMMouse &Message);
	void __fastcall TBMGetThumbRect(Messages::TMessage &Message);
	bool __fastcall ActReversed(void);
	
protected:
	int TickHeight;
	int __fastcall GetNdxProgress(bool Horz);
	int __fastcall GetNdxSlider(bool Horz);
	int __fastcall GetNdxThumb(bool Horz);
	int __fastcall GetNdxThick(bool Horz);
	void __fastcall StdPaintBG(Graphics::TBitmap* Bmp);
	void __fastcall StdPaintBar(Graphics::TBitmap* Bmp);
	void __fastcall StdPaintThumb(void);
	void __fastcall PaintBody(void);
	void __fastcall PaintBar(void);
	void __fastcall PaintTicksHor(void);
	void __fastcall PaintTicksVer(void);
	void __fastcall PaintTick(const Types::TPoint &P, bool Horz);
	void __fastcall PaintProgress(const Types::TRect &R, bool Horz);
	void __fastcall PaintThumb(void);
	void __fastcall Paint(void);
	void __fastcall PrepareCache(void);
	virtual void __fastcall PaintWindow(HDC DC);
	__property Graphics::TCanvas* Canvas = {read=FCanvas};
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall SetPosByMouse(const Types::TPoint &p);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	void __fastcall UserChanged(bool Finished);
	
public:
	Types::TRect __fastcall ThumbRect();
	Types::TRect __fastcall ChannelRect();
	int __fastcall TickPos(int i);
	int __fastcall TickCount(void);
	TAPoint __fastcall TicksArray(const Types::TRect &ChRect);
	__fastcall virtual TsTrackBar(Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsTrackBar(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	int __fastcall Mode(void);
	
__published:
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property ThumbLength  = {default=23};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property bool Reversed = {read=FReversed, write=SetBoolean, index=0, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=0};
	__property bool ShowProgress = {read=FShowProgress, write=SetBoolean, index=2, default=0};
	__property bool PosByClick = {read=FPosByClick, write=FPosByClick, index=3, default=0};
	__property Graphics::TBitmap* ThumbGlyph = {read=FThumbGlyph, write=SetThumbGlyph};
	__property Sconst::TPaintEvent OnSkinPaint = {read=FOnSkinPaint, write=FOnSkinPaint};
	__property TickStyle  = {default=1};
	__property TickMarks  = {default=0};
	__property Classes::TNotifyEvent OnUserChange = {read=FOnUserChange, write=FOnUserChange};
	__property Classes::TNotifyEvent OnUserChanged = {read=FOnUserChanged, write=FOnUserChanged};
	__property int BarOffsetV = {read=GetVBarOffset, write=SetVBarOffset, default=0};
	__property int BarOffsetH = {read=GetHBarOffset, write=SetHBarOffset, default=0};
	__property int ShowProgressFrom = {read=FShowProgressFrom, write=SetShowProgressFrom, default=0};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsTrackBar(HWND ParentWindow) : Comctrls::TTrackBar(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacChangingMode { cmDepended, cmUndepended, cmIgnoredSecond };
#pragma option pop

class DELPHICLASS TsRangeSelector;
class PASCALIMPLEMENTATION TsRangeSelector : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
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
	Comctrls::TTrackBarOrientation FOrientation;
	Comctrls::TTickStyle FTickStyle;
	Comctrls::TTickMark FTickMarks;
	#pragma pack(push,1)
	Types::TPoint PrevMousePos;
	#pragma pack(pop)
	TacChangingMode FChangingMode;
	Classes::TNotifyEvent FOnChange;
	int FChannelMargin;
	void __fastcall WMMouseMsg(Messages::TWMMouse &Message);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetOrientation(const Comctrls::TTrackBarOrientation Value);
	void __fastcall SetTickMarks(const Comctrls::TTickMark Value);
	void __fastcall SetTickStyle(const Comctrls::TTickStyle Value);
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
	void __fastcall PrepareCache(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall StdPaintBG(Graphics::TBitmap* Bmp);
	void __fastcall StdPaintBar(Graphics::TBitmap* Bmp);
	void __fastcall StdPaintThumb(int Index);
	virtual void __fastcall Paint(void);
	void __fastcall PaintBar(void);
	void __fastcall PaintBody(void);
	void __fastcall PaintTicksHor(void);
	void __fastcall PaintTicksVer(void);
	void __fastcall PaintTick(const Types::TPoint &P, bool Horz);
	void __fastcall PaintRange(const Types::TRect &R, bool Horz);
	void __fastcall PaintThumb(int Index, int State);
	int __fastcall Mode(void);
	tagSIZE __fastcall ThumbSize();
	tagSIZE __fastcall ChannelSize();
	int __fastcall TickCount(void);
	int __fastcall TickPos(int i);
	int __fastcall Coord(int Index);
	Types::TRect __fastcall ThumbRect(int Coord);
	Types::TRect __fastcall RangeRect(const Types::TRect &aRect);
	TAPoint __fastcall InitTicksArray(const Types::TRect &ChRect);
	__property int State1 = {read=FState1, write=SetState, index=0, default=0};
	__property int State2 = {read=FState2, write=SetState, index=1, default=0};
	HIDESBASEDYNAMIC void __fastcall Changed(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	Types::TRect __fastcall ChannelRect();
	
public:
	__fastcall virtual TsRangeSelector(Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsRangeSelector(void);
	virtual void __fastcall Loaded(void);
	void __fastcall InvalidateNow(void);
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property DoubleBuffered ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentShowHint  = {default=1};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDrag ;
	__property int Max = {read=FMax, write=SetInteger, index=3, default=10};
	__property int Min = {read=FMin, write=SetInteger, index=2, default=0};
	__property int Frequency = {read=FFrequency, write=SetInteger, index=4, default=1};
	__property int ChannelMargin = {read=FChannelMargin, write=SetInteger, index=5, default=8};
	__property int Position2 = {read=FPosition2, write=SetPosition, index=1, default=10};
	__property int Position1 = {read=FPosition1, write=SetPosition, index=0, default=0};
	__property Comctrls::TTrackBarOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property TacChangingMode ChangingMode = {read=FChangingMode, write=FChangingMode, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=0};
	__property bool ShowRange = {read=FShowRange, write=SetBoolean, index=2, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property Comctrls::TTickMark TickMarks = {read=FTickMarks, write=SetTickMarks, default=0};
	__property Comctrls::TTickStyle TickStyle = {read=FTickStyle, write=SetTickStyle, default=1};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsRangeSelector(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Strackbar */
using namespace Strackbar;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Strackbar
