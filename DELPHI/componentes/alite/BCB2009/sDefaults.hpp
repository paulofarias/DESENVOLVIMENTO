// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sdefaults.pas' rev: 20.00

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

typedef StaticArray<System::UnicodeString, 23> Sdefaults__1;

//-- var, const, procedure ---------------------------------------------------
static const TacThirdPartyTypes acLastSupportedType = (TacThirdPartyTypes)(22);
static const WideChar sl_Third_Edit = (WideChar)(0x20);
static const WideChar sl_Third_Panel = (WideChar)(0x20);
#define sl_Third_Button L"TButton"
static const WideChar sl_Third_BitBtn = (WideChar)(0x20);
static const WideChar sl_Third_CheckBox = (WideChar)(0x20);
static const WideChar sl_Third_GroupBox = (WideChar)(0x20);
static const WideChar sl_Third_Grid = (WideChar)(0x20);
static const WideChar sl_Third_TreeView = (WideChar)(0x20);
static const WideChar sl_Third_ComboBox = (WideChar)(0x20);
static const WideChar sl_Third_ListView = (WideChar)(0x20);
static const WideChar sl_Third_WWEdit = (WideChar)(0x20);
static const WideChar sl_Third_GridEH = (WideChar)(0x20);
static const WideChar sl_Third_VirtualTree = (WideChar)(0x20);
static const WideChar sl_Third_PageControl = (WideChar)(0x20);
static const WideChar sl_Third_TabControl = (WideChar)(0x20);
static const WideChar sl_Third_ToolBar = (WideChar)(0x20);
static const WideChar sl_Third_StatusBar = (WideChar)(0x20);
static const WideChar sl_Third_SpeedButton = (WideChar)(0x20);
static const WideChar sl_Third_ScrollControl = (WideChar)(0x20);
static const WideChar sl_Third_UpDownBtn = (WideChar)(0x20);
static const WideChar sl_Third_ScrollBar = (WideChar)(0x20);
static const WideChar sl_Third_WebBrowser = (WideChar)(0x20);
static const WideChar sl_Third_StaticText = (WideChar)(0x20);
static const WideChar sl_Third_NativePaint = (WideChar)(0x20);
extern PACKAGE Sdefaults__1 acThirdNames;
#define DefSkinsDir L"c:\\Skins"
#define DefDisabledKind (Set<Sconst::Sconst__3, dkBlended, dkGrayed> () << dkBlended )
#define DefDisabledGlyphKind EMPTYSET
static const ShortInt DefButtonMargin = -1;
static const bool DefBoundLabelParentFont = true;
static const bool DefRepaintUpdate = false;
static const bool DefFrameAllowSkin3rdParty = true;
static const bool DefMakeSkinMenu = false;
static const bool DefSkipbsNoneForms = false;
static const bool DefShowAccelChar = true;
#define DefWeekends (Set<Comctrls::TCalDayOfWeek, dowMonday, dowLocaleDefault> () << dowSunday )
static const Sconst::TacScaleMode DefScaleMode = (Sconst::TacScaleMode)(6);
static const bool acHiddenMaximizing = false;
static const bool acAllowWorkaround1 = true;
extern PACKAGE bool acPngFirst;
extern PACKAGE bool acAllowLatestCommonDialogs;
extern PACKAGE bool acTryToSkinCommonDialogs;
extern PACKAGE double DefDisabledBlend;
extern PACKAGE System::Byte DefBlendDisabled;
extern PACKAGE int DefDisabledSaturation;

}	/* namespace Sdefaults */
using namespace Sdefaults;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SdefaultsHPP
