// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sPanel.pas' rev: 25.00 (Windows)

#ifndef SpanelHPP
#define SpanelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spanel
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TacSideShadowMode : unsigned char { ssmNone, ssmInternal };

class DELPHICLASS TacSideShadow;
class DELPHICLASS TsCustomPanel;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacSideShadow : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Sconst::TacSide FSide;
	TsCustomPanel* FOwner;
	TacSideShadowMode FMode;
	int FBlend;
	int FShadowSize;
	void __fastcall SetMode(const TacSideShadowMode Value);
	void __fastcall SetSide(const Sconst::TacSide Value);
	void __fastcall SetBlend(const int Value);
	void __fastcall SetShadowSize(const int Value);
	
public:
	__fastcall TacSideShadow(TsCustomPanel* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property TacSideShadowMode Mode = {read=FMode, write=SetMode, default=0};
	__property Sconst::TacSide Side = {read=FSide, write=SetSide, default=2};
	__property int ShadowSize = {read=FShadowSize, write=SetShadowSize, default=6};
	__property int Blend = {read=FBlend, write=SetBlend, default=48};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSideShadow(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsCustomPanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	Scommondata::TsCtrlSkinData* FCommonData;
	TacSideShadow* FSideShadow;
	Vcl::Controls::TBevelCut FOldBevel;
	Sconst::TPaintEvent FOnPaint;
	
protected:
	Vcl::Graphics::TBitmap* ShadowBmp;
	virtual void __fastcall CopyCache(HDC DC);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	void __fastcall PaintSideShadow(void);
	
public:
	__fastcall virtual TsCustomPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsCustomPanel(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall PaintDragPanel(HDC DC);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	__property TacSideShadow* SideShadow = {read=FSideShadow, write=FSideShadow};
	
__published:
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomPanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


class DELPHICLASS TsPanel;
class PASCALIMPLEMENTATION TsPanel : public TsCustomPanel
{
	typedef TsCustomPanel inherited;
	
public:
	__property DockManager;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentDoubleBuffered = {default=1};
	__property ShowCaption = {default=1};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property StyleElements = {default=7};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnGesture;
	__property OnMouseActivate;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property SideShadow;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TsCustomPanel.Create */ inline __fastcall virtual TsPanel(System::Classes::TComponent* AOwner) : TsCustomPanel(AOwner) { }
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsPanel(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	
};


class DELPHICLASS TsDragBar;
class PASCALIMPLEMENTATION TsDragBar : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	Vcl::Controls::TControl* FDraggedControl;
	MESSAGE void __fastcall WMActivateApp(Winapi::Messages::TWMActivateApp &Message);
	
protected:
	DYNAMIC void __fastcall DblClick(void);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
public:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	__fastcall virtual TsDragBar(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
__published:
	__property Alignment = {default=2};
	__property Align = {default=1};
	__property Color = {default=-16777214};
	__property Vcl::Controls::TControl* DraggedControl = {read=FDraggedControl, write=FDraggedControl};
public:
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsDragBar(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsDragBar(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TsContainer;
class PASCALIMPLEMENTATION TsContainer : public TsCustomPanel
{
	typedef TsCustomPanel inherited;
	
public:
	/* TsCustomPanel.Create */ inline __fastcall virtual TsContainer(System::Classes::TComponent* AOwner) : TsCustomPanel(AOwner) { }
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsContainer(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsContainer(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	
};


class DELPHICLASS TsGrip;
class PASCALIMPLEMENTATION TsGrip : public TsPanel
{
	typedef TsPanel inherited;
	
public:
	bool Transparent;
	Vcl::Controls::TWinControl* LinkedControl;
	__fastcall virtual TsGrip(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
public:
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsGrip(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGrip(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TsColInfo
{
public:
	System::Uitypes::TColor ciColor;
	System::Types::TRect ciRect;
};


class DELPHICLASS TsColorsPanel;
class PASCALIMPLEMENTATION TsColorsPanel : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	typedef System::DynamicArray<TsColInfo> _TsColorsPanel__1;
	
	
private:
	int FItemIndex;
	int FItemWidth;
	int FItemHeight;
	int FItemMargin;
	int FColCount;
	int FRowCount;
	System::Classes::TStrings* FColors;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetColors(System::Classes::TStrings* const Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	
public:
	int OldSelected;
	_TsColorsPanel__1 ColorsArray;
	__fastcall virtual TsColorsPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsColorsPanel(void);
	void __fastcall GenerateColors(void);
	virtual void __fastcall AfterConstruction(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Loaded(void);
	void __fastcall PaintColors(const HDC DC);
	int __fastcall Count(void);
	int __fastcall GetItemByCoord(const System::Types::TPoint &p);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	System::Uitypes::TColor __fastcall ColorValue(void);
	
__published:
	__property System::Classes::TStrings* Colors = {read=FColors, write=SetColors};
	__property int ColCount = {read=FColCount, write=SetInteger, index=0, default=5};
	__property int ItemIndex = {read=FItemIndex, write=SetInteger, index=1, default=-1};
	__property int ItemHeight = {read=FItemHeight, write=SetInteger, index=2, default=21};
	__property int ItemWidth = {read=FItemWidth, write=SetInteger, index=3, default=21};
	__property int ItemMargin = {read=FItemMargin, write=SetInteger, index=4, default=6};
	__property int RowCount = {read=FRowCount, write=SetInteger, index=5, default=2};
	__property Height = {default=60};
	__property Width = {default=140};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsColorsPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TacColorData1;
class DELPHICLASS TacGradPaintData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacColorData1 : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TacGradPaintData* FOwner;
	bool FUseSkinColor;
	System::Uitypes::TColor FColor;
	void __fastcall SetUseSkinColor(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall TacColorData1(TacGradPaintData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData1(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacColorData2;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacColorData2 : public TacColorData1
{
	typedef TacColorData1 inherited;
	
public:
	__fastcall TacColorData2(TacGradPaintData* AOwner);
	
__published:
	__property Color = {default=-16777201};
	__property UseSkinColor = {default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData2(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TsGradientPanel;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacGradPaintData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FIsVertical;
	TsGradientPanel* FOwner;
	TacColorData1* FColor1;
	TacColorData2* FColor2;
	System::UnicodeString FCustomGradient;
	void __fastcall SetIsVertical(const bool Value);
	void __fastcall SetCustomGradient(const System::UnicodeString Value);
	void __fastcall SetColor1(const int Index, TacColorData1* const Value);
	void __fastcall SetColor2(const int Index, TacColorData2* const Value);
	
public:
	__fastcall TacGradPaintData(TsGradientPanel* AOwner);
	__fastcall virtual ~TacGradPaintData(void);
	void __fastcall Invalidate(void);
	
__published:
	__property bool IsVertical = {read=FIsVertical, write=SetIsVertical, default=1};
	__property TacColorData1* Color1 = {read=FColor1, write=SetColor1, index=0};
	__property TacColorData2* Color2 = {read=FColor2, write=SetColor2, index=1};
	__property System::UnicodeString CustomGradient = {read=FCustomGradient, write=SetCustomGradient};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsGradientPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	Sconst::TPaintEvent FOnPaint;
	TacGradPaintData* FPaintData;
	
protected:
	Vcl::Graphics::TBitmap* FCacheBmp;
	bool BGChanged;
	virtual void __fastcall CopyCache(HDC DC);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	
public:
	__fastcall virtual TsGradientPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsGradientPanel(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property TacGradPaintData* PaintData = {read=FPaintData, write=FPaintData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGradientPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


class DELPHICLASS TsStdColorsPanel;
class PASCALIMPLEMENTATION TsStdColorsPanel : public TsColorsPanel
{
	typedef TsColorsPanel inherited;
	
public:
	/* TsColorsPanel.Create */ inline __fastcall virtual TsStdColorsPanel(System::Classes::TComponent* AOwner) : TsColorsPanel(AOwner) { }
	/* TsColorsPanel.Destroy */ inline __fastcall virtual ~TsStdColorsPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsStdColorsPanel(HWND ParentWindow) : TsColorsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacContentPos
{
public:
	System::Types::TRect rBtn;
	System::Types::TRect rText;
	System::Types::TRect rGlyph;
	System::Types::TRect rArrow;
};


class DELPHICLASS TsRollOutPanel;
class PASCALIMPLEMENTATION TsRollOutPanel : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	bool FAutoHide;
	bool FAutoShow;
	bool FAnimated;
	bool FCollapsed;
	bool FShowArrow;
	bool BtnChanged;
	bool MousePressed;
	bool FDirectionArrow;
	int FBtnState;
	int FGroupIndex;
	int FButtonHeight;
	int FImageIndexExpanded;
	int FImageIndexCollapsed;
	System::Classes::TNotifyEvent FOnAfterExpand;
	System::Classes::TNotifyEvent FOnStateChanged;
	System::Classes::TNotifyEvent FOnBeforeExpand;
	System::Classes::TNotifyEvent FOnAfterCollapse;
	System::Classes::TNotifyEvent FOnBeforeCollapse;
	System::Types::TSize FSavedSize;
	Sconst::TacSide FPlacement;
	System::Uitypes::TCursor FTitleCursor;
	System::UnicodeString FTitleSkin;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetPlacement(const Sconst::TacSide Value);
	MESSAGE void __fastcall WMNCCaclSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCHitText(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMMouse &Message);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall SetBtnState(const int Value);
	void __fastcall SetTitleSkin(const System::UnicodeString Value);
	
protected:
	int RgnOffset;
	int BtnIndex;
	double ArrowAngle;
	Vcl::Graphics::TBitmap* BtnCache;
	Vcl::Extctrls::TTimer* ExitTimer;
	bool Arranging;
	Acnttypes::TacGlowForm* TitleForm;
	int ActualButtonHeight;
	System::Types::TRect __fastcall BtnRect(void);
	int __fastcall BtnPaintState(void);
	bool __fastcall PtInButton(int X, int Y);
	System::Types::TPoint __fastcall PrepareStdCache(void);
	System::Types::TPoint __fastcall PrepareSkinCache(void);
	bool __fastcall GlyphExists(void);
	int __fastcall ActualImageIndex(void);
	int __fastcall ArrowSquareSize(void);
	bool __fastcall UpdateArrowDirection(bool Value);
	void __fastcall CalcContentPos(TacContentPos &ContentPos);
	void __fastcall CheckAutoShowing(bool Value);
	void __fastcall ShowTitleForm(void);
	void __fastcall HideTitleForm(void);
	void __fastcall UpdateAngle(void);
	
public:
	__fastcall virtual TsRollOutPanel(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall ChangeState(bool bCollapsed, bool bAnimated);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__fastcall virtual ~TsRollOutPanel(void);
	virtual void __fastcall Loaded(void);
	void __fastcall Rearrange(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	__property int BtnState = {read=FBtnState, write=SetBtnState, nodefault};
	
__published:
	__property Alignment = {default=0};
	__property int GroupIndex = {read=FGroupIndex, write=SetInteger, index=0, default=0};
	__property int ButtonHeight = {read=FButtonHeight, write=SetInteger, index=1, default=22};
	__property int ImageIndexCollapsed = {read=FImageIndexCollapsed, write=SetInteger, index=2, default=-1};
	__property int ImageIndexExpanded = {read=FImageIndexExpanded, write=SetInteger, index=3, default=-1};
	__property bool Collapsed = {read=FCollapsed, write=SetBoolean, index=0, default=0};
	__property bool ShowArrow = {read=FShowArrow, write=SetBoolean, index=1, default=1};
	__property bool Animated = {read=FAnimated, write=SetBoolean, index=2, default=1};
	__property bool DirectionArrow = {read=FDirectionArrow, write=SetBoolean, index=3, default=0};
	__property bool AutoHide = {read=FAutoHide, write=FAutoHide, default=0};
	__property bool AutoShow = {read=FAutoShow, write=FAutoShow, default=0};
	__property System::Uitypes::TCursor TitleCursor = {read=FTitleCursor, write=FTitleCursor, default=0};
	__property System::UnicodeString TitleSkin = {read=FTitleSkin, write=SetTitleSkin};
	__property Sconst::TacSide Placement = {read=FPlacement, write=SetPlacement, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::Classes::TNotifyEvent OnStateChanged = {read=FOnStateChanged, write=FOnStateChanged};
	__property System::Classes::TNotifyEvent OnAfterCollapse = {read=FOnAfterCollapse, write=FOnAfterCollapse};
	__property System::Classes::TNotifyEvent OnAfterExpand = {read=FOnAfterExpand, write=FOnAfterExpand};
	__property System::Classes::TNotifyEvent OnBeforeCollapse = {read=FOnBeforeCollapse, write=FOnBeforeCollapse};
	__property System::Classes::TNotifyEvent OnBeforeExpand = {read=FOnBeforeExpand, write=FOnBeforeExpand};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsRollOutPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TacSVDisplayMode : unsigned char { svmaDocked, svmaOverlay };

enum DECLSPEC_DENUM TacSVCloseStyle : unsigned char { svcaCollapse, svcaCompact };

enum DECLSPEC_DENUM TacSVPlacement : unsigned char { svpaLeft, svpaRight, svpaTop, svpaBottom };

enum DECLSPEC_DENUM TacSVState : unsigned char { svsaOpened, svsaOpening, svsaClosed, svsaClosing };

enum DECLSPEC_DENUM TacSVBlurMode : unsigned char { bmNone, bmSplitView, bmParent };

class DELPHICLASS TacBlurData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacBlurData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Byte FOpacity;
	System::Uitypes::TColor FColor;
	TsCustomPanel* FOwner;
	TacSVBlurMode FMode;
	System::Byte FSize;
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetBytes(const int Index, const System::Byte Value);
	void __fastcall SetMode(const TacSVBlurMode Value);
	
public:
	__fastcall TacBlurData(TsCustomPanel* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property TacSVBlurMode Mode = {read=FMode, write=SetMode, default=1};
	__property System::Byte Opacity = {read=FOpacity, write=SetBytes, index=0, default=127};
	__property System::Byte Size = {read=FSize, write=SetBytes, index=1, default=10};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBlurData(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TsSplitView;
class PASCALIMPLEMENTATION TsSplitView : public TsCustomPanel
{
	typedef TsCustomPanel inherited;
	
private:
	int FVisibleSize;
	int FOpenedSize;
	int FCompactSize;
	System::Classes::TNotifyEvent FOnOpening;
	System::Classes::TNotifyEvent FOnOpened;
	System::Classes::TNotifyEvent FOnClosing;
	System::Classes::TNotifyEvent FOnClosed;
	Vcl::Graphics::TBitmap* BGBmp;
	Vcl::Graphics::TBitmap* BluredBmp;
	bool Printing;
	bool FAutoHide;
	bool PosUpdating;
	bool StateChanging;
	bool FContentMoved;
	bool FAnimatedHiding;
	bool FAnimatedShowing;
	TsPanel* ParentBlur;
	TsPanel* FOverlayPadding;
	System::Types::TPoint BGOffset;
	Vcl::Extctrls::TTimer* FAnimationTimer;
	TacSVState FState;
	TacBlurData* FBlurData;
	TacSVPlacement FPlacement;
	TacSVCloseStyle FCloseStyle;
	TacSVDisplayMode FDisplayMode;
	bool __fastcall GetOpened(void);
	int __fastcall CompSize(void);
	void __fastcall AnimationTimerHandler(System::TObject* Sender);
	void __fastcall PrepareBGBmp(void);
	void __fastcall UpdateBGBmp(void);
	void __fastcall KillParentBlur(void);
	bool __fastcall CanAnimate(TacSVState State);
	bool __fastcall CanAutoHide(void);
	int __fastcall WindowSize(void);
	int __fastcall GetVisibleSize(void);
	int __fastcall Position(void);
	int __fastcall ActualOpenedSize(void);
	void __fastcall SetOpened(bool Value);
	void __fastcall SetOpenedSize(int Value);
	void __fastcall SetCompactSize(int Value);
	void __fastcall SetPlacement(TacSVPlacement Value);
	void __fastcall SetVisibleSize(const int Value);
	void __fastcall SetCloseStyle(TacSVCloseStyle Value);
	void __fastcall SetDisplayMode(TacSVDisplayMode Value);
	void __fastcall SetContentMoved(const bool Value);
	void __fastcall SetActBounds(int aNewPos, int aVisibleSize);
	__property int VisibleSize = {read=GetVisibleSize, write=SetVisibleSize, nodefault};
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	void __fastcall PaintBorder(HDC aDC);
	void __fastcall ParentLock(bool DoLock, bool Redraw = false);
	
protected:
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetState(TacSVState Value);
	void __fastcall UpdatePosition(void);
	void __fastcall UpdateParentBlur(void);
	void __fastcall DoClosing(void);
	void __fastcall DoOpening(void);
	void __fastcall DoClosed(void);
	void __fastcall DoOpened(void);
	
public:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__fastcall virtual TsSplitView(System::Classes::TComponent* AOwner);
	void __fastcall RefreshBackground(bool DoRepaint);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsSplitView(void);
	virtual void __fastcall Loaded(void);
	void __fastcall Close(void);
	void __fastcall Open(void);
	__property DockManager;
	
__published:
	__property bool AutoHide = {read=FAutoHide, write=FAutoHide, default=0};
	__property bool AnimatedShowing = {read=FAnimatedShowing, write=FAnimatedShowing, default=1};
	__property bool AnimatedHiding = {read=FAnimatedHiding, write=FAnimatedHiding, default=0};
	__property bool ContentMoved = {read=FContentMoved, write=SetContentMoved, default=0};
	__property TacBlurData* BlurData = {read=FBlurData, write=FBlurData};
	__property TacSVCloseStyle CloseStyle = {read=FCloseStyle, write=SetCloseStyle, default=0};
	__property int CompactSize = {read=FCompactSize, write=SetCompactSize, default=50};
	__property TacSVDisplayMode DisplayMode = {read=FDisplayMode, write=SetDisplayMode, default=0};
	__property bool Opened = {read=GetOpened, write=SetOpened, default=1};
	__property int OpenedSize = {read=FOpenedSize, write=SetOpenedSize, nodefault};
	__property TacSVPlacement Placement = {read=FPlacement, write=SetPlacement, nodefault};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnClosing = {read=FOnClosing, write=FOnClosing};
	__property System::Classes::TNotifyEvent OnOpened = {read=FOnOpened, write=FOnOpened};
	__property System::Classes::TNotifyEvent OnOpening = {read=FOnOpening, write=FOnOpening};
	__property BevelOuter = {default=2};
	__property UseDockManager = {default=1};
	__property DoubleBuffered = {default=1};
	__property ParentBackground = {default=0};
	__property ParentDoubleBuffered = {default=0};
	__property Alignment = {default=2};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ShowCaption = {default=1};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property StyleElements = {default=7};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnGesture;
	__property OnMouseActivate;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property SideShadow;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsSplitView(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DefSVCompactSize = System::Int8(0x32);
static const System::Byte DefSVOpenedSize = System::Byte(0xc8);
static const System::Int8 DefSVAnimationDelay = System::Int8(0xf);
static const System::Int8 DefSVAnimationStep = System::Int8(0x14);
}	/* namespace Spanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SPANEL)
using namespace Spanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SpanelHPP
