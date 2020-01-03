// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sAlphaGraph.pas' rev: 23.00 (Win32)

#ifndef SalphagraphHPP
#define SalphagraphHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <System.Math.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sMaskData.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Salphagraph
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsCorner : unsigned char { scLeftTop, scLeftBottom, scRightTop, scRightBottom };
#pragma option pop

typedef System::Set<TsCorner, TsCorner::scLeftTop, TsCorner::scRightBottom>  TsCorners;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall UpdateTransPixels(Vcl::Graphics::TBitmap* Img);
extern PACKAGE HICON __fastcall MakeIcon32(Vcl::Graphics::TBitmap* Img, bool UpdateAlphaChannell = false);
extern PACKAGE unsigned __fastcall SwapLong(unsigned Value)/* overload */;
extern PACKAGE void __fastcall SwapLong(System::PInteger P, unsigned Count)/* overload */;
extern PACKAGE void __fastcall UpdateAlpha(Vcl::Graphics::TBitmap* Img)/* overload */;
extern PACKAGE void __fastcall UpdateAlpha(Vcl::Graphics::TBitmap* Img, const System::Types::TRect &R)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall GetAPixel(const Vcl::Graphics::TBitmap* Bmp, int x, int y);
extern PACKAGE void __fastcall SetAPixel(const Vcl::Graphics::TBitmap* Bmp, int x, int y, const Sconst::TsColor Value)/* overload */;
extern PACKAGE void __fastcall SetAPixel(const Vcl::Graphics::TBitmap* Bmp, int x, int y, const System::Uitypes::TColor Value)/* overload */;
extern PACKAGE void __fastcall FillTransPixels32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &DstRect, const System::Types::TPoint &SrcPoint, int MaskIndex, System::Classes::TComponent* SkinManager, unsigned MaskPos = (unsigned)(0xd))/* overload */;
extern PACKAGE void __fastcall FillTransPixels32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &DstRect, const System::Types::TPoint &SrcPoint, int MaskIndex, Acnttypes::TacObject* CommonSkinData, unsigned MaskPos = (unsigned)(0xd))/* overload */;
extern PACKAGE void __fastcall WriteColor(const Vcl::Graphics::TBitmap* Bmp, System::WideChar * Text, bool Enabled, const System::Types::TRect &lRect, unsigned Flags, System::Uitypes::TColor Color, bool IsAnsi = false);
extern PACKAGE void __fastcall WriteColorW(const Vcl::Graphics::TBitmap* Bmp, const System::WideString Text, bool Enabled, const System::Types::TRect &lRect, unsigned Flags, System::Uitypes::TColor Color);
extern PACKAGE void __fastcall WriteText32(const Vcl::Graphics::TBitmap* Bmp, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags, int SkinIndex, int State, System::Classes::TComponent* SkinManager, bool IsAnsi = false);
extern PACKAGE void __fastcall FillDCBorder32(const Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &aRect, const int wl, const int wt, const int wr, const int wb, const System::Uitypes::TColor Color);
extern PACKAGE void __fastcall BlendColorRect(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, System::Byte Blend, System::Uitypes::TColor Color)/* overload */;
extern PACKAGE System::Uitypes::TColor __fastcall SwapColor(const System::Uitypes::TColor Color);
extern PACKAGE System::Uitypes::TColor __fastcall SwapRedBlue(const System::Uitypes::TColor Color);
extern PACKAGE void __fastcall FillRect32(const Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, const System::Uitypes::TColor Color, System::Byte Alpha = (System::Byte)(0xff));
extern PACKAGE void __fastcall FillRect32Excl(const Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, const System::Types::TRect &ExcludeR, const System::Uitypes::TColor Color, System::Byte Alpha = (System::Byte)(0xff));
extern PACKAGE void __fastcall FillAlphaRect(const Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, System::Byte Value, System::Uitypes::TColor TransparentColor = (System::Uitypes::TColor)(0x1fffffff));
extern PACKAGE void __fastcall CheckEmptyAChannel(Vcl::Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall BmpDisabledKind(const Vcl::Graphics::TBitmap* Bmp, const Sconst::TsDisabledKind DisabledKind, Vcl::Controls::TControl* Parent, const Sconst::TCacheInfo &CI, const System::Types::TPoint &Offset);
extern PACKAGE void __fastcall DrawSmallSkinRect(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, int State);
extern PACKAGE void __fastcall DrawSkinRect(Vcl::Graphics::TBitmap* aBmp, const System::Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State, const bool UpdateCorners);
extern PACKAGE void __fastcall CopyMasterRect(const System::Types::TRect &R1, const System::Types::TRect &R2, const Vcl::Graphics::TBitmap* aBmp, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall CopyByMask32(const System::Types::TRect &R1, const System::Types::TRect &R2, const Vcl::Graphics::TBitmap* Bmp1, const Vcl::Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall CopyByMask32Ex(const System::Types::TRect &R1, const System::Types::TRect &R2, Vcl::Graphics::TBitmap* Bmp1, Vcl::Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData, int Opacity);
extern PACKAGE void __fastcall DrawSkinGlyph(Vcl::Graphics::TBitmap* Bmp, const System::Types::TPoint &P, int State, int AddedTransparency, const Smaskdata::TsMaskData &MaskData, const Sconst::TCacheInfo &CI);
extern PACKAGE void __fastcall StretchBltMask(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Vcl::Graphics::TBitmap* BmpDst, Vcl::Graphics::TBitmap* BmpSrc, int MaskOffset, bool NoStdStretch = false);
extern PACKAGE void __fastcall StretchBltMask32(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Vcl::Graphics::TBitmap* BmpDst, Vcl::Graphics::TBitmap* BmpSrc, int MaskOffset, bool NoStdStretch = false);
extern PACKAGE void __fastcall StretchBltMask32Ex(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Vcl::Graphics::TBitmap* BmpDst, Vcl::Graphics::TBitmap* BmpSrc, int MaskOffset, int Opacity, bool NoStdStretch = false);
extern PACKAGE void __fastcall BlendGlyphByMask(const System::Types::TRect &R1, const System::Types::TRect &R2, Vcl::Graphics::TBitmap* Bmp1, Vcl::Graphics::TBitmap* Bmp2, int TransparencyMode, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall UpdateCorners(Scommondata::TsCommonData* SkinData, int State, TsCorners Corners = (TsCorners() << TsCorner::scLeftTop << TsCorner::scLeftBottom << TsCorner::scRightTop << TsCorner::scRightBottom ));
extern PACKAGE void __fastcall FillLongword(void *X, int Count, unsigned Value);
extern PACKAGE void __fastcall PaintItem32(int SkinIndex, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::TObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemBG32(int SkinIndex, int State, const System::Types::TRect &R, Vcl::Graphics::TBitmap* ItemBmp, System::TObject* CommonSkinData, System::Uitypes::TColor CustomColor = (System::Uitypes::TColor)(0xff00ff));
extern PACKAGE void __fastcall DrawSkinRect32(Vcl::Graphics::TBitmap* aBmp, const System::Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State);
extern PACKAGE void __fastcall DrawSkinRect32Ex(Vcl::Graphics::TBitmap* aBmp, const System::Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State, const System::Types::TRect &MaxWidths, int Opacity);

}	/* namespace Salphagraph */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SALPHAGRAPH)
using namespace Salphagraph;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SalphagraphHPP
