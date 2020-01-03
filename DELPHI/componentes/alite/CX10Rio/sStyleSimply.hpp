// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sStyleSimply.pas' rev: 33.00 (Windows)

#ifndef SstylesimplyHPP
#define SstylesimplyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <acntTypes.hpp>
#include <acntUtils.hpp>
#include <sConst.hpp>
#include <sSkinProps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sstylesimply
{
//-- forward type declarations -----------------------------------------------
struct TacConstElementData;
struct TacTrackBarData;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TacSection : unsigned char { ssMenuItem, ssCheckBox, ssSpeedButton, ssSpeedButton_Small, ssToolButton, ssTransparent, ssGroupBox, ssDivider, ssWebBtn, ssButton, ssComboNoEdit, ssButtonHuge, ssToolBar, ssEdit, ssGauge, ssSelection, ssStatusBar, ssPanel, ssPanelLow, ssTrackBar, ssProgressV, ssDragBar, ssGripH, ssGripV, ssProgressH, ssTabSheet, ssUpDown, ssComboBox, ssCaption, ssMainMenu, ssSplitter, ssComboBtn, ssFormTitle, ssHint, ssDividerV, ssPageControl, ssTabTop, ssBarPanel, ssBarTitle, ssMenuCaption, ssDialogTitle, ssMenuButton, ssMenuLine, ssFormHeader, ssTBBtn, ssTBMenuBtn, ssTBTab, ssColHeader, ssColHeaderA, ssColHeaderL, ssColHeaderR, ssSlider_Off, ssSlider_On };

enum DECLSPEC_DENUM TacTitleGlyph : unsigned char { tgCloseAlone, tgClose, tgMax, tgMin, tgNormal, tgHelp, tgSmallClose, tgSmallMax, tgSmallMin, tgSmallNormal, tgSmallHelp, tgUser, tgNone };

typedef System::StaticArray<Sconst::TacIntArray, 7> TacTitleGlowArray;

enum DECLSPEC_DENUM TacDefSectionIndex : unsigned char { dsiEdit, dsiButton };

typedef System::StaticArray<System::UnicodeString, 53> Sstylesimply__1;

typedef System::StaticArray<System::UnicodeString, 13> Sstylesimply__2;

typedef System::StaticArray<System::UnicodeString, 2> Sstylesimply__3;

typedef System::StaticArray<System::UnicodeString, 2> Sstylesimply__4;

typedef System::StaticArray<System::UnicodeString, 19> Sstylesimply__5;

struct DECLSPEC_DRECORD TacConstElementData
{
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	System::StaticArray<int, 3> BGIndex;
	System::UnicodeString SkinSection;
};


struct DECLSPEC_DRECORD TacTrackBarData
{
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	System::StaticArray<int, 3> BGIndex;
	int TickIndex;
	int ProgIndex;
	int SliderIndex;
};


typedef System::StaticArray<int, 53> TacIntSections;

typedef System::StaticArray<TacConstElementData, 4> TacSideElements;

typedef System::StaticArray<TacConstElementData, 2> TacBoolElements;

typedef System::StaticArray<System::StaticArray<TacConstElementData, 4>, 4> TacAllTabs;

typedef void __fastcall (*TacFormCallBack)(System::Classes::TComponent* SkinProvider, int Data/* = 0x0*/);

typedef System::DynamicArray<System::Classes::TComponent*> Sstylesimply__6;

//-- var, const, procedure ---------------------------------------------------
#define acGlowedGlyphs (System::Set<TacTitleGlyph, TacTitleGlyph::tgCloseAlone, TacTitleGlyph::tgNone>() << TacTitleGlyph::tgCloseAlone << TacTitleGlyph::tgClose << TacTitleGlyph::tgMax << TacTitleGlyph::tgMin << TacTitleGlyph::tgNormal )
extern DELPHI_PACKAGE System::StaticArray<TacSection, 14> acAuxReplacement;
extern DELPHI_PACKAGE Sstylesimply__1 acSectNames;
extern DELPHI_PACKAGE Sstylesimply__2 acTitleGlyphs;
extern DELPHI_PACKAGE Sstylesimply__3 ProgArray;
extern DELPHI_PACKAGE Sstylesimply__4 ThickArray;
extern DELPHI_PACKAGE Sstylesimply__5 acDefSections;
extern DELPHI_PACKAGE Vcl::Graphics::TIcon* AppIcon;
extern DELPHI_PACKAGE Vcl::Graphics::TIcon* AppIconLarge;
extern DELPHI_PACKAGE Sstylesimply__6 HookedComponents;
extern DELPHI_PACKAGE bool __fastcall SectionInArray(const TacIntSections &Sections, const int Value, TacSection RangeMin = (TacSection)(0x0), TacSection RangeMax = (TacSection)(0x8));
extern DELPHI_PACKAGE void __fastcall IterateForms(System::Classes::TComponent* sm, TacFormCallBack FormCallBack, int Data = 0x0);
extern DELPHI_PACKAGE void __fastcall CopyExForms(System::Classes::TComponent* SkinManager);
extern DELPHI_PACKAGE void __fastcall LockForms(System::Classes::TComponent* SkinManager);
extern DELPHI_PACKAGE void __fastcall UnLockForms(System::Classes::TComponent* SkinManager, bool Repaint = true);
extern DELPHI_PACKAGE void __fastcall AppBroadCastS(void *Message);
extern DELPHI_PACKAGE void __fastcall SendToHooked(void *Message);
extern DELPHI_PACKAGE void __fastcall IntSkinForm(Vcl::Forms::TCustomForm* Form);
extern DELPHI_PACKAGE void __fastcall IntUnSkinForm(Vcl::Forms::TCustomForm* Form);
}	/* namespace Sstylesimply */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSTYLESIMPLY)
using namespace Sstylesimply;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SstylesimplyHPP
