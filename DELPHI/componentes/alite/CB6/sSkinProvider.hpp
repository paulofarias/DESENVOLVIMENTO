// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinProvider.pas' rev: 6.00

#ifndef sSkinProviderHPP
#define sSkinProviderHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sStyleSimply.hpp>	// Pascal unit
#include <acTitleBar.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit
#include <acGlow.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sSkinMenus.hpp>	// Pascal unit
#include <acSBUtils.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinprovider
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TacLabelColor
{
	Graphics::TColor Color;
	Controls::TControl* Control;
	bool ParentFont;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TacFormsCouple
{
	Forms::TForm* Slave;
	Forms::TForm* Master;
	Types::TPoint Pos;
} ;
#pragma pack(pop)

class DELPHICLASS TacGraphItem;
class PASCALIMPLEMENTATION TacGraphItem : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
public:
	System::TObject* Adapter;
	Controls::TControl* Ctrl;
	Scommondata::TsCommonData* SkinData;
	Acsbutils::TacSpeedButtonHandler* Handler;
	__fastcall virtual TacGraphItem(void);
	__fastcall virtual ~TacGraphItem(void);
	void __fastcall DoHook(Controls::TControl* Control);
};


class DELPHICLASS TacAdapterItem;
class DELPHICLASS TacCtrlAdapter;
typedef DynamicArray<TacAdapterItem* >  TacAdapterItems;

typedef DynamicArray<TacGraphItem* >  TacGraphItems;

class DELPHICLASS TsSkinProvider;
#pragma option push -b-
enum TsGripMode { gmNone, gmRightBottom };
#pragma option pop

class DELPHICLASS TsTitleIcon;
class PASCALIMPLEMENTATION TsTitleIcon : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FHeight;
	int FWidth;
	TsSkinProvider* FOwner;
	Graphics::TBitmap* FGlyph;
	bool FVisible;
	void __fastcall SetGlyph(const Graphics::TBitmap* Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall GlyphChanged(System::TObject* Sender);
	
public:
	__fastcall TsTitleIcon(TsSkinProvider* AOwner);
	__fastcall virtual ~TsTitleIcon(void);
	
__published:
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property int Height = {read=FHeight, write=FHeight, default=0};
	__property int Width = {read=FWidth, write=FWidth, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
};


#pragma option push -b-
enum TsResizeMode { rmStandard, rmBorder };
#pragma option pop

class DELPHICLASS TacAddedTitle;
class PASCALIMPLEMENTATION TacAddedTitle : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FShowMainCaption;
	void __fastcall SetShowMainCaption(const bool Value);
	
protected:
	Graphics::TFont* FFont;
	AnsiString FText;
	void __fastcall SetText(const AnsiString Value);
	void __fastcall SetFont(const Graphics::TFont* Value);
	void __fastcall Repaint(void);
	
public:
	TsSkinProvider* FOwner;
	bool __fastcall FontIsStored(void);
	__fastcall virtual TacAddedTitle(void);
	__fastcall virtual ~TacAddedTitle(void);
	
__published:
	__property Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FontIsStored};
	__property AnsiString Text = {read=FText, write=SetText};
	__property bool ShowMainCaption = {read=FShowMainCaption, write=SetShowMainCaption, default=1};
};


class DELPHICLASS TacSysSubMenu;
#pragma option push -b-
enum TacMenuItemPos { ipTop, ipBottom, ipBeforeClose };
#pragma option pop

class PASCALIMPLEMENTATION TacSysSubMenu : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FCaption;
	TacMenuItemPos FPosition;
	Menus::TPopupMenu* FPopupMenu;
	
public:
	__fastcall TacSysSubMenu(void);
	
__published:
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property TacMenuItemPos Position = {read=FPosition, write=FPosition, default=2};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSysSubMenu(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsTitleButtons;
class DELPHICLASS TsTitleButton;
class PASCALIMPLEMENTATION TsTitleButtons : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TsTitleButton* operator[](int Index) { return Items[Index]; }
	
private:
	TsSkinProvider* FOwner;
	HIDESBASE TsTitleButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsTitleButton* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TsTitleButtons(TsSkinProvider* AOwner);
	__fastcall virtual ~TsTitleButtons(void);
	__property TsTitleButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


typedef void __fastcall (__closure *TAddItemEvent)(Classes::TComponent* Item, bool &CanBeAdded, AnsiString &SkinSection);

typedef void __fastcall (__closure *TacNCHitTest)(Messages::TWMNCHitTest &Msg);

#pragma option push -b-
enum TacAnimEvent { aeShowing, aeHiding, aeSkinChanging };
#pragma option pop

typedef void __fastcall (__closure *TacAfterAnimation)(TacAnimEvent AnimType);

typedef Acsbutils::TacSkinParams *PacSkinParams;

typedef void __fastcall (__closure *TAddItemExEvent)(Classes::TComponent* Item, bool &CanBeAdded, PacSkinParams SkinParams);

class DELPHICLASS TacFormHeader;
class PASCALIMPLEMENTATION TacFormHeader : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TsSkinProvider* FOwner;
	int FAdditionalHeight;
	void __fastcall SetAdditionalHeight(const int Value);
	
public:
	int __fastcall ScaledAddHeight(void);
	__fastcall TacFormHeader(TsSkinProvider* AOwner);
	
__published:
	__property int AdditionalHeight = {read=FAdditionalHeight, write=SetAdditionalHeight, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormHeader(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSBAnimation;
class DELPHICLASS TacBorderForm;
struct TsCaptionButton;
class PASCALIMPLEMENTATION TacBorderForm : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
protected:
	#pragma pack(push, 1)
	Types::TPoint LastTopLeft;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LastMousePos;
	#pragma pack(pop)
	
	bool LeftPressed;
	bool MainRgnReady;
	bool acInMouseMsg;
	bool MovRgnChanged;
	bool MaxMoving;
	System::TObject* FOwner;
	TsSkinProvider* sp;
	bool ResetRgn;
	bool __fastcall CanBringForm(void);
	void __fastcall BorderProc(Messages::TMessage &Message);
	void __fastcall KillAnimations(void);
	TsCaptionButton __fastcall ButtonMin();
	TsCaptionButton __fastcall ButtonMax();
	TsCaptionButton __fastcall ButtonClose();
	TsCaptionButton __fastcall ButtonHelp();
	int __fastcall CaptionHeight(bool CheckSkin = true);
	int __fastcall MenuHeight(void);
	Types::TRect __fastcall IconRect();
	void __fastcall SetHotHT(const int i, bool Repaint = true);
	int __fastcall MinTopCoord(void);
	unsigned __fastcall FormState(void);
	void __fastcall UpdateRgn(void);
	bool __fastcall Ex_WMSetCursor(Messages::TWMSetCursor &Message);
	bool __fastcall MouseAboveTheShadow(const Messages::TWMMouse &Message);
	unsigned __fastcall GetTopWnd(void);
	
public:
	bool Locked;
	bool ExBorderShowing;
	Scommondata::TsCommonData* SkinData;
	Acnttypes::TacGlowForm* AForm;
	Classes::TWndMethod OldBorderProc;
	unsigned ParentHandle;
	Graphics::TBitmap* ShadowTemplate;
	int __fastcall Ex_WMNCHitTest(Messages::TWMNCHitTest &Message);
	Types::TRect __fastcall ShadowSize();
	int __fastcall OffsetX(void);
	int __fastcall OffsetY(void);
	__fastcall TacBorderForm(System::TObject* AOwner);
	__fastcall virtual ~TacBorderForm(void);
	HRGN __fastcall MakeRgn(int NewWidth = 0x0, int NewHeight = 0x0);
	void __fastcall CreateNewForm(void);
	HWND __fastcall OwnerHandle(void);
	void __fastcall PaintAll(void);
	void __fastcall UpdateExBordersPos(bool Redraw = true, Byte Blend = (Byte)(0xff));
};


typedef TsCaptionButton *PsCaptionButton;

class PASCALIMPLEMENTATION TacSBAnimation : public Extctrls::TTimer 
{
	typedef Extctrls::TTimer inherited;
	
protected:
	Graphics::TBitmap* ABmp;
	Acnttypes::TacGlowForm* AForm;
	TacBorderForm* BorderForm;
	
public:
	int CurrentLevel;
	int CurrentState;
	int MaxIterations;
	Scommondata::TsCommonData* SkinData;
	HWND FormHandle;
	TsCaptionButton *PBtnData;
	bool Up;
	__fastcall virtual TacSBAnimation(Classes::TComponent* AOwner);
	__fastcall virtual ~TacSBAnimation(void);
	Types::TRect __fastcall GetFormBounds();
	int __fastcall Offset(void);
	int __fastcall Step(void);
	void __fastcall MakeForm(void);
	void __fastcall UpdateForm(const int Blend);
	void __fastcall StartAnimation(int NewState, bool ToUp);
	void __fastcall ChangeState(int NewState, bool ToUp);
	void __fastcall MakeImg(void);
	void __fastcall CheckMouseLeave(void);
	void __fastcall OnAnimTimer(System::TObject* Sender);
};


#pragma pack(push, 4)
struct TsCaptionButton
{
	int cpState;
	int cpGlowID;
	Types::TRect cpRect;
	unsigned cpHitCode;
	TacSBAnimation* cpTimer;
	bool cpHaveAlignment;
	Sstylesimply::TacTitleGlyph cpGlyphType;
} ;
#pragma pack(pop)

typedef DynamicArray<TacLabelColor >  TacLabelsColors;

class DELPHICLASS TsSystemMenu;
class DELPHICLASS TsCustomSysMenu;
class PASCALIMPLEMENTATION TsCustomSysMenu : public Menus::TPopupMenu 
{
	typedef Menus::TPopupMenu inherited;
	
public:
	virtual bool __fastcall VisibleClose(void) = 0 ;
	virtual bool __fastcall VisibleMax(void) = 0 ;
	virtual bool __fastcall VisibleMin(void) = 0 ;
	virtual bool __fastcall EnabledMax(void) = 0 ;
	virtual bool __fastcall EnabledMin(void) = 0 ;
	virtual bool __fastcall EnabledRestore(void) = 0 ;
public:
	#pragma option push -w-inl
	/* TPopupMenu.Create */ inline __fastcall virtual TsCustomSysMenu(Classes::TComponent* AOwner) : Menus::TPopupMenu(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TsCustomSysMenu(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TsSystemMenu : public TsCustomSysMenu 
{
	typedef TsCustomSysMenu inherited;
	
protected:
	Menus::TMenuItem* SubMenu;
	Menus::TMenuItem* ItemMove;
	Menus::TMenuItem* ItemSize;
	Menus::TMenuItem* ItemClose;
	Menus::TMenuItem* ItemRestore;
	Menus::TMenuItem* ItemMinimize;
	Menus::TMenuItem* ItemMaximize;
	int ExtItemsCount;
	TsSkinProvider* FOwner;
	Forms::TCustomForm* FForm;
	void __fastcall RestoreClick(System::TObject* Sender);
	void __fastcall MoveClick(System::TObject* Sender);
	void __fastcall SizeClick(System::TObject* Sender);
	void __fastcall MinClick(System::TObject* Sender);
	void __fastcall MaxClick(System::TObject* Sender);
	void __fastcall CloseClick(System::TObject* Sender);
	void __fastcall SkinSelect(System::TObject* Sender);
	void __fastcall ExtClick(System::TObject* Sender);
	
public:
	__fastcall virtual TsSystemMenu(Classes::TComponent* AOwner);
	void __fastcall Generate(void);
	HIDESBASE void __fastcall UpdateItems(bool Full = false);
	void __fastcall UpdateGlyphs(void);
	void __fastcall MakeSkinItems(void);
	bool __fastcall VisibleRestore(void);
	bool __fastcall VisibleSize(void);
	virtual bool __fastcall VisibleMin(void);
	virtual bool __fastcall VisibleMax(void);
	virtual bool __fastcall VisibleClose(void);
	virtual bool __fastcall EnabledRestore(void);
	virtual bool __fastcall EnabledMin(void);
	virtual bool __fastcall EnabledMax(void);
	bool __fastcall EnabledMove(void);
	bool __fastcall EnabledSize(void);
	bool __fastcall EnabledClose(void);
public:
	#pragma option push -w-inl
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TsSystemMenu(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TsSkinProvider : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	int CurrentHT;
	int UserBtnIndex;
	int FSnapBuffer;
	bool FUWPMode;
	bool FScreenSnap;
	bool FShowAppIcon;
	bool FMakeSkinMenu;
	bool FUseGlobalColor;
	bool FDisabledBlured;
	bool ControlsChanged;
	bool FAllowAnimation;
	bool FDrawClientArea;
	bool FAllowExtBorders;
	bool FirstInitialized;
	bool FAllowSkin3rdParty;
	bool FAllowBlendOnMoving;
	bool FDrawNonClientArea;
	#pragma pack(push, 1)
	Types::TRect FIconRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FHintRect;
	#pragma pack(pop)
	
	AnsiString FTitleSkin;
	AnsiString FMenuLineSkin;
	Acnttypes::TacTimer* FHintTimer;
	Classes::TThread* FScaleThread;
	TsGripMode FGripMode;
	TsTitleIcon* FTitleIcon;
	Classes::TStringList* FGluedForms;
	TsResizeMode FResizeMode;
	TacAddedTitle* FAddedTitle;
	TacSysSubMenu* FSysSubMenu;
	TsTitleButtons* FTitleButtons;
	Classes::TAlignment FCaptionAlignment;
	TAddItemEvent FOnSkinItem;
	TacNCHitTest FOnExtHitTest;
	TacAfterAnimation FOnAfterAnimation;
	TAddItemExEvent FOnSkinItemEx;
	TacFormHeader* FFormHeader;
	Sskinmanager::TsThirdPartyList* FThirdParty;
	Byte FDisabledBlendValue;
	Graphics::TColor FDisabledBlendColor;
	void __fastcall OnHintTimer(System::TObject* Sender);
	void __fastcall StartHintTimer(Actitlebar::TacTitleBarItem* TitleItem);
	void __fastcall AnimChangeScale(int NewPPI, bool DoRecreate);
	void __fastcall OnScaleTimer(System::TObject* Sender);
	void __fastcall UpdateUWPMode(void);
	int __fastcall GetLinesCount(void);
	void __fastcall OnChildMnuClick(System::TObject* Sender);
	void __fastcall SetCaptionAlignment(const Classes::TAlignment Value);
	void __fastcall SetDisabledBlendColor(const Graphics::TColor Value);
	void __fastcall SetDisabledBlendValue(const Byte Value);
	void __fastcall SetTitleBar(const Actitlebar::TsTitleBar* Value);
	void __fastcall SetTitleButtons(const TsTitleButtons* Value);
	void __fastcall SetGluedForms(const Classes::TStringList* Value);
	void __fastcall SetResizeMode(const TsResizeMode Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetSkinSection(const int Index, const AnsiString Value);
	bool __fastcall HaveSysMenu(void);
	void __fastcall UpdateNCArea(bool Skinned);
	void __fastcall InitIndexes(void);
	
protected:
	bool bCapture;
	bool DoReinit;
	bool RgnChanged;
	bool bInProcess;
	bool MaxRestore;
	bool FSysExHeight;
	bool ClearButtons;
	bool OwnThirdLists;
	bool FMenuOwnerDraw;
	bool MenusInitialized;
	int LockCount;
	int CYCaption;
	int CXSizeFrame;
	int CXFixedFrame;
	int CXPaddedBorder;
	int FLinesCount;
	int FHeaderIndex;
	int FHeaderHeight;
	int FTitleSkinIndex;
	int FCaptionSkinIndex;
	#pragma pack(push, 1)
	Types::TRect NormalBounds;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect LastClientRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* FGlow1;
	Graphics::TBitmap* FGlow2;
	Graphics::TBitmap* TempBmp;
	Graphics::TBitmap* CoverBmp;
	Graphics::TBitmap* MenuLineBmp;
	TsCaptionButton MDIMin;
	TsCaptionButton MDIMax;
	TsCaptionButton ButtonMin;
	TsCaptionButton ButtonMax;
	TsCaptionButton ButtonHelp;
	TsCaptionButton ButtonClose;
	TsCaptionButton MDIClose;
	DynamicArray<Types::TRect >  Rects;
	Sskinmenus::TMenuItemData HotItem;
	Actitlebar::TsTitleBar* FTitleBar;
	Acnttypes::TacGlowForm* LayerForm;
	Acnttypes::TacGlowForm* CoverForm;
	Acthdtimer::TacThreadedTimer* FormTimer;
	Scommondata::TsScrollWndData* FCommonData;
	DynamicArray<TacLabelColor >  SavedLabelColors;
	Graphics::TBitmap* UWPTemplates[2];
	#pragma pack(push, 1)
	Types::TRect UWPShadowSize;
	#pragma pack(pop)
	
	bool bFlag1;
	bool RTInit;
	bool RTEmpty;
	bool InAero;
	bool InMenu;
	bool fAnimating;
	bool BigButtons;
	bool FormActive;
	bool MenuChanged;
	bool RgnChanging;
	bool RightPressed;
	Acnttypes::TacGlowForm* CaptForm;
	int VCenter;
	System::TObject* MDIForm;
	Classes::TList* FrameAdapters;
	Classes::TWndMethod OldWndProc;
	Forms::TShowAction ShowAction;
	void __fastcall AdapterRemove(void);
	void __fastcall AdapterCreate(void);
	void __fastcall SendToAdapter(const Messages::TMessage &Message);
	bool __fastcall HeaderUsed(void);
	void __fastcall PaintForm(HDC DC, const Types::TRect &PaintRect, bool SendUpdated = true);
	void __fastcall PaintCaption(HDC DC);
	void __fastcall PaintTitleContent(int CaptWidth);
	void __fastcall PaintTitleItem(Actitlebar::TacTitleBarItem* Item, const Types::TRect &R, Graphics::TBitmap* Bmp);
	void __fastcall UpdateLayerForm(void);
	void __fastcall RepaintButton(int i);
	void __fastcall RepaintMenuItem(Menus::TMenuItem* mi, const Types::TRect &R, Windows::TOwnerDrawState State);
	void __fastcall SaveBGForBtns(int CaptWidth, bool Full = false);
	void __fastcall RestoreBtnsBG(int CaptWidth);
	void __fastcall OurPaintHandler(const Messages::TWMPaint &Msg);
	void __fastcall AC_ASEMSG(Messages::TMessage &Message);
	void __fastcall AC_WMCopyData(Messages::TWMCopyData &Message);
	bool __fastcall AC_SMAlphaCmd_Common(Messages::TMessage &Message);
	bool __fastcall AC_SMAlphaCmd_Skinned(Messages::TMessage &Message);
	bool __fastcall AC_SMAlphaCmd_Unskinned(Messages::TMessage &Message);
	void __fastcall AC_CMEnabledChanged(Messages::TMessage &Message);
	void __fastcall AC_CMFloat(Messages::TMessage &Message);
	void __fastcall AC_CMMenuChanged(Messages::TMessage &Message);
	void __fastcall AC_CMMouseEnter(Messages::TMessage &Message);
	void __fastcall AC_CMRecreateWnd(Messages::TMessage &Message);
	void __fastcall AC_CMShowingChanged(Messages::TMessage &Message);
	void __fastcall AC_WMActivate(Messages::TWMActivate &Message);
	void __fastcall AC_WMActivateApp(Messages::TMessage &Message);
	void __fastcall AC_WMChildActivate(Messages::TMessage &Message);
	void __fastcall AC_WMContextMenu(Messages::TMessage &Message);
	void __fastcall AC_WMControlListChange(Controls::TCMControlListChange &Message);
	void __fastcall AC_WMCreate(Messages::TMessage &Message);
	void __fastcall AC_WMEnterMenuLoop(Messages::TMessage &Message);
	void __fastcall AC_WMEraseBkGnd(Messages::TMessage &Message);
	void __fastcall AC_WMEraseBkGndHandler(HDC aDC);
	void __fastcall AC_WMExitMenuLoop(Messages::TMessage &Message);
	void __fastcall AC_WMExitSizeMove(Messages::TMessage &Message);
	void __fastcall AC_WMGetMinMaxInfo(Messages::TWMGetMinMaxInfo &Message);
	void __fastcall AC_WMInitMenuPopup(Messages::TWMInitMenuPopup &Message);
	void __fastcall AC_WMLButtonUp(Messages::TWMNCHitMessage &Message);
	void __fastcall AC_WMMDIDestroy(Messages::TMessage &Message);
	void __fastcall AC_WMMeasureItem(Messages::TMessage &Message);
	void __fastcall AC_WMMove(Messages::TMessage &Message);
	void __fastcall AC_WMMouseLeave(Messages::TMessage &Message);
	void __fastcall AC_WMMouseMove(Messages::TMessage &Message);
	void __fastcall AC_WMNCActivate(Messages::TWMNCActivate &Message);
	void __fastcall AC_WMNCCreate(Messages::TMessage &Message);
	void __fastcall AC_WMNCDestroy(void);
	void __fastcall AC_WMNCHitTest(Messages::TMessage &Message);
	void __fastcall AC_WMNCLButtonDblClick(Messages::TMessage &Message);
	void __fastcall AC_WMNCLButtonDown(Messages::TWMNCHitMessage &Message);
	void __fastcall AC_WMNCMouseMove(Messages::TWMNCHitMessage &Message);
	void __fastcall AC_WMNCPaint(Messages::TMessage &Message);
	void __fastcall AC_WMNCPaintHandler(void);
	void __fastcall AC_WMNCRButtonDown(Messages::TWMNCHitMessage &Message);
	void __fastcall AC_WMNCRButtonUp(Messages::TWMNCHitMessage &Message);
	void __fastcall AC_WMNotify(Messages::TMessage &Message);
	void __fastcall AC_WMPaint(Messages::TMessage &Message);
	void __fastcall AC_WMParentNotify(Messages::TMessage &Message);
	void __fastcall AC_WMPrint(Messages::TMessage &Message);
	void __fastcall AC_WMQueryEndSession(Messages::TMessage &Message);
	void __fastcall AC_WMSetIcon(Messages::TMessage &Message);
	void __fastcall AC_WMSetRedraw(Messages::TMessage &Message);
	void __fastcall AC_WMSetText(Messages::TMessage &Message);
	void __fastcall AC_WMSettingChange(Messages::TMessage &Message);
	void __fastcall AC_WMSize(Messages::TMessage &Message);
	void __fastcall AC_WMSizing(Messages::TMessage &Message);
	void __fastcall AC_WMShowWindow(Messages::TMessage &Message);
	void __fastcall AC_WMStyleChanged(Messages::TMessage &Message);
	void __fastcall AC_WMSysColorChange(Messages::TMessage &Message);
	void __fastcall AC_WMSysCommand(Messages::TMessage &Message);
	void __fastcall AC_WMVisibleChanged(Messages::TMessage &Message);
	void __fastcall AC_WMWindowPosChanged(Messages::TMessage &Message);
	void __fastcall AC_WMWindowPosChanging(Messages::TWMWindowPosMsg &Message);
	void __fastcall AC_WMWindowPosChanged_Unskinned(Messages::TWMWindowPosMsg &Message);
	void __fastcall AC_CMVisibleChanged_Unskinned(Messages::TMessage &Message);
	void __fastcall AC_WMClose(Messages::TMessage &Message);
	void __fastcall StartMoveForm(void);
	int __fastcall HTProcess(Messages::TWMNCHitTest &Message);
	Types::TPoint __fastcall CursorToPoint(const int x, const int y);
	bool __fastcall MDIButtonsNeeded(void);
	Types::TPoint __fastcall RBGripPoint(const int ImgIndex);
	Types::TPoint __fastcall FormLeftTop();
	int __fastcall SysButtonsCount(void);
	int __fastcall SmallButtonWidth(void);
	int __fastcall ButtonHeight(void);
	int __fastcall SmallButtonHeight(void);
	void __fastcall UWPCaptionUpdate(bool Zoomed);
	Types::TRect __fastcall LimitRect(int db, const Types::TRect &R, bool Invert = false);
	tagSIZE __fastcall CheckEdges(const Types::TRect &rStatic, const Types::TRect &rDynamic, int NewX, int NewY);
	void __fastcall CheckNewPosition(int &X, int &Y);
	bool __fastcall Linked(Forms::TForm* f);
	void __fastcall MoveGluedForms(bool BlendMoving = false);
	void __fastcall UpdateSlaveFormsList(void);
	bool __fastcall UWPNoBorderMode(void);
	int __fastcall SysButtonWidth(const TsCaptionButton &Btn);
	int __fastcall TitleBtnsWidth(void);
	int __fastcall UserButtonWidth(const TsTitleButton* Btn);
	int __fastcall BarWidth(const int i);
	void __fastcall UpdateIconsIndexes(void);
	void __fastcall StartMove(int X, int Y);
	void __fastcall StopMove(int X, int Y);
	void __fastcall DrawFormBorder(int X, int Y);
	void __fastcall SetHotHT(const int i, const bool Repaint = true);
	void __fastcall SetPressedHT(const int i);
	int __fastcall ActualTitleHeight(bool Max = false);
	virtual int __fastcall GetTopCoord(void);
	bool __fastcall FormChanged(void);
	bool __fastcall IconVisible(void);
	AnsiString __fastcall TitleSkinSection();
	void __fastcall TryInitMenu(void);
	void __fastcall CheckSysMenu(const bool Skinned);
	void __fastcall InitExBorders(const bool Active);
	Graphics::TBitmap* __fastcall UWPTemplate(bool bActive);
	bool __fastcall CanDrawNCArea(void);
	int __fastcall SizeFrame(void);
	int __fastcall FixedFrame(void);
	int __fastcall FramePadding(void);
	void __fastcall InitSysParams(int iPPI);
	int __fastcall BorderHeight(bool CheckSkin = true);
	void __fastcall SetFormState(const unsigned Value);
	void __fastcall CalcItems(void);
	void __fastcall LoadInit(void);
	void __fastcall InitLabel(const Controls::TControl* Control, const bool Skinned);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall NewWndProc(Messages::TMessage &Message);
	void __fastcall HookMDI(bool Active = true);
	int __fastcall HeaderHeight(void);
	int __fastcall BorderWidth(bool CheckSkin = true);
	int __fastcall CaptionWidth(void);
	int __fastcall MenuHeight(void);
	bool __fastcall MenuPresent(void);
	bool __fastcall SysRTLAllowed(void);
	Graphics::TColor __fastcall FormColor(void);
	void __fastcall MdiIcoFormPaint(System::TObject* Sender);
	void __fastcall UpdateTitleBar(void);
	void __fastcall InitMenuItems(bool A);
	
public:
	bool biClicked;
	bool AllowScale;
	bool FInAnimation;
	bool SkipAnimation;
	Forms::TForm* Form;
	Acsbutils::TacScrollWnd* ListSW;
	unsigned FFormState;
	TacCtrlAdapter* Adapter;
	DynamicArray<Classes::TStringList* >  ThirdLists;
	TacBorderForm* BorderForm;
	TsSystemMenu* SystemMenu;
	bool __fastcall PaintAll(void);
	int __fastcall OffsetX(void);
	int __fastcall OffsetY(void);
	void __fastcall KillAnimations(void);
	void __fastcall DropSysMenu(int x, int y);
	virtual void __fastcall AfterConstruction(void);
	Types::TRect __fastcall UWPClientRect();
	void __fastcall PrepareForm(void);
	virtual void __fastcall Loaded(void);
	void __fastcall ProcessMessage(unsigned Msg, int WPar = 0x0, int LPar = 0x0);
	__fastcall virtual TsSkinProvider(Classes::TComponent* AOwner);
	__fastcall TsSkinProvider(Forms::TCustomForm* AOwner, bool DoInitRT);
	int __fastcall CaptionHeight(bool CheckSkin = true);
	__fastcall virtual ~TsSkinProvider(void);
	Types::TRect __fastcall ShadowSize();
	void __fastcall RepaintMenu(void);
	bool __fastcall UpdateMenu(void);
	__property Types::TRect IconRect = {read=FIconRect};
	__property int LinesCount = {read=GetLinesCount, nodefault};
	__property unsigned FormState = {read=FFormState, write=SetFormState, nodefault};
	
__published:
	__property bool AllowAnimation = {read=FAllowAnimation, write=FAllowAnimation, default=1};
	__property bool AllowBlendOnMoving = {read=FAllowBlendOnMoving, write=FAllowBlendOnMoving, default=1};
	__property bool AllowSkin3rdParty = {read=FAllowSkin3rdParty, write=FAllowSkin3rdParty, default=1};
	__property bool DrawClientArea = {read=FDrawClientArea, write=FDrawClientArea, default=1};
	__property bool MakeSkinMenu = {read=FMakeSkinMenu, write=FMakeSkinMenu, default=0};
	__property bool ScreenSnap = {read=FScreenSnap, write=FScreenSnap, default=0};
	__property bool DisabledBlured = {read=FDisabledBlured, write=FDisabledBlured, default=0};
	__property bool AllowExtBorders = {read=FAllowExtBorders, write=SetBoolean, index=0, default=1};
	__property bool DrawNonClientArea = {read=FDrawNonClientArea, write=SetBoolean, index=1, default=1};
	__property bool ShowAppIcon = {read=FShowAppIcon, write=SetBoolean, index=2, default=1};
	__property bool UseGlobalColor = {read=FUseGlobalColor, write=SetBoolean, index=3, default=1};
	__property bool UWPMode = {read=FUWPMode, write=SetBoolean, index=4, default=0};
	__property AnsiString TitleSkin = {read=FTitleSkin, write=SetSkinSection, index=0};
	__property AnsiString MenuLineSkin = {read=FMenuLineSkin, write=SetSkinSection, index=1};
	__property TacAddedTitle* AddedTitle = {read=FAddedTitle, write=FAddedTitle};
	__property Classes::TAlignment CaptionAlignment = {read=FCaptionAlignment, write=SetCaptionAlignment, default=0};
	__property Byte DisabledBlendValue = {read=FDisabledBlendValue, write=SetDisabledBlendValue, default=255};
	__property Graphics::TColor DisabledBlendColor = {read=FDisabledBlendColor, write=SetDisabledBlendColor, default=0};
	__property TacFormHeader* FormHeader = {read=FFormHeader, write=FFormHeader};
	__property Classes::TStringList* GluedForms = {read=FGluedForms, write=SetGluedForms};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property TsGripMode GripMode = {read=FGripMode, write=FGripMode, default=0};
	__property TsResizeMode ResizeMode = {read=FResizeMode, write=SetResizeMode, default=0};
	__property int SnapBuffer = {read=FSnapBuffer, write=FSnapBuffer, default=10};
	__property TacSysSubMenu* SysSubMenu = {read=FSysSubMenu, write=FSysSubMenu};
	__property Actitlebar::TsTitleBar* TitleBar = {read=FTitleBar, write=SetTitleBar};
	__property TsTitleButtons* TitleButtons = {read=FTitleButtons, write=SetTitleButtons};
	__property TsTitleIcon* TitleIcon = {read=FTitleIcon, write=FTitleIcon};
	__property Sskinmanager::TsThirdPartyList* ThirdParty = {read=FThirdParty, write=FThirdParty};
	__property TacAfterAnimation OnAfterAnimation = {read=FOnAfterAnimation, write=FOnAfterAnimation};
	__property TacNCHitTest OnExtHitTest = {read=FOnExtHitTest, write=FOnExtHitTest};
	__property TAddItemEvent OnSkinItem = {read=FOnSkinItem, write=FOnSkinItem};
	__property TAddItemExEvent OnSkinItemEx = {read=FOnSkinItemEx, write=FOnSkinItemEx};
};


class PASCALIMPLEMENTATION TacCtrlAdapter : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
protected:
	bool bFlag;
	System::TObject* CtrlClass;
	AnsiString DefaultSection;
	DynamicArray<TacAdapterItem* >  Items;
	DynamicArray<TacGraphItem* >  GraphItems;
	bool __fastcall IsControlSupported(Classes::TComponent* Control, Acnttypes::TStringLists ThirdLists);
	int __fastcall Count(void);
	TacAdapterItem* __fastcall GetItem(int Index);
	Scommondata::TsCommonData* __fastcall GetCommonData(int Index);
	int __fastcall IndexOf(Controls::TWinControl* Ctrl);
	void __fastcall RemoveItem(int Index);
	void __fastcall RemoveAllItems(void);
	void __fastcall CleanItems(void);
	
public:
	TsSkinProvider* Provider;
	void __fastcall AddAllItems(Controls::TWinControl* OwnerCtrl = (Controls::TWinControl*)(0x0));
	void __fastcall AddNewItem(const Buttons::TSpeedButton* Ctrl)/* overload */;
	void __fastcall AddNewItem(const Controls::TWinControl* Ctrl)/* overload */;
	void __fastcall AddNewItem(const Controls::TWinControl* Ctrl, const AnsiString SkinSection)/* overload */;
	__fastcall TacCtrlAdapter(TsSkinProvider* AProvider);
	void __fastcall WndProc(Messages::TMessage &Message);
	__fastcall virtual ~TacCtrlAdapter(void);
};


class PASCALIMPLEMENTATION TacAdapterItem : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
protected:
	int COC;
	bool Initializing;
	TacCtrlAdapter* Adapter;
	
public:
	Controls::TWinControl* WinCtrl;
	Acsbutils::TacMainWnd* ScrollWnd;
	__fastcall virtual ~TacAdapterItem(void);
	__fastcall virtual TacAdapterItem(TacCtrlAdapter* AAdapter, Controls::TWinControl* ACtrl);
	void __fastcall DoHook(Controls::TWinControl* Control, const Acsbutils::TacSkinParams &SkinParams);
};


class PASCALIMPLEMENTATION TsTitleButton : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Controls::TMouseEvent FOnMouseUp;
	Controls::TMouseEvent FOnMouseDown;
	bool FEnabled;
	bool FVisible;
	bool FUseSkinData;
	AnsiString FName;
	Graphics::TBitmap* FGlyph;
	AnsiString FHint;
	void __fastcall SetName(const AnsiString Value);
	void __fastcall SetGlyph(const Graphics::TBitmap* Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall MouseDown(int BtnIndex, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall MouseUp(int BtnIndex, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall OnGlyphChange(System::TObject* Sender);
	
public:
	Controls::THintWindow* HintWnd;
	TsCaptionButton Data;
	__fastcall virtual ~TsTitleButton(void);
	virtual AnsiString __fastcall GetDisplayName();
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TsTitleButton(Classes::TCollection* ACollection);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property AnsiString Name = {read=FName, write=SetName};
	__property bool UseSkinData = {read=FUseSkinData, write=FUseSkinData, default=1};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
};


class DELPHICLASS TacMoveTimer;
class PASCALIMPLEMENTATION TacMoveTimer : public Acthdtimer::TacThreadedTimer 
{
	typedef Acthdtimer::TacThreadedTimer inherited;
	
public:
	Byte BlendValue;
	unsigned FormHandle;
	TacBorderForm* BorderForm;
	double BlendStep;
	double CurrentBlendValue;
	virtual void __fastcall TimeHandler(void);
public:
	#pragma option push -w-inl
	/* TacThreadedTimer.Create */ inline __fastcall virtual TacMoveTimer(Classes::TComponent* AOwner) : Acthdtimer::TacThreadedTimer(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacThreadedTimer.CreateOwned */ inline __fastcall virtual TacMoveTimer(Classes::TComponent* AOwner, bool ChangeEvent) : Acthdtimer::TacThreadedTimer(AOwner, ChangeEvent) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TacThreadedTimer.Destroy */ inline __fastcall virtual ~TacMoveTimer(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint FS_SIZING = 0x1;
static const Byte FS_BLENDMOVING = 0x80;
static const Word FS_ANIMMINIMIZING = 0x100;
static const Word FS_ANIMCLOSING = 0x200;
static const Word FS_ANIMRESTORING = 0x400;
static const Word FS_THUMBDRAWING = 0x800;
static const Word FS_CHANGING = 0x1000;
static const Word FS_ANIMSHOWING = 0x2000;
static const Word FS_ANIMMINREST = 0x500;
static const Word FS_ANIMATING = 0x580;
static const Word FS_FULLPAINTING = 0x1180;
static const Word FS_MAXHEIGHT = 0x4000;
static const Word FS_MAXWIDTH = 0x8000;
static const int FS_LOCKED = 0x10000;
static const int FS_SCROLLUPDATING = 0x20000;
static const int FS_POSCHANGING = 0x40000;
static const int FS_ZOOMING = 0x80000;
static const int FS_DISABLED = 0x100000;
static const int FS_ACTIVATE = 0x200000;
static const int FS_RESTORING = 0x400000;
static const int FS_RECREATING = 0x800000;
static const int FS_SCALING = 0x1000000;
static const Shortint ScrollWidth = 0x12;
static const Shortint IconicHeight = 0x1a;
static const Word HTUDBTN = 0x3e8;
extern PACKAGE bool ItemsRemoving;
extern PACKAGE bool __fastcall SetThumbIcon(HWND Handle, TsSkinProvider* sp, int Width, int Height);
extern PACKAGE int __fastcall ac_GetSysMetrics(int nIndex, unsigned DPI);
extern PACKAGE bool __fastcall SetPreviewBmp(HWND Handle, TsSkinProvider* sp);
extern PACKAGE void __fastcall DwmInvalidateIconicBitmaps(HWND hwnd);
extern PACKAGE Acnttypes::TacGlowForm* __fastcall MakeCoverForm(unsigned Wnd, TsSkinProvider* sp = (TsSkinProvider*)(0x0));
extern PACKAGE bool __fastcall StartMinimizing(TsSkinProvider* sp);
extern PACKAGE bool __fastcall StartRestoring(TsSkinProvider* sp);
extern PACKAGE void __fastcall FinishBlendOnMoving(TsSkinProvider* sp, Acnttypes::TacGlowForm* CoverForm = (Acnttypes::TacGlowForm*)(0x0));
extern PACKAGE void __fastcall StartBlendOnMoving(TsSkinProvider* sp, bool ToMove = true);
extern PACKAGE Graphics::TBitmap* __fastcall GetFormImage(TsSkinProvider* sp, bool CacheReplaced = false);
extern PACKAGE void __fastcall StartSBAnimation(const PsCaptionButton Btn, const int State, const int Iterations, const bool ToUp, const TsSkinProvider* SkinProvider, void * acDialog = (void *)(0x0));
extern PACKAGE int __fastcall SysBorderWidth(const HWND Handle, const TacBorderForm* BorderForm, bool CheckSkin = true);
extern PACKAGE int __fastcall SysBorderHeight(const HWND Handle, const TacBorderForm* BorderForm, bool CheckSkin = true);
extern PACKAGE int __fastcall SysCaptHeight(TsSkinProvider* sp, int iDPI = 0x0);
extern PACKAGE int __fastcall SkinTitleHeight(const TacBorderForm* BorderForm);
extern PACKAGE int __fastcall SkinBorderWidth(const TacBorderForm* BorderForm);
extern PACKAGE Types::TPoint __fastcall SkinMenuOffset(const TsSkinProvider* sp);
extern PACKAGE int __fastcall DiffTitle(const TacBorderForm* BorderForm);
extern PACKAGE int __fastcall DiffBorder(const TacBorderForm* BorderForm);
extern PACKAGE HRESULT __fastcall DwmSetWindowAttribute(HWND hwnd, unsigned dwAttribute, void * pvAttribute, unsigned cbAttribute);
extern PACKAGE bool __fastcall AeroIsEnabled(void);
extern PACKAGE bool __fastcall ForbidSysAnimating(void);
extern PACKAGE void __fastcall InitDwm(const unsigned Handle, const bool Skinned, const bool Repaint = false);
extern PACKAGE bool __fastcall IsBorderUnchanged(const int BorderIndex, const Sskinmanager::TacSkinData* CommonSkinData);
extern PACKAGE void __fastcall FillArOR(TsSkinProvider* sp);
extern PACKAGE void __fastcall UpdateRgn(TsSkinProvider* sp, bool DoRepaint = true, bool AllChildren = false);
extern PACKAGE HRGN __fastcall GetRgnFromArOR(TsSkinProvider* sp, int X = 0x0, int Y = 0x0);
extern PACKAGE void __fastcall UpdateSkinCaption(TsSkinProvider* SkinProvider);
extern PACKAGE TsSkinProvider* __fastcall GetSkinProvider(Classes::TComponent* Cmp);
extern PACKAGE int __fastcall GetWindowWidth(HWND Handle);
extern PACKAGE int __fastcall GetClientWidth(HWND Handle);
extern PACKAGE int __fastcall GetWindowHeight(HWND Handle);
extern PACKAGE int __fastcall GetClientHeight(HWND Handle);
extern PACKAGE void __fastcall UpdateProviderThirdNames(TsSkinProvider* sp);

}	/* namespace Sskinprovider */
using namespace Sskinprovider;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sSkinProvider
