// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sthirdparty.pas' rev: 10.00

#ifndef SthirdpartyHPP
#define SthirdpartyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Sbitbtn.hpp>	// Pascal unit
#include <Sspeedbutton.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sthirdparty
{
//-- type declarations -------------------------------------------------------
struct TacDrawGlyphData
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
	Graphics::TBitmap* Glyph;
	Graphics::TBitmap* DstBmp;
	#pragma pack(push,1)
	Types::TRect ImgRect;
	#pragma pack(pop)
	Graphics::TCanvas* Canvas;
	Graphics::TColor BGColor;
	Imglist::TCustomImageList* Images;
	int PPI;
	Sskinmanager::TacSkinData* CommonSkinData;
	Sconst::TsDisabledGlyphKind DisabledGlyphKind;
} ;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Classes::TStringList* ThirdPartySkipForms;
extern PACKAGE void __fastcall (*InitDevEx)(const bool Active);
extern PACKAGE bool __fastcall (*CheckDevEx)(const Controls::TControl* Control);
extern PACKAGE void __fastcall (*RefreshDevEx)(void);
extern PACKAGE int __fastcall GetImageCount(Imglist::TCustomImageList* ImgList);
extern PACKAGE int __fastcall GetImageWidth(Imglist::TCustomImageList* ImgList, int ImageIndex = 0xffffffff, int PPI = 0x60, bool UseAngle = false);
extern PACKAGE int __fastcall GetImageHeight(Imglist::TCustomImageList* ImgList, int ImageIndex = 0xffffffff, int PPI = 0x60, bool UseAngle = false);
extern PACKAGE void __fastcall acDrawGlyphEx(const TacDrawGlyphData &DrawData);
extern PACKAGE void __fastcall DrawBtnGlyph(Controls::TControl* Button, Graphics::TCanvas* Canvas, Graphics::TColor ColorTone);
extern PACKAGE void __fastcall CopyToolBtnGlyph(Comctrls::TToolBar* ToolBar, Comctrls::TToolButton* Button, Comctrls::TCustomDrawState State, Comctrls::TCustomDrawStage Stage, Comctrls::TTBCustomDrawFlags &Flags, Graphics::TBitmap* BtnBmp);

}	/* namespace Sthirdparty */
using namespace Sthirdparty;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sthirdparty
