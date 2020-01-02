// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Spanel.pas' rev: 10.00

#ifndef SpanelHPP
#define SpanelHPP

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
#include <Extctrls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spanel
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSideShadowMode { ssmNone, ssmInternal };
#pragma option pop

class DELPHICLASS TacSideShadow;
class DELPHICLASS TsCustomPanel;
class PASCALIMPLEMENTATION TsCustomPanel : public Extctrls::TCustomPanel 
{
	typedef Extctrls::TCustomPanel inherited;
	
private:
	Scommondata::TsCtrlSkinData* FCommonData;
	TacSideShadow* FSideShadow;
	Controls::TBevelCut FOldBevel;
	Sconst::TPaintEvent FOnPaint;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnMouseEnter;
	
protected:
	Graphics::TBitmap* ShadowBmp;
	virtual void __fastcall CopyCache(HDC DC);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	void __fastcall PaintSideShadow(void);
	
public:
	__fastcall virtual TsCustomPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsCustomPanel(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall PaintDragPanel(HDC DC);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	__property TacSideShadow* SideShadow = {read=FSideShadow, write=FSideShadow};
	
__published:
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsCustomPanel(HWND ParentWindow) : Extctrls::TCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacSideShadow : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
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
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSideShadow(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsPanel;
class PASCALIMPLEMENTATION TsPanel : public TsCustomPanel 
{
	typedef TsCustomPanel inherited;
	
public:
	__property DockManager ;
	
__published:
	__property Align  = {default=0};
	__property Alignment  = {default=2};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=0};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {default=0};
	__property BevelKind  = {default=0};
	__property BevelOuter  = {default=2};
	__property BevelWidth  = {default=1};
	__property BiDiMode ;
	__property BorderWidth  = {default=0};
	__property BorderStyle  = {default=0};
	__property Caption ;
	__property Color  = {default=-16777201};
	__property Constraints ;
	__property Ctl3D ;
	__property UseDockManager  = {default=1};
	__property DockSite  = {default=0};
	__property DoubleBuffered ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property FullRepaint  = {default=1};
	__property Font ;
	__property Locked  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentBackground  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property SideShadow ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnContextPopup ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
public:
	#pragma option push -w-inl
	/* TsCustomPanel.Create */ inline __fastcall virtual TsPanel(Classes::TComponent* AOwner) : TsCustomPanel(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsPanel(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TsDragBar;
class PASCALIMPLEMENTATION TsDragBar : public TsPanel 
{
	typedef TsPanel inherited;
	
private:
	Controls::TControl* FDraggedControl;
	MESSAGE void __fastcall WMActivateApp(Messages::TWMActivateApp &Message);
	
protected:
	DYNAMIC void __fastcall DblClick(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	
public:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	__fastcall virtual TsDragBar(Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
__published:
	__property Alignment  = {default=2};
	__property Align  = {default=1};
	__property Color  = {default=-16777214};
	__property Controls::TControl* DraggedControl = {read=FDraggedControl, write=FDraggedControl};
public:
	#pragma option push -w-inl
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsDragBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsDragBar(HWND ParentWindow) : TsPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TsContainer;
class PASCALIMPLEMENTATION TsContainer : public TsCustomPanel 
{
	typedef TsCustomPanel inherited;
	
public:
	#pragma option push -w-inl
	/* TsCustomPanel.Create */ inline __fastcall virtual TsContainer(Classes::TComponent* AOwner) : TsCustomPanel(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsContainer(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsContainer(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TsGrip;
class PASCALIMPLEMENTATION TsGrip : public TsPanel 
{
	typedef TsPanel inherited;
	
public:
	bool Transparent;
	Controls::TWinControl* LinkedControl;
	__fastcall virtual TsGrip(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
public:
	#pragma option push -w-inl
	/* TsCustomPanel.Destroy */ inline __fastcall virtual ~TsGrip(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsGrip(HWND ParentWindow) : TsPanel(ParentWindow) { }
	#pragma option pop
	
};


struct TsColInfo
{
	
public:
	Graphics::TColor ciColor;
	#pragma pack(push,1)
	Types::TRect ciRect;
	#pragma pack(pop)
} ;

typedef DynamicArray<TsColInfo >  sPanel__8;

class DELPHICLASS TsColorsPanel;
class PASCALIMPLEMENTATION TsColorsPanel : public TsPanel 
{
	typedef TsPanel inherited;
	
private:
	int FItemIndex;
	int FItemWidth;
	int FItemHeight;
	int FItemMargin;
	int FColCount;
	int FRowCount;
	Classes::TStrings* FColors;
	Classes::TNotifyEvent FOnChange;
	void __fastcall SetColors(const Classes::TStrings* Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	
public:
	int OldSelected;
	DynamicArray<TsColInfo >  ColorsArray;
	__fastcall virtual TsColorsPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsColorsPanel(void);
	void __fastcall GenerateColors(void);
	virtual void __fastcall AfterConstruction(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Loaded(void);
	void __fastcall PaintColors(const HDC DC);
	int __fastcall Count(void);
	int __fastcall GetItemByCoord(const Types::TPoint &p);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	Graphics::TColor __fastcall ColorValue(void);
	
__published:
	__property Classes::TStrings* Colors = {read=FColors, write=SetColors};
	__property int ColCount = {read=FColCount, write=SetInteger, index=0, default=5};
	__property int ItemIndex = {read=FItemIndex, write=SetInteger, index=1, default=-1};
	__property int ItemHeight = {read=FItemHeight, write=SetInteger, index=2, default=21};
	__property int ItemWidth = {read=FItemWidth, write=SetInteger, index=3, default=21};
	__property int ItemMargin = {read=FItemMargin, write=SetInteger, index=4, default=6};
	__property int RowCount = {read=FRowCount, write=SetInteger, index=5, default=2};
	__property Height  = {default=60};
	__property Width  = {default=140};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsColorsPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TacColorData1;
class DELPHICLASS TacGradPaintData;
class DELPHICLASS TsGradientPanel;
class PASCALIMPLEMENTATION TsGradientPanel : public Extctrls::TPanel 
{
	typedef Extctrls::TPanel inherited;
	
private:
	Sconst::TPaintEvent FOnPaint;
	TacGradPaintData* FPaintData;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnMouseEnter;
	
protected:
	Graphics::TBitmap* FCacheBmp;
	bool BGChanged;
	virtual void __fastcall CopyCache(HDC DC);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	
public:
	__fastcall virtual TsGradientPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsGradientPanel(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property TacGradPaintData* PaintData = {read=FPaintData, write=FPaintData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsGradientPanel(HWND ParentWindow) : Extctrls::TPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TacColorData2;
class PASCALIMPLEMENTATION TacColorData1 : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacGradPaintData* FOwner;
	bool FUseSkinColor;
	Graphics::TColor FColor;
	void __fastcall SetUseSkinColor(const bool Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	
public:
	__fastcall TacColorData1(TacGradPaintData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData1(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacColorData2 : public TacColorData1 
{
	typedef TacColorData1 inherited;
	
public:
	__fastcall TacColorData2(TacGradPaintData* AOwner);
	
__published:
	__property Color  = {default=-16777201};
	__property UseSkinColor  = {default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData2(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacGradPaintData : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FIsVertical;
	TsGradientPanel* FOwner;
	TacColorData1* FColor1;
	TacColorData2* FColor2;
	AnsiString FCustomGradient;
	void __fastcall SetIsVertical(const bool Value);
	void __fastcall SetCustomGradient(const AnsiString Value);
	void __fastcall SetColor1(const int Index, const TacColorData1* Value);
	void __fastcall SetColor2(const int Index, const TacColorData2* Value);
	
public:
	__fastcall TacGradPaintData(TsGradientPanel* AOwner);
	__fastcall virtual ~TacGradPaintData(void);
	void __fastcall Invalidate(void);
	
__published:
	__property bool IsVertical = {read=FIsVertical, write=SetIsVertical, default=1};
	__property TacColorData1* Color1 = {read=FColor1, write=SetColor1, index=0};
	__property TacColorData2* Color2 = {read=FColor2, write=SetColor2, index=1};
	__property AnsiString CustomGradient = {read=FCustomGradient, write=SetCustomGradient};
};



class DELPHICLASS TsStdColorsPanel;
class PASCALIMPLEMENTATION TsStdColorsPanel : public TsColorsPanel 
{
	typedef TsColorsPanel inherited;
	
public:
	#pragma option push -w-inl
	/* TsColorsPanel.Create */ inline __fastcall virtual TsStdColorsPanel(Classes::TComponent* AOwner) : TsColorsPanel(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TsColorsPanel.Destroy */ inline __fastcall virtual ~TsStdColorsPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsStdColorsPanel(HWND ParentWindow) : TsColorsPanel(ParentWindow) { }
	#pragma option pop
	
};


struct TacContentPos
{
	
public:
	#pragma pack(push,1)
	Types::TRect rBtn;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect rText;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect rGlyph;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TRect rArrow;
	#pragma pack(pop)
} ;

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
	Classes::TNotifyEvent FOnAfterExpand;
	Classes::TNotifyEvent FOnStateChanged;
	Classes::TNotifyEvent FOnBeforeExpand;
	Classes::TNotifyEvent FOnAfterCollapse;
	Classes::TNotifyEvent FOnBeforeCollapse;
	#pragma pack(push,1)
	tagSIZE FSavedSize;
	#pragma pack(pop)
	Sconst::TacSide FPlacement;
	Controls::TCursor FTitleCursor;
	AnsiString FTitleSkin;
	Imglist::TCustomImageList* FImages;
	Imglist::TChangeLink* FImageChangeLink;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetPlacement(const Sconst::TacSide Value);
	MESSAGE void __fastcall WMNCCaclSize(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCHitText(Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Messages::TWMMouse &Message);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall SetBtnState(const int Value);
	void __fastcall SetTitleSkin(const AnsiString Value);
	
protected:
	int RgnOffset;
	int BtnIndex;
	double ArrowAngle;
	Graphics::TBitmap* BtnCache;
	Extctrls::TTimer* ExitTimer;
	bool Arranging;
	Acnttypes::TacGlowForm* TitleForm;
	int ActualButtonHeight;
	Types::TRect __fastcall BtnRect();
	int __fastcall BtnPaintState(void);
	bool __fastcall PtInButton(int X, int Y);
	Types::TPoint __fastcall PrepareStdCache();
	Types::TPoint __fastcall PrepareSkinCache();
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
	__fastcall virtual TsRollOutPanel(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall ChangeState(bool bCollapsed, bool bAnimated);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	__fastcall virtual ~TsRollOutPanel(void);
	virtual void __fastcall Loaded(void);
	void __fastcall Rearrange(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	__property int BtnState = {read=FBtnState, write=SetBtnState, nodefault};
	
__published:
	__property Alignment  = {default=0};
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
	__property Controls::TCursor TitleCursor = {read=FTitleCursor, write=FTitleCursor, default=0};
	__property AnsiString TitleSkin = {read=FTitleSkin, write=SetTitleSkin};
	__property Sconst::TacSide Placement = {read=FPlacement, write=SetPlacement, default=1};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Classes::TNotifyEvent OnStateChanged = {read=FOnStateChanged, write=FOnStateChanged};
	__property Classes::TNotifyEvent OnAfterCollapse = {read=FOnAfterCollapse, write=FOnAfterCollapse};
	__property Classes::TNotifyEvent OnAfterExpand = {read=FOnAfterExpand, write=FOnAfterExpand};
	__property Classes::TNotifyEvent OnBeforeCollapse = {read=FOnBeforeCollapse, write=FOnBeforeCollapse};
	__property Classes::TNotifyEvent OnBeforeExpand = {read=FOnBeforeExpand, write=FOnBeforeExpand};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsRollOutPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacSVDisplayMode { svmaDocked, svmaOverlay };
#pragma option pop

#pragma option push -b-
enum TacSVCloseStyle { svcaCollapse, svcaCompact };
#pragma option pop

#pragma option push -b-
enum TacSVPlacement { svpaLeft, svpaRight, svpaTop, svpaBottom };
#pragma option pop

#pragma option push -b-
enum TacSVState { svsaOpened, svsaOpening, svsaClosed, svsaClosing };
#pragma option pop

#pragma option push -b-
enum TacSVBlurMode { bmNone, bmSplitView, bmParent };
#pragma option pop

class DELPHICLASS TacBlurData;
class PASCALIMPLEMENTATION TacBlurData : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Byte FOpacity;
	Graphics::TColor FColor;
	TsCustomPanel* FOwner;
	TacSVBlurMode FMode;
	Byte FSize;
	void __fastcall SetColor(const Graphics::TColor Value);
	void __fastcall SetBytes(const int Index, const Byte Value);
	void __fastcall SetMode(const TacSVBlurMode Value);
	
public:
	__fastcall TacBlurData(TsCustomPanel* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=-16777201};
	__property TacSVBlurMode Mode = {read=FMode, write=SetMode, default=1};
	__property Byte Opacity = {read=FOpacity, write=SetBytes, index=0, default=127};
	__property Byte Size = {read=FSize, write=SetBytes, index=1, default=10};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBlurData(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsSplitView;
class PASCALIMPLEMENTATION TsSplitView : public TsCustomPanel 
{
	typedef TsCustomPanel inherited;
	
private:
	int FVisibleSize;
	int FOpenedSize;
	int FCompactSize;
	Classes::TNotifyEvent FOnOpening;
	Classes::TNotifyEvent FOnOpened;
	Classes::TNotifyEvent FOnClosing;
	Classes::TNotifyEvent FOnClosed;
	Graphics::TBitmap* BGBmp;
	Graphics::TBitmap* BluredBmp;
	bool Printing;
	bool FAutoHide;
	bool PosUpdating;
	bool StateChanging;
	bool FContentMoved;
	bool FAnimatedHiding;
	bool FAnimatedShowing;
	TsPanel* ParentBlur;
	TsPanel* FOverlayPadding;
	#pragma pack(push,1)
	Types::TPoint BGOffset;
	#pragma pack(pop)
	Extctrls::TTimer* FAnimationTimer;
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
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	void __fastcall PaintBorder(HDC aDC);
	void __fastcall ParentLock(bool DoLock, bool Redraw = false);
	
protected:
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual void __fastcall SetState(TacSVState Value);
	void __fastcall UpdatePosition(void);
	void __fastcall UpdateParentBlur(void);
	void __fastcall DoClosing(void);
	void __fastcall DoOpening(void);
	void __fastcall DoClosed(void);
	void __fastcall DoOpened(void);
	
public:
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	__fastcall virtual TsSplitView(Classes::TComponent* AOwner);
	void __fastcall RefreshBackground(bool DoRepaint);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsSplitView(void);
	virtual void __fastcall Loaded(void);
	void __fastcall Close(void);
	void __fastcall Open(void);
	__property DockManager ;
	
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
	__property Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property Classes::TNotifyEvent OnClosing = {read=FOnClosing, write=FOnClosing};
	__property Classes::TNotifyEvent OnOpened = {read=FOnOpened, write=FOnOpened};
	__property Classes::TNotifyEvent OnOpening = {read=FOnOpening, write=FOnOpening};
	__property BevelOuter  = {default=2};
	__property UseDockManager  = {default=1};
	__property DoubleBuffered  = {default=1};
	__property ParentBackground  = {default=0};
	__property Alignment  = {default=2};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {default=0};
	__property BevelKind  = {default=0};
	__property BevelWidth  = {default=1};
	__property BiDiMode ;
	__property BorderWidth  = {default=0};
	__property BorderStyle  = {default=0};
	__property Caption ;
	__property Color  = {default=-16777201};
	__property Constraints ;
	__property Ctl3D ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property FullRepaint  = {default=1};
	__property Font ;
	__property Locked  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property SideShadow ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnContextPopup ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsSplitView(HWND ParentWindow) : TsCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint DefSVCompactSize = 0x32;
static const Byte DefSVOpenedSize = 0xc8;
static const Shortint DefSVAnimationDelay = 0xf;
static const Shortint DefSVAnimationStep = 0x14;

}	/* namespace Spanel */
using namespace Spanel;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Spanel
