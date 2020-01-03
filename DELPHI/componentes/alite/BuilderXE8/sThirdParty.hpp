// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sThirdParty.pas' rev: 29.00 (Windows)

#ifndef SthirdpartyHPP
#define SthirdpartyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <acntTypes.hpp>
#include <sSkinManager.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <sBitBtn.hpp>
#include <sSpeedButton.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sthirdparty
{
//-- forward type declarations -----------------------------------------------
struct TacDrawGlyphData;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacDrawGlyphData
{
public:
	int Blend;
	int SkinIndex;
	int NumGlyphs;
	int ImageIndex;
	int CurrentState;
	bool Down;
	bool Grayed;
	bool Enabled;
	bool Reflected;
	Vcl::Graphics::TBitmap* Glyph;
	Vcl::Graphics::TBitmap* DstBmp;
	System::Types::TRect ImgRect;
	Vcl::Graphics::TCanvas* Canvas;
	System::Uitypes::TColor BGColor;
	Vcl::Imglist::TCustomImageList* Images;
	int PPI;
	Sskinmanager::TacSkinData* CommonSkinData;
	Sconst::TsDisabledGlyphKind DisabledGlyphKind;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Classes::TStringList* ThirdPartySkipForms;
extern DELPHI_PACKAGE void __fastcall (*InitDevEx)(const bool Active);
extern DELPHI_PACKAGE bool __fastcall (*CheckDevEx)(Vcl::Controls::TControl* const Control);
extern DELPHI_PACKAGE void __fastcall (*RefreshDevEx)(void);
extern DELPHI_PACKAGE int __fastcall GetImageCount(Vcl::Imglist::TCustomImageList* ImgList);
extern DELPHI_PACKAGE int __fastcall GetImageWidth(Vcl::Imglist::TCustomImageList* ImgList, int ImageIndex = 0xffffffff, int PPI = 0x60, bool UseAngle = false);
extern DELPHI_PACKAGE int __fastcall GetImageHeight(Vcl::Imglist::TCustomImageList* ImgList, int ImageIndex = 0xffffffff, int PPI = 0x60, bool UseAngle = false);
extern DELPHI_PACKAGE void __fastcall acDrawGlyphEx(const TacDrawGlyphData &DrawData);
extern DELPHI_PACKAGE void __fastcall DrawBtnGlyph(Vcl::Controls::TControl* Button, Vcl::Graphics::TCanvas* Canvas, System::Uitypes::TColor ColorTone);
extern DELPHI_PACKAGE void __fastcall CopyToolBtnGlyph(Vcl::Comctrls::TToolBar* ToolBar, Vcl::Comctrls::TToolButton* Button, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage, Vcl::Comctrls::TTBCustomDrawFlags &Flags, Vcl::Graphics::TBitmap* BtnBmp);
}	/* namespace Sthirdparty */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STHIRDPARTY)
using namespace Sthirdparty;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SthirdpartyHPP
