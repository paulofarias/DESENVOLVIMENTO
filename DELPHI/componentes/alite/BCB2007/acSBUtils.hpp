// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acsbutils.pas' rev: 11.00

#ifndef AcsbutilsHPP
#define AcsbutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Typinfo.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsbutils
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDropMarkMode { dmmNone, dmmLeft, dmmRight };
#pragma option pop

#pragma option push -b-
enum acSBUtils__1 { hpeBackground, hpeDropMark, hpeHeaderGlyph, hpeSortGlyph, hpeText };
#pragma option pop

typedef Set<acSBUtils__1, hpeBackground, hpeText>  THeaderPaintElements;

#pragma pack(push,4)
struct TacSkinParams
{
	
public:
	Controls::TControl* Control;
	AnsiString SkinSection;
	bool UseSkinColor;
	bool UseSkinFontColor;
	int VertScrollSize;
	int HorzScrollSize;
	int VertScrollBtnSize;
	int HorzScrollBtnSize;
} ;
#pragma pack(pop)

#pragma pack(push,4)
struct THeaderPaintInfo
{
	
public:
	Graphics::TCanvas* TargetCanvas;
	Classes::TCollectionItem* Column;
	#pragma pack(push,1)
	Types::TRect PaintRectangle;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect TextRectangle;
	#pragma pack(pop)
	bool IsHoverIndex;
	bool IsDownIndex;
	bool IsEnabled;
	bool ShowHeaderGlyph;
	bool ShowSortGlyph;
	bool ShowRightBorder;
	TDropMarkMode DropMark;
	#pragma pack(push,1)
	Types::TPoint GlyphPos;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TPoint SortGlyphPos;
	#pragma pack(pop)
} ;
#pragma pack(pop)

class DELPHICLASS TacScrollBar;
class DELPHICLASS TacScrollWnd;
class DELPHICLASS TacMainWnd;
class PASCALIMPLEMENTATION TacMainWnd : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall InitSkinData(void);
	virtual bool __fastcall DoPrepareCache(void);
	int __fastcall CallPrevWndProc(const HWND Handle, const int Msg, const int WParam, int &LParam);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	bool DlgMode;
	bool Destroyed;
	bool DontRepaint;
	bool OwnSkinData;
	bool InDestroying;
	bool ParamsChanged;
	#pragma pack(push,1)
	Types::TRect WndRect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect ParentRect;
	#pragma pack(pop)
	Graphics::TColor StdColor;
	Graphics::TColor StdFontColor;
	HWND ParentWnd;
	HWND CtrlHandle;
	#pragma pack(push,1)
	tagSIZE WndSize;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TPoint WndPos;
	#pragma pack(pop)
	AnsiString Caption;
	int Tag;
	Controls::TControlStyle OldCtrlStyle;
	Classes::TWndMethod OldWndProc;
	void *OldProc;
	Sskinmanager::TsSkinManager* SkinManager;
	Scommondata::TsCommonData* SkinData;
	void *NewWndProcInstance;
	System::TObject* Adapter;
	virtual void __fastcall SetSkinParams(void);
	__fastcall virtual TacMainWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
	__fastcall virtual ~TacMainWnd(void);
	int __fastcall ProcessMessage(unsigned Msg, int WPar = 0x0, int LPar = 0x0);
};


class PASCALIMPLEMENTATION TacScrollWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	bool fLeftScrollbar;
	bool ScrollsInitialized;
	bool bPreventStyleChange;
	void __fastcall UpdateLeftScroll(void);
	virtual void __fastcall InitSkinData(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	bool fThumbTracking;
	TacScrollBar* sBarHorz;
	TacScrollBar* sBarVert;
	int cxLeftEdge;
	int cxRightEdge;
	int cyTopEdge;
	int cyBottomEdge;
	__fastcall virtual ~TacScrollWnd(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacScrollBar : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	Word fScrollFlags;
	Word nBarType;
	int nArrowWidth;
	int nArrowLength;
	int nButSizeAfter;
	int nButSizeBefore;
	int nMinThumbSize;
	bool fButVisibleBefore;
	bool fButVisibleAfter;
	TacScrollWnd* sw;
	
public:
	bool fScrollVisible;
	#pragma pack(push,1)
	tagSCROLLINFO ScrollInfo;
	#pragma pack(pop)
	__fastcall TacScrollBar(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TacScrollBar(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSpeedButtonHandler;
class PASCALIMPLEMENTATION TacSpeedButtonHandler : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	int __fastcall CallPrevWndProc(const int Msg, const int WParam, int &lParam);
	void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	bool __fastcall PrepareCache(void);
	void __fastcall DrawCaption(void);
	void __fastcall DrawGlyph(void);
	AnsiString __fastcall Caption();
	Types::TRect __fastcall ImgRect();
	int __fastcall GlyphHeight(void);
	Types::TRect __fastcall CaptionRect();
	tagSIZE __fastcall TextRectSize();
	int __fastcall GlyphWidth(void);
	void __fastcall DoDrawText(const Types::TRect &Rect, int Flags);
	int __fastcall CurrentState(void);
	void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	Controls::TControl* Ctrl;
	Controls::TControl* *PCtrl;
	bool IsUpDown;
	bool Destroyed;
	Classes::TWndMethod OldWndProc;
	Scommondata::TsCommonData* SkinData;
	Sskinmanager::TsSkinManager* SkinManager;
	__fastcall virtual TacSpeedButtonHandler(Controls::TControl* Btn, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const AnsiString SkinSection, bool Repaint);
	__fastcall virtual ~TacSpeedButtonHandler(void);
};


class DELPHICLASS TacSBWnd;
class PASCALIMPLEMENTATION TacSBWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	int FCurrPos;
	int FBar1State;
	int FBar2State;
	int FBtn1State;
	int FBtn2State;
	int FSliderState;
	#pragma pack(push,1)
	tagSCROLLINFO FSI;
	#pragma pack(pop)
	void __fastcall SetInteger(const int Index, const int Value);
	Types::TRect __fastcall Bar1Rect();
	Types::TRect __fastcall Bar2Rect();
	Types::TRect __fastcall Btn1Rect();
	Types::TRect __fastcall Btn2Rect();
	bool __fastcall BarIsHot(void);
	Types::TRect __fastcall SliderRect();
	int __fastcall SliderSize(void);
	int __fastcall WorkSize(void);
	int __fastcall PositionToCoord(void);
	void __fastcall DrawSlider(Graphics::TBitmap* b);
	int __fastcall SysBtnSize(void);
	int __fastcall CoordToPosition(const Types::TPoint &ap);
	void __fastcall UpdateBar(void);
	void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	void __fastcall WMPaint(Messages::TWMPaint &Msg);
	virtual void __fastcall AfterCreation(void);
	void __fastcall InitScrollData(void);
	void __fastcall CMMouseLeave(void);
	void __fastcall CMMouseEnter(void);
	void __fastcall LMouseDown(const int X, const int Y);
	void __fastcall LMouseUp(const int X, const int Y);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	#pragma pack(push,1)
	Types::TRect FBtn1Rect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect FBtn2Rect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect FBar1Rect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect FBar2Rect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect FSliderRect;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TPoint p;
	#pragma pack(pop)
	Sconst::TCacheInfo CI;
	Stdctrls::TScrollBar* Control;
	bool FRepainting;
	int FLockCount;
	int MouseOffset;
	int ScrollCode;
	__property int Btn1State = {read=FBtn1State, write=SetInteger, index=0, nodefault};
	__property int Btn2State = {read=FBtn2State, write=SetInteger, index=1, nodefault};
	__property int Bar1State = {read=FBar1State, write=SetInteger, index=2, nodefault};
	__property int Bar2State = {read=FBar2State, write=SetInteger, index=3, nodefault};
	__property int SliderState = {read=FSliderState, write=SetInteger, index=4, nodefault};
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacSBWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSBWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacStaticWnd;
class PASCALIMPLEMENTATION TacStaticWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual bool __fastcall PaintContent(void);
	Types::TRect __fastcall PaintText(bool DoCalc);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacEdgeWnd;
class PASCALIMPLEMENTATION TacEdgeWnd : public TacStaticWnd 
{
	typedef TacStaticWnd inherited;
	
protected:
	virtual void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacEdgeWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacEdgeWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacIconWnd;
class PASCALIMPLEMENTATION TacIconWnd : public TacStaticWnd 
{
	typedef TacStaticWnd inherited;
	
protected:
	bool IsBmp;
	Graphics::TBitmap* FBmp;
	virtual void __fastcall AfterCreation(void);
	virtual bool __fastcall PaintContent(void);
	
public:
	__fastcall virtual ~TacIconWnd(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacIconWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacLinkWnd;
class PASCALIMPLEMENTATION TacLinkWnd : public TacStaticWnd 
{
	typedef TacStaticWnd inherited;
	
protected:
	virtual bool __fastcall PaintContent(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacLinkWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacLinkWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacBtnWnd;
class PASCALIMPLEMENTATION TacBtnWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	unsigned ID;
	bool FMouseClicked;
	virtual void __fastcall AfterCreation(void);
	unsigned __fastcall CtrlStyle(void);
	bool __fastcall Down(void);
	virtual int __fastcall CurrentState(void);
	void __fastcall DrawCaption(const Acnttypes::TacColoring &Coloring);
	virtual void __fastcall DrawGlyph(void);
	virtual tagSIZE __fastcall GlyphSize();
	void __fastcall DoDrawText(Types::TRect &Rect, const int Flags, bool CanGlow);
	virtual Types::TRect __fastcall CaptionRect();
	virtual int __fastcall MaxCaptionWidth(void);
	tagSIZE __fastcall TextRectSize();
	void __fastcall Repaint(void);
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	virtual void __fastcall PrepareCache(void);
	void __fastcall ac_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBtnWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacBitBtnWnd;
class PASCALIMPLEMENTATION TacBitBtnWnd : public TacBtnWnd 
{
	typedef TacBtnWnd inherited;
	
protected:
	Types::TRect __fastcall GlyphRect();
	virtual Types::TRect __fastcall CaptionRect();
	virtual int __fastcall CurrentState(void);
	virtual int __fastcall MaxCaptionWidth(void);
	virtual tagSIZE __fastcall GlyphSize();
	virtual void __fastcall DrawGlyph(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacBitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBitBtnWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSplitBtnWnd;
class PASCALIMPLEMENTATION TacSplitBtnWnd : public TacBtnWnd 
{
	typedef TacBtnWnd inherited;
	
protected:
	int ArrowWidth;
	Types::TRect __fastcall ArrowRect();
	virtual Types::TRect __fastcall CaptionRect();
	virtual void __fastcall PrepareCache(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacSplitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSplitBtnWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSizerWnd;
class PASCALIMPLEMENTATION TacSizerWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacSizerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSizerWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSpinWnd;
class PASCALIMPLEMENTATION TacSpinWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	int Btn1State;
	int Btn2State;
	bool RTL;
	bool bMousePressed;
	bool __fastcall IsVertical(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	bool Skinned;
	int lOffset;
	Controls::TWinControl* OwnerWnd;
	void __fastcall SetRTL(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacSpinWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSpinWnd(void) { }
	#pragma option pop
	
};


typedef DynamicArray<Types::TPoint >  TAPoint;

class DELPHICLASS TacTrackWnd;
class PASCALIMPLEMENTATION TacTrackWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	int TickHeight;
	bool bMousePressed;
	double iStep;
	bool __fastcall IsVertical(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall PaintBody(void);
	void __fastcall PaintBar(void);
	void __fastcall PaintThumb(int i);
	void __fastcall PaintTicksHor(void);
	void __fastcall PaintTicksVer(void);
	void __fastcall PaintTick(const Types::TPoint &P, bool Horz);
	Comctrls::TTickMark __fastcall TickMarks(void);
	Comctrls::TTickStyle __fastcall TickStyle(void);
	int __fastcall TickCount(void);
	TAPoint __fastcall TicksArray();
	int __fastcall TickPos(const int i);
	Types::TRect __fastcall ThumbRect();
	Types::TRect __fastcall ChannelRect();
	int __fastcall Mode(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacTrackWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTrackWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacCheckBoxWnd;
class PASCALIMPLEMENTATION TacCheckBoxWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	bool OwnerDraw;
	Stdctrls::TCheckBoxState __fastcall State(void);
	int __fastcall CtlState(void);
	Types::TRect __fastcall CheckRect();
	Types::TRect __fastcall SkinCheckRect(const int i);
	int __fastcall SkinGlyphWidth(const int i);
	int __fastcall SkinGlyphHeight(const int i);
	void __fastcall DrawSkinGlyph(const int i);
	void __fastcall DrawCheckText(void);
	short __fastcall GlyphMaskIndex(const Stdctrls::TCheckBoxState AState);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacCheckBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacCheckBoxWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacContainerWnd;
class PASCALIMPLEMENTATION TacContainerWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	#pragma pack(push,1)
	Types::TRect ClientRect;
	#pragma pack(pop)
	int BorderWidth;
	virtual bool __fastcall DoPrepareCache(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacContainerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacContainerWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSearchWnd;
class PASCALIMPLEMENTATION TacSearchWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	#pragma pack(push,1)
	Types::TRect ClientRect;
	#pragma pack(pop)
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacSearchWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSearchWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacToolBarWnd;
class PASCALIMPLEMENTATION TacToolBarWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	#pragma pack(push,1)
	Types::TRect ClientRect;
	#pragma pack(pop)
	int BorderWidth;
	virtual bool __fastcall DoPrepareCache(void);
	void __fastcall DrawButtons(const Graphics::TBitmap* Bmp);
	void __fastcall DrawBtn(const int Index, const Types::TRect &R, const HDC DC);
	Types::TRect __fastcall GetButtonRect(const int Index);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	int __fastcall Count(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacTransPanelWnd;
class PASCALIMPLEMENTATION TacTransPanelWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacTransPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTransPanelWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacGroupBoxWnd;
class PASCALIMPLEMENTATION TacGroupBoxWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	Types::TRect __fastcall CaptionRect();
	void __fastcall PrepareCache(void);
	void __fastcall WriteText(const Types::TRect &R);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacGroupBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacGroupBoxWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacTabWnd;
class PASCALIMPLEMENTATION TacTabWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	Types::TRect __fastcall DisplayRect();
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTabWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacAccessPanel;
class PASCALIMPLEMENTATION TacAccessPanel : public Extctrls::TCustomPanel 
{
	typedef Extctrls::TCustomPanel inherited;
	
public:
	#pragma option push -w-inl
	/* TCustomPanel.Create */ inline __fastcall virtual TacAccessPanel(Classes::TComponent* AOwner) : Extctrls::TCustomPanel(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TacAccessPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacAccessPanel(HWND ParentWindow) : Extctrls::TCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TacPanelWnd;
class PASCALIMPLEMENTATION TacPanelWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	virtual bool __fastcall DoPrepareCache(void);
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0));
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	TacAccessPanel* Panel;
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPanelWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacStaticTextWnd;
class PASCALIMPLEMENTATION TacStaticTextWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	Controls::TWinControl* Control;
	virtual void __fastcall AfterCreation(void);
	bool __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0));
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticTextWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticTextWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacMnuWnd;
class PASCALIMPLEMENTATION TacMnuWnd : public TacScrollWnd 
{
	typedef TacScrollWnd inherited;
	
protected:
	bool Shown;
	bool bFlag;
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
	
public:
	int RgnChanged;
	void __fastcall PrepareCache(void);
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacMnuWnd(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacMnuWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacBaseWnd;
class PASCALIMPLEMENTATION TacBaseWnd : public TacScrollWnd 
{
	typedef TacScrollWnd inherited;
	
protected:
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacBaseWnd(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacBaseWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacMDIWnd;
class PASCALIMPLEMENTATION TacMDIWnd : public TacBaseWnd 
{
	typedef TacBaseWnd inherited;
	
protected:
	void __fastcall UpdateGraphControls(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	Forms::TForm* FForm;
	System::TObject* SkinProvider;
	Scommondata::TsCommonData* MDISkinData;
	__fastcall virtual ~TacMDIWnd(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacMDIWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBaseWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


#pragma option push -b-
enum acSBUtils__03 { csPaintNeeded, csNCPaintNeeded };
#pragma option pop

typedef Set<acSBUtils__03, csPaintNeeded, csNCPaintNeeded>  TacCtrlState;

class DELPHICLASS TacEditWnd;
class PASCALIMPLEMENTATION TacEditWnd : public TacBaseWnd 
{
	typedef TacBaseWnd inherited;
	
protected:
	#pragma pack(push,1)
	Types::TRect FClientRect;
	#pragma pack(pop)
	int FrameColor;
	TacCtrlState CtrlState;
	bool StdNCPaint;
	bool SingleLineEdit;
	bool CtrlListChanged;
	Graphics::TColor FocusColor;
	Graphics::TColor FixedGradientFrom;
	Graphics::TColor FixedGradientTo;
	bool __fastcall HandleAlphaCmd(Messages::TMessage &Message);
	bool __fastcall NCContent(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	Types::TRect __fastcall ClientRect();
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	Graphics::TColor Color;
	virtual void __fastcall SetSkinParams(void);
	__fastcall virtual TacEditWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacEditWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacScrollBoxWnd;
class PASCALIMPLEMENTATION TacScrollBoxWnd : public TacScrollWnd 
{
	typedef TacScrollWnd inherited;
	
protected:
	void __fastcall AC_WMNCPaint(HDC aDC);
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall PrepareCache(void);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacScrollBoxWnd(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacNativePaint;
class PASCALIMPLEMENTATION TacNativePaint : public TacScrollBoxWnd 
{
	typedef TacScrollBoxWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacNativePaint(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacNativePaint(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacComboListWnd;
class PASCALIMPLEMENTATION TacComboListWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	bool Shown;
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	bool DBScroll;
	bool SimplyBox;
	virtual void __fastcall SetSkinParams(void);
	__fastcall virtual ~TacComboListWnd(void);
	__fastcall TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const AnsiString SkinSection, bool Repaint, bool Simply);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacListViewWnd;
class PASCALIMPLEMENTATION TacListViewWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	HWND FhWndHeader;
	void *FhHeaderProc;
	void *FhDefHeaderProc;
	int FPressedColumn;
	int HoverColIndex;
	Comctrls::TViewStyle __fastcall ViewStyle(void);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	void __fastcall ColumnSkinPaint(const Types::TRect &ControlRect, int cIndex, HDC DC);
	bool __fastcall HotTrack(void);
	void __fastcall HeaderWndProc(Messages::TMessage &Message);
	Types::TRect __fastcall GetHeaderColumnRect(int Index);
	void __fastcall PaintHeader(HDC DC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacListViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacListViewWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacGridWnd;
class PASCALIMPLEMENTATION TacGridWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	Graphics::TColor IndColor;
	Graphics::TColor FixedColor;
	Graphics::TColor TitleColor;
	Graphics::TColor EvenRowColor;
	Graphics::TColor OddRowColor;
	Graphics::TColor FooterColor;
	Graphics::TColor GridLineColor;
	Graphics::TColor TitleFontColor;
	Graphics::TColor SelectionColor;
	Graphics::TColor FooterCellColor;
	Graphics::TColor SelectionTextColor;
	Graphics::TColor GridFixedLineColor;
	Graphics::TColor FixedGradientMirrorTo;
	Graphics::TColor FixedGradientMirrorFrom;
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacGridEhWnd;
class PASCALIMPLEMENTATION TacGridEhWnd : public TacGridWnd 
{
	typedef TacGridWnd inherited;
	
protected:
	bool Fixed3D;
	Graphics::TColor DarkColor;
	Graphics::TColor BrightColor;
	Graphics::TColor DataHorzColor;
	Graphics::TColor DataVertColor;
	Graphics::TColor DataGroupColor;
	Graphics::TColor CategoriesColor;
	Graphics::TColor CategoriesFontColor;
	Graphics::TColor RowDetailColor;
	int IndHorzLines;
	int IndVertLines;
	int InfFillStyle;
	int TitleHorzLines;
	int TitleFillStyle;
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridEhWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacGridWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridEhWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacTreeViewWnd;
class PASCALIMPLEMENTATION TacTreeViewWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	bool SkipBG;
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacTreeViewWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacComboBoxWnd;
class PASCALIMPLEMENTATION TacComboBoxWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	HWND FListHandle;
	bool LBoxOpening;
	TacComboListWnd* ListSW;
	Scommondata::TsCommonData* LBSkinData;
	int __fastcall ButtonHeight(void);
	virtual Types::TRect __fastcall ButtonRect();
	void __fastcall PaintButton(HDC DC);
	void __fastcall RepaintButton(void);
	void __fastcall PaintText(void);
	void __fastcall PrepareSimple(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall Invalidate(void);
	bool __fastcall EasyComboBox(void);
	void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	void __fastcall DrawItem(int Index, const Types::TRect &Rect, Windows::TOwnerDrawState State, HDC DC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacComboBoxWnd(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacVirtualTreeViewWnd;
class PASCALIMPLEMENTATION TacVirtualTreeViewWnd : public TacEditWnd 
{
	typedef TacEditWnd inherited;
	
protected:
	Graphics::TColor HotColor;
	Graphics::TColor FileTextColor;
	Graphics::TColor FolderTextColor;
	Graphics::TColor SelectionTextColor;
	Graphics::TColor CompressedTextColor;
	Graphics::TColor FocusedSelectionColor;
	Graphics::TColor UnfocusedSelectionColor;
	Graphics::TColor FocusedSelectionBorderColor;
	Graphics::TColor UnfocusedSelectionBorderColor;
	bool OwnerDraw;
	Typinfo::TPropInfo *PropInfo;
	void __fastcall AdvancedHeaderDraw(Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, const THeaderPaintElements Elements);
	void __fastcall HeaderDrawQueryElements(Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, THeaderPaintElements &Elements);
	virtual void __fastcall InitSkinData(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacVirtualTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacVirtualTreeViewWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacWWComboBoxWnd;
class PASCALIMPLEMENTATION TacWWComboBoxWnd : public TacComboBoxWnd 
{
	typedef TacComboBoxWnd inherited;
	
protected:
	bool FShowButton;
	Stdctrls::TCustomListBox* ListBox;
	TacScrollWnd* ListBoxSW;
	Scommondata::TsScrollWndData* ListBoxSkinData;
	bool __fastcall GetShowButton(Controls::TWinControl* aCtrl);
	virtual Types::TRect __fastcall ButtonRect();
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacWWComboBoxWnd(void);
public:
	#pragma option push -w-inl
	/* TacEditWnd.Create */ inline __fastcall virtual TacWWComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacComboBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacTabControlWnd;
class PASCALIMPLEMENTATION TacTabControlWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	TacSpinWnd* BtnSW;
	int __fastcall TabCount(void);
	virtual Types::TRect __fastcall ClientRect();
	virtual Types::TRect __fastcall PageRect();
	Types::TRect __fastcall TabRect(const int Index);
	int __fastcall TabRow(int TabIndex);
	Types::TRect __fastcall TabsRect();
	Comctrls::TTabPosition __fastcall TabPosition(void);
	Comctrls::TTabStyle __fastcall Style(void);
	int __fastcall ActiveTabIndex(void);
	Types::TRect __fastcall SkinTabRect(int Index, bool Active);
	void __fastcall CheckUpDown(void);
	void __fastcall DrawSkinTabs(const Sconst::TCacheInfo &CI);
	void __fastcall DrawSkinTab(int Index, int State, Graphics::TBitmap* Bmp, const Types::TPoint &OffsetPoint)/* overload */;
	void __fastcall DrawSkinTab(int Index, int State, HDC DC)/* overload */;
	void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacTabControlWnd(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacPageWnd;
class PASCALIMPLEMENTATION TacPageWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	Comctrls::TTabSheet* Page;
	virtual void __fastcall AfterCreation(void);
	Comctrls::TTabPosition __fastcall TabPosition(void);
	void __fastcall AC_WMEraseBKGnd(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPageWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacPageControlWnd;
class PASCALIMPLEMENTATION TacPageControlWnd : public TacTabControlWnd 
{
	typedef TacTabControlWnd inherited;
	
protected:
	void __fastcall InitPages(void);
	virtual void __fastcall AfterCreation(void);
	virtual Types::TRect __fastcall PageRect();
	virtual Types::TRect __fastcall ClientRect();
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacTabControlWnd.Destroy */ inline __fastcall virtual ~TacPageControlWnd(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacTabControlWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class DELPHICLASS TacToolBarVCLWnd;
class PASCALIMPLEMENTATION TacToolBarVCLWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	Comctrls::TToolBar* ToolBar;
	int HotButtonIndex;
	Comctrls::TToolButton* DroppedButton;
	Comctrls::TTBAdvancedCustomDrawBtnEvent OldDrawBtnEvent;
	void __fastcall PrepareCache(void);
	Types::TRect __fastcall DisplayRect();
	virtual void __fastcall AfterCreation(void);
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	Types::TRect __fastcall GetButtonRect(int Index);
	int __fastcall IndexByMouse(const Types::TPoint &MousePos);
	void __fastcall OurAdvancedCustomDraw(Comctrls::TToolBar* Sender, const Types::TRect &ARect, Comctrls::TCustomDrawStage Stage, bool &DefaultDraw);
	void __fastcall RepaintButton(int Index);
	void __fastcall OurAdvancedCustomDrawButton(Comctrls::TToolBar* Sender, Comctrls::TToolButton* Button, Comctrls::TCustomDrawState State, Comctrls::TCustomDrawStage Stage, Comctrls::TTBCustomDrawFlags &Flags, bool &DefaultDraw);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarVCLWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarVCLWnd(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacStatusBarWnd;
class PASCALIMPLEMENTATION TacStatusBarWnd : public TacMainWnd 
{
	typedef TacMainWnd inherited;
	
protected:
	Comctrls::TStatusBar* StatusBar;
	bool __fastcall SimplePanel(void);
	int __fastcall PartsCount(void);
	AnsiString __fastcall PartText(const int Index);
	Types::TRect __fastcall PartRect(const int Index);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PaintPanels(void);
	void __fastcall PaintGrip(void);
	void __fastcall DrawPanel(const int Index, const Types::TRect &Rect);
	void __fastcall InternalDrawPanel(const int Index, const Types::TRect &Rect);
	void __fastcall DoDrawText(const AnsiString Text, Types::TRect &Rect, const int Flags);
	void __fastcall PrepareCache(void);
	void __fastcall WMPaint(const HDC aDC = (HDC)(0x0));
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacStatusBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStatusBarWnd(void) { }
	#pragma option pop
	
};


typedef Stdctrls::TCheckBoxState __fastcall (*TGetDBFieldCheckState)(System::TObject* DataLink);

typedef TMetaClass* TacScrollWndClass;

class DELPHICLASS TacWinControl;
class PASCALIMPLEMENTATION TacWinControl : public Controls::TWinControl 
{
	typedef Controls::TWinControl inherited;
	
public:
	#pragma option push -w-inl
	/* TWinControl.Create */ inline __fastcall virtual TacWinControl(Classes::TComponent* AOwner) : Controls::TWinControl(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacWinControl(HWND ParentWindow) : Controls::TWinControl(ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacWinControl(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint SM_SCROLLWIDTH = 0x1;
static const Shortint TopOffset = 0x4;
static const Shortint BottomOffset = 0x2;
static const Shortint LeftOffset = 0x1;
static const Shortint RightOffset = 0x1;
extern PACKAGE Sconst::TacSide acTabSides[4];
extern PACKAGE int nLastSBPos;
extern PACKAGE bool acDlgMode;
extern PACKAGE int acMinThumbSize;
extern PACKAGE void __stdcall (*Ac_UninitializeFlatSB)(HWND hWnd);
extern PACKAGE BOOL __stdcall (*Ac_InitializeFlatSB)(HWND hWnd);
extern PACKAGE TGetDBFieldCheckState GetDBFieldCheckState;
extern PACKAGE void __fastcall AlphaBroadCastCheck(const Controls::TControl* Control, const HWND Handle, void *Message);
extern PACKAGE bool __fastcall MayBeHot(const Scommondata::TsCommonData* SkinData, const bool ByMouse = true);
extern PACKAGE void __fastcall InitCtrlData(HWND Wnd, HWND &ParentWnd, Types::TRect &WndRect, Types::TRect &ParentRect, tagSIZE &WndSize, Types::TPoint &WndPos);
extern PACKAGE void __fastcall RefreshScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern PACKAGE void __fastcall RefreshEditScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern PACKAGE void __fastcall RefreshTreeScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW, bool SkipBGMessage);
extern PACKAGE void __fastcall UpdateScrolls(const TacScrollWnd* sw, const bool Repaint = false);
extern PACKAGE void __fastcall PrepareCache(Scommondata::TsCommonData* SkinData, HWND CtrlHandle = (HWND)(0x0), bool DlgMode = false);
extern PACKAGE void __fastcall UninitializeACScroll(HWND Handle, bool FreeSW, bool Repaint, TacScrollWnd* &ListSW);
extern PACKAGE TacScrollWnd* __fastcall Ac_GetScrollWndFromHwnd(const HWND AHandle);
extern PACKAGE void __fastcall UninitializeACWnd(HWND Handle, bool FreeSW, bool Repaint, TacMainWnd* &ListSW);
extern PACKAGE int __fastcall GetScrollMetric(TacScrollBar* sBar, int metric, bool Btn = false);
extern PACKAGE void __fastcall ac_GetHScrollRect(TacScrollWnd* sw, HWND Handle, Types::TRect &R);
extern PACKAGE void __fastcall ac_GetVScrollRect(TacScrollWnd* sw, HWND Handle, Types::TRect &R);
extern PACKAGE void __fastcall ac_DrawScrollBtn(const Types::TRect &bRect, int State, Graphics::TBitmap* Bmp, Sskinmanager::TacSkinData* sd, Sconst::TacSide Side);
extern PACKAGE void __fastcall ac_DrawSlider(const Types::TRect &bRect, int State, Graphics::TBitmap* Bmp, Sskinmanager::TacSkinData* sd, bool Vert);
extern PACKAGE int __fastcall ac_NCDraw(TacScrollWnd* sw, HWND Handle, int ThumbPos = 0xffffffff, HDC aDC = (HDC)(0x0));
extern PACKAGE void __fastcall SendScrollMessage(const HWND Handle, const int scrMsg, const int scrId, const int pos, bool DoSetScrollInfo = false);
extern PACKAGE void __fastcall CheckFont(HDC aDC);
extern PACKAGE Types::TRect __fastcall BtnDrawRect(const Types::TRect &R, Sskinmanager::TacSkinData* sd, Sconst::TacSide Side);

}	/* namespace Acsbutils */
using namespace Acsbutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acsbutils
