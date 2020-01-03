// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sscrollbar.pas' rev: 21.00

#ifndef SscrollbarHPP
#define SscrollbarHPP

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
#include <Stdctrls.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sscrollbar
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsScrollBar;
class PASCALIMPLEMENTATION TsScrollBar : public Stdctrls::TScrollBar
{
	typedef Stdctrls::TScrollBar inherited;
	
private:
	Types::TRect FBtn1Rect;
	Types::TRect FBtn2Rect;
	Types::TRect FBar1Rect;
	Types::TRect FBar2Rect;
	Types::TRect FSliderRect;
	int FCurrPos;
	int FBtn1State;
	int FBar2State;
	int FBtn2State;
	int FBar1State;
	int FSliderState;
	bool FBeginTrack;
	bool SkinnedRecreate;
	bool MustBeRecreated;
	Extctrls::TTimer* Timer;
	#pragma pack(push,1)
	tagSCROLLINFO FSI;
	#pragma pack(pop)
	Scommondata::TsCommonData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	HIDESBASE MESSAGE void __fastcall CNHScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CNVScroll(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	void __fastcall SetInteger(int Index, int Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	void __fastcall SetSkinManager(const Sskinmanager::TsSkinManager* Value);
	
protected:
	Sconst::TCacheInfo CI;
	bool AppShowHint;
	int RecreateCount;
	DYNAMIC void __fastcall Change(void);
	void __fastcall CheckRecreate(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall Paint(HDC MsgDC);
	void __fastcall DrawSlider(Graphics::TBitmap* b);
	int __fastcall BtnWidth(void);
	Types::TRect __fastcall Bar1Rect(void);
	Types::TRect __fastcall Bar2Rect(void);
	Types::TRect __fastcall Btn1Rect(void);
	Types::TRect __fastcall Btn2Rect(void);
	int __fastcall WorkSize(void);
	Types::TRect __fastcall SliderRect(void);
	int __fastcall SliderSize(void);
	Types::TPoint __fastcall CoordToPoint(const Types::TPoint &p);
	int __fastcall CoordToPosition(const Types::TPoint &p);
	int __fastcall PositionToCoord(void);
	bool __fastcall BarIsHot(void);
	void __fastcall PrepareTimer(void);
	void __fastcall PrepareBtnTimer(void);
	void __fastcall PrepareBarTimer(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall IncPos(int Offset);
	void __fastcall SetPos(int Pos);
	
public:
	int ScrollCode;
	int MouseOffset;
	bool RepaintNeeded;
	bool DoSendChanges;
	bool DrawingForbidden;
	Controls::TWinControl* LinkedControl;
	__fastcall virtual TsScrollBar(Classes::TComponent* AOwner);
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
	/* TWinControl.CreateParented */ inline __fastcall TsScrollBar(HWND ParentWindow) : Stdctrls::TScrollBar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall UpdateControlScrollBar(Controls::TWinControl* Control, TsScrollBar* &ScrollBar, Forms::TScrollBarKind Kind, bool Free = true);

}	/* namespace Sscrollbar */
using namespace Sscrollbar;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SscrollbarHPP
