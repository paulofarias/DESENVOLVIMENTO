// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sDefaults.pas' rev: 22.00

#ifndef SdefaultsHPP
#define SdefaultsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sdefaults
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacThirdPartyTypes { tpEdit, tpButton, tpBitBtn, tpCheckBox, tpComboBox, tpGrid, tpGroupBox, tpListView, tpPanel, tpTreeView, tpwwEdit, tpGridEh, tpVirtualTree, tpPageControl, tpTabControl, tpToolBar, tpStatusBar, tpSpeedButton, tpScrollControl, tpUpDownBtn, tpScrollBar, tpStaticText, tpNativePaint };
#pragma option pop

typedef System::StaticArray<System::UnicodeString, 23> Sdefaults__1;

//-- var, const, procedure ---------------------------------------------------
static const TacThirdPartyTypes acLastSupportedType = (TacThirdPartyTypes)(22);
static const System::WideChar sl_Third_Edit = (System::WideChar)(0x20);
static const System::WideChar sl_Third_Panel = (System::WideChar)(0x20);
#define sl_Third_Button L"TButton"
static const System::WideChar sl_Third_BitBtn = (System::WideChar)(0x20);
static const System::WideChar sl_Third_CheckBox = (System::WideChar)(0x20);
static const System::WideChar sl_Third_GroupBox = (System::WideChar)(0x20);
static const System::WideChar sl_Third_Grid = (System::WideChar)(0x20);
static const System::WideChar sl_Third_TreeView = (System::WideChar)(0x20);
static const System::WideChar sl_Third_ComboBox = (System::WideChar)(0x20);
static const System::WideChar sl_Third_ListView = (System::WideChar)(0x20);
static const System::WideChar sl_Third_WWEdit = (System::WideChar)(0x20);
static const System::WideChar sl_Third_GridEH = (System::WideChar)(0x20);
static const System::WideChar sl_Third_VirtualTree = (System::WideChar)(0x20);
static const System::WideChar sl_Third_PageControl = (System::WideChar)(0x20);
static const System::WideChar sl_Third_TabControl = (System::WideChar)(0x20);
static const System::WideChar sl_Third_ToolBar = (System::WideChar)(0x20);
static const System::WideChar sl_Third_StatusBar = (System::WideChar)(0x20);
static const System::WideChar sl_Third_SpeedButton = (System::WideChar)(0x20);
static const System::WideChar sl_Third_ScrollControl = (System::WideChar)(0x20);
static const System::WideChar sl_Third_UpDownBtn = (System::WideChar)(0x20);
static const System::WideChar sl_Third_ScrollBar = (System::WideChar)(0x20);
static const System::WideChar sl_Third_WebBrowser = (System::WideChar)(0x20);
static const System::WideChar sl_Third_StaticText = (System::WideChar)(0x20);
static const System::WideChar sl_Third_NativePaint = (System::WideChar)(0x20);
extern PACKAGE Sdefaults__1 acThirdNames;
#define DefSkinsDir L"c:\\Skins"
#define DefDisabledKind (System::Set<Sconst::Sconst__3, Sconst::Sconst__3::dkBlended, Sconst::Sconst__3::dkGrayed> () << Sconst::Sconst__3::dkBlended )
#define DefDisabledGlyphKind EMPTYSET
static const System::ShortInt DefButtonMargin = -1;
static const bool DefBoundLabelParentFont = true;
static const bool DefRepaintUpdate = false;
static const bool DefFrameAllowSkin3rdParty = true;
static const bool DefMakeSkinMenu = false;
static const bool DefSkipbsNoneForms = false;
static const bool DefShowAccelChar = true;
#define DefWeekends (System::Set<Comctrls::TCalDayOfWeek, Comctrls::TCalDayOfWeek::dowMonday, Comctrls::TCalDayOfWeek::dowLocaleDefault> () << Comctrls::TCalDayOfWeek::dowSunday )
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
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sdefaults;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SdefaultsHPP
