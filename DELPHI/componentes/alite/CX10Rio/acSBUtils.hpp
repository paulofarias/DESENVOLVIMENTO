// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSBUtils.pas' rev: 33.00 (Windows)

#ifndef AcsbutilsHPP
#define AcsbutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.TypInfo.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <sSkinManager.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <acntTypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acsbutils
{
//-- forward type declarations -----------------------------------------------
struct TacSkinParams;
struct THeaderPaintInfo;
class DELPHICLASS TacScrollBar;
class DELPHICLASS TacSpeedButtonHandler;
class DELPHICLASS TacMainWnd;
class DELPHICLASS TacSBWnd;
class DELPHICLASS TacStaticWnd;
class DELPHICLASS TacEdgeWnd;
class DELPHICLASS TacIconWnd;
class DELPHICLASS TacLinkWnd;
class DELPHICLASS TacBtnWnd;
class DELPHICLASS TacBitBtnWnd;
class DELPHICLASS TacSplitBtnWnd;
class DELPHICLASS TacButtonWnd;
class DELPHICLASS TacSizerWnd;
class DELPHICLASS TacSpinWnd;
class DELPHICLASS TacTrackWnd;
class DELPHICLASS TacCheckBoxWnd;
class DELPHICLASS TacContainerWnd;
class DELPHICLASS TacSearchWnd;
class DELPHICLASS TacToolBarWnd;
class DELPHICLASS TacTransPanelWnd;
class DELPHICLASS TacGroupBoxWnd;
class DELPHICLASS TacTabWnd;
class DELPHICLASS TacScrollWnd;
class DELPHICLASS TacAccessPanel;
class DELPHICLASS TacPanelWnd;
class DELPHICLASS TacStaticTextWnd;
class DELPHICLASS TacMnuWnd;
class DELPHICLASS TacBaseWnd;
class DELPHICLASS TacMDIWnd;
class DELPHICLASS TacEditWnd;
class DELPHICLASS TacScrollBoxWnd;
class DELPHICLASS TacNativePaint;
class DELPHICLASS TacComboListWnd;
class DELPHICLASS TacListViewWnd;
class DELPHICLASS TacGridWnd;
class DELPHICLASS TacGridEhWnd;
class DELPHICLASS TacTreeViewWnd;
class DELPHICLASS TacComboBoxWnd;
class DELPHICLASS TacVirtualTreeViewWnd;
class DELPHICLASS TacWWComboBoxWnd;
class DELPHICLASS TacTabControlWnd;
class DELPHICLASS TacPageWnd;
class DELPHICLASS TacPageControlWnd;
class DELPHICLASS TacToolBarVCLWnd;
class DELPHICLASS TacStatusBarWnd;
class DELPHICLASS TacWinControl;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDropMarkMode : unsigned char { dmmNone, dmmLeft, dmmRight };

enum DECLSPEC_DENUM Acsbutils__1 : unsigned char { hpeBackground, hpeDropMark, hpeHeaderGlyph, hpeSortGlyph, hpeText };

typedef System::Set<Acsbutils__1, Acsbutils__1::hpeBackground, Acsbutils__1::hpeText> THeaderPaintElements;

struct DECLSPEC_DRECORD TacSkinParams
{
public:
	Vcl::Controls::TControl* Control;
	System::UnicodeString SkinSection;
	bool UseSkinColor;
	bool UseSkinFontColor;
	int VertScrollSize;
	int HorzScrollSize;
	int VertScrollBtnSize;
	int HorzScrollBtnSize;
};


struct DECLSPEC_DRECORD THeaderPaintInfo
{
public:
	Vcl::Graphics::TCanvas* TargetCanvas;
	System::Classes::TCollectionItem* Column;
	System::Types::TRect PaintRectangle;
	System::Types::TRect TextRectangle;
	bool IsHoverIndex;
	bool IsDownIndex;
	bool IsEnabled;
	bool ShowHeaderGlyph;
	bool ShowSortGlyph;
	bool ShowRightBorder;
	TDropMarkMode DropMark;
	System::Types::TPoint GlyphPos;
	System::Types::TPoint SortGlyphPos;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TacScrollBar : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Word fScrollFlags;
	System::Word nBarType;
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
	tagSCROLLINFO ScrollInfo;
	__fastcall TacScrollBar();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacScrollBar() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TacSpeedButtonHandler : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	NativeInt __fastcall CallPrevWndProc(const int Msg, const NativeUInt WParam, NativeInt &lParam);
	void __fastcall AC_WMPaint(Winapi::Messages::TWMPaint &Message);
	bool __fastcall PrepareCache();
	void __fastcall DrawCaption();
	void __fastcall DrawGlyph();
	System::UnicodeString __fastcall Caption();
	System::Types::TRect __fastcall ImgRect();
	int __fastcall GlyphHeight();
	System::Types::TRect __fastcall CaptionRect();
	System::Types::TSize __fastcall TextRectSize();
	int __fastcall GlyphWidth();
	void __fastcall DoDrawText(const System::Types::TRect &Rect, int Flags);
	int __fastcall CurrentState();
	void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	Vcl::Controls::TControl* Ctrl;
	Vcl::Controls::TControl* *PCtrl;
	bool IsUpDown;
	bool Destroyed;
	System::Classes::TWndMethod OldWndProc;
	Scommondata::TsCommonData* SkinData;
	Sskinmanager::TsSkinManager* SkinManager;
	__fastcall virtual TacSpeedButtonHandler(Vcl::Controls::TControl* Btn, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const System::UnicodeString SkinSection, bool Repaint);
	__fastcall virtual ~TacSpeedButtonHandler();
};


class PASCALIMPLEMENTATION TacMainWnd : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	virtual void __fastcall InitSkinData();
	virtual bool __fastcall DoPrepareCache();
	NativeInt __fastcall CallPrevWndProc(const HWND Handle, const int Msg, const NativeUInt WParam, NativeInt &LParam);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	bool DlgMode;
	bool Destroyed;
	bool DontRepaint;
	bool OwnSkinData;
	bool InDestroying;
	bool ParamsChanged;
	System::Types::TRect WndRect;
	System::Types::TRect ParentRect;
	System::Uitypes::TColor StdColor;
	System::Uitypes::TColor StdFontColor;
	HWND ParentWnd;
	HWND CtrlHandle;
	System::Types::TSize WndSize;
	System::Types::TPoint WndPos;
	System::UnicodeString Caption;
	int Tag;
	Vcl::Controls::TControlStyle OldCtrlStyle;
	System::Classes::TWndMethod OldWndProc;
	void *OldProc;
	Sskinmanager::TsSkinManager* SkinManager;
	Scommondata::TsCommonData* SkinData;
	void *NewWndProcInstance;
	System::TObject* Adapter;
	virtual void __fastcall SetSkinParams();
	__fastcall virtual TacMainWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
	__fastcall virtual ~TacMainWnd();
	NativeInt __fastcall ProcessMessage(unsigned Msg, NativeUInt WPar = (NativeUInt)(0x0), NativeInt LPar = (NativeInt)(0x0));
};


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
	tagSCROLLINFO FSI;
	void __fastcall SetInteger(const int Index, const int Value);
	System::Types::TRect __fastcall Bar1Rect();
	System::Types::TRect __fastcall Bar2Rect();
	System::Types::TRect __fastcall Btn1Rect();
	System::Types::TRect __fastcall Btn2Rect();
	bool __fastcall BarIsHot();
	System::Types::TRect __fastcall SliderRect();
	int __fastcall SliderSize();
	int __fastcall WorkSize();
	int __fastcall PositionToCoord();
	void __fastcall DrawSlider(Vcl::Graphics::TBitmap* b);
	int __fastcall SysBtnSize();
	int __fastcall CoordToPosition(const System::Types::TPoint &ap);
	void __fastcall UpdateBar();
	void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	virtual void __fastcall AfterCreation();
	void __fastcall InitScrollData();
	void __fastcall CMMouseLeave();
	void __fastcall CMMouseEnter();
	void __fastcall LMouseDown(const int X, const int Y);
	void __fastcall LMouseUp(const int X, const int Y);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	System::Types::TRect FBtn1Rect;
	System::Types::TRect FBtn2Rect;
	System::Types::TRect FBar1Rect;
	System::Types::TRect FBar2Rect;
	System::Types::TRect FSliderRect;
	System::Types::TPoint p;
	Sconst::TCacheInfo CI;
	Vcl::Stdctrls::TScrollBar* Control;
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
	/* TacMainWnd.Create */ inline __fastcall virtual TacSBWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSBWnd() { }
	
};


class PASCALIMPLEMENTATION TacStaticWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	virtual void __fastcall AC_WMPaint(Winapi::Messages::TWMPaint &Message);
	virtual bool __fastcall PaintContent();
	System::Types::TRect __fastcall PaintText(bool DoCalc);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticWnd() { }
	
};


class PASCALIMPLEMENTATION TacEdgeWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
protected:
	virtual void __fastcall AC_WMPaint(Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacEdgeWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacEdgeWnd() { }
	
};


class PASCALIMPLEMENTATION TacIconWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
protected:
	bool IsBmp;
	Vcl::Graphics::TBitmap* FBmp;
	virtual void __fastcall AfterCreation();
	virtual bool __fastcall PaintContent();
	
public:
	__fastcall virtual ~TacIconWnd();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacIconWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacLinkWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
protected:
	virtual bool __fastcall PaintContent();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacLinkWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacLinkWnd() { }
	
};


class PASCALIMPLEMENTATION TacBtnWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	unsigned ID;
	bool FMouseClicked;
	virtual void __fastcall AfterCreation();
	unsigned __fastcall CtrlStyle();
	bool __fastcall Down();
	virtual int __fastcall CurrentState();
	void __fastcall DrawCaption(const Acnttypes::TacColoring &Coloring);
	virtual void __fastcall DrawGlyph();
	virtual System::Types::TSize __fastcall GlyphSize();
	void __fastcall DoDrawText(System::Types::TRect &Rect, const int Flags, bool CanGlow);
	virtual System::Types::TRect __fastcall CaptionRect();
	virtual int __fastcall MaxCaptionWidth();
	System::Types::TSize __fastcall TextRectSize();
	void __fastcall Repaint();
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	virtual void __fastcall PrepareCache();
	void __fastcall ac_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBtnWnd() { }
	
};


class PASCALIMPLEMENTATION TacBitBtnWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
protected:
	System::Types::TRect __fastcall GlyphRect();
	virtual System::Types::TRect __fastcall CaptionRect();
	virtual int __fastcall CurrentState();
	virtual int __fastcall MaxCaptionWidth();
	virtual System::Types::TSize __fastcall GlyphSize();
	virtual void __fastcall DrawGlyph();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBitBtnWnd() { }
	
};


class PASCALIMPLEMENTATION TacSplitBtnWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
protected:
	int ArrowWidth;
	System::Types::TRect __fastcall ArrowRect();
	virtual System::Types::TRect __fastcall CaptionRect();
	virtual void __fastcall PrepareCache();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSplitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSplitBtnWnd() { }
	
};


class PASCALIMPLEMENTATION TacButtonWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
protected:
	Vcl::Stdctrls::TButton* Btn;
	bool __fastcall HaveImage();
	virtual System::Types::TRect __fastcall CaptionRect();
	int __fastcall GlyphIndex();
	System::Types::TRect __fastcall GlyphRect();
	virtual System::Types::TSize __fastcall GlyphSize();
	virtual void __fastcall DrawGlyph();
	virtual void __fastcall AfterCreation();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacButtonWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacButtonWnd() { }
	
};


class PASCALIMPLEMENTATION TacSizerWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSizerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSizerWnd() { }
	
};


class PASCALIMPLEMENTATION TacSpinWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	int Btn1State;
	int Btn2State;
	bool RTL;
	bool bMousePressed;
	bool __fastcall IsVertical();
	virtual void __fastcall AfterCreation();
	void __fastcall PrepareCache();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	bool Skinned;
	int lOffset;
	Vcl::Controls::TWinControl* OwnerWnd;
	void __fastcall SetRTL();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSpinWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSpinWnd() { }
	
};


typedef System::DynamicArray<System::Types::TPoint> TAPoint;

class PASCALIMPLEMENTATION TacTrackWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	int TickHeight;
	bool bMousePressed;
	double iStep;
	bool __fastcall IsVertical();
	virtual void __fastcall AfterCreation();
	void __fastcall PrepareCache();
	void __fastcall PaintBody();
	void __fastcall PaintBar();
	void __fastcall PaintThumb(int i);
	void __fastcall PaintTicksHor();
	void __fastcall PaintTicksVer();
	void __fastcall PaintTick(const System::Types::TPoint &P, bool Horz);
	Vcl::Comctrls::TTickMark __fastcall TickMarks();
	Vcl::Comctrls::TTickStyle __fastcall TickStyle();
	int __fastcall TickCount();
	TAPoint __fastcall TicksArray();
	int __fastcall TickPos(const int i);
	System::Types::TRect __fastcall ThumbRect();
	System::Types::TRect __fastcall ChannelRect();
	int __fastcall Mode();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTrackWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTrackWnd() { }
	
};


class PASCALIMPLEMENTATION TacCheckBoxWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	bool OwnerDraw;
	Vcl::Stdctrls::TCheckBoxState __fastcall State();
	int __fastcall CtlState();
	System::Types::TRect __fastcall CheckRect();
	System::Types::TRect __fastcall SkinCheckRect(const int i);
	int __fastcall SkinGlyphWidth(const int i);
	int __fastcall SkinGlyphHeight(const int i);
	void __fastcall DrawSkinGlyph(const int i);
	void __fastcall DrawCheckText();
	short __fastcall GlyphMaskIndex(const Vcl::Stdctrls::TCheckBoxState AState);
	void __fastcall PrepareCache();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacCheckBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacCheckBoxWnd() { }
	
};


class PASCALIMPLEMENTATION TacContainerWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	System::Types::TRect ClientRect;
	int BorderWidth;
	virtual bool __fastcall DoPrepareCache();
	virtual void __fastcall AfterCreation();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Winapi::Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Winapi::Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacContainerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacContainerWnd() { }
	
};


class PASCALIMPLEMENTATION TacSearchWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	System::Types::TRect ClientRect;
	virtual void __fastcall AfterCreation();
	void __fastcall PrepareCache();
	void __fastcall AC_WMNCPaint(const Winapi::Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSearchWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSearchWnd() { }
	
};


class PASCALIMPLEMENTATION TacToolBarWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	System::Types::TRect ClientRect;
	int BorderWidth;
	virtual bool __fastcall DoPrepareCache();
	void __fastcall DrawButtons(Vcl::Graphics::TBitmap* const Bmp);
	void __fastcall DrawBtn(const int Index, const System::Types::TRect &R, const HDC DC);
	System::Types::TRect __fastcall GetButtonRect(const int Index);
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Winapi::Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Winapi::Messages::TMessage &Message);
	int __fastcall Count();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarWnd() { }
	
};


class PASCALIMPLEMENTATION TacTransPanelWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTransPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTransPanelWnd() { }
	
};


class PASCALIMPLEMENTATION TacGroupBoxWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	System::Types::TRect __fastcall CaptionRect();
	void __fastcall PrepareCache();
	void __fastcall WriteText(const System::Types::TRect &R);
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacGroupBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacGroupBoxWnd() { }
	
};


class PASCALIMPLEMENTATION TacTabWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	System::Types::TRect __fastcall DisplayRect();
	void __fastcall PrepareCache();
	void __fastcall AC_WMPaint(const Winapi::Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTabWnd() { }
	
};


class PASCALIMPLEMENTATION TacScrollWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	bool fLeftScrollbar;
	bool ScrollsInitialized;
	bool bPreventStyleChange;
	void __fastcall UpdateLeftScroll();
	virtual void __fastcall InitSkinData();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	bool fThumbTracking;
	TacScrollBar* sBarHorz;
	TacScrollBar* sBarVert;
	int cxLeftEdge;
	int cxRightEdge;
	int cyTopEdge;
	int cyBottomEdge;
	__fastcall virtual ~TacScrollWnd();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacAccessPanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TacAccessPanel(System::Classes::TComponent* AOwner) : Vcl::Extctrls::TCustomPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TacAccessPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TacAccessPanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TacPanelWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	virtual bool __fastcall DoPrepareCache();
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	TacAccessPanel* Panel;
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPanelWnd() { }
	
};


class PASCALIMPLEMENTATION TacStaticTextWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	Vcl::Controls::TWinControl* Control;
	virtual void __fastcall AfterCreation();
	bool __fastcall PrepareCache();
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticTextWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticTextWnd() { }
	
};


class PASCALIMPLEMENTATION TacMnuWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
protected:
	bool Shown;
	bool bFlag;
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AfterCreation();
	
public:
	int RgnChanged;
	void __fastcall PrepareCache();
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacMnuWnd() { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacMnuWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacBaseWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
protected:
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacBaseWnd() { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBaseWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacMDIWnd : public TacBaseWnd
{
	typedef TacBaseWnd inherited;
	
protected:
	void __fastcall UpdateGraphControls();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	Vcl::Forms::TForm* FForm;
	System::TObject* SkinProvider;
	Scommondata::TsCommonData* MDISkinData;
	__fastcall virtual ~TacMDIWnd();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacMDIWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBaseWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


enum DECLSPEC_DENUM Acsbutils__13 : unsigned char { csPaintNeeded, csNCPaintNeeded };

typedef System::Set<Acsbutils__13, Acsbutils__13::csPaintNeeded, Acsbutils__13::csNCPaintNeeded> TacCtrlState;

class PASCALIMPLEMENTATION TacEditWnd : public TacBaseWnd
{
	typedef TacBaseWnd inherited;
	
protected:
	System::Types::TRect FClientRect;
	int FrameColor;
	TacCtrlState CtrlState;
	bool StdNCPaint;
	bool SingleLineEdit;
	bool CtrlListChanged;
	System::Uitypes::TColor FocusColor;
	System::Uitypes::TColor FixedGradientFrom;
	System::Uitypes::TColor FixedGradientTo;
	Vcl::Grids::TGridDrawingStyle DrawingStyle;
	bool __fastcall HandleAlphaCmd(Winapi::Messages::TMessage &Message);
	bool __fastcall NCContent();
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	System::Types::TRect __fastcall ClientRect();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	System::Uitypes::TColor Color;
	virtual void __fastcall SetSkinParams();
	__fastcall virtual TacEditWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacEditWnd() { }
	
};


class PASCALIMPLEMENTATION TacScrollBoxWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
protected:
	void __fastcall AC_WMNCPaint(HDC aDC);
	void __fastcall AC_WMPaint(HDC aDC);
	void __fastcall PrepareCache();
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacScrollBoxWnd() { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacNativePaint : public TacScrollBoxWnd
{
	typedef TacScrollBoxWnd inherited;
	
protected:
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacNativePaint() { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacNativePaint(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacComboListWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	bool Shown;
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	bool DBScroll;
	bool SimplyBox;
	virtual void __fastcall SetSkinParams();
	__fastcall virtual ~TacComboListWnd();
	__fastcall TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const System::UnicodeString SkinSection, bool Repaint, bool Simply);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacListViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	HWND FhWndHeader;
	void *FhHeaderProc;
	void *FhDefHeaderProc;
	int FPressedColumn;
	int HoverColIndex;
	Vcl::Comctrls::TViewStyle __fastcall ViewStyle();
	virtual void __fastcall AfterCreation();
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	void __fastcall ColumnSkinPaint(const System::Types::TRect &ControlRect, int cIndex, HDC DC);
	bool __fastcall HotTrack();
	void __fastcall HeaderWndProc(Winapi::Messages::TMessage &Message);
	System::Types::TRect __fastcall GetHeaderColumnRect(int Index);
	void __fastcall PaintHeader(HDC DC);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacListViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacListViewWnd() { }
	
};


class PASCALIMPLEMENTATION TacGridWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	System::Uitypes::TColor IndColor;
	System::Uitypes::TColor FixedColor;
	System::Uitypes::TColor TitleColor;
	System::Uitypes::TColor EvenRowColor;
	System::Uitypes::TColor OddRowColor;
	System::Uitypes::TColor FooterColor;
	System::Uitypes::TColor GridLineColor;
	System::Uitypes::TColor TitleFontColor;
	System::Uitypes::TColor SelectionColor;
	System::Uitypes::TColor FooterCellColor;
	System::Uitypes::TColor SelectionTextColor;
	System::Uitypes::TColor GridFixedLineColor;
	System::Uitypes::TColor FixedGradientMirrorTo;
	System::Uitypes::TColor FixedGradientMirrorFrom;
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridWnd() { }
	
};


class PASCALIMPLEMENTATION TacGridEhWnd : public TacGridWnd
{
	typedef TacGridWnd inherited;
	
protected:
	bool Fixed3D;
	System::Uitypes::TColor DarkColor;
	System::Uitypes::TColor BrightColor;
	System::Uitypes::TColor DataHorzColor;
	System::Uitypes::TColor DataVertColor;
	System::Uitypes::TColor DataGroupColor;
	System::Uitypes::TColor CategoriesColor;
	System::Uitypes::TColor CategoriesFontColor;
	System::Uitypes::TColor RowDetailColor;
	int IndHorzLines;
	int IndVertLines;
	int InfFillStyle;
	int TitleHorzLines;
	int TitleFillStyle;
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridEhWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacGridWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridEhWnd() { }
	
};


class PASCALIMPLEMENTATION TacTreeViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	bool SkipBG;
	virtual void __fastcall RestoreStdParams();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacTreeViewWnd() { }
	
};


class PASCALIMPLEMENTATION TacComboBoxWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	HWND FListHandle;
	bool LBoxOpening;
	TacComboListWnd* ListSW;
	Scommondata::TsCommonData* LBSkinData;
	int __fastcall ButtonHeight();
	virtual System::Types::TRect __fastcall ButtonRect();
	void __fastcall PaintButton(HDC DC);
	void __fastcall RepaintButton();
	void __fastcall PaintText();
	void __fastcall PrepareSimple();
	virtual void __fastcall AfterCreation();
	void __fastcall Invalidate();
	bool __fastcall EasyComboBox();
	void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State, HDC DC);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacComboBoxWnd();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacVirtualTreeViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	System::Uitypes::TColor HotColor;
	System::Uitypes::TColor FileTextColor;
	System::Uitypes::TColor FolderTextColor;
	System::Uitypes::TColor SelectionTextColor;
	System::Uitypes::TColor CompressedTextColor;
	System::Uitypes::TColor FocusedSelectionColor;
	System::Uitypes::TColor UnfocusedSelectionColor;
	System::Uitypes::TColor FocusedSelectionBorderColor;
	System::Uitypes::TColor UnfocusedSelectionBorderColor;
	bool OwnerDraw;
	System::Typinfo::TPropInfo *PropInfo;
	void __fastcall AdvancedHeaderDraw(System::Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, const THeaderPaintElements Elements);
	void __fastcall HeaderDrawQueryElements(System::Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, THeaderPaintElements &Elements);
	virtual void __fastcall InitSkinData();
	virtual void __fastcall SaveStdParams();
	virtual void __fastcall RestoreStdParams();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	virtual void __fastcall SetSkinParams();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacVirtualTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacVirtualTreeViewWnd() { }
	
};


class PASCALIMPLEMENTATION TacWWComboBoxWnd : public TacComboBoxWnd
{
	typedef TacComboBoxWnd inherited;
	
protected:
	bool FShowButton;
	Vcl::Stdctrls::TCustomListBox* ListBox;
	TacScrollWnd* ListBoxSW;
	Scommondata::TsScrollWndData* ListBoxSkinData;
	bool __fastcall GetShowButton(Vcl::Controls::TWinControl* aCtrl);
	virtual System::Types::TRect __fastcall ButtonRect();
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacWWComboBoxWnd();
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacWWComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacComboBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacTabControlWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	TacSpinWnd* BtnSW;
	int __fastcall TabCount();
	virtual System::Types::TRect __fastcall ClientRect();
	virtual System::Types::TRect __fastcall PageRect();
	System::Types::TRect __fastcall TabRect(const int Index);
	int __fastcall TabRow(int TabIndex);
	System::Types::TRect __fastcall TabsRect();
	Vcl::Comctrls::TTabPosition __fastcall TabPosition();
	Vcl::Comctrls::TTabStyle __fastcall Style();
	int __fastcall ActiveTabIndex();
	System::Types::TRect __fastcall SkinTabRect(int Index, bool Active);
	void __fastcall CheckUpDown();
	void __fastcall DrawSkinTabs(const Sconst::TCacheInfo &CI);
	void __fastcall DrawSkinTab(int Index, int State, Vcl::Graphics::TBitmap* Bmp, const System::Types::TPoint &OffsetPoint)/* overload */;
	void __fastcall DrawSkinTab(int Index, int State, HDC DC)/* overload */;
	void __fastcall AC_WMPaint(Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall AfterCreation();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual ~TacTabControlWnd();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacPageWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	Vcl::Comctrls::TTabSheet* Page;
	virtual void __fastcall AfterCreation();
	Vcl::Comctrls::TTabPosition __fastcall TabPosition();
	void __fastcall AC_WMEraseBKGnd(Winapi::Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPageWnd() { }
	
};


class PASCALIMPLEMENTATION TacPageControlWnd : public TacTabControlWnd
{
	typedef TacTabControlWnd inherited;
	
protected:
	void __fastcall InitPages();
	virtual void __fastcall AfterCreation();
	virtual System::Types::TRect __fastcall PageRect();
	virtual System::Types::TRect __fastcall ClientRect();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacTabControlWnd.Destroy */ inline __fastcall virtual ~TacPageControlWnd() { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacTabControlWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacToolBarVCLWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	Vcl::Comctrls::TToolBar* ToolBar;
	int HotButtonIndex;
	Vcl::Comctrls::TToolButton* DroppedButton;
	Vcl::Comctrls::TTBAdvancedCustomDrawBtnEvent OldDrawBtnEvent;
	void __fastcall PrepareCache();
	System::Types::TRect __fastcall DisplayRect();
	virtual void __fastcall AfterCreation();
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	System::Types::TRect __fastcall GetButtonRect(int Index);
	int __fastcall IndexByMouse(const System::Types::TPoint &MousePos);
	void __fastcall OurAdvancedCustomDraw(Vcl::Comctrls::TToolBar* Sender, const System::Types::TRect &ARect, Vcl::Comctrls::TCustomDrawStage Stage, bool &DefaultDraw);
	void __fastcall RepaintButton(int Index);
	void __fastcall OurAdvancedCustomDrawButton(Vcl::Comctrls::TToolBar* Sender, Vcl::Comctrls::TToolButton* Button, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage, Vcl::Comctrls::TTBCustomDrawFlags &Flags, bool &DefaultDraw);
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarVCLWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarVCLWnd() { }
	
};


class PASCALIMPLEMENTATION TacStatusBarWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	Vcl::Comctrls::TStatusBar* StatusBar;
	bool __fastcall SimplePanel();
	int __fastcall PartsCount();
	System::UnicodeString __fastcall PartText(const int Index);
	System::Types::TRect __fastcall PartRect(const int Index);
	virtual void __fastcall AfterCreation();
	void __fastcall PaintPanels();
	void __fastcall PaintGrip();
	void __fastcall DrawPanel(const int Index, const System::Types::TRect &Rect);
	void __fastcall InternalDrawPanel(const int Index, const System::Types::TRect &Rect);
	void __fastcall DoDrawText(const System::UnicodeString Text, System::Types::TRect &Rect, const int Flags);
	void __fastcall PrepareCache();
	void __fastcall WMPaint(const HDC aDC = (HDC)(0x0));
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStatusBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStatusBarWnd() { }
	
};


typedef Vcl::Stdctrls::TCheckBoxState __fastcall (*TGetDBFieldCheckState)(System::TObject* DataLink);

typedef System::TMetaClass* TacScrollWndClass;

class PASCALIMPLEMENTATION TacWinControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	/* TWinControl.Create */ inline __fastcall virtual TacWinControl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TacWinControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacWinControl() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SM_SCROLLWIDTH = System::Int8(0x1);
static const System::Int8 TopOffset = System::Int8(0x4);
static const System::Int8 BottomOffset = System::Int8(0x2);
static const System::Int8 LeftOffset = System::Int8(0x1);
static const System::Int8 RightOffset = System::Int8(0x1);
extern DELPHI_PACKAGE System::StaticArray<Sconst::TacSide, 4> acTabSides;
extern DELPHI_PACKAGE int nLastSBPos;
extern DELPHI_PACKAGE bool acDlgMode;
extern DELPHI_PACKAGE int acMinThumbSize;
extern DELPHI_PACKAGE void __stdcall (*Ac_UninitializeFlatSB)(HWND hWnd);
extern DELPHI_PACKAGE System::LongBool __stdcall (*Ac_InitializeFlatSB)(HWND hWnd);
extern DELPHI_PACKAGE TGetDBFieldCheckState GetDBFieldCheckState;
extern DELPHI_PACKAGE void __fastcall AlphaBroadCastCheck(Vcl::Controls::TControl* const Control, const HWND Handle, void *Message);
extern DELPHI_PACKAGE bool __fastcall MayBeHot(Scommondata::TsCommonData* const SkinData, const bool ByMouse = true);
extern DELPHI_PACKAGE void __fastcall InitCtrlData(HWND Wnd, HWND &ParentWnd, System::Types::TRect &WndRect, System::Types::TRect &ParentRect, System::Types::TSize &WndSize, System::Types::TPoint &WndPos);
extern DELPHI_PACKAGE void __fastcall RefreshScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern DELPHI_PACKAGE void __fastcall RefreshEditScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern DELPHI_PACKAGE void __fastcall RefreshTreeScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW, bool SkipBGMessage);
extern DELPHI_PACKAGE void __fastcall UpdateScrolls(TacScrollWnd* const sw, const bool Repaint = false);
extern DELPHI_PACKAGE void __fastcall PrepareCache(Scommondata::TsCommonData* SkinData, HWND CtrlHandle = (HWND)(0x0), bool DlgMode = false);
extern DELPHI_PACKAGE void __fastcall UninitializeACScroll(HWND Handle, bool FreeSW, bool Repaint, TacScrollWnd* &ListSW);
extern DELPHI_PACKAGE TacScrollWnd* __fastcall Ac_GetScrollWndFromHwnd(const HWND AHandle);
extern DELPHI_PACKAGE void __fastcall UninitializeACWnd(HWND Handle, bool FreeSW, bool Repaint, TacMainWnd* &ListSW);
extern DELPHI_PACKAGE int __fastcall GetScrollMetric(TacScrollBar* sBar, int metric, bool Btn = false);
extern DELPHI_PACKAGE void __fastcall ac_GetHScrollRect(TacScrollWnd* sw, HWND Handle, System::Types::TRect &R);
extern DELPHI_PACKAGE void __fastcall ac_GetVScrollRect(TacScrollWnd* sw, HWND Handle, System::Types::TRect &R);
extern DELPHI_PACKAGE void __fastcall ac_DrawScrollBtn(const System::Types::TRect &bRect, int State, Vcl::Graphics::TBitmap* Bmp, Sskinmanager::TacSkinData* sd, Sconst::TacSide Side);
extern DELPHI_PACKAGE void __fastcall ac_DrawSlider(const System::Types::TRect &bRect, int State, Vcl::Graphics::TBitmap* Bmp, Sskinmanager::TacSkinData* sd, bool Vert);
extern DELPHI_PACKAGE NativeInt __fastcall ac_NCDraw(TacScrollWnd* sw, HWND Handle, int ThumbPos = 0xffffffff, HDC aDC = (HDC)(0x0));
extern DELPHI_PACKAGE void __fastcall SendScrollMessage(const HWND Handle, const int scrMsg, const int scrId, const int pos, bool DoSetScrollInfo = false);
extern DELPHI_PACKAGE void __fastcall CheckFont(HDC aDC);
extern DELPHI_PACKAGE System::Types::TRect __fastcall BtnDrawRect(const System::Types::TRect &R, Sskinmanager::TacSkinData* sd, Sconst::TacSide Side);
}	/* namespace Acsbutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACSBUTILS)
using namespace Acsbutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcsbutilsHPP
