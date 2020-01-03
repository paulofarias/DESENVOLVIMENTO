// CodeGear C++Builder
// Copyright (c) 1995, 2012 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acgpUtils.pas' rev: 24.00 (Windows)

#ifndef AcgputilsHPP
#define AcgputilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sGradient.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acgputils
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacPointF
{
public:
	float X;
	float Y;
};


typedef TacPointF *PacPointF;

typedef System::DynamicArray<TacPointF> TacGpPoints;

typedef TacGpPoints *PacGpPoints;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall acgpDrawEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern DELPHI_PACKAGE void __fastcall acgpDrawLine(HDC DC, float X1, float Y1, float X2, float Y2, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern DELPHI_PACKAGE void __fastcall acgpFillEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall acgpDrawArc(HDC DC, float X, float Y, float Width, float Height, float StartAngle, float SweepAngle, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern DELPHI_PACKAGE void __fastcall acgpStretchRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int SrcX, int SrcY, int SrcWidth, int SrcHeight)/* overload */;
extern DELPHI_PACKAGE void __fastcall acgpStretchRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &DstRect _ANNOT_ATTR_NC, const System::Types::TRect &SrcRect _ANNOT_ATTR_NC)/* overload */;
extern DELPHI_PACKAGE void __fastcall acgpBlur(Vcl::Graphics::TBitmap* Bmp, float Radius);
extern DELPHI_PACKAGE void * __fastcall acgpCreateLineBrush(HDC DC, const System::Types::TPoint &Point1 _ANNOT_ATTR_NC, const System::Types::TPoint &Point2 _ANNOT_ATTR_NC, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpFillRectangle(HDC DC, void * Brush, float X, float Y, float Width, float Height);
extern DELPHI_PACKAGE void __fastcall acgpGradientRing(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, float PenWidth = 1.000000E+00);
extern DELPHI_PACKAGE void __fastcall acgpGradientEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangleH(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangleV(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangle(HDC DC, float X, float Y, float Width, float Height, System::Types::TPoint const *Points, Sconst::TsColor const *Colors, const Sconst::TsColor CenterColor);
extern DELPHI_PACKAGE System::UnicodeString __fastcall acgpGetFontName(const System::UnicodeString FileName);
extern DELPHI_PACKAGE void __fastcall acgpDrawPolygon(HDC DC, System::Uitypes::TColor Color, PacPointF Points, int PointCount, int LineWidth = 0x1);
extern DELPHI_PACKAGE void __fastcall acgpDrawBeziers(HDC DC, System::Uitypes::TColor Color, PacPointF Points, int PointCount, int LineWidth = 0x1);
extern DELPHI_PACKAGE void __fastcall acgpFillPolygon(HDC DC, System::Uitypes::TColor Color, PacPointF Points, int PointCount);
extern DELPHI_PACKAGE void __fastcall acgpRotatePoints(PacGpPoints ARect, const TacPointF &ACenter, int ACount, int Angle);
extern DELPHI_PACKAGE void __fastcall acgpDrawRotatedBitmap(HDC DC, Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &R _ANNOT_ATTR_NC, int Angle);
}	/* namespace Acgputils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACGPUTILS)
using namespace Acgputils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcgputilsHPP
