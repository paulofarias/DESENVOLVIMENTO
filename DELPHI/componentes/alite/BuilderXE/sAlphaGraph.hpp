// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sAlphaGraph.pas' rev: 22.00

#ifndef SalphagraphHPP
#define SalphagraphHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sMaskData.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Salphagraph
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsCorner { scLeftTop, scLeftBottom, scRightTop, scRightBottom };
#pragma option pop

typedef System::Set<TsCorner, TsCorner::scLeftTop, TsCorner::scRightBottom>  TsCorners;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall UpdateTransPixels(Graphics::TBitmap* Img);
extern PACKAGE HICON __fastcall MakeIcon32(Graphics::TBitmap* Img, bool UpdateAlphaChannell = false);
extern PACKAGE unsigned __fastcall SwapLong(unsigned Value)/* overload */;
extern PACKAGE void __fastcall SwapLong(System::PInteger P, unsigned Count)/* overload */;
extern PACKAGE void __fastcall UpdateAlpha(Graphics::TBitmap* Img)/* overload */;
extern PACKAGE void __fastcall UpdateAlpha(Graphics::TBitmap* Img, const Types::TRect &R)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall GetAPixel(const Graphics::TBitmap* Bmp, int x, int y);
extern PACKAGE void __fastcall SetAPixel(const Graphics::TBitmap* Bmp, int x, int y, const Sconst::TsColor Value)/* overload */;
extern PACKAGE void __fastcall SetAPixel(const Graphics::TBitmap* Bmp, int x, int y, const Graphics::TColor Value)/* overload */;
extern PACKAGE void __fastcall FillTransPixels32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Types::TRect &DstRect, const Types::TPoint &SrcPoint, int MaskIndex, Classes::TComponent* SkinManager, unsigned MaskPos = (unsigned)(0xd))/* overload */;
extern PACKAGE void __fastcall FillTransPixels32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Types::TRect &DstRect, const Types::TPoint &SrcPoint, int MaskIndex, Acnttypes::TacObject* CommonSkinData, unsigned MaskPos = (unsigned)(0xd))/* overload */;
extern PACKAGE void __fastcall WriteColor(const Graphics::TBitmap* Bmp, System::WideChar * Text, bool Enabled, const Types::TRect &lRect, unsigned Flags, Graphics::TColor Color, bool IsAnsi = false);
extern PACKAGE void __fastcall WriteColorW(const Graphics::TBitmap* Bmp, const System::WideString Text, bool Enabled, const Types::TRect &lRect, unsigned Flags, Graphics::TColor Color);
extern PACKAGE void __fastcall WriteText32(const Graphics::TBitmap* Bmp, System::WideChar * Text, bool Enabled, Types::TRect &aRect, unsigned Flags, int SkinIndex, int State, Classes::TComponent* SkinManager, bool IsAnsi = false);
extern PACKAGE void __fastcall FillDCBorder32(const Graphics::TBitmap* Bmp, const Types::TRect &aRect, const int wl, const int wt, const int wr, const int wb, const Graphics::TColor Color);
extern PACKAGE void __fastcall BlendColorRect(Graphics::TBitmap* Bmp, const Types::TRect &R, System::Byte Blend, Graphics::TColor Color)/* overload */;
extern PACKAGE Graphics::TColor __fastcall SwapColor(const Graphics::TColor Color);
extern PACKAGE Graphics::TColor __fastcall SwapRedBlue(const Graphics::TColor Color);
extern PACKAGE void __fastcall FillRect32(const Graphics::TBitmap* Bmp, const Types::TRect &R, const Graphics::TColor Color, System::Byte Alpha = (System::Byte)(0xff));
extern PACKAGE void __fastcall FillRect32Excl(const Graphics::TBitmap* Bmp, const Types::TRect &R, const Types::TRect &ExcludeR, const Graphics::TColor Color, System::Byte Alpha = (System::Byte)(0xff));
extern PACKAGE void __fastcall FillAlphaRect(const Graphics::TBitmap* Bmp, const Types::TRect &R, System::Byte Value, Graphics::TColor TransparentColor = (Graphics::TColor)(0x1fffffff));
extern PACKAGE void __fastcall CheckEmptyAChannel(Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall BmpDisabledKind(const Graphics::TBitmap* Bmp, const Sconst::TsDisabledKind DisabledKind, Controls::TControl* Parent, const Sconst::TCacheInfo &CI, const Types::TPoint &Offset);
extern PACKAGE void __fastcall DrawSmallSkinRect(Graphics::TBitmap* Bmp, const Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, int State);
extern PACKAGE void __fastcall DrawSkinRect(Graphics::TBitmap* aBmp, const Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State, const bool UpdateCorners);
extern PACKAGE void __fastcall CopyMasterRect(const Types::TRect &R1, const Types::TRect &R2, const Graphics::TBitmap* aBmp, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall CopyByMask32(const Types::TRect &R1, const Types::TRect &R2, const Graphics::TBitmap* Bmp1, const Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall CopyByMask32Ex(const Types::TRect &R1, const Types::TRect &R2, Graphics::TBitmap* Bmp1, Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData, int Opacity);
extern PACKAGE void __fastcall DrawSkinGlyph(Graphics::TBitmap* Bmp, const Types::TPoint &P, int State, int AddedTransparency, const Smaskdata::TsMaskData &MaskData, const Sconst::TCacheInfo &CI);
extern PACKAGE void __fastcall StretchBltMask(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Graphics::TBitmap* BmpDst, Graphics::TBitmap* BmpSrc, int MaskOffset, bool NoStdStretch = false);
extern PACKAGE void __fastcall StretchBltMask32(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Graphics::TBitmap* BmpDst, Graphics::TBitmap* BmpSrc, int MaskOffset, bool NoStdStretch = false);
extern PACKAGE void __fastcall StretchBltMask32Ex(int DstX1, int DstY1, int Dst_Width, int Dst_Height, int SrcX1, int SrcY1, int Src_Width, int Src_Height, Graphics::TBitmap* BmpDst, Graphics::TBitmap* BmpSrc, int MaskOffset, int Opacity, bool NoStdStretch = false);
extern PACKAGE void __fastcall BlendGlyphByMask(const Types::TRect &R1, const Types::TRect &R2, Graphics::TBitmap* Bmp1, Graphics::TBitmap* Bmp2, int TransparencyMode, const Smaskdata::TsMaskData &MaskData);
extern PACKAGE void __fastcall UpdateCorners(Scommondata::TsCommonData* SkinData, int State, TsCorners Corners = (TsCorners() << TsCorner::scLeftTop << TsCorner::scLeftBottom << TsCorner::scRightTop << TsCorner::scRightBottom ));
extern PACKAGE void __fastcall FillLongword(void *X, int Count, unsigned Value);
extern PACKAGE void __fastcall PaintItem32(int SkinIndex, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, System::TObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemBG32(int SkinIndex, int State, const Types::TRect &R, Graphics::TBitmap* ItemBmp, System::TObject* CommonSkinData, Graphics::TColor CustomColor = (Graphics::TColor)(0xff00ff));
extern PACKAGE void __fastcall DrawSkinRect32(Graphics::TBitmap* aBmp, const Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State);
extern PACKAGE void __fastcall DrawSkinRect32Ex(Graphics::TBitmap* aBmp, const Types::TRect &aRect, const Sconst::TCacheInfo &ci, const Smaskdata::TsMaskData &MaskData, const int State, const Types::TRect &MaxWidths, int Opacity);

}	/* namespace Salphagraph */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Salphagraph;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SalphagraphHPP
