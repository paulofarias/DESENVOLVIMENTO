// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGradient.pas' rev: 28.00 (Windows)

#ifndef SgradientHPP
#define SgradientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Math.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgradient
{
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<Sconst::TsColor, 4> TGradColors;

typedef System::StaticArray<System::Types::TPoint, 4> TGradPoints;

enum DECLSPEC_DENUM TacSideShadowStyle : unsigned char { sssLinear };

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 PM_VERTICAL = System::Int8(0x1);
static const System::Int8 PM_DIAGONAL = System::Int8(0x2);
static const System::Int8 PM_ALL = System::Int8(0x8);
static const System::Int8 PM_OPACITY = System::Int8(0x4);
static const System::Int8 PM_TRANSPARENT = System::Int8(0x10);
static const System::Int8 PM_OVERLAY = System::Int8(0x20);
static const System::Int8 MASK_DIRECTION = System::Int8(0x3);
static const System::Int8 MASK_VALUES = System::Int8(0xc);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall MakeShadow(System::Uitypes::TColor Color, int Radius, int Offset, int BodyHeight, int BodyWidth, int BlurSize, bool MaskMode = false);
extern DELPHI_PACKAGE void __fastcall MakeSideShadow(Vcl::Graphics::TBitmap* Bmp, System::Uitypes::TColor Color, Sconst::TacSide Side, TacSideShadowStyle Style);
extern DELPHI_PACKAGE void __fastcall PaintGrad(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &aRect, const Sconst::TsGradArray Data, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintGrad(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &aRect, const System::UnicodeString Gradient)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintGradTxt(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &aRect, const Sconst::TsGradArray Data, Vcl::Graphics::TBitmap* TextureBmp, const System::Types::TRect &TextureRect, System::Byte TextureAlpha, System::Byte AlphaChannel = (System::Byte)(0xff));
extern DELPHI_PACKAGE void __fastcall PrepareGradArray(const System::UnicodeString GradientStr, Sconst::TsGradArray &GradArray);
}	/* namespace Sgradient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGRADIENT)
using namespace Sgradient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgradientHPP
