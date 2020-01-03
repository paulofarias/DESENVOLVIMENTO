// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sConst.pas' rev: 31.00 (Windows)

#ifndef SconstHPP
#define SconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sconst
{
//-- forward type declarations -----------------------------------------------
struct TacSkinColorData;
class DELPHICLASS TsAccessControl;
struct TacBGInfo;
struct TCacheInfo;
struct TacPaintInfo;
struct TsColor;
struct TsColor_RGB;
struct TsColor_D;
struct TsColor_S;
struct TsColor_M;
struct TsColor_;
struct TsColor_RGB_;
struct TsGradPoint;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacSkinColorData
{
public:
	System::Uitypes::TColor Value;
	System::ShortString Name;
};


typedef int TacIntProperty;

enum DECLSPEC_DENUM TacOuterEffectStyle : unsigned char { oeNone, oeShadow, oeLowered };

enum DECLSPEC_DENUM TacOuterVisibility : unsigned char { ovNone, ovAlways };

enum DECLSPEC_DENUM TacGrayedMode : unsigned char { gmAlways, gmInactive };

enum DECLSPEC_DENUM TacSide : unsigned char { asLeft, asTop, asRight, asBottom };

enum DECLSPEC_DENUM TacTabLayout : unsigned char { tlFirst, tlLast, tlMiddle, tlSingle };

class PASCALIMPLEMENTATION TsAccessControl : public Vcl::Controls::TControl
{
	typedef Vcl::Controls::TControl inherited;
	
public:
	__property AutoSize = {default=0};
	__property ParentColor = {default=1};
	__property Color = {default=-16777211};
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property Font;
public:
	/* TControl.Create */ inline __fastcall virtual TsAccessControl(System::Classes::TComponent* AOwner) : Vcl::Controls::TControl(AOwner) { }
	/* TControl.Destroy */ inline __fastcall virtual ~TsAccessControl(void) { }
	
};


typedef System::UnicodeString ACString;

typedef System::WideChar ACChar;

typedef System::WideChar * PACChar;

typedef NativeInt ACNativeInt;

typedef NativeInt ACLongInt;

typedef NativeUInt ACUInt;

typedef NativeUInt ACNativeUInt;

typedef char OldChar;

typedef char * POldChar;

typedef System::AnsiString OldString;

typedef System::PAnsiString POldString;

typedef System::UnicodeString *PACString;

typedef void __fastcall (__closure *TPaintEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TBmpPaintEvent)(System::TObject* Sender, Vcl::Graphics::TBitmap* Bmp);

typedef System::UnicodeString TsSkinName;

typedef System::UnicodeString TsDirectory;

typedef System::UnicodeString TsSkinSection;

typedef System::UnicodeString TacStrValue;

typedef System::UnicodeString TacRoot;

enum DECLSPEC_DENUM TacAnimType : unsigned char { atFading, atAero, atDropDown };

enum DECLSPEC_DENUM TacAnimTypeCtrl : unsigned char { atcFade, atcAero, atcBlur, atcBlur2, atcRunup };

enum DECLSPEC_DENUM TacBtnEvent : unsigned char { beMouseEnter, beMouseLeave, beMouseDown, beMouseUp };

typedef System::Set<TacBtnEvent, TacBtnEvent::beMouseEnter, TacBtnEvent::beMouseUp> TacBtnEvents;

enum DECLSPEC_DENUM TacAnimatEvent : unsigned char { aeMouseEnter, aeMouseLeave, aeMouseDown, aeMouseUp, aeGlobalDef };

typedef System::Set<TacAnimatEvent, TacAnimatEvent::aeMouseEnter, TacAnimatEvent::aeGlobalDef> TacAnimatEvents;

enum DECLSPEC_DENUM TacImgType : unsigned char { itisaBorder, itisaTexture, itisaGlyph, itisaGlow, itisaPngGlyph };

enum DECLSPEC_DENUM TacFillMode : unsigned char { fmTiled, fmStretched, fmTiledHorz, fmTiledVert, fmStretchHorzTop, fmStretchVertLeft, fmTileHorBtm, fmTileVertRight, fmStretchHorBtm, fmStretchVertRight, fmDisTiled, fmStretchHorz, fmStretchVert, fmFromBottomToTop, fmReserved1 };

enum DECLSPEC_DENUM TvaAlign : unsigned char { vaTop, vaMiddle, vaBottom };

enum DECLSPEC_DENUM TacScaleMode : unsigned char { sm100, sm125, sm150, sm200, smAuto, smOldMode, smVCL, smCustomPPI };

typedef TacBGInfo *PacBGInfo;

enum DECLSPEC_DENUM TacBGType : unsigned char { btUnknown, btFill, btCache, btNotReady };

struct DECLSPEC_DRECORD TacBGInfo
{
public:
	Vcl::Graphics::TBitmap* Bmp;
	System::Uitypes::TColor Color;
	System::Types::TPoint Offset;
	System::Types::TRect R;
	System::Types::TRect FillRect;
	TacBGType BgType;
	bool PleaseDraw;
	HDC DrawDC;
};


struct DECLSPEC_DRECORD TCacheInfo
{
public:
	Vcl::Graphics::TBitmap* Bmp;
	int X;
	int Y;
	System::Uitypes::TColor FillColor;
	System::Types::TRect FillRect;
	bool Ready;
};


struct DECLSPEC_DRECORD TacPaintInfo
{
public:
	int State;
	int FontIndex;
	System::Types::TRect R;
	System::TObject* SkinManager;
};


typedef TacPaintInfo *PacPaintInfo;

typedef System::DynamicArray<System::Types::TPoint> TPoints;

typedef TPoints *PPoints;

typedef System::DynamicArray<int> TacIntArray;

typedef System::Int8 TPercent;

typedef System::Set<System::Byte, 1, 255> TsCodes;

enum DECLSPEC_DENUM TsShadowingShape : unsigned char { ssRectangle, ssEllipse };

enum DECLSPEC_DENUM TsWindowShowMode : unsigned char { soHide, soNormal, soShowMinimized, soMaximize, soShowNoActivate, soShow, soMinimize, soShowMinNoActive, soShowNA, soRestore, soDefault };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor
{
	
public:
	union
	{
		struct 
		{
			int I;
		};
		struct 
		{
			System::Byte R;
			System::Byte G;
			System::Byte B;
			System::Byte A;
		};
		struct 
		{
			System::Uitypes::TColor C;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_RGB
{
	
public:
	union
	{
		struct 
		{
			int Intg;
		};
		struct 
		{
			System::Byte Red;
			System::Byte Green;
			System::Byte Blue;
			System::Byte Alpha;
		};
		struct 
		{
			System::Uitypes::TColor Col;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_D
{
	
public:
	union
	{
		struct 
		{
			int DI;
		};
		struct 
		{
			System::Byte DB;
			System::Byte DG;
			System::Byte DR;
			System::Byte DA;
		};
		struct 
		{
			System::Uitypes::TColor DC;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_S
{
	
public:
	union
	{
		struct 
		{
			int SI;
		};
		struct 
		{
			System::Byte SB;
			System::Byte SG;
			System::Byte SR;
			System::Byte SA;
		};
		struct 
		{
			System::Uitypes::TColor SC;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_M
{
	
public:
	union
	{
		struct 
		{
			int MI;
		};
		struct 
		{
			System::Byte MB;
			System::Byte MG;
			System::Byte MR;
			System::Byte MA;
		};
		struct 
		{
			System::Uitypes::TColor MC;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_
{
	
public:
	union
	{
		struct 
		{
			int I;
		};
		struct 
		{
			System::Byte B;
			System::Byte G;
			System::Byte R;
			System::Byte A;
		};
		struct 
		{
			System::Uitypes::TColor C;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_RGB_
{
	
public:
	union
	{
		struct 
		{
			int Intg;
		};
		struct 
		{
			System::Byte Blue;
			System::Byte Green;
			System::Byte Red;
			System::Byte Alpha;
		};
		struct 
		{
			System::Uitypes::TColor Col;
		};
		
	};
};
#pragma pack(pop)


typedef System::StaticArray<TsColor, 10001> TRGBAArray;

typedef TRGBAArray *PRGBAArray;

typedef System::StaticArray<TsColor_, 10001> TRGBAArray_;

typedef TRGBAArray_ *PRGBAArray_;

typedef System::StaticArray<TsColor_D, 10001> TRGBAArray_D;

typedef TRGBAArray_D *PRGBAArray_D;

typedef System::StaticArray<TsColor_S, 10001> TRGBAArray_S;

typedef TRGBAArray_S *PRGBAArray_S;

typedef System::StaticArray<TsColor_M, 10001> TRGBAArray_M;

typedef TRGBAArray_M *PRGBAArray_M;

enum DECLSPEC_DENUM Sconst__2 : unsigned char { dgBlended, dgGrayed };

typedef System::Set<Sconst__2, Sconst__2::dgBlended, Sconst__2::dgGrayed> TsDisabledGlyphKind;

enum DECLSPEC_DENUM Sconst__3 : unsigned char { dkBlended, dkGrayed };

typedef System::Set<Sconst__3, Sconst__3::dkBlended, Sconst__3::dkGrayed> TsDisabledKind;

typedef TsDisabledKind *PsDisabledKind;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TsGradPoint
{
public:
	System::Word Index;
	int Mode;
	TsColor Color;
	TPercent Percent;
};
#pragma pack(pop)


typedef System::DynamicArray<TsGradPoint> TsGradArray;

typedef System::StaticArray<System::UnicodeString, 4> Sconst__4;

typedef System::StaticArray<System::UnicodeString, 4> Sconst__5;

enum DECLSPEC_DENUM TsCaptionLayout : unsigned char { sclLeft, sclTopLeft, sclTopCenter, sclTopRight, sclLeftTop, sclBottomLeft, sclBottomCenter, sclBottomRight, sclRight, sclRightTop, sclLeftLeft, sclRightRight };

typedef System::Set<System::Uitypes::TCalDayOfWeek, _DELPHI_SET_ENUMERATOR(System::Uitypes::TCalDayOfWeek::dowMonday), _DELPHI_SET_ENUMERATOR(System::Uitypes::TCalDayOfWeek::dowLocaleDefault)> TDaysOfWeek;

enum DECLSPEC_DENUM TDateOrder : unsigned char { doMDY, doDMY, doYMD };

enum DECLSPEC_DENUM TPopupWindowAlign : unsigned char { pwaRight, pwaLeft };

enum DECLSPEC_DENUM TacOptimizingPriority : unsigned char { opSpeed, opMemory };

//-- var, const, procedure ---------------------------------------------------
#define CompatibleSkinVersion  (1.026000E+01)
#define MaxCompSkinVersion  (1.499000E+01)
static const System::Uitypes::TColor slMainColor = System::Uitypes::TColor(-251658239);
static const System::Uitypes::TColor slBtnRed = System::Uitypes::TColor(-2763265);
static const System::Uitypes::TColor slBtnRedActive = System::Uitypes::TColor(-4342273);
static const System::Uitypes::TColor slBtnRedText = System::Uitypes::TColor(-16777036);
static const System::Uitypes::TColor slBtnRedTextActive = System::Uitypes::TColor(-16777054);
static const System::Uitypes::TColor slBtnGreen = System::Uitypes::TColor(-1966126);
static const System::Uitypes::TColor slBtnGreenActive = System::Uitypes::TColor(-3276876);
static const System::Uitypes::TColor slBtnGreenText = System::Uitypes::TColor(-14121702);
static const System::Uitypes::TColor slBtnGreenTextActive = System::Uitypes::TColor(-16740864);
static const System::Uitypes::TColor slBtnBlue = System::Uitypes::TColor(-4663);
static const System::Uitypes::TColor slBtnBlueActive = System::Uitypes::TColor(-5698);
static const System::Uitypes::TColor slBtnBlueText = System::Uitypes::TColor(-5344256);
static const System::Uitypes::TColor slBtnBlueTextActive = System::Uitypes::TColor(-7249920);
static const System::Uitypes::TColor slBtnYellow = System::Uitypes::TColor(-3476481);
static const System::Uitypes::TColor slBtnYellowActive = System::Uitypes::TColor(-4526081);
static const System::Uitypes::TColor slBtnYellowText = System::Uitypes::TColor(-16734761);
static const System::Uitypes::TColor slBtnYellowTextActive = System::Uitypes::TColor(-16738106);
static const System::Uitypes::TColor slEditGreen = System::Uitypes::TColor(-3538990);
static const System::Uitypes::TColor slEditYellow = System::Uitypes::TColor(-4521985);
static const System::Uitypes::TColor slEditRed = System::Uitypes::TColor(-2368513);
static const System::Uitypes::TColor slEditGreenText = System::Uitypes::TColor(-16761334);
static const System::Uitypes::TColor slEditYellowText = System::Uitypes::TColor(-16757684);
static const System::Uitypes::TColor slEditRedText = System::Uitypes::TColor(-16777108);
extern DELPHI_PACKAGE System::StaticArray<TacSkinColorData, 22> acSkinColorNames;
static const System::WideChar ZeroChar = (System::WideChar)(0x30);
static const System::WideChar CharOne = (System::WideChar)(0x31);
static const System::WideChar CharQuest = (System::WideChar)(0x3f);
static const System::WideChar CharDiez = (System::WideChar)(0x23);
static const System::WideChar TexChar = (System::WideChar)(0x7e);
static const System::WideChar CharExt = (System::WideChar)(0x21);
static const System::WideChar CharGlyph = (System::WideChar)(0x40);
static const System::WideChar CharMask = (System::WideChar)(0x5e);
static const System::WideChar acCharImg = (System::WideChar)(0x26);
static const System::WideChar CharMinus = (System::WideChar)(0x2d);
static const System::WideChar CharPlus = (System::WideChar)(0x2b);
static const System::WideChar CharSemicolon = (System::WideChar)(0x3b);
static const System::Word i360 = System::Word(0x168);
static const System::Word i270 = System::Word(0x10e);
static const System::Byte i180 = System::Byte(0xb4);
static const System::Int8 i90 = System::Int8(0x5a);
static const System::Word ACS_PRINTING = System::Word(0x200);
static const System::Word ACS_MNUPDATING = System::Word(0x400);
static const System::Word ACS_LOCKED = System::Word(0x800);
static const System::Word ACS_FOCUSCHANGING = System::Word(0x1000);
static const System::Word ACS_CHANGING = System::Word(0x2000);
static const System::Word ACS_REPAINTNEEDH = System::Word(0x8000);
static const int ACS_REPAINTNEEDV = int(0x10000);
static const int ACS_CTRLSCALING = int(0x20000);
static const int ACS_NCCHANGED = int(0x40000);
static const System::Int8 BGT_NONE = System::Int8(0x0);
static const System::Int8 BGT_GRADIENTHORZ = System::Int8(0x1);
static const System::Int8 BGT_GRADIENTVERT = System::Int8(0x2);
static const System::Int8 BGT_STRETCH = System::Int8(0x4);
static const System::Int8 BGT_TEXTURELEFT = System::Int8(0x10);
static const System::Int8 BGT_TEXTURETOP = System::Int8(0x20);
static const System::Int8 BGT_TEXTURERIGHT = System::Int8(0x40);
static const System::Byte BGT_TEXTUREBOTTOM = System::Byte(0x80);
static const System::Int8 BGT_TEXTUREVERT = System::Int8(0x50);
static const System::Byte BGT_TEXTUREHORZ = System::Byte(0xa0);
static const System::Int8 BGT_STRETCHVERT = System::Int8(0x54);
static const System::Byte BGT_STRETCHHORZ = System::Byte(0xa4);
static const System::Word RDWA_FRAME = System::Word(0x421);
static const System::Word RDWA_FRAMENOW = System::Word(0x521);
static const System::Word RDWA_REPAINT = System::Word(0x405);
static const System::Word RDWA_ERASENOW = System::Word(0x105);
static const System::Word RDWA_ALL = System::Word(0x485);
static const System::Word RDWA_ALLNOW = System::Word(0x585);
static const System::Byte RDWA_ALLCHILDREN = System::Byte(0xb1);
static const System::Word RDWA_NOCHILDREN = System::Word(0x445);
static const System::Word RDWA_NOCHILDRENNOW = System::Word(0x545);
static const System::Word SWPA_FRAMECHANGED = System::Word(0x737);
static const System::Word SWPA_NOCOPYBITS = System::Word(0x71f);
static const System::Word SWPA_SHOW = System::Word(0x658);
static const System::Word SWPA_HIDE = System::Word(0x698);
static const System::Word SWPA_SHOWZORDER = System::Word(0x659);
static const System::Word SWPA_SHOWZORDERONLY = System::Word(0x65b);
static const System::Word SWPA_ZORDER = System::Word(0x61b);
static const int EllipsFlags = int(0x4c000);
static const System::Int8 ACT_RELCAPT = System::Int8(-1);
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 8> PNGMagic;
extern DELPHI_PACKAGE System::StaticArray<Vcl::Stdctrls::TCheckBoxState, 3> CheckBoxStates;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 3> acAlignmentArray;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 2> TextWrapping;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 2> TextEllips;
extern DELPHI_PACKAGE System::StaticArray<int, 2> acMinusPlus;
static const System::Int8 ac_BaseArrowWidth = System::Int8(0x5);
static const System::Int8 ac_BaseSpacing = System::Int8(0x4);
static const int NCS_DROPSHADOW = int(0x20000);
extern DELPHI_PACKAGE TCacheInfo EmptyCI;
extern DELPHI_PACKAGE TsColor sFuchsia;
extern DELPHI_PACKAGE Sconst__4 sTabPositions;
static const System::Int8 acMaxScaleNdx = System::Int8(0x3);
extern DELPHI_PACKAGE System::StaticArray<int, 4> aScalePercents;
extern DELPHI_PACKAGE System::StaticArray<int, 4> aPPIArray;
extern DELPHI_PACKAGE Sconst__5 aSfxs;
#define s_RegName L"AlphaSkins"
#define s_IntSkinsPath L"IntSkinsPath"
#define s_WinControlForm L"TWinControlForm"
#define s_NoFocusProp L"ACNOFOCUS"
#define s_acScale L"ACSCALE"
#define s_MainFont L"MainFont"
#define s_FontCount L"FontCount"
#define s_FontName L"FontName"
#define s_FontFile L"FontFile"
#define s_Arial L"Arial"
#define s_MSSansSerif L"MS Sans Serif"
#define s_Webdings L"Webdings"
#define s_Marlett L"Marlett"
#define s_FontAwesome L"FontAwesome"
#define s_PreviewKey L"/acpreview"
#define s_EditorCapt L"AlphaSkins Editor"
static const System::Int8 ASE_CLOSE = System::Int8(0x1);
static const System::Int8 ASE_HELLO = System::Int8(0x3);
static const System::Int8 ASE_ALIVE = System::Int8(0x4);
static const System::Word ASE_MSG = System::Word(0xa400);
#define MasterBmpName L"Master.bmp"
#define OptionsDatName L"Options.dat"
#define acSkinExt L"asz"
#define acPngExt L"PNG"
#define acIcoExt L"ico"
#define s_MinusOne L"-1"
#define s_TrueStr L"TRUE"
#define s_NewFolder L"New folder"
#define s_SkinSelectItemName L"SkinSelectItem"
#define s_SkinData L"SkinData"
static const System::WideChar s_Slash = (System::WideChar)(0x5c);
static const System::WideChar s_Space = (System::WideChar)(0x20);
static const System::WideChar s_Comma = (System::WideChar)(0x2c);
static const System::WideChar s_Dot = (System::WideChar)(0x2e);
#define s_0D0A L"\r\n"
#define s_Ellipsis L"..."
#define s_Yy L"Yy"
static const System::Int8 ac_MaxPropsIndex = System::Int8(0x2);
static const System::Int8 NOCHILDRENPRINT = System::Int8(-2);
static const System::Int8 BDM_STRETCH = System::Int8(0x1);
static const System::Int8 BDM_ACTIVEONLY = System::Int8(0x2);
static const System::Int8 BDM_FILL = System::Int8(0x4);
static const System::Int8 BDM_NOSCALE = System::Int8(0x8);
static const System::Int8 BDM_ALPHA = System::Int8(0x10);
static const System::Int8 HTSB_LEFT_BUTTON = System::Int8(0x64);
static const System::Int8 HTSB_RIGHT_BUTTON = System::Int8(0x65);
static const System::Int8 HTSB_TOP_BUTTON = System::Int8(0x66);
static const System::Int8 HTSB_BOTTOM_BUTTON = System::Int8(0x67);
static const System::Int8 HTSB_H_SCROLL = System::Int8(0x68);
static const System::Int8 HTSB_HB_SCROLL = System::Int8(0x69);
static const System::Int8 HTSB_V_SCROLL = System::Int8(0x6a);
static const System::Int8 HTSB_VB_SCROLL = System::Int8(0x6b);
static const System::Int8 HTCHILDCLOSE = System::Int8(0x65);
static const System::Int8 HTCHILDMAX = System::Int8(0x66);
static const System::Int8 HTCHILDMIN = System::Int8(0x67);
static const System::Int8 acCloseBtnSize = System::Int8(0xf);
static const System::Int8 acMultipNormal = System::Int8(0x3);
static const System::Int8 acMaxIterations = System::Int8(0x6);
static const System::Int8 acTimerInterval = System::Int8(0xc);
extern DELPHI_PACKAGE System::StaticArray<TacImgType, 5> acImgTypes;
extern DELPHI_PACKAGE System::StaticArray<TacFillMode, 15> acFillModes;
extern DELPHI_PACKAGE System::StaticArray<TacBtnEvent, 5> acBtnEvents;
static const System::Int8 COC_TsCustom = System::Int8(0x1);
static const System::Int8 COC_TsSpinEdit = System::Int8(0x2);
static const System::Int8 COC_TsEdit = System::Int8(0x3);
static const System::Int8 COC_TsMemo = System::Int8(0x7);
static const System::Int8 COC_TsListBox = System::Int8(0x8);
static const System::Int8 COC_TsColorBox = System::Int8(0x9);
static const System::Int8 COC_TsListView = System::Int8(0xa);
static const System::Int8 COC_TsCurrencyEdit = System::Int8(0xc);
static const System::Int8 COC_TsComboBox = System::Int8(0xd);
static const System::Int8 COC_TsTreeView = System::Int8(0xe);
static const System::Int8 COC_TsComboBoxEx = System::Int8(0x12);
static const System::Int8 COC_TsFrameBar = System::Int8(0x13);
static const System::Int8 COC_TsBarTitle = System::Int8(0x14);
static const System::Int8 COC_TsCheckBox = System::Int8(0x20);
static const System::Int8 COC_TsDBCheckBox = System::Int8(0x20);
static const System::Int8 COC_TsRadioButton = System::Int8(0x21);
static const System::Int8 COC_TsSlider = System::Int8(0x22);
static const System::Int8 COC_TsImage = System::Int8(0x32);
static const System::Int8 COC_TsPanel = System::Int8(0x33);
static const System::Int8 COC_TsCoolBar = System::Int8(0x35);
static const System::Int8 COC_TsToolBar = System::Int8(0x36);
static const System::Int8 COC_TsDragBar = System::Int8(0x38);
static const System::Int8 COC_TsTabSheet = System::Int8(0x39);
static const System::Int8 COC_TsScrollBox = System::Int8(0x3a);
static const System::Int8 COC_TsMonthCalendar = System::Int8(0x3b);
static const System::Int8 COC_TsGroupBox = System::Int8(0x4a);
static const System::Int8 COC_TsSplitter = System::Int8(0x4b);
static const System::Int8 COC_TsDBEdit = System::Int8(0x4c);
static const System::Int8 COC_TsDBMemo = System::Int8(0x4e);
static const System::Int8 COC_TsDBComboBox = System::Int8(0x51);
static const System::Int8 COC_TsDBLookupComboBox = System::Int8(0x52);
static const System::Int8 COC_TsDBListBox = System::Int8(0x53);
static const System::Int8 COC_TsDBLookupListBox = System::Int8(0x54);
static const System::Int8 COC_TsDBGrid = System::Int8(0x55);
static const System::Int8 COC_TsSpeedButton = System::Int8(0x5c);
static const System::Int8 COC_TsButton = System::Int8(0x5d);
static const System::Int8 COC_TsBitBtn = System::Int8(0x5e);
static const System::Int8 COC_TsNavButton = System::Int8(0x62);
static const System::Int8 COC_TsBevel = System::Int8(0x6e);
static const System::Byte COC_TsFileDirEdit = System::Byte(0x84);
static const System::Byte COC_TsFilenameEdit = System::Byte(0x85);
static const System::Byte COC_TsDirectoryEdit = System::Byte(0x86);
static const System::Byte COC_TsCustomDateEdit = System::Byte(0x89);
static const System::Byte COC_TsComboEdit = System::Byte(0x8a);
static const System::Byte COC_TsDateEdit = System::Byte(0x8c);
static const System::Byte COC_TsPageControl = System::Byte(0x8d);
static const System::Byte COC_TsScrollBar = System::Byte(0x8e);
static const System::Byte COC_TsTabControl = System::Byte(0x8f);
static const System::Byte COC_TsStatusBar = System::Byte(0x97);
static const System::Byte COC_TsHeaderControl = System::Byte(0x98);
static const System::Byte COC_TsGauge = System::Byte(0xa1);
static const System::Byte COC_TsTrackBar = System::Byte(0xa5);
static const System::Byte COC_TacDialogWnd = System::Byte(0xdf);
static const System::Byte COC_TsSkinProvider = System::Byte(0xe0);
static const System::Byte COC_TsMDIForm = System::Byte(0xe1);
static const System::Byte COC_TsFrameAdapter = System::Byte(0xe2);
static const System::Byte COC_TsCircleControl = System::Byte(0xe3);
static const System::Byte COC_TsAdapter = System::Byte(0xe6);
static const System::Byte COC_TsAdapterEdit = System::Byte(0xe7);
static const System::Byte COC_TVST = System::Byte(0xe8);
static const System::Byte COC_Unknown = System::Byte(0xfa);
extern DELPHI_PACKAGE TsCodes sForbidMouse;
extern DELPHI_PACKAGE TsCodes sNoHotEdits;
extern DELPHI_PACKAGE TsCodes ssCanNotBeHot;
extern DELPHI_PACKAGE TsCodes sEditCtrls;
extern DELPHI_PACKAGE TsCodes ssScrolledEdits;
extern DELPHI_PACKAGE TsCodes ssButtons;
extern DELPHI_PACKAGE int ExceptTag;
extern DELPHI_PACKAGE int acWinVer;
extern DELPHI_PACKAGE int SysPopupCount;
extern DELPHI_PACKAGE Vcl::Forms::TForm* sPopupCalendar;
extern DELPHI_PACKAGE bool acDebugMode;
extern DELPHI_PACKAGE bool acCheckScale;
extern DELPHI_PACKAGE bool acDialogPosIsCenter;
extern DELPHI_PACKAGE NativeUInt acPreviewHandle;
extern DELPHI_PACKAGE bool acPreviewNeeded;
extern DELPHI_PACKAGE bool acSkinPreviewUpdating;
extern DELPHI_PACKAGE bool acIgnoreMenuOwnerDraw;
extern DELPHI_PACKAGE bool acHtmlStdBreak;
extern DELPHI_PACKAGE int acAnimCount;
extern DELPHI_PACKAGE int acScrollBtnLength;
extern DELPHI_PACKAGE int acArrowSize;
extern DELPHI_PACKAGE int acSpacing;
extern DELPHI_PACKAGE int acLineWidth;
extern DELPHI_PACKAGE bool ShowHintStored;
extern DELPHI_PACKAGE bool FadingForbidden;
extern DELPHI_PACKAGE bool x64woAero;
extern DELPHI_PACKAGE bool AppShowHint;
extern DELPHI_PACKAGE void *TempControl;
extern DELPHI_PACKAGE bool fGlobalFlag;
extern DELPHI_PACKAGE Vcl::Controls::TWinControl* acMagnForm;
extern DELPHI_PACKAGE System::WideChar cMenuCaption;
extern DELPHI_PACKAGE TacScaleMode acCurrentScaleMode;
extern DELPHI_PACKAGE bool ac_UseSysCharSet;
extern DELPHI_PACKAGE bool ac_KeepOwnFont;
extern DELPHI_PACKAGE bool ac_OldGlyphsMode;
extern DELPHI_PACKAGE bool DrawSkinnedMDIWall;
extern DELPHI_PACKAGE bool DrawSkinnedMDIScrolls;
extern DELPHI_PACKAGE int ac_DialogsLevel;
extern DELPHI_PACKAGE bool ac_ChangeThumbPreviews;
extern DELPHI_PACKAGE bool ac_AllowHotEdits;
static const System::Word SC_DRAGMOVE = System::Word(0xf012);
extern DELPHI_PACKAGE _BLENDFUNCTION DefBlend;
extern DELPHI_PACKAGE System::UnicodeString acs_MsgDlgOK;
extern DELPHI_PACKAGE System::UnicodeString acs_MsgDlgCancel;
extern DELPHI_PACKAGE System::UnicodeString acs_MsgDlgHelp;
extern DELPHI_PACKAGE System::UnicodeString acs_RestoreStr;
extern DELPHI_PACKAGE System::UnicodeString acs_MoveStr;
extern DELPHI_PACKAGE System::UnicodeString acs_SizeStr;
extern DELPHI_PACKAGE System::UnicodeString acs_MinimizeStr;
extern DELPHI_PACKAGE System::UnicodeString acs_MaximizeStr;
extern DELPHI_PACKAGE System::UnicodeString acs_CloseStr;
extern DELPHI_PACKAGE System::UnicodeString acs_Calculator;
extern DELPHI_PACKAGE System::UnicodeString acs_FileOpen;
extern DELPHI_PACKAGE System::UnicodeString acs_AvailSkins;
extern DELPHI_PACKAGE System::UnicodeString acs_InternalSkin;
extern DELPHI_PACKAGE System::UnicodeString acs_InvalidDate;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgAdd;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgDefine;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgAddPal;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgTitle;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgRed;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgGreen;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgBlue;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgDecimal;
extern DELPHI_PACKAGE System::UnicodeString acs_ColorDlgHex;
extern DELPHI_PACKAGE System::UnicodeString acs_FrameAdapterError1;
extern DELPHI_PACKAGE System::UnicodeString acs_Font;
extern DELPHI_PACKAGE System::UnicodeString acs_FontColor;
extern DELPHI_PACKAGE System::UnicodeString acs_Root;
extern DELPHI_PACKAGE System::UnicodeString acs_SelectDir;
extern DELPHI_PACKAGE System::UnicodeString acs_Create;
extern DELPHI_PACKAGE System::UnicodeString acs_DirWithSkins;
extern DELPHI_PACKAGE System::UnicodeString acs_SelectSkinTitle;
extern DELPHI_PACKAGE System::UnicodeString acs_SkinPreview;
extern DELPHI_PACKAGE void __fastcall InitSysVariables(void);
}	/* namespace Sconst */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCONST)
using namespace Sconst;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SconstHPP
