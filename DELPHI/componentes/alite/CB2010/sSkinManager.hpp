// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sskinmanager.pas' rev: 21.00

#ifndef SskinmanagerHPP
#define SskinmanagerHPP

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
#include <Dialogs.hpp>	// Pascal unit
#include <Inifiles.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Smaskdata.hpp>	// Pascal unit
#include <Sskinmenus.hpp>	// Pascal unit
#include <Sstylesimply.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Acfontstore.hpp>	// Pascal unit
#include <Syncobjs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinmanager
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacFileType { ftBmp, ftFont, ftOther };
#pragma option pop

struct TacFileItem
{
	
public:
	System::UnicodeString Name;
	TacFileType FileType;
	Classes::TMemoryStream* Stream;
};


typedef DynamicArray<TacFileItem> TacFileItems;

#pragma option push -b-
enum TacSkinMode { smInternal, smExtPacked, smExtUnpacked };
#pragma option pop

struct TacSkinListData
{
	
public:
	TacSkinMode skSkinMode;
	int skImageIndex;
	System::UnicodeString skName;
};


struct TacSkinCommonInfo
{
	
public:
	bool Active;
	bool UseAeroBluring;
	double Version;
	System::UnicodeString Author;
	System::UnicodeString SkinPath;
	System::UnicodeString MainFont;
	System::UnicodeString Description;
	Graphics::TColor FXColor;
	Graphics::TColor Shadow1Color;
	Graphics::TColor SysInactiveBorderColor;
	Acnttypes::TacArrowsStyle ArrowStyle;
	int BIVAlign;
	int BIKeepHUE;
	int BrightMin;
	int BrightMax;
	int IndexGlobalInfo;
	Sstylesimply::TacIntSections Sections;
	Inifiles::TMemIniFile* OptionsDat;
};


struct TacBmpData
{
	
public:
	int MulPPI;
	int DivPPI;
	int MaskType;
	System::UnicodeString Path;
	System::UnicodeString FileName;
	Graphics::TBitmap* Bmp;
	Types::TRect R;
	Types::TRect SrcRect;
};


class DELPHICLASS TacSkinData;
class DELPHICLASS TsSkinManager;
class PASCALIMPLEMENTATION TacSkinData : public Acnttypes::TacObject
{
	typedef Acnttypes::TacObject inherited;
	
private:
	typedef DynamicArray<TacBmpData> _TacSkinData__1;
	
	
protected:
	Graphics::TBitmap* rsta;
	Graphics::TBitmap* rsti;
	bool Initializing;
	_TacSkinData__1 BmpArray;
	int __fastcall ScaledInteger(const System::UnicodeString Name, int Def, bool Recalc, int MaskIndex = 0xffffffff);
	int __fastcall AddNewSection(const System::UnicodeString AName, int AParentSection, int AStates, int ATransparency, Graphics::TColor AColor, Graphics::TColor AFontColor);
	int __fastcall MakeNewItem(int SkinIndex, const System::UnicodeString PropertyName, const System::UnicodeString AClassName, Sconst::TacImgType ImgType, const Types::TRect &R, int Count, int DrawMode, short Masktype);
	void __fastcall AddImage(const Graphics::TBitmap* Bmp, const System::UnicodeString s, const System::UnicodeString sPropName, const Types::TRect &R, const Types::TRect &SrcRect, int SrcPPI, int iMaskType);
	int __fastcall SearchBmpIndex(const System::UnicodeString aImgName, const Types::TRect &aR);
	bool __fastcall DefineBmp(Smaskdata::TsMaskData &md, const System::UnicodeString ImgName, const Types::TRect &R, bool IgnoreFuchsia);
	void __fastcall AddExternalItem(Smaskdata::TsMaskData &md, const System::UnicodeString s, Classes::TMemoryStream* Stream, bool IgnoreFuchsia);
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
	System::Byte TabsCovering;
	System::Byte RibbonCovering;
	Graphics::TColor WndShadowColorN;
	Graphics::TColor WndShadowColorA;
	Sstylesimply::TacSideElements Scrolls;
	Sstylesimply::TacSideElements ScrollBtns;
	Sstylesimply::TacSideElements UpDownBtns;
	Sstylesimply::TacBoolElements Sliders;
	Sstylesimply::TacConstElementData MenuItem;
	Sstylesimply::TacConstElementData ComboBtn;
	Sstylesimply::TacTitleGlowArray TitleGlows;
	StaticArray<int, 7> GlowMargins;
	StaticArray<int, 13> TitleGlyphs;
	StaticArray<int, 2> RadioButton;
	StaticArray<int, 3> CheckBox;
	StaticArray<int, 3> SmallCheckBox;
	StaticArray<Sstylesimply::TacTrackBarData, 2> TrackBar;
	Sstylesimply::TacAllTabs Tabs;
	int ExBorder;
	int GripVertical;
	int GripHorizontal;
	int GripRightBottom;
	Graphics::TBitmap* ShdaTemplate;
	Graphics::TBitmap* ShdiTemplate;
	Types::TRect FormShadowSize;
	Smaskdata::TsMaskArray ma;
	Smaskdata::TacOutEffArray oe;
	Smaskdata::TsGeneralDataArray gd;
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


#pragma pack(push,1)
struct TacSkinEditorData
{
	
public:
	int Magic;
	StaticArray<char, 128> SkinName;
	StaticArray<char, 512> SkinDir;
	StaticArray<char, 30001> Data;
};
#pragma pack(pop)


typedef TacSkinEditorData *PacSkinEditorData;

#pragma option push -b-
enum TacSkinTypes { stUnpacked, stPacked, stAllSkins };
#pragma option pop

#pragma option push -b-
enum TacSkinPlaces { spInternal, spExternal, spAllPlaces };
#pragma option pop

struct TacMenuItemData
{
	
public:
	Graphics::TFont* Font;
};


struct TacSysDlgData
{
	
public:
	unsigned WindowHandle;
};


typedef void __fastcall (__closure *TacGetExtraLineData)(Menus::TMenuItem* FirstItem, System::UnicodeString &SkinSection, System::UnicodeString &Caption, Graphics::TBitmap* &Glyph, bool &LineVisible);

typedef void __fastcall (__closure *TacSysDlgInit)(TacSysDlgData DlgData, bool &AllowSkinning);

typedef void __fastcall (__closure *TacGetPopupItemData)(Menus::TMenuItem* Item, Windows::TOwnerDrawState State, TacMenuItemData ItemData);

typedef void __fastcall (__closure *TacSkinChangingEvent)(System::TObject* Sender, const System::UnicodeString NewSkinName, bool &AllowChanging);

;

typedef System::UnicodeString TacSkinInfo;

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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinEffects(void) { }
	
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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBtnEffects(void) { }
	
};


class DELPHICLASS TacFormAnimation;
class PASCALIMPLEMENTATION TacFormAnimation : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::Word FTime;
	bool FActive;
	Sconst::TacAnimType FMode;
	
public:
	__fastcall virtual TacFormAnimation(void);
	__property Sconst::TacAnimType Mode = {read=FMode, write=FMode, default=1};
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=1};
	__property System::Word Time = {read=FTime, write=FTime, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormAnimation(void) { }
	
};


class DELPHICLASS TacBlendOnMoving;
class PASCALIMPLEMENTATION TacBlendOnMoving : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
private:
	System::Byte FBlendValue;
	
public:
	__fastcall virtual TacBlendOnMoving(void);
	
__published:
	__property Active = {default=0};
	__property System::Byte BlendValue = {read=FBlendValue, write=FBlendValue, default=170};
	__property Time = {default=1000};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBlendOnMoving(void) { }
	
};


class DELPHICLASS TacMinimizing;
class PASCALIMPLEMENTATION TacMinimizing : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacMinimizing(void);
	
__published:
	__property Time = {default=80};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacMinimizing(void) { }
	
};


class DELPHICLASS TacFormShow;
class PASCALIMPLEMENTATION TacFormShow : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode = {default=1};
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormShow(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormShow(void) { }
	
};


class DELPHICLASS TacFormHide;
class PASCALIMPLEMENTATION TacFormHide : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode = {default=1};
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormHide(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormHide(void) { }
	
};


class DELPHICLASS TacPageChange;
class PASCALIMPLEMENTATION TacPageChange : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacPageChange(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacPageChange(void) { }
	
};


class DELPHICLASS TacDialogShow;
class PASCALIMPLEMENTATION TacDialogShow : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacDialogShow(void);
	
__published:
	__property Time = {default=0};
	__property Mode = {default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDialogShow(void) { }
	
};


class DELPHICLASS TacSkinChanging;
class PASCALIMPLEMENTATION TacSkinChanging : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacSkinChanging(void);
	
__published:
	__property Time = {default=100};
	__property Mode = {default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinChanging(void) { }
	
};


class DELPHICLASS TacAnimEffects;
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


class DELPHICLASS TsStoredSkin;
class PASCALIMPLEMENTATION TsStoredSkin : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FAuthor;
	System::UnicodeString FDescription;
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
	System::UnicodeString OrigName;
	Classes::TMemoryStream* PackedData;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual TsStoredSkin(Classes::TCollection* ACollection);
	__fastcall virtual ~TsStoredSkin(void);
	
__published:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Graphics::TBitmap* MasterBitmap = {read=FMasterBitmap, write=FMasterBitmap};
	__property Graphics::TColor Shadow1Color = {read=FShadow1Color, write=FShadow1Color, default=0};
	__property int Shadow1Offset = {read=FShadow1Offset, write=FShadow1Offset, default=0};
	__property int Shadow1Blur = {read=FShadow1Blur, write=FShadow1Blur, default=-1};
	__property int Shadow1Transparency = {read=FShadow1Transparency, write=FShadow1Transparency, default=0};
	__property Graphics::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=16711935};
	__property double Version = {read=FVersion, write=FVersion};
	__property System::UnicodeString Author = {read=FAuthor, write=FAuthor};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
};


class DELPHICLASS TsStoredSkins;
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
	int __fastcall IndexOf(const System::UnicodeString SkinName);
};


class DELPHICLASS TsThirdPartyList;
class PASCALIMPLEMENTATION TsThirdPartyList : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FThirdEdits;
	System::UnicodeString FThirdButtons;
	System::UnicodeString FThirdBitBtns;
	System::UnicodeString FThirdCheckBoxes;
	System::UnicodeString FThirdGroupBoxes;
	System::UnicodeString FThirdListViews;
	System::UnicodeString FThirdPanels;
	System::UnicodeString FThirdGrids;
	System::UnicodeString FThirdTreeViews;
	System::UnicodeString FThirdComboBoxes;
	System::UnicodeString FThirdWWEdits;
	System::UnicodeString FThirdVirtualTrees;
	System::UnicodeString FThirdGridEh;
	System::UnicodeString FThirdPageControl;
	System::UnicodeString FThirdTabControl;
	System::UnicodeString FThirdToolBar;
	System::UnicodeString FThirdStatusBar;
	System::UnicodeString FThirdSpeedButton;
	System::UnicodeString FThirdScrollControl;
	System::UnicodeString FThirdUpDownBtn;
	System::UnicodeString FThirdScrollBar;
	System::UnicodeString FThirdStaticText;
	System::UnicodeString FThirdNativePaint;
	
public:
	System::UnicodeString __fastcall GetString(const int Index);
	void __fastcall SetString(const int Index, const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString ThirdEdits = {read=GetString, write=SetString, index=0};
	__property System::UnicodeString ThirdButtons = {read=GetString, write=SetString, index=1};
	__property System::UnicodeString ThirdBitBtns = {read=GetString, write=SetString, index=2};
	__property System::UnicodeString ThirdCheckBoxes = {read=GetString, write=SetString, index=3};
	__property System::UnicodeString ThirdGroupBoxes = {read=GetString, write=SetString, index=6};
	__property System::UnicodeString ThirdListViews = {read=GetString, write=SetString, index=7};
	__property System::UnicodeString ThirdPanels = {read=GetString, write=SetString, index=8};
	__property System::UnicodeString ThirdGrids = {read=GetString, write=SetString, index=5};
	__property System::UnicodeString ThirdTreeViews = {read=GetString, write=SetString, index=9};
	__property System::UnicodeString ThirdComboBoxes = {read=GetString, write=SetString, index=4};
	__property System::UnicodeString ThirdWWEdits = {read=GetString, write=SetString, index=10};
	__property System::UnicodeString ThirdVirtualTrees = {read=GetString, write=SetString, index=12};
	__property System::UnicodeString ThirdGridEh = {read=GetString, write=SetString, index=11};
	__property System::UnicodeString ThirdPageControl = {read=GetString, write=SetString, index=13};
	__property System::UnicodeString ThirdTabControl = {read=GetString, write=SetString, index=14};
	__property System::UnicodeString ThirdToolBar = {read=GetString, write=SetString, index=15};
	__property System::UnicodeString ThirdStatusBar = {read=GetString, write=SetString, index=16};
	__property System::UnicodeString ThirdSpeedButton = {read=GetString, write=SetString, index=17};
	__property System::UnicodeString ThirdScrollControl = {read=GetString, write=SetString, index=18};
	__property System::UnicodeString ThirdUpDown = {read=GetString, write=SetString, index=19};
	__property System::UnicodeString ThirdScrollBar = {read=GetString, write=SetString, index=20};
	__property System::UnicodeString ThirdStaticText = {read=GetString, write=SetString, index=21};
	__property System::UnicodeString ThirdNativePaint = {read=GetString, write=SetString, index=22};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsThirdPartyList(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TsThirdPartyList(void) : Classes::TPersistent() { }
	
};


#pragma option push -b-
enum TacSkinningRule { srStdForms, srStdDialogs, srThirdParty };
#pragma option pop

typedef Set<TacSkinningRule, srStdForms, srThirdParty>  TacSkinningRules;

#pragma option push -b-
enum TacPaletteColors { pcMainColor, pcLabelText, pcWebText, pcWebTextHot, pcEditText, pcEditBG, pcSelectionBG, pcSelectionText, pcSelectionBG_Focused, pcSelectionText_Focused, pcEditBG_Inverted, pcEditText_Inverted, pcEditBG_OddRow, pcEditBG_EvenRow, pcEditText_Ok, pcEditText_Warning, pcEditText_Alert, pcEditText_Caution, pcEditText_Bypassed, pcEditBG_Ok, pcEditBG_Warning, pcEditBG_Alert, pcEditBG_Caution, pcEditBG_Bypassed, pcEditText_Highlight1, pcEditText_Highlight2, pcEditText_Highlight3, pcBtnColor1Active, pcBtnColor2Active, pcBtnBorderActive, pcBtnFontActive, pcBtnColor1Normal, pcBtnColor2Normal, pcBtnBorderNormal, pcBtnFontNormal, pcBtnColor1Pressed, pcBtnColor2Pressed, pcBtnBorderPressed, pcBtnFontPressed, pcBtnToneRed, pcBtnToneRedActive, pcBtnToneGreen, pcBtnToneGreenActive, pcBtnToneBlue, pcBtnToneBlueActive, pcBtnToneYellow, pcBtnToneYellowActive, pcBtnRedText, pcBtnRedTextActive, pcBtnGreenText, pcBtnGreenTextActive, pcBtnBlueText, pcBtnBlueTextActive, pcBtnYellowText, pcBtnYellowTextActive, 
	pcBorder, pcGrid, pcHintBG, pcHintText };
#pragma option pop

typedef StaticArray<Graphics::TColor, 59> TacPaletteArray;

typedef StaticArray<HBRUSH, 6> TacBrushes;

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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollBarsSupport(void) { }
	
};


#pragma option push -b-
enum TacModalButtonsColoringValue { bcBackground, bcGlyph, bcText };
#pragma option pop

typedef Set<TacModalButtonsColoringValue, bcBackground, bcText>  TacModalButtonsColoring;

class DELPHICLASS TacButtonsSupport;
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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacButtonsSupport(void) { }
	
};


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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacLabelsSupport(void) { }
	
};


typedef Word TacPixelsPerInch;

#pragma option push -b-
enum TacGroupBoxStyle { gsStandard, gsCard };
#pragma option pop

class DELPHICLASS TacOptions;
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
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOptions(void) { }
	
};


class DELPHICLASS TacAddThread;
class DELPHICLASS TacSkinListController;
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
	/* TThread.Create */ inline __fastcall TacAddThread(bool CreateSuspended) : Classes::TThread(CreateSuspended) { }
	
};


#pragma option push -b-
enum TacSkinsFilterItem { sfiInternal, sfiExternal };
#pragma option pop

typedef Set<TacSkinsFilterItem, sfiInternal, sfiExternal>  TacSkinsFilter;

class PASCALIMPLEMENTATION TacSkinListController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef DynamicArray<TacSkinListData> _TacSkinListController__1;
	
	
protected:
	void __fastcall ClearList(bool DoUpdateLater = true, bool DoSendChanged = true);
	
public:
	System::UnicodeString sPath;
	Extctrls::TTimer* Timer;
	int DosCode;
	Controls::TImageList* ImgList;
	TacAddThread* Thread;
	bool UpdateNeeded;
	Sysutils::TSearchRec FileInfo;
	Acnttypes::TacCtrlArray Controls;
	TsSkinManager* SkinManager;
	int CurrentInternalIndex;
	_TacSkinListController__1 SkinList;
	void __fastcall SendSkinChanged(void);
	void __fastcall SendListChanged(void);
	int __fastcall AddSkinData(void);
	void __fastcall AddSkin(const System::UnicodeString AName, int IntIndex);
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


struct TScaleChangeData
{
	
public:
	Sconst::TacScaleMode OldScaleMode;
	Sconst::TacScaleMode NewScaleMode;
	int OldScalePercent;
	int NewScalePercent;
	int OldPPI;
	int NewPPI;
};


typedef void __fastcall (__closure *TScaleChangeEvent)(System::TObject* Sended, const TScaleChangeData &ScaleChangeData);

typedef void __fastcall (__closure *TFontChanged)(System::TObject* Sender, const System::UnicodeString DefOldFontName, const System::UnicodeString FontName);

class DELPHICLASS TacSkinConvertor;
class PASCALIMPLEMENTATION TacSkinConvertor : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	Classes::TMemoryStream* Options;
	Classes::TMemoryStream* PackedData;
	int FileCount;
	TacFileItems Files;
	void __fastcall Clear(void);
	__fastcall virtual ~TacSkinConvertor(void);
public:
	/* TObject.Create */ inline __fastcall TacSkinConvertor(void) : Classes::TPersistent() { }
	
};


#pragma option push -b-
enum TacFontMode { fmDefault, fmFromSkin, fmCustom };
#pragma option pop

class DELPHICLASS TacFonts;
class PASCALIMPLEMENTATION TacFonts : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FMainFont;
	TacFontMode FMainMode;
	void __fastcall SetMainFont(const System::UnicodeString Value);
	void __fastcall SetMainMode(const TacFontMode Value);
	
public:
	TsSkinManager* SkinManager;
	__fastcall TacFonts(TsSkinManager* AOwner);
	
__published:
	__property TacFontMode MainMode = {read=FMainMode, write=SetMainMode, default=0};
	__property System::UnicodeString MainFont = {read=FMainFont, write=SetMainFont};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFonts(void) { }
	
};


typedef StaticArray<char, 16> TacCharArray;

#pragma option push -b-
enum TacManagerStateValue { msFontChanging, msScaleChanging, msSkinRemoving, msSkinChanging, msBroadCasting, msAnimScaling, msFormScaling, msRTLFlipped };
#pragma option pop

typedef Set<TacManagerStateValue, msFontChanging, msRTLFlipped>  TacManagerState;

class PASCALIMPLEMENTATION TsSkinManager : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	typedef DynamicArray<TacSkinData*> _TsSkinManager__1;
	
	
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
	System::UnicodeString FSkinName;
	TacSkinEffects* FEffects;
	System::UnicodeString FSkinDirectory;
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
	System::UnicodeString __fastcall GetVersion(void);
	bool __fastcall GetIsDefault(void);
	TacSkinInfo __fastcall GetSkinInfo(void);
	bool __fastcall GetExtendedBorders(void);
	void __fastcall SetActiveControl(const HWND Value);
	void __fastcall SetSkinDirectory(const System::UnicodeString Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetIsDefault(const bool Value);
	void __fastcall SetExtendedBorders(const bool Value);
	void __fastcall SetSkinnedPopups(const bool Value);
	void __fastcall SetSkinName(const System::UnicodeString Value);
	void __fastcall SetSkinInfo(const TacSkinInfo Value);
	void __fastcall SetKeyList(const Classes::TStringList* Value);
	void __fastcall SetBuiltInSkins(const TsStoredSkins* Value);
	void __fastcall SetActiveGraphControl(const Controls::TGraphicControl* Value);
	void __fastcall SetSkinningRules(const TacSkinningRules Value);
	void __fastcall SetCommonSections(const Classes::TStringList* Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetSkinsFilter(const TacSkinsFilter Value);
	
protected:
	System::UnicodeString DefStoredFontName;
	System::UnicodeString DefOldFontName;
	System::UnicodeString DefNewFontName;
	Controls::TGraphicControl* FActiveGraphControl;
	Extctrls::TTimer* TimerCheckHot;
	void __fastcall OnCheckHot(System::TObject* Sender);
	void __fastcall SendNewSkin(bool Repaint = true);
	void __fastcall SendRemoveSkin(void);
	void __fastcall InitCommonData(void);
	
public:
	bool NoAutoUpdate;
	Forms::TShowAction ShowState;
	TacSkinEditorData PreviewBuffer;
	TacManagerState ManagerState;
	bool SkinIsPacked;
	int FHueOffset;
	int FSaturation;
	int SysFontScale;
	int FBrightness;
	TacBrushes Brushes;
	Acnttypes::TStringLists ThirdLists;
	Acfontstore::TacEmbeddedFonts* EmbeddedFonts;
	TacSkinListController* SkinListController;
	Graphics::TBitmap* MasterBitmap;
	TacPaletteArray Palette;
	TacSkinCommonInfo SkinCommonInfo;
	_TsSkinManager__1 SkinDataArray;
	Smaskdata::TsMaskArray __fastcall ma(void);
	Smaskdata::TacOutEffArray __fastcall oe(void);
	Smaskdata::TsGeneralDataArray __fastcall gd(void);
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
	System::UnicodeString __fastcall GetSkinNames(Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	System::UnicodeString __fastcall GetExternalSkinNames(Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	int __fastcall GetScaledMaskData(const System::UnicodeString aSectionName, const System::UnicodeString aPropName, int aMulPPI, Smaskdata::TsMaskData &md);
	System::UnicodeString __fastcall GetFullSkinDirectory(void);
	System::UnicodeString __fastcall GetRandomSkin(void);
	int __fastcall LengthOfGD(void);
	int __fastcall GetSkinIndex(const System::UnicodeString SkinSection, TacSkinData* SkinData = (TacSkinData*)(0x0));
	int __fastcall GetMaskIndex(const System::UnicodeString SkinSection, const System::UnicodeString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, const System::UnicodeString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, const System::UnicodeString SkinSection, const System::UnicodeString mask, TacSkinData* SkinData)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const System::UnicodeString SkinSection, const System::UnicodeString PropName, TacSkinData* SkinData)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const System::UnicodeString PropName, TacSkinData* SkinData)/* overload */;
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
	void __fastcall UpdateSkinSection(const System::UnicodeString SectionName);
	void __fastcall UpdateScale(Controls::TWinControl* Ctrl, int iCurrentPPI = 0x60, int iNewDPI = 0x0);
	void __fastcall UpdateAllScale(void);
	void __fastcall InstallHook(void);
	void __fastcall UnInstallHook(void);
	void __fastcall ExtractInternalSkin(const System::UnicodeString NameOfSkin, const System::UnicodeString DestDir);
	void __fastcall ExtractByIndex(int Index, const System::UnicodeString DestDir);
	void __fastcall ChangeAppFont(const System::UnicodeString FontName, bool DoLockForms = true);
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
	__property System::UnicodeString SkinDirectory = {read=FSkinDirectory, write=SetSkinDirectory};
	__property System::UnicodeString SkinName = {read=FSkinName, write=SetSkinName};
	__property TacSkinInfo SkinInfo = {read=GetSkinInfo, write=SetSkinInfo};
	__property TacSkinningRules SkinningRules = {read=FSkinningRules, write=SetSkinningRules, default=7};
	__property TsThirdPartyList* ThirdParty = {read=FThirdParty, write=FThirdParty};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
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


//-- var, const, procedure ---------------------------------------------------
#define acCurrentVersion L"14.35"
static const Word iMaxFileSize = 0x7530;
extern PACKAGE bool IsNT;
extern PACKAGE Classes::TStringList* acEditorSkinFile;
extern PACKAGE TsSkinManager* DefaultManager;
extern PACKAGE bool UnPackedFirst;
extern PACKAGE StaticArray<TacSkinData*, 4> StdScaleArray;
extern PACKAGE void __fastcall ReceiveData(TsSkinManager* SkinReceiver);
extern PACKAGE System::UnicodeString __fastcall ConvertSkinStr(const System::UnicodeString s);
extern PACKAGE void __fastcall LoadSkinFromFile(const System::UnicodeString FileName, TacSkinConvertor* &Convertor, Classes::TStringList* pwds, Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall Load3rdNames(TsThirdPartyList* AThirdParty, Acnttypes::TStringLists AThirdLists, bool &AOwnThirdLists);
extern PACKAGE bool __fastcall SearchSupport(const Acnttypes::TStringLists Lists, const System::UnicodeString ClassName);
extern PACKAGE void __fastcall UpdatePreview(HWND Handle, bool Enabled);
extern PACKAGE Graphics::TColor __fastcall SysColorToSkin(const Graphics::TColor AColor, TsSkinManager* ASkinManager = (TsSkinManager*)(0x0));
extern PACKAGE void __fastcall UpdateCommonDlgs(TsSkinManager* sManager);
extern PACKAGE void __fastcall LoadThirdNames(TsSkinManager* sm, bool Overwrite = false);
extern PACKAGE void __fastcall UpdateThirdNames(TsSkinManager* sm);
extern PACKAGE int __fastcall CurrentPPI(TsSkinManager* sm, Controls::TControl* OwnerCtrl, bool CheckActive = false);
extern PACKAGE int __fastcall GetScrollSize(TsSkinManager* sm, int ScalePPI = 0x60);
extern PACKAGE int __fastcall GetComboBtnSize(TsSkinManager* sm, int ScalePPI);
extern PACKAGE void __fastcall SetPPIAnimated(int NewPPI);
extern PACKAGE bool __fastcall IsSysPPIUsed(TsSkinManager* sm);
extern PACKAGE bool __fastcall ExtractPackedData(TacSkinConvertor* &Convertor, Classes::TStringList* pwds, Classes::TComponent* SkinManager);
extern PACKAGE bool __fastcall GetPreviewStream(Classes::TMemoryStream* aStream, const System::UnicodeString SkinFileName)/* overload */;
extern PACKAGE bool __fastcall GetPreviewStream(Classes::TMemoryStream* aStream, Classes::TMemoryStream* SrcStream)/* overload */;
extern PACKAGE bool __fastcall GetPreviewImage(Graphics::TBitmap* aBitmap, const System::UnicodeString SkinFileName);
extern PACKAGE int __cdecl asSkinDecode(char *PackedData, __int64 *Keys, const int Keys_Size, const int Length, const int FormSum, /* out */ int &FilesCount, /* out */ int &Offset);

}	/* namespace Sskinmanager */
using namespace Sskinmanager;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SskinmanagerHPP
