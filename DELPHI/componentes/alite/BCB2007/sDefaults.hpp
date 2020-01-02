// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sdefaults.pas' rev: 11.00

#ifndef SdefaultsHPP
#define SdefaultsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sdefaults
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacThirdPartyTypes { tpEdit, tpButton, tpBitBtn, tpCheckBox, tpComboBox, tpGrid, tpGroupBox, tpListView, tpPanel, tpTreeView, tpwwEdit, tpGridEh, tpVirtualTree, tpPageControl, tpTabControl, tpToolBar, tpStatusBar, tpSpeedButton, tpScrollControl, tpUpDownBtn, tpScrollBar, tpStaticText, tpNativePaint };
#pragma option pop

typedef AnsiString sDefaults__1[23];

//-- var, const, procedure ---------------------------------------------------
static const TacThirdPartyTypes acLastSupportedType = (TacThirdPartyTypes)(22);
static const char sl_Third_Edit = '\x20';
static const char sl_Third_Panel = '\x20';
#define sl_Third_Button "TButton"
static const char sl_Third_BitBtn = '\x20';
static const char sl_Third_CheckBox = '\x20';
static const char sl_Third_GroupBox = '\x20';
static const char sl_Third_Grid = '\x20';
static const char sl_Third_TreeView = '\x20';
static const char sl_Third_ComboBox = '\x20';
static const char sl_Third_ListView = '\x20';
static const char sl_Third_WWEdit = '\x20';
static const char sl_Third_GridEH = '\x20';
static const char sl_Third_VirtualTree = '\x20';
static const char sl_Third_PageControl = '\x20';
static const char sl_Third_TabControl = '\x20';
static const char sl_Third_ToolBar = '\x20';
static const char sl_Third_StatusBar = '\x20';
static const char sl_Third_SpeedButton = '\x20';
static const char sl_Third_ScrollControl = '\x20';
static const char sl_Third_UpDownBtn = '\x20';
static const char sl_Third_ScrollBar = '\x20';
static const char sl_Third_WebBrowser = '\x20';
static const char sl_Third_StaticText = '\x20';
static const char sl_Third_NativePaint = '\x20';
extern PACKAGE AnsiString acThirdNames[23];
#define DefSkinsDir "c:\\Skins"
#define DefDisabledKind (Set<Sconst::sConst__3, Sconst::dkBlended, Sconst::dkGrayed> () << Sconst::dkBlended )
#define DefDisabledGlyphKind EMPTYSET
static const Shortint DefButtonMargin = -1;
static const bool DefBoundLabelParentFont = true;
static const bool DefRepaintUpdate = false;
static const bool DefFrameAllowSkin3rdParty = true;
static const bool DefMakeSkinMenu = false;
static const bool DefSkipbsNoneForms = false;
static const bool DefShowAccelChar = true;
#define DefWeekends (Set<Comctrls::TCalDayOfWeek, Comctrls::dowMonday, Comctrls::dowLocaleDefault> () << Comctrls::dowSunday )
static const Sconst::TacScaleMode DefScaleMode = (Sconst::TacScaleMode)(6);
static const bool acHiddenMaximizing = false;
static const bool acAllowWorkaround1 = true;
extern PACKAGE bool acPngFirst;
extern PACKAGE bool acAllowLatestCommonDialogs;
extern PACKAGE bool acTryToSkinCommonDialogs;
extern PACKAGE double DefDisabledBlend;
extern PACKAGE Byte DefBlendDisabled;
extern PACKAGE int DefDisabledSaturation;

}	/* namespace Sdefaults */
using namespace Sdefaults;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sdefaults
