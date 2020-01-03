// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGraphUtils.pas' rev: 27.00 (Windows)

#ifndef SgraphutilsHPP
#define SgraphutilsHPP

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
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.Math.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <sMaskData.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <Vcl.Imaging.jpeg.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgraphutils
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TsHSV
{
public:
	int h;
	double s;
	double v;
};


enum DECLSPEC_DENUM TFilterType : unsigned char { ftBox, ftTriangle, ftHermite, ftBell, ftSpline, ftLanczos3, ftMitchell };

typedef System::StaticArray<System::Sysutils::PByteArray, 1000001> TByteArrays;

typedef TByteArrays *PByteArrays;

typedef System::Int8 TKernelSize;

typedef void __fastcall (*TacChangeColor)(Sconst::TsColor_ &Color, const int Param);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MaxKernelSize = System::Int8(0x10);
extern DELPHI_PACKAGE int FCheckWidth;
extern DELPHI_PACKAGE int FCheckHeight;
extern DELPHI_PACKAGE NativeUInt User32Lib;
extern DELPHI_PACKAGE NativeUInt Gdi32Lib;
extern DELPHI_PACKAGE bool __stdcall (*SetLayeredWindowAttributes)(NativeUInt Hwnd, unsigned crKey, System::Byte bAlpha, unsigned dwFlags);
extern DELPHI_PACKAGE bool __stdcall (*UpdateLayeredWindow)(NativeUInt Handle, HDC hdcDest, System::Types::PPoint pptDst, System::Types::PSize _psize, HDC hdcSrc, System::Types::PPoint pptSrc, unsigned crKey, Winapi::Windows::PBlendFunction pblend, unsigned dwFlags);
extern DELPHI_PACKAGE unsigned __stdcall (*SetLayout)(HDC hdc, unsigned dwLayout);
extern DELPHI_PACKAGE unsigned __stdcall (*GetLayout)(HDC hdc);
extern DELPHI_PACKAGE void __fastcall SetFontSmoothing(Vcl::Graphics::TFont* AFont);
extern DELPHI_PACKAGE void __fastcall CopyBmp(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp);
extern DELPHI_PACKAGE bool __fastcall InitLine(Vcl::Graphics::TBitmap* Bmp, void * &Line0, int &Delta);
extern DELPHI_PACKAGE void __fastcall DrawCloseBtn(HDC DC, const System::Types::TRect &R, int State);
extern DELPHI_PACKAGE void __fastcall DrawColorArrow(Vcl::Graphics::TCanvas* const Canvas, const System::Uitypes::TColor Color, const System::Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawColorArrow(Vcl::Graphics::TBitmap* const aBmp, const System::Uitypes::TColor Color, const System::Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawArrow(Vcl::Graphics::TBitmap* const aBmp, const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawArrow(HDC DC, const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern DELPHI_PACKAGE HFONT __fastcall MakeAngledFont(HDC DC, Vcl::Graphics::TFont* Font, int Orient);
extern DELPHI_PACKAGE int __fastcall CheckBoxWidth(Acnttypes::TacObject* const SkinData, const bool SmallGlyphs = true);
extern DELPHI_PACKAGE int __fastcall CheckBoxHeight(Acnttypes::TacObject* const SkinData, const bool SmallGlyphs = true);
extern DELPHI_PACKAGE void __fastcall acDrawCheck(const System::Types::TRect &R, const Vcl::Stdctrls::TCheckBoxState AState, const bool AEnabled, Vcl::Graphics::TBitmap* const Bmp, const Sconst::TCacheInfo &CI, System::TObject* const CommonSkinData, const bool SmallGlyphs = true, int CtrlState = 0x0);
extern DELPHI_PACKAGE void __fastcall DrawBmp(Vcl::Graphics::TCanvas* ACanvas, Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, bool Reflected);
extern DELPHI_PACKAGE HICON __fastcall MakeCompIcon(Vcl::Graphics::TBitmap* Img);
extern DELPHI_PACKAGE void __fastcall ChangeBitmapPixels(Vcl::Graphics::TBitmap* Bmp, TacChangeColor ChangeProc, int Param, System::Uitypes::TColor SkipColor);
extern DELPHI_PACKAGE void __fastcall ChangeColorBrightness(Sconst::TsColor_ &Prop, const int Param);
extern DELPHI_PACKAGE void __fastcall ChangeColorSaturation(Sconst::TsColor_ &Prop, const int Param);
extern DELPHI_PACKAGE void __fastcall ChangeColorHUE(Sconst::TsColor_ &Prop, const int Param);
extern DELPHI_PACKAGE void __fastcall ChangeColorTone(Sconst::TsColor_ &Prop, const int Param);
extern DELPHI_PACKAGE void __fastcall MakeAlphaPixel(Sconst::TsColor_ &Prop, const int Param);
extern DELPHI_PACKAGE bool __fastcall acLayered(void);
extern DELPHI_PACKAGE int __fastcall SwapInteger(const int i);
extern DELPHI_PACKAGE Sconst::TsColor_ __fastcall ChangeTone(const Sconst::TsColor_ Color, const Sconst::TsColor_RGB Tone)/* overload */;
extern DELPHI_PACKAGE void __fastcall acSetLayout(HDC hdc, unsigned dwLayout);
extern DELPHI_PACKAGE unsigned __fastcall acGetLayout(HDC hdc);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeTone(const System::Uitypes::TColor Color, const System::Uitypes::TColor Tone)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeBrightness(const System::Uitypes::TColor Color, const int Delta);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeSaturation(const System::Uitypes::TColor Color, const int Delta)/* overload */;
extern DELPHI_PACKAGE Sconst::TsColor_ __fastcall ChangeSaturation(const int Delta, const Sconst::TsColor_ Color)/* overload */;
extern DELPHI_PACKAGE Sconst::TsColor __fastcall Hsv2Rgb(double h, double s, double v);
extern DELPHI_PACKAGE TsHSV __fastcall Rgb2Hsv(Sconst::TsColor C);
extern DELPHI_PACKAGE Sconst::TsColor_ __fastcall ChangeHue(const int Delta, Sconst::TsColor_ C)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall ChangeHue(const int Delta, const System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall HSVtoRGB(const double H, const double S, const double V, double &R, double &G, double &B);
extern DELPHI_PACKAGE void __fastcall RGBToHSV(const double R, const double G, const double B, double &H, double &S, double &V);
extern DELPHI_PACKAGE void __fastcall GetRgnFromBmp(HRGN &rgn, Vcl::Graphics::TBitmap* MaskBmp, System::Uitypes::TColor TransColor);
extern DELPHI_PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, const NativeUInt Handle, bool aPleaseDraw = false)/* overload */;
extern DELPHI_PACKAGE Sconst::TCacheInfo __fastcall BGInfoToCI(const Sconst::PacBGInfo BGInfo);
extern DELPHI_PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, Vcl::Controls::TControl* const Control, bool aPleaseDraw = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall AddRgnBmp(Acnttypes::TRects &AOR, Vcl::Graphics::TBitmap* MaskBmp, Sconst::TsColor TransColor);
extern DELPHI_PACKAGE void __fastcall AddRgn(Acnttypes::TRects &AOR, int Width, const Smaskdata::TsMaskData &MaskData, int VertOffset, bool Bottom, int iPadding = 0x0);
extern DELPHI_PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, System::Uitypes::TColor CustomColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, System::Uitypes::TColor CustomColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, const Smaskdata::TsMaskData &md)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, HDC DC, System::Classes::TComponent* SkinManager)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, HDC DC, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItemBG(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern DELPHI_PACKAGE int __fastcall PaintSection(Vcl::Graphics::TBitmap* const Bmp, const System::UnicodeString Section, const System::UnicodeString SecondSection, const int State, Acnttypes::TacObject* const CommonSkinData, const System::Types::TPoint &ParentOffset, const System::Uitypes::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall PaintSection(Vcl::Graphics::TBitmap* const Bmp, int SectionIndex, const int SecondIndex, const int State, Acnttypes::TacObject* const CommonSkinData, const System::Types::TPoint &ParentOffset, const System::Uitypes::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall PaintItem(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, bool UpdateCorners, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall PaintSkinControl(Scommondata::TsCommonData* const SkinData, Vcl::Controls::TControl* const Parent, const bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* const ItemBmp, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0);
extern DELPHI_PACKAGE void __fastcall CopyChannel32(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, const int Channel)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyChannel32(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, const int Channel, const System::Types::TRect &DstRect, const System::Types::TRect &SrcRect)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyChannel(Vcl::Graphics::TBitmap* const Bmp32, Vcl::Graphics::TBitmap* const Bmp8, const int Channel, const bool From32To8);
extern DELPHI_PACKAGE void __fastcall PaintControlByTemplate(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, const System::Types::TRect &DstRect, const System::Types::TRect &SrcRect, const System::Types::TRect &BorderWidths, const System::Types::TRect &BorderMaxWidths, const System::Types::TRect &DrawModes, const bool StretchCenter, bool FillCenter = true);
extern DELPHI_PACKAGE void __fastcall DrawGlyphEx(Vcl::Graphics::TBitmap* Glyph, Vcl::Graphics::TBitmap* DstBmp, const System::Types::TRect &R, int NumGlyphs, bool Enabled, Sconst::TsDisabledGlyphKind DisabledGlyphKind, int State, int Blend, bool Down = false, bool Reflected = false);
extern DELPHI_PACKAGE void __fastcall FillDC(HDC DC, const System::Types::TRect &aRect, const System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall FillDCBorder(const HDC DC, const System::Types::TRect &aRect, const int wl, const int wt, const int wr, const int wb, const System::Uitypes::TColor Color);
extern DELPHI_PACKAGE void __fastcall BitBltBorder(const HDC DestDC, const int X, const int Y, const int Width, const int Height, const HDC SrcDC, const int XSrc, const int YSrc, int WidthLeft, int WidthTop = 0x0, int WidthRight = 0x0, int WidthBottom = 0x0);
extern DELPHI_PACKAGE void __fastcall ExcludeControls(const HDC DC, Vcl::Controls::TWinControl* const Ctrl, const int OffsetX, const int OffsetY);
extern DELPHI_PACKAGE void __fastcall GrayScale(Vcl::Graphics::TBitmap* Bmp);
extern DELPHI_PACKAGE void __fastcall GrayScaleTrans(Vcl::Graphics::TBitmap* Bmp, const Sconst::TsColor TransColor);
extern DELPHI_PACKAGE void __fastcall PaintTransBG(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, int Size);
extern DELPHI_PACKAGE void __fastcall SetBmp32Pixels(Vcl::Graphics::TBitmap* &Bmp);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CutText(Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text, int MaxLength);
extern DELPHI_PACKAGE void __fastcall WriteText(Vcl::Graphics::TCanvas* Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags);
extern DELPHI_PACKAGE void __fastcall WriteTextOnDC(HDC DC, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags);
extern DELPHI_PACKAGE int __fastcall acDrawText(HDC hDC, const System::UnicodeString Text, System::Types::TRect &lpRect, unsigned uFormat);
extern DELPHI_PACKAGE bool __fastcall acExtTextOut(HDC DC, int X, int Y, int Options, System::Types::PRect Rect, System::WideChar * Str, int Count, System::PInteger Dx);
extern DELPHI_PACKAGE int __fastcall acTextWidth(Vcl::Graphics::TCanvas* const Canvas, const System::UnicodeString Text);
extern DELPHI_PACKAGE int __fastcall acTextHeight(Vcl::Graphics::TCanvas* const Canvas, const System::UnicodeString Text);
extern DELPHI_PACKAGE System::Types::TSize __fastcall acTextExtent(Vcl::Graphics::TCanvas* const Canvas, const System::UnicodeString Text);
extern DELPHI_PACKAGE void __fastcall acTextRect(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &Rect, int X, int Y, const System::UnicodeString Text);
extern DELPHI_PACKAGE BOOL __fastcall acGetTextExtent(const HDC DC, const System::UnicodeString Str, System::Types::TSize &Size, HFONT AFont = (HFONT)(0x0));
extern DELPHI_PACKAGE void __fastcall acDrawGlowForText(Vcl::Graphics::TBitmap* const DstBmp, System::WideChar * Text, const System::Types::TRect &aRect, unsigned Flags, unsigned Side, int BlurSize, System::Uitypes::TColor Color, Vcl::Graphics::TBitmap* &MaskBmp);
extern DELPHI_PACKAGE void __fastcall acPaintLine(HDC DC, int X1, int Y1, int X2, int Y2);
extern DELPHI_PACKAGE void __fastcall Blur8(Vcl::Graphics::TBitmap* Bmp, double radius);
extern DELPHI_PACKAGE void __fastcall QBlur(Vcl::Graphics::TBitmap* Bmp);
extern DELPHI_PACKAGE void __fastcall acWriteTextEx(Vcl::Graphics::TCanvas* const Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags, Scommondata::TsCommonData* const SkinData, const bool Hot, System::TObject* const SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall acWriteTextEx(Vcl::Graphics::TCanvas* const Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags, const int SkinIndex, const bool Hot, System::TObject* const SkinManager = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall acWriteText(Vcl::Graphics::TCanvas* const Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags);
extern DELPHI_PACKAGE void __fastcall WriteTextEx(Vcl::Graphics::TCanvas* const Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags, int SkinIndex, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall WriteTextEx(Vcl::Graphics::TCanvas* const Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags, Scommondata::TsCommonData* SkinData, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall FadeBmp(Vcl::Graphics::TBitmap* FadedBmp, const System::Types::TRect &aRect, int Transparency, const Sconst::TsColor Color, int Blur, int Radius);
extern DELPHI_PACKAGE void __fastcall BlendTransRectangle(Vcl::Graphics::TBitmap* Dst, int X, int Y, Vcl::Graphics::TBitmap* Src, const System::Types::TRect &aRect, System::Byte Blend, System::Uitypes::TColor TransColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern DELPHI_PACKAGE void __fastcall BlendTransBitmap(Vcl::Graphics::TBitmap* Bmp, System::Byte Blend, const Sconst::TsColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall BlendBmpByMask(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp, const Sconst::TsColor BlendColor);
extern DELPHI_PACKAGE void __fastcall SumBitmaps(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp, const System::Byte AlphaValue);
extern DELPHI_PACKAGE void __fastcall SumBitmapsToDst(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp1, Vcl::Graphics::TBitmap* SrcBmp2, const System::Byte AlphaValue);
extern DELPHI_PACKAGE void __fastcall PaintBmp32(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp);
extern DELPHI_PACKAGE void __fastcall SumBmpRect(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, const System::Byte AlphaValue, const System::Types::TRect &SrcRect, const System::Types::TPoint &DstPoint);
extern DELPHI_PACKAGE void __fastcall PaintBmpRect32(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, const System::Types::TRect &SrcRect, const System::Types::TPoint &DstPoint, System::Byte SrcBlendValue = (System::Byte)(0xff));
extern DELPHI_PACKAGE void __fastcall StretchBmpRect32(Vcl::Graphics::TBitmap* const DstBmp, int XDst, int YDst, int DstWidth, int DstHeight, Vcl::Graphics::TBitmap* SrcBmp, int XSrc, int YSrc, int SrcWidth, int SrcHeight, System::Byte SrcBlendValue = (System::Byte)(0xff));
extern DELPHI_PACKAGE void __fastcall CopyByMask(const System::Types::TRect &R1, const System::Types::TRect &R2, Vcl::Graphics::TBitmap* const Bmp1, Vcl::Graphics::TBitmap* const Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyBmp32(const System::Types::TRect &R1, const System::Types::TRect &R2, Vcl::Graphics::TBitmap* const Bmp1, Vcl::Graphics::TBitmap* const Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, System::Uitypes::TColor GrayedColor, const int Blend, const bool Reflected);
extern DELPHI_PACKAGE void __fastcall CopyByMask(const System::Types::TRect &R1, const System::Types::TRect &R2, Vcl::Graphics::TBitmap* const Bmp1, Vcl::Graphics::TBitmap* const Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, const Smaskdata::TsMaskData &MaskData)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyTransBitmaps(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, Sconst::TsColor TransColor);
extern DELPHI_PACKAGE void __fastcall CopyTransRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, const System::Types::TRect &SrcRect, System::Uitypes::TColor TransColor, const Sconst::TCacheInfo &CI, bool UpdateTrans);
extern DELPHI_PACKAGE void __fastcall CopyTransRectA(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, const System::Types::TRect &SrcRect, System::Uitypes::TColor TransColor, const Sconst::TCacheInfo &CI, const int Blend = 0x0);
extern DELPHI_PACKAGE void __fastcall SumBitmapsByMask(Vcl::Graphics::TBitmap* &DstBmp, Vcl::Graphics::TBitmap* &Src1, Vcl::Graphics::TBitmap* &Src2, Vcl::Graphics::TBitmap* MskBmp, System::Word Percent = (System::Word)(0x0));
extern DELPHI_PACKAGE void __fastcall SumByMaskWith32(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const SrcBmp, Vcl::Graphics::TBitmap* const MskBmp, const System::Types::TRect &aRect);
extern DELPHI_PACKAGE void __fastcall ColorizeByMask(Vcl::Graphics::TBitmap* const DstBmp, Vcl::Graphics::TBitmap* const MskBmp, const System::Types::TPoint &TopLeft, System::Uitypes::TColor Color, System::Uitypes::TColor BGColor);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall Makerotated90(Vcl::Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall sMakerotated90(Vcl::Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern DELPHI_PACKAGE void __fastcall BitBltRotated(HDC DC, Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TPoint &ACenter, int Angle);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmpLike(Vcl::Graphics::TBitmap* const Bmp);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateAlphaBmp(Vcl::Graphics::TBitmap* const SrcMaskedBmp, const System::Types::TRect &SrcRect);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateMaskFromAlpha(Vcl::Graphics::TBitmap* const SrcAlphaBmp);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const int Width = 0x0, const int Height = 0x0)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const System::Types::TRect &R)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const System::Types::TSize &Size)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(Vcl::Graphics::TBitmap* const Bmp)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(Vcl::Controls::TControl* const Ctrl)/* overload */;
extern DELPHI_PACKAGE Sconst::TsColor __fastcall AverageColor(const Sconst::TsColor ColorBegin, const Sconst::TsColor ColorEnd)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall AverageColor(const System::Uitypes::TColor ColorBegin, const System::Uitypes::TColor ColorEnd)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall BlendColors(const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Byte BlendOf1);
extern DELPHI_PACKAGE void __fastcall DrawRectangleOnDC(HDC DC, System::Types::TRect &R, System::Uitypes::TColor ColorTop, System::Uitypes::TColor ColorBottom, int &Width);
extern DELPHI_PACKAGE void __fastcall TileBitmap(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &aRect, Vcl::Graphics::TGraphic* const Graphic)/* overload */;
extern DELPHI_PACKAGE void __fastcall TileBitmap(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &aRect, Vcl::Graphics::TGraphic* Graphic, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall TileMasked(Vcl::Graphics::TBitmap* Bmp, System::Types::TRect &aRect, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0xa));
extern DELPHI_PACKAGE void __fastcall CalcButtonLayout(const System::Types::TRect &Client, const System::Types::TPoint &GlyphSize, const System::Types::TSize &TextRectSize, Vcl::Buttons::TButtonLayout Layout, System::Classes::TAlignment Alignment, int AMargin, int Spacing, System::Types::TPoint &GlyphPos, System::Types::TRect &TextBounds, int BiDiFlags, System::Classes::TVerticalAlignment VerticalAlignment = (System::Classes::TVerticalAlignment)(0x2));
extern DELPHI_PACKAGE int __fastcall GetFontHeight(HWND hFont, bool NoLeading = false);
extern DELPHI_PACKAGE bool __fastcall FontSizeIsNear(Vcl::Graphics::TFont* const BaseFont, const System::UnicodeString TestText, const System::UnicodeString FontName);
extern DELPHI_PACKAGE System::Types::TSize __fastcall GetStringSize(HGDIOBJ hFont, const System::UnicodeString Text, unsigned Flags = (unsigned)(0x0), bool WrapText = false, int MaxWidth = 0x7fffffff, bool IsItalic = false);
extern DELPHI_PACKAGE void __fastcall LoadBmpFromPngFile(Vcl::Graphics::TBitmap* Bmp, const System::UnicodeString FileName);
extern DELPHI_PACKAGE void __fastcall LoadBmpFromPngStream(Vcl::Graphics::TBitmap* Bmp, System::Classes::TStream* Stream);
extern DELPHI_PACKAGE void __fastcall FocusRect(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, System::Uitypes::TColor LightColor = (System::Uitypes::TColor)(0xff00000f), System::Uitypes::TColor DarkColor = (System::Uitypes::TColor)(0x0));
extern DELPHI_PACKAGE bool __fastcall FontsEqual(Vcl::Graphics::TFont* const Font1, Vcl::Graphics::TFont* const Font2);
extern DELPHI_PACKAGE void __fastcall acPaintStdBtn(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool AEnabled, bool AFocusRect, int AState);
extern DELPHI_PACKAGE void __fastcall Stretch(Vcl::Graphics::TBitmap* const Src, Vcl::Graphics::TBitmap* const Dst, const int DstWidth, const int DstHeight, const TFilterType Filter);
extern DELPHI_PACKAGE double __fastcall acCos(int Angle);
extern DELPHI_PACKAGE double __fastcall acSin(int Angle);
}	/* namespace Sgraphutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGRAPHUTILS)
using namespace Sgraphutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgraphutilsHPP
