// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGradient.pas' rev: 22.00

#ifndef SgradientHPP
#define SgradientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgradient
{
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<Sconst::TsColor, 4> TGradColors;

typedef System::StaticArray<Types::TPoint, 4> TGradPoints;

#pragma option push -b-
enum TacSideShadowStyle { sssLinear };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt PM_VERTICAL = 0x1;
static const System::ShortInt PM_DIAGONAL = 0x2;
static const System::ShortInt PM_ALL = 0x8;
static const System::ShortInt PM_OPACITY = 0x4;
static const System::ShortInt PM_TRANSPARENT = 0x10;
static const System::ShortInt PM_OVERLAY = 0x20;
static const System::ShortInt MASK_DIRECTION = 0x3;
static const System::ShortInt MASK_VALUES = 0xc;
extern PACKAGE Graphics::TBitmap* __fastcall MakeShadow(Graphics::TColor Color, int Radius, int Offset, int BodyHeight, int BodyWidth, int BlurSize, bool MaskMode = false);
extern PACKAGE void __fastcall MakeSideShadow(Graphics::TBitmap* Bmp, Graphics::TColor Color, Sconst::TacSide Side, TacSideShadowStyle Style);
extern PACKAGE void __fastcall PaintGrad(Graphics::TBitmap* Bmp, const Types::TRect &aRect, const Sconst::TsGradArray Data, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern PACKAGE void __fastcall PaintGrad(Graphics::TBitmap* Bmp, const Types::TRect &aRect, const System::UnicodeString Gradient)/* overload */;
extern PACKAGE void __fastcall PaintGradTxt(Graphics::TBitmap* Bmp, const Types::TRect &aRect, const Sconst::TsGradArray Data, Graphics::TBitmap* TextureBmp, const Types::TRect &TextureRect, System::Byte TextureAlpha, System::Byte AlphaChannel = (System::Byte)(0xff));
extern PACKAGE void __fastcall PrepareGradArray(const System::UnicodeString GradientStr, Sconst::TsGradArray &GradArray);

}	/* namespace Sgradient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sgradient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgradientHPP
