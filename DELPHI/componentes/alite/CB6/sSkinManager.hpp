// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinManager.pas' rev: 6.00

#ifndef sSkinManagerHPP
#define sSkinManagerHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SyncObjs.hpp>	// Pascal unit
#include <acFontStore.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sStyleSimply.hpp>	// Pascal unit
#include <sSkinMenus.hpp>	// Pascal unit
#include <sMaskData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinmanager
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacFileType { ftBmp, ftFont, ftOther };
#pragma option pop

#pragma pack(push, 4)
struct TacFileItem
{
	AnsiString Name;
	TacFileType FileType;
	Classes::TMemoryStream* Stream;
} ;
#pragma pack(pop)

typedef DynamicArray<TacFileItem >  TacFileItems;

#pragma option push -b-
enum TacSkinMode { smInternal, smExtPacked, smExtUnpacked };
#pragma option pop

#pragma pack(push, 4)
struct TacSkinListData
{
	TacSkinMode skSkinMode;
	int skImageIndex;
	AnsiString skName;
} ;
#pragma pack(pop)

struct TacSkinCommonInfo
{
	bool Active;
	bool UseAeroBluring;
	double Version;
	AnsiString Author;
	AnsiString SkinPath;
	AnsiString MainFont;
	AnsiString Description;
	Graphics::TColor FXColor;
	Graphics::TColor Shadow1Color;
	Graphics::TColor SysInactiveBorderColor;
	Acnttypes::TacArrowsStyle ArrowStyle;
	int BIVAlign;
	int BIKeepHUE;
	int BrightMin;
	int BrightMax;
	int IndexGlobalInfo;
	int Sections[53];
	Inifiles::TMemIniFile* OptionsDat;
} ;

#pragma pack(push, 4)
struct TacBmpData
{
	int MulPPI;
	int DivPPI;
	int MaskType;
	AnsiString Path;
	AnsiString FileName;
	Graphics::TBitmap* Bmp;
	Types::TRect R;
	Types::TRect SrcRect;
} ;
#pragma pack(pop)

typedef DynamicArray<TacBmpData >  sSkinManager__2;

class DELPHICLASS TacSkinData;
class DELPHICLASS TsSkinManager;
class DELPHICLASS TacOptions;
typedef Word TacPixelsPerInch;

#pragma option push -b-
enum TacGroupBoxStyle { gsStandard, gsCard };
#pragma option pop

class PASCALIMPLEMENTATION TacOptions : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FNoMouseHover;
	bool FStdGlyphsOrder;
	bool FCheckEmptyAlpha;
	bool FChangeSysColors;
	bool FStdImgTransparency;
	bool FDrawNonClientArea;
	bool FNativeBordersMaximized;
	TsSkinManager* FOwner;
	Acnttypes::TacArrowsStyle FArrowsStyle;
	TacPixelsPerInch FPixelsPerInch;
	Sconst::TacOptimizingPriority FOptimizingPriority;
	TacGroupBoxStyle FGroupBoxStyle;
	Sconst::TacScaleMode __fastcall GetScaleMode(void);
	bool __fastcall GetBool(const int Index);
	void __fastcall SetBool(const int Index, const bool Value);
	void __fastcall SetScaleMode(const Sconst::TacScaleMode Value);
	void __fastcall SetArrowsStyle(const Acnttypes::TacArrowsStyle Value);
	void __fastcall SetPixelsPerInch(const TacPixelsPerInch Value);
	void __fastcall DoScaleChanged(Sconst::TacScaleMode NewScaleMode, bool ReduceSize);
	void __fastcall SetNewScaleMode(Sconst::TacScaleMode OldScaleMode, Sconst::TacScaleMode NewScaleMode, int OldPPI, int NewPPI);
	void __fastcall SetGroupBoxStyle(const TacGroupBoxStyle Value);
	
protected:
	Sconst::TacScaleMode FScaleMode;
	
public:
	Acnttypes::TacArrowsStyle __fastcall ActualArrowStyle(void);
	__fastcall TacOptions(TsSkinManager* AOwner);
	
__published:
	__property bool ChangeSysColors = {read=GetBool, write=SetBool, index=4, default=0};
	__property bool CheckEmptyAlpha = {read=GetBool, write=SetBool, index=0, default=0};
	__property bool DrawNonClientArea = {read=GetBool, write=SetBool, index=6, default=1};
	__property bool NativeBordersMaximized = {read=GetBool, write=SetBool, index=2, default=0};
	__property bool NoMouseHover = {read=GetBool, write=SetBool, index=1, default=0};
	__property bool StdGlyphsOrder = {read=GetBool, write=SetBool, index=3, default=0};
	__property bool StdImgTransparency = {read=GetBool, write=SetBool, index=5, default=0};
	__property Acnttypes::TacArrowsStyle ArrowsStyle = {read=FArrowsStyle, write=SetArrowsStyle, default=4};
	__property Sconst::TacOptimizingPriority OptimizingPriority = {read=FOptimizingPriority, write=FOptimizingPriority, default=0};
	__property Sconst::TacScaleMode ScaleMode = {read=GetScaleMode, write=SetScaleMode, default=6};
	__property TacPixelsPerInch PixelsPerInch = {read=FPixelsPerInch, write=SetPixelsPerInch, default=96};
	__property TacGroupBoxStyle GroupBoxStyle = {read=FGroupBoxStyle, write=SetGroupBoxStyle, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOptions(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSkinEffects;
class PASCALIMPLEMENTATION TacSkinEffects : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FAllowGlowing;
	bool FAllowAnimation;
	bool FAllowAeroBluring;
	bool FDiscoloredGlyphs;
	void __fastcall SetBoolean(const int Index, const bool Value);
	
public:
	bool FAllowOuterEffects;
	TsSkinManager* Manager;
	__fastcall TacSkinEffects(void);
	
__published:
	__property bool AllowAnimation = {read=FAllowAnimation, write=FAllowAnimation, default=1};
	__property bool AllowAeroBluring = {read=FAllowAeroBluring, write=FAllowAeroBluring, default=1};
	__property bool AllowGlowing = {read=FAllowGlowing, write=FAllowGlowing, default=1};
	__property bool AllowOuterEffects = {read=FAllowOuterEffects, write=SetBoolean, index=0, default=1};
	__property bool DiscoloredGlyphs = {read=FDiscoloredGlyphs, write=SetBoolean, index=1, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinEffects(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsStoredSkins;
class DELPHICLASS TsStoredSkin;
class PASCALIMPLEMENTATION TsStoredSkins : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TsStoredSkin* operator[](int Index) { return Items[Index]; }
	
private:
	TsSkinManager* FOwner;
	HIDESBASE TsStoredSkin* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsStoredSkin* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall TsStoredSkins(TsSkinManager* AOwner);
	__fastcall virtual ~TsStoredSkins(void);
	__property TsStoredSkin* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	int __fastcall IndexOf(const AnsiString SkinName);
};


class DELPHICLASS TacAnimEffects;
class DELPHICLASS TacFormHide;
class DELPHICLASS TacFormAnimation;
class PASCALIMPLEMENTATION TacFormAnimation : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Word FTime;
	bool FActive;
	Sconst::TacAnimType FMode;
	
public:
	__fastcall virtual TacFormAnimation(void);
	__property Sconst::TacAnimType Mode = {read=FMode, write=FMode, default=1};
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=1};
	__property Word Time = {read=FTime, write=FTime, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormAnimation(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacFormHide : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode  = {default=1};
public:
	#pragma option push -w-inl
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormHide(void) : TacFormAnimation() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormHide(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacFormShow;
class PASCALIMPLEMENTATION TacFormShow : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode  = {default=1};
public:
	#pragma option push -w-inl
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormShow(void) : TacFormAnimation() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormShow(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacBtnEffects;
class PASCALIMPLEMENTATION TacBtnEffects : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Sconst::TacBtnEvents FEvents;
	
public:
	__fastcall TacBtnEffects(void);
	
__published:
	__property Sconst::TacBtnEvents Events = {read=FEvents, write=FEvents, default=15};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBtnEffects(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacPageChange;
class PASCALIMPLEMENTATION TacPageChange : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
public:
	#pragma option push -w-inl
	/* TacFormAnimation.Create */ inline __fastcall virtual TacPageChange(void) : TacFormAnimation() { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacPageChange(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacMinimizing;
class PASCALIMPLEMENTATION TacMinimizing : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacMinimizing(void);
	
__published:
	__property Time  = {default=80};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacMinimizing(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacDialogShow;
class PASCALIMPLEMENTATION TacDialogShow : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacDialogShow(void);
	
__published:
	__property Time  = {default=0};
	__property Mode  = {default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDialogShow(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSkinChanging;
class PASCALIMPLEMENTATION TacSkinChanging : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacSkinChanging(void);
	
__published:
	__property Time  = {default=100};
	__property Mode  = {default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinChanging(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacBlendOnMoving;
class PASCALIMPLEMENTATION TacBlendOnMoving : public TacFormAnimation 
{
	typedef TacFormAnimation inherited;
	
private:
	Byte FBlendValue;
	
public:
	__fastcall virtual TacBlendOnMoving(void);
	
__published:
	__property Active  = {default=0};
	__property Byte BlendValue = {read=FBlendValue, write=FBlendValue, default=170};
	__property Time  = {default=1000};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBlendOnMoving(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacAnimEffects : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TacFormHide* FFormHide;
	TacFormHide* FDialogHide;
	TacFormShow* FFormShow;
	TacBtnEffects* FButtons;
	TacPageChange* FPageChange;
	TacMinimizing* FMinimizing;
	TacDialogShow* FDialogShow;
	TacSkinChanging* FSkinChanging;
	TacBlendOnMoving* FBlendOnMoving;
	
public:
	TsSkinManager* Manager;
	__fastcall TacAnimEffects(void);
	__fastcall virtual ~TacAnimEffects(void);
	
__published:
	__property TacBlendOnMoving* BlendOnMoving = {read=FBlendOnMoving, write=FBlendOnMoving};
	__property TacBtnEffects* Buttons = {read=FButtons, write=FButtons};
	__property TacDialogShow* DialogShow = {read=FDialogShow, write=FDialogShow};
	__property TacFormShow* FormShow = {read=FFormShow, write=FFormShow};
	__property TacFormHide* FormHide = {read=FFormHide, write=FFormHide};
	__property TacFormHide* DialogHide = {read=FDialogHide, write=FDialogHide};
	__property TacMinimizing* Minimizing = {read=FMinimizing, write=FMinimizing};
	__property TacPageChange* PageChange = {read=FPageChange, write=FPageChange};
	__property TacSkinChanging* SkinChanging = {read=FSkinChanging, write=FSkinChanging};
};


#pragma option push -b-
enum TacSkinsFilterItem { sfiInternal, sfiExternal };
#pragma option pop

typedef Set<TacSkinsFilterItem, sfiInternal, sfiExternal>  TacSkinsFilter;

class DELPHICLASS TsThirdPartyList;
class PASCALIMPLEMENTATION TsThirdPartyList : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FThirdEdits;
	AnsiString FThirdButtons;
	AnsiString FThirdBitBtns;
	AnsiString FThirdCheckBoxes;
	AnsiString FThirdGroupBoxes;
	AnsiString FThirdListViews;
	AnsiString FThirdPanels;
	AnsiString FThirdGrids;
	AnsiString FThirdTreeViews;
	AnsiString FThirdComboBoxes;
	AnsiString FThirdWWEdits;
	AnsiString FThirdVirtualTrees;
	AnsiString FThirdGridEh;
	AnsiString FThirdPageControl;
	AnsiString FThirdTabControl;
	AnsiString FThirdToolBar;
	AnsiString FThirdStatusBar;
	AnsiString FThirdSpeedButton;
	AnsiString FThirdScrollControl;
	AnsiString FThirdUpDownBtn;
	AnsiString FThirdScrollBar;
	AnsiString FThirdStaticText;
	AnsiString FThirdNativePaint;
	
public:
	AnsiString __fastcall GetString(const int Index);
	void __fastcall SetString(const int Index, const AnsiString Value);
	
__published:
	__property AnsiString ThirdEdits = {read=GetString, write=SetString, index=0};
	__property AnsiString ThirdButtons = {read=GetString, write=SetString, index=1};
	__property AnsiString ThirdBitBtns = {read=GetString, write=SetString, index=2};
	__property AnsiString ThirdCheckBoxes = {read=GetString, write=SetString, index=3};
	__property AnsiString ThirdGroupBoxes = {read=GetString, write=SetString, index=6};
	__property AnsiString ThirdListViews = {read=GetString, write=SetString, index=7};
	__property AnsiString ThirdPanels = {read=GetString, write=SetString, index=8};
	__property AnsiString ThirdGrids = {read=GetString, write=SetString, index=5};
	__property AnsiString ThirdTreeViews = {read=GetString, write=SetString, index=9};
	__property AnsiString ThirdComboBoxes = {read=GetString, write=SetString, index=4};
	__property AnsiString ThirdWWEdits = {read=GetString, write=SetString, index=10};
	__property AnsiString ThirdVirtualTrees = {read=GetString, write=SetString, index=12};
	__property AnsiString ThirdGridEh = {read=GetString, write=SetString, index=11};
	__property AnsiString ThirdPageControl = {read=GetString, write=SetString, index=13};
	__property AnsiString ThirdTabControl = {read=GetString, write=SetString, index=14};
	__property AnsiString ThirdToolBar = {read=GetString, write=SetString, index=15};
	__property AnsiString ThirdStatusBar = {read=GetString, write=SetString, index=16};
	__property AnsiString ThirdSpeedButton = {read=GetString, write=SetString, index=17};
	__property AnsiString ThirdScrollControl = {read=GetString, write=SetString, index=18};
	__property AnsiString ThirdUpDown = {read=GetString, write=SetString, index=19};
	__property AnsiString ThirdScrollBar = {read=GetString, write=SetString, index=20};
	__property AnsiString ThirdStaticText = {read=GetString, write=SetString, index=21};
	__property AnsiString ThirdNativePaint = {read=GetString, write=SetString, index=22};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsThirdPartyList(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TsThirdPartyList(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacSkinningRule { srStdForms, srStdDialogs, srThirdParty };
#pragma option pop

typedef Set<TacSkinningRule, srStdForms, srThirdParty>  TacSkinningRules;

class DELPHICLASS TacLabelsSupport;
class PASCALIMPLEMENTATION TacLabelsSupport : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FTransparentAlways;
	
public:
	__fastcall TacLabelsSupport(void);
	
__published:
	__property bool TransparentAlways = {read=FTransparentAlways, write=FTransparentAlways, default=1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacLabelsSupport(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacButtonsSupport;
#pragma option push -b-
enum TacModalButtonsColoringValue { bcBackground, bcGlyph, bcText };
#pragma option pop

typedef Set<TacModalButtonsColoringValue, bcBackground, bcText>  TacModalButtonsColoring;

class PASCALIMPLEMENTATION TacButtonsSupport : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FShowFocusRect;
	bool FShiftContentOnClick;
	TacModalButtonsColoring FModalButtonsColoring;
	TsSkinManager* FOwner;
	bool FAllowRTLSysButtons;
	bool __fastcall GetOldGlyphsMode(void);
	void __fastcall SetOldGlyphsMode(const bool Value);
	
public:
	__fastcall TacButtonsSupport(TsSkinManager* AOwner);
	
__published:
	__property bool OldGlyphsMode = {read=GetOldGlyphsMode, write=SetOldGlyphsMode, nodefault};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=FShowFocusRect, default=0};
	__property bool ShiftContentOnClick = {read=FShiftContentOnClick, write=FShiftContentOnClick, default=1};
	__property bool AllowRTLSysButtons = {read=FAllowRTLSysButtons, write=FAllowRTLSysButtons, default=1};
	__property TacModalButtonsColoring ModalButtonsColoring = {read=FModalButtonsColoring, write=FModalButtonsColoring, default=2};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacButtonsSupport(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacScrollBarsSupport;
class PASCALIMPLEMENTATION TacScrollBarsSupport : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FScrollSize;
	int FButtonsSize;
	TsSkinManager* FOwner;
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	__fastcall TacScrollBarsSupport(TsSkinManager* AOwner);
	
__published:
	__property int ButtonsSize = {read=FButtonsSize, write=SetInteger, index=0, default=-1};
	__property int ScrollSize = {read=FScrollSize, write=SetInteger, index=1, default=-1};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollBarsSupport(void) { }
	#pragma option pop
	
};


struct TacSysDlgData;
typedef void __fastcall (__closure *TacSysDlgInit)(TacSysDlgData DlgData, bool &AllowSkinning);

struct TScaleChangeData;
typedef void __fastcall (__closure *TScaleChangeEvent)(System::TObject* Sended, const TScaleChangeData &ScaleChangeData);

typedef void __fastcall (__closure *TacGetExtraLineData)(Menus::TMenuItem* FirstItem, AnsiString &SkinSection, AnsiString &Caption, Graphics::TBitmap* &Glyph, bool &LineVisible);

struct TacMenuItemData;
typedef void __fastcall (__closure *TacGetPopupItemData)(Menus::TMenuItem* Item, Windows::TOwnerDrawState State, TacMenuItemData ItemData);

class DELPHICLASS TacFonts;
#pragma option push -b-
enum TacFontMode { fmDefault, fmFromSkin, fmCustom };
#pragma option pop

class PASCALIMPLEMENTATION TacFonts : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FMainFont;
	TacFontMode FMainMode;
	void __fastcall SetMainFont(const AnsiString Value);
	void __fastcall SetMainMode(const TacFontMode Value);
	
public:
	TsSkinManager* SkinManager;
	__fastcall TacFonts(TsSkinManager* AOwner);
	
__published:
	__property TacFontMode MainMode = {read=FMainMode, write=SetMainMode, default=0};
	__property AnsiString MainFont = {read=FMainFont, write=SetMainFont};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFonts(void) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TFontChanged)(System::TObject* Sender, const AnsiString DefOldFontName, const AnsiString FontName);

class DELPHICLASS TacSkinConvertor;
class PASCALIMPLEMENTATION TacSkinConvertor : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
public:
	Classes::TMemoryStream* Options;
	Classes::TMemoryStream* PackedData;
	int FileCount;
	DynamicArray<TacFileItem >  Files;
	void __fastcall Clear(void);
	__fastcall virtual ~TacSkinConvertor(void);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacSkinConvertor(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TacSkinChangingEvent)(System::TObject* Sender, const AnsiString NewSkinName, bool &AllowChanging);

typedef AnsiString TacSkinInfo;

#pragma pack(push, 1)
struct TacSkinEditorData
{
	int Magic;
	char SkinName[128];
	char SkinDir[512];
	char Data[30001];
} ;
#pragma pack(pop)

#pragma option push -b-
enum TacManagerStateValue { msFontChanging, msScaleChanging, msSkinRemoving, msSkinChanging, msBroadCasting, msAnimScaling, msFormScaling, msRTLFlipped };
#pragma option pop

typedef Set<TacManagerStateValue, msFontChanging, msRTLFlipped>  TacManagerState;

typedef HBRUSH TacBrushes[6];

class DELPHICLASS TacSkinListController;
class DELPHICLASS TacAddThread;
class PASCALIMPLEMENTATION TacAddThread : public Classes::TThread 
{
	typedef Classes::TThread inherited;
	
public:
	TacSkinListController* FOwner;
	Syncobjs::TSimpleEvent* TimeEvent;
	__fastcall virtual ~TacAddThread(void);
	virtual void __fastcall Execute(void);
	void __fastcall DoTimer(void);
public:
	#pragma option push -w-inl
	/* TThread.Create */ inline __fastcall TacAddThread(bool CreateSuspended) : Classes::TThread(CreateSuspended) { }
	#pragma option pop
	
};


typedef DynamicArray<TacSkinListData >  sSkinManager__32;

class PASCALIMPLEMENTATION TacSkinListController : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	void __fastcall ClearList(bool DoUpdateLater = true, bool DoSendChanged = true);
	
public:
	AnsiString sPath;
	Extctrls::TTimer* Timer;
	int DosCode;
	Controls::TImageList* ImgList;
	TacAddThread* Thread;
	bool UpdateNeeded;
	Sysutils::TSearchRec FileInfo;
	DynamicArray<Controls::TControl* >  Controls;
	TsSkinManager* SkinManager;
	int CurrentInternalIndex;
	DynamicArray<TacSkinListData >  SkinList;
	void __fastcall SendSkinChanged(void);
	void __fastcall SendListChanged(void);
	int __fastcall AddSkinData(void);
	void __fastcall AddSkin(const AnsiString AName, int IntIndex);
	bool __fastcall UpdateData(bool UpdateNow = false);
	void __fastcall StartDelayedLoading(void);
	bool __fastcall SkinsAllowed(TacSkinsFilterItem FiltType);
	void __fastcall UpdateIfNeeded(bool ForceUpdating = false);
	void __fastcall CheckThread(void);
	__fastcall TacSkinListController(TsSkinManager* AOwner);
	int __fastcall CtrlIndex(Controls::TControl* Ctrl);
	void __fastcall AddControl(Controls::TControl* Ctrl);
	void __fastcall DelControl(Controls::TControl* Ctrl);
	__fastcall virtual ~TacSkinListController(void);
};


typedef Graphics::TColor TacPaletteArray[59];

typedef DynamicArray<TacSkinData* >  sSkinManager__72;

#pragma option push -b-
enum TacSkinTypes { stUnpacked, stPacked, stAllSkins };
#pragma option pop

class PASCALIMPLEMENTATION TsSkinManager : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FActive;
	bool FSkinnedPopups;
	bool FExtendedBorders;
	bool GlobalHookInstalled;
	Classes::TNotifyEvent FOnActivate;
	Classes::TNotifyEvent FOnDeactivate;
	Classes::TNotifyEvent FOnSkinLoading;
	Classes::TNotifyEvent FOnAfterChange;
	Classes::TNotifyEvent FOnBeforeChange;
	Classes::TNotifyEvent FOnSkinListChanged;
	Classes::TStringList* FKeyList;
	Classes::TStringList* FCommonSections;
	int FGroupIndex;
	TacOptions* FOptions;
	HWND FActiveControl;
	AnsiString FSkinName;
	TacSkinEffects* FEffects;
	AnsiString FSkinDirectory;
	TsStoredSkins* FBuiltInSkins;
	Sskinmenus::TacMenuSupport* FMenuSupport;
	TacAnimEffects* FAnimEffects;
	TacSkinsFilter FSkinsFilter;
	TsThirdPartyList* FThirdParty;
	TacSkinningRules FSkinningRules;
	TacLabelsSupport* FLabelsSupport;
	TacButtonsSupport* FButtonsSupport;
	TacScrollBarsSupport* FScrollsOptions;
	TacSysDlgInit FOnSysDlgInit;
	TScaleChangeEvent FOnScaleModeChange;
	TacGetExtraLineData FOnGetPopupLineData;
	TacGetPopupItemData FOnGetPopupItemData;
	Sskinmenus::TsSkinableMenus* FSkinableMenus;
	TacFonts* FFonts;
	TFontChanged FOnFontChanged;
	Classes::TNotifyEvent FOnScaleChanged;
	Inifiles::TMemIniFile* SkinFile;
	TacSkinConvertor* sc;
	TacSkinChangingEvent FOnSkinChanging;
	void __fastcall UpdateCurrentSkin(void);
	bool __fastcall MainWindowHook(Messages::TMessage &Message);
	AnsiString __fastcall GetVersion();
	bool __fastcall GetIsDefault(void);
	AnsiString __fastcall GetSkinInfo();
	bool __fastcall GetExtendedBorders(void);
	void __fastcall SetActiveControl(const HWND Value);
	void __fastcall SetSkinDirectory(const AnsiString Value);
	void __fastcall SetVersion(const AnsiString Value);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetIsDefault(const bool Value);
	void __fastcall SetExtendedBorders(const bool Value);
	void __fastcall SetSkinnedPopups(const bool Value);
	void __fastcall SetSkinName(const AnsiString Value);
	void __fastcall SetSkinInfo(const AnsiString Value);
	void __fastcall SetKeyList(const Classes::TStringList* Value);
	void __fastcall SetBuiltInSkins(const TsStoredSkins* Value);
	void __fastcall SetActiveGraphControl(const Controls::TGraphicControl* Value);
	void __fastcall SetSkinningRules(const TacSkinningRules Value);
	void __fastcall SetCommonSections(const Classes::TStringList* Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetSkinsFilter(const TacSkinsFilter Value);
	
protected:
	AnsiString DefStoredFontName;
	AnsiString DefOldFontName;
	AnsiString DefNewFontName;
	Controls::TGraphicControl* FActiveGraphControl;
	Extctrls::TTimer* TimerCheckHot;
	void __fastcall OnCheckHot(System::TObject* Sender);
	void __fastcall SendNewSkin(bool Repaint = true);
	void __fastcall SendRemoveSkin(void);
	void __fastcall InitCommonData(void);
	
public:
	bool NoAutoUpdate;
	Forms::TShowAction ShowState;
	#pragma pack(push, 1)
	TacSkinEditorData PreviewBuffer;
	#pragma pack(pop)
	
	TacManagerState ManagerState;
	bool SkinIsPacked;
	int FHueOffset;
	int FSaturation;
	int SysFontScale;
	int FBrightness;
	HBRUSH Brushes[6];
	DynamicArray<Classes::TStringList* >  ThirdLists;
	Acfontstore::TacEmbeddedFonts* EmbeddedFonts;
	TacSkinListController* SkinListController;
	Graphics::TBitmap* MasterBitmap;
	Graphics::TColor Palette[59];
	TacSkinCommonInfo SkinCommonInfo;
	DynamicArray<TacSkinData* >  SkinDataArray;
	Smaskdata::TsMaskArray __fastcall ma();
	Smaskdata::TacOutEffArray __fastcall oe();
	Smaskdata::TsGeneralDataArray __fastcall gd();
	TacSkinData* __fastcall CommonSkinData(int aPPI = 0x60);
	void __fastcall ResetSkinData(void);
	void __fastcall ClearSkinData(void);
	void __fastcall LoadFonts(void);
	void __fastcall LoadCommonData(void);
	void __fastcall InitSkinParams(void);
	bool __fastcall InitSkinFile(void);
	void __fastcall CloseSkinFile(void);
	void __fastcall FlipImages(bool RTL);
	void __fastcall ReloadSkin(int PPI = 0x60);
	void __fastcall CheckVersion(void);
	int __fastcall GetScale(void);
	AnsiString __fastcall GetSkinNames(Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	AnsiString __fastcall GetExternalSkinNames(Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	int __fastcall GetScaledMaskData(const AnsiString aSectionName, const AnsiString aPropName, int aMulPPI, Smaskdata::TsMaskData &md);
	AnsiString __fastcall GetFullSkinDirectory();
	AnsiString __fastcall GetRandomSkin();
	int __fastcall LengthOfGD(void);
	int __fastcall GetSkinIndex(const AnsiString SkinSection, TacSkinData* SkinData = (TacSkinData*)(0x0));
	int __fastcall GetMaskIndex(const AnsiString SkinSection, const AnsiString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, const AnsiString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, const AnsiString SkinSection, const AnsiString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const AnsiString SkinSection, const AnsiString PropName, TacSkinData* SkinData)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const AnsiString PropName, TacSkinData* SkinData)/* overload */;
	void __fastcall GetSkinSections(Classes::TStrings* sl, TacSkinData* SkinData = (TacSkinData*)(0x0));
	bool __fastcall IsValidSkinIndex(int SkinIndex);
	bool __fastcall IsValidImgIndex(int ImageIndex);
	Graphics::TColor __fastcall GetGlobalColor(void);
	Graphics::TColor __fastcall GetGlobalFontColor(void);
	Graphics::TColor __fastcall GetActiveEditColor(void);
	Graphics::TColor __fastcall GetActiveEditFontColor(void);
	Graphics::TColor __fastcall GetHighLightColor(bool Focused = true);
	Graphics::TColor __fastcall GetHighLightFontColor(bool Focused = true);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(bool Repaint = false, bool AllowAnimation = true);
	int __fastcall ScaleInt(int Value, int SysScale = 0xffffffff);
	int __fastcall ScalePPI(int Value, int aPPI);
	void __fastcall RepaintForms(bool DoLockForms = true);
	void __fastcall UpdateSkin(bool Repaint = true);
	void __fastcall UpdateSkinSection(const AnsiString SectionName);
	void __fastcall UpdateScale(Controls::TWinControl* Ctrl, int iCurrentPPI = 0x60, int iNewDPI = 0x0);
	void __fastcall UpdateAllScale(void);
	void __fastcall InstallHook(void);
	void __fastcall UnInstallHook(void);
	void __fastcall ExtractInternalSkin(const AnsiString NameOfSkin, const AnsiString DestDir);
	void __fastcall ExtractByIndex(int Index, const AnsiString DestDir);
	void __fastcall ChangeAppFont(const AnsiString FontName, bool DoLockForms = true);
	bool __fastcall UpdateFontName(Controls::TControl* Ctrl);
	void __fastcall StoreDefFont(void);
	__fastcall virtual TsSkinManager(Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual ~TsSkinManager(void);
	virtual void __fastcall Loaded(void);
	bool __fastcall IsActive(void);
	__property int GroupIndex = {read=FGroupIndex, write=FGroupIndex, nodefault};
	__property Sskinmenus::TsSkinableMenus* SkinableMenus = {read=FSkinableMenus, write=FSkinableMenus};
	__property HWND ActiveControl = {read=FActiveControl, write=SetActiveControl, nodefault};
	__property Controls::TGraphicControl* ActiveGraphControl = {read=FActiveGraphControl, write=SetActiveGraphControl};
	
__published:
	__property Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property TScaleChangeEvent OnScaleModeChange = {read=FOnScaleModeChange, write=FOnScaleModeChange};
	__property TacSkinsFilter SkinsFilter = {read=FSkinsFilter, write=SetSkinsFilter, default=3};
	__property TacSkinEffects* Effects = {read=FEffects, write=FEffects};
	__property TacAnimEffects* AnimEffects = {read=FAnimEffects, write=FAnimEffects};
	__property TacButtonsSupport* ButtonsOptions = {read=FButtonsSupport, write=FButtonsSupport};
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property bool ExtendedBorders = {read=GetExtendedBorders, write=SetExtendedBorders, default=0};
	__property bool IsDefault = {read=GetIsDefault, write=SetIsDefault, default=1};
	__property bool SkinnedPopups = {read=FSkinnedPopups, write=SetSkinnedPopups, default=1};
	__property int Brightness = {read=FBrightness, write=SetInteger, index=0, default=0};
	__property int HueOffset = {read=FHueOffset, write=SetInteger, index=1, default=0};
	__property int Saturation = {read=FSaturation, write=SetInteger, index=2, default=0};
	__property Classes::TStringList* CommonSections = {read=FCommonSections, write=SetCommonSections};
	__property Classes::TStringList* KeyList = {read=FKeyList, write=SetKeyList};
	__property TsStoredSkins* InternalSkins = {read=FBuiltInSkins, write=SetBuiltInSkins};
	__property TacLabelsSupport* LabelsOptions = {read=FLabelsSupport, write=FLabelsSupport};
	__property Sskinmenus::TacMenuSupport* MenuSupport = {read=FMenuSupport, write=FMenuSupport};
	__property TacOptions* Options = {read=FOptions, write=FOptions};
	__property TacFonts* Fonts = {read=FFonts, write=FFonts};
	__property TacScrollBarsSupport* ScrollsOptions = {read=FScrollsOptions, write=FScrollsOptions};
	__property AnsiString SkinDirectory = {read=FSkinDirectory, write=SetSkinDirectory};
	__property AnsiString SkinName = {read=FSkinName, write=SetSkinName};
	__property AnsiString SkinInfo = {read=GetSkinInfo, write=SetSkinInfo};
	__property TacSkinningRules SkinningRules = {read=FSkinningRules, write=SetSkinningRules, default=7};
	__property TsThirdPartyList* ThirdParty = {read=FThirdParty, write=FThirdParty};
	__property AnsiString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property TacGetExtraLineData OnGetMenuExtraLineData = {read=FOnGetPopupLineData, write=FOnGetPopupLineData};
	__property TacGetPopupItemData OnGetPopupItemData = {read=FOnGetPopupItemData, write=FOnGetPopupItemData};
	__property TacSysDlgInit OnSysDlgInit = {read=FOnSysDlgInit, write=FOnSysDlgInit};
	__property Classes::TNotifyEvent OnAfterChange = {read=FOnAfterChange, write=FOnAfterChange};
	__property Classes::TNotifyEvent OnBeforeChange = {read=FOnBeforeChange, write=FOnBeforeChange};
	__property Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property TFontChanged OnFontChanged = {read=FOnFontChanged, write=FOnFontChanged};
	__property Classes::TNotifyEvent OnScaleChanged = {read=FOnScaleChanged, write=FOnScaleChanged};
	__property Classes::TNotifyEvent OnSkinListChanged = {read=FOnSkinListChanged, write=FOnSkinListChanged};
	__property Classes::TNotifyEvent OnSkinLoading = {read=FOnSkinLoading, write=FOnSkinLoading};
	__property TacSkinChangingEvent OnSkinChanging = {read=FOnSkinChanging, write=FOnSkinChanging};
};


class PASCALIMPLEMENTATION TacSkinData : public Acnttypes::TacObject 
{
	typedef Acnttypes::TacObject inherited;
	
protected:
	Graphics::TBitmap* rsta;
	Graphics::TBitmap* rsti;
	bool Initializing;
	DynamicArray<TacBmpData >  BmpArray;
	int __fastcall ScaledInteger(const AnsiString Name, int Def, bool Recalc, int MaskIndex = 0xffffffff);
	int __fastcall AddNewSection(const AnsiString AName, int AParentSection, int AStates, int ATransparency, Graphics::TColor AColor, Graphics::TColor AFontColor);
	int __fastcall MakeNewItem(int SkinIndex, const AnsiString PropertyName, const AnsiString AClassName, Sconst::TacImgType ImgType, const Types::TRect &R, int Count, int DrawMode, short Masktype);
	void __fastcall AddImage(const Graphics::TBitmap* Bmp, const AnsiString s, const AnsiString sPropName, const Types::TRect &R, const Types::TRect &SrcRect, int SrcPPI, int iMaskType);
	int __fastcall SearchBmpIndex(const AnsiString aImgName, const Types::TRect &aR);
	bool __fastcall DefineBmp(Smaskdata::TsMaskData &md, const AnsiString ImgName, const Types::TRect &R, bool IgnoreFuchsia);
	void __fastcall AddExternalItem(Smaskdata::TsMaskData &md, const AnsiString s, Classes::TMemoryStream* Stream, bool IgnoreFuchsia);
	void __fastcall UpdateItem(Smaskdata::TsMaskData &md, int BmpIndex);
	
public:
	TsSkinManager* FOwner;
	int ScaleValue;
	int ScalePercent;
	int PPI;
	int Spacing;
	int LineWidth;
	int ArrowSize;
	int SmallArrowSize;
	int ScrollBtnLength;
	int Shadow1Blur;
	int Shadow1Offset;
	int ExBorderWidth;
	int ExTitleHeight;
	int ExMaxHeight;
	int ExContentOffs;
	int ExCenterOffs;
	int ExShadowOffs;
	int ExShadowOffsR;
	int ExShadowOffsT;
	int ExShadowOffsB;
	int BIRightMargin;
	int BILeftMargin;
	int BITopMargin;
	int WndShadowRadius;
	int WndShadowSize;
	int WndShadowOffset;
	int Shadow1Transparency;
	int ExDrawMode;
	int BISpacing;
	int ComboBoxMargin;
	int SliderMargin;
	Byte TabsCovering;
	Byte RibbonCovering;
	Graphics::TColor WndShadowColorN;
	Graphics::TColor WndShadowColorA;
	Sstylesimply::TacConstElementData Scrolls[4];
	Sstylesimply::TacConstElementData ScrollBtns[4];
	Sstylesimply::TacConstElementData UpDownBtns[4];
	Sstylesimply::TacConstElementData Sliders[2];
	Sstylesimply::TacConstElementData MenuItem;
	Sstylesimply::TacConstElementData ComboBtn;
	DynamicArray<int >  TitleGlows[7];
	int GlowMargins[7];
	int TitleGlyphs[13];
	int RadioButton[2];
	int CheckBox[3];
	int SmallCheckBox[3];
	Sstylesimply::TacTrackBarData TrackBar[2];
	Sstylesimply::TacConstElementData Tabs[4][4];
	int ExBorder;
	int GripVertical;
	int GripHorizontal;
	int GripRightBottom;
	Graphics::TBitmap* ShdaTemplate;
	Graphics::TBitmap* ShdiTemplate;
	#pragma pack(push, 1)
	Types::TRect FormShadowSize;
	#pragma pack(pop)
	
	DynamicArray<Smaskdata::TsMaskData >  ma;
	DynamicArray<Smaskdata::TacOutEffData >  oe;
	DynamicArray<Smaskdata::TsGeneralData >  gd;
	bool __fastcall Active(void);
	int __fastcall BrightMin(void);
	int __fastcall BrightMax(void);
	void __fastcall Init(void);
	void __fastcall LoadParams(void);
	void __fastcall LoadAllMasks(void);
	void __fastcall InitMaskIndexes(void);
	void __fastcall InitConstantIndexes(void);
	void __fastcall InitMaskParams(void);
	void __fastcall LoadAllGeneralData(void);
	void __fastcall CheckShadows(void);
	int __fastcall ScaleIntValue(int Value);
	void __fastcall Reset(void);
	void __fastcall FreeBitmaps(void);
	void __fastcall ClearBmpArray(void);
	__fastcall virtual ~TacSkinData(void);
	Graphics::TBitmap* __fastcall GetActiveShadow(void);
	Graphics::TBitmap* __fastcall GetPassiveShadow(void);
	__fastcall TacSkinData(TsSkinManager* AOwner, int aPPI);
};


typedef TacSkinEditorData *PacSkinEditorData;

#pragma option push -b-
enum TacSkinPlaces { spInternal, spExternal, spAllPlaces };
#pragma option pop

#pragma pack(push, 4)
struct TacMenuItemData
{
	Graphics::TFont* Font;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TacSysDlgData
{
	unsigned WindowHandle;
} ;
#pragma pack(pop)

;

class PASCALIMPLEMENTATION TsStoredSkin : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FName;
	AnsiString FAuthor;
	AnsiString FDescription;
	int FShadow1Blur;
	int FShadow1Offset;
	int FShadow1Transparency;
	Graphics::TColor FBorderColor;
	Graphics::TColor FShadow1Color;
	double FVersion;
	Graphics::TBitmap* FMasterBitmap;
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	void __fastcall ReadData(Classes::TStream* Reader);
	void __fastcall WriteData(Classes::TStream* Writer);
	void __fastcall ReadOriginName(Classes::TReader* Reader);
	void __fastcall WriteOriginName(Classes::TWriter* Writer);
	
public:
	AnsiString OrigName;
	Classes::TMemoryStream* PackedData;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual TsStoredSkin(Classes::TCollection* ACollection);
	__fastcall virtual ~TsStoredSkin(void);
	
__published:
	__property AnsiString Name = {read=FName, write=FName};
	__property Graphics::TBitmap* MasterBitmap = {read=FMasterBitmap, write=FMasterBitmap};
	__property Graphics::TColor Shadow1Color = {read=FShadow1Color, write=FShadow1Color, default=0};
	__property int Shadow1Offset = {read=FShadow1Offset, write=FShadow1Offset, default=0};
	__property int Shadow1Blur = {read=FShadow1Blur, write=FShadow1Blur, default=-1};
	__property int Shadow1Transparency = {read=FShadow1Transparency, write=FShadow1Transparency, default=0};
	__property Graphics::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=16711935};
	__property double Version = {read=FVersion, write=FVersion};
	__property AnsiString Author = {read=FAuthor, write=FAuthor};
	__property AnsiString Description = {read=FDescription, write=FDescription};
};


#pragma option push -b-
enum TacPaletteColors { pcMainColor, pcLabelText, pcWebText, pcWebTextHot, pcEditText, pcEditBG, pcSelectionBG, pcSelectionText, pcSelectionBG_Focused, pcSelectionText_Focused, pcEditBG_Inverted, pcEditText_Inverted, pcEditBG_OddRow, pcEditBG_EvenRow, pcEditText_Ok, pcEditText_Warning, pcEditText_Alert, pcEditText_Caution, pcEditText_Bypassed, pcEditBG_Ok, pcEditBG_Warning, pcEditBG_Alert, pcEditBG_Caution, pcEditBG_Bypassed, pcEditText_Highlight1, pcEditText_Highlight2, pcEditText_Highlight3, pcBtnColor1Active, pcBtnColor2Active, pcBtnBorderActive, pcBtnFontActive, pcBtnColor1Normal, pcBtnColor2Normal, pcBtnBorderNormal, pcBtnFontNormal, pcBtnColor1Pressed, pcBtnColor2Pressed, pcBtnBorderPressed, pcBtnFontPressed, pcBtnToneRed, pcBtnToneRedActive, pcBtnToneGreen, pcBtnToneGreenActive, pcBtnToneBlue, pcBtnToneBlueActive, pcBtnToneYellow, pcBtnToneYellowActive, pcBtnRedText, pcBtnRedTextActive, pcBtnGreenText, pcBtnGreenTextActive, pcBtnBlueText, pcBtnBlueTextActive, pcBtnYellowText, pcBtnYellowTextActive
	, pcBorder, pcGrid, pcHintBG, pcHintText };
#pragma option pop

#pragma pack(push, 4)
struct TScaleChangeData
{
	Sconst::TacScaleMode OldScaleMode;
	Sconst::TacScaleMode NewScaleMode;
	int OldScalePercent;
	int NewScalePercent;
	int OldPPI;
	int NewPPI;
} ;
#pragma pack(pop)

typedef char TacCharArray[16];

//-- var, const, procedure ---------------------------------------------------
#define acCurrentVersion "14.35"
static const Word iMaxFileSize = 0x7530;
extern PACKAGE bool IsNT;
extern PACKAGE Classes::TStringList* acEditorSkinFile;
extern PACKAGE TsSkinManager* DefaultManager;
extern PACKAGE bool UnPackedFirst;
extern PACKAGE TacSkinData* StdScaleArray[4];
extern PACKAGE void __fastcall ReceiveData(TsSkinManager* SkinReceiver);
extern PACKAGE AnsiString __fastcall ConvertSkinStr(const AnsiString s);
extern PACKAGE void __fastcall LoadSkinFromFile(const AnsiString FileName, TacSkinConvertor* &Convertor, Classes::TStringList* pwds, Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall Load3rdNames(TsThirdPartyList* AThirdParty, Acnttypes::TStringLists AThirdLists, bool &AOwnThirdLists);
extern PACKAGE bool __fastcall SearchSupport(const Acnttypes::TStringLists Lists, const AnsiString ClassName);
extern PACKAGE void __fastcall UpdatePreview(HWND Handle, bool Enabled);
extern PACKAGE Graphics::TColor __fastcall SysColorToSkin(const Graphics::TColor AColor, TsSkinManager* ASkinManager = (TsSkinManager*)(0x0));
extern PACKAGE void __fastcall LoadThirdNames(TsSkinManager* sm, bool Overwrite = false);
extern PACKAGE void __fastcall UpdateThirdNames(TsSkinManager* sm);
extern PACKAGE int __fastcall CurrentPPI(TsSkinManager* sm, Controls::TControl* OwnerCtrl, bool CheckActive = false);
extern PACKAGE int __fastcall GetScrollSize(TsSkinManager* sm, int ScalePPI = 0x60);
extern PACKAGE int __fastcall GetComboBtnSize(TsSkinManager* sm, int ScalePPI);
extern PACKAGE void __fastcall SetPPIAnimated(int NewPPI);
extern PACKAGE bool __fastcall IsSysPPIUsed(TsSkinManager* sm);
extern PACKAGE bool __fastcall ExtractPackedData(TacSkinConvertor* &Convertor, Classes::TStringList* pwds, Classes::TComponent* SkinManager);
extern PACKAGE bool __fastcall GetPreviewStream(Classes::TMemoryStream* aStream, const AnsiString SkinFileName)/* overload */;
extern PACKAGE bool __fastcall GetPreviewStream(Classes::TMemoryStream* aStream, Classes::TMemoryStream* SrcStream)/* overload */;
extern PACKAGE bool __fastcall GetPreviewImage(Graphics::TBitmap* aBitmap, const AnsiString SkinFileName);
extern PACKAGE int __cdecl asSkinDecode(const char * PackedData, const __int64 * Keys, const int Keys_Size, const int Length, const int FormSum, /* out */ int &FilesCount, /* out */ int &Offset);

}	/* namespace Sskinmanager */
using namespace Sskinmanager;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sSkinManager
