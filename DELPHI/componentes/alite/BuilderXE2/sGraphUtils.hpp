// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGraphUtils.pas' rev: 23.00 (Win32)

#ifndef SgraphutilsHPP
#define SgraphutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
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


#pragma option push -b-
enum TFilterType : unsigned char { ftBox, ftTriangle, ftHermite, ftBell, ftSpline, ftLanczos3, ftMitchell };
#pragma option pop

typedef System::StaticArray<System::Sysutils::PByteArray, 1000001> TByteArrays;

typedef TByteArrays *PByteArrays;

typedef System::Int8 TKernelSize;

typedef void __fastcall (*TacChangeColor)(Sconst::TsColor_ &Color, const int Param);

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MaxKernelSize = System::Int8(0x10);
extern PACKAGE int FCheckWidth;
extern PACKAGE int FCheckHeight;
extern PACKAGE unsigned User32Lib;
extern PACKAGE unsigned Gdi32Lib;
extern PACKAGE bool __stdcall (*SetLayeredWindowAttributes)(unsigned Hwnd, unsigned crKey, System::Byte bAlpha, unsigned dwFlags);
extern PACKAGE bool __stdcall (*UpdateLayeredWindow)(unsigned Handle, HDC hdcDest, System::Types::PPoint pptDst, System::Types::PSize _psize, HDC hdcSrc, System::Types::PPoint pptSrc, unsigned crKey, Winapi::Windows::PBlendFunction pblend, unsigned dwFlags);
extern PACKAGE unsigned __stdcall (*SetLayout)(HDC hdc, unsigned dwLayout);
extern PACKAGE unsigned __stdcall (*GetLayout)(HDC hdc);
extern PACKAGE void __fastcall SetFontSmoothing(Vcl::Graphics::TFont* AFont);
extern PACKAGE void __fastcall CopyBmp(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp);
extern PACKAGE bool __fastcall InitLine(Vcl::Graphics::TBitmap* Bmp, void * &Line0, int &Delta);
extern PACKAGE void __fastcall DrawCloseBtn(HDC DC, const System::Types::TRect &R, int State);
extern PACKAGE void __fastcall DrawColorArrow(const Vcl::Graphics::TCanvas* Canvas, const System::Uitypes::TColor Color, const System::Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern PACKAGE void __fastcall DrawColorArrow(const Vcl::Graphics::TBitmap* aBmp, const System::Uitypes::TColor Color, const System::Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern PACKAGE void __fastcall DrawArrow(const Vcl::Graphics::TBitmap* aBmp, const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern PACKAGE void __fastcall DrawArrow(HDC DC, const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern PACKAGE HFONT __fastcall MakeAngledFont(HDC DC, Vcl::Graphics::TFont* Font, int Orient);
extern PACKAGE int __fastcall CheckBoxWidth(const Acnttypes::TacObject* SkinData, const bool SmallGlyphs = true);
extern PACKAGE int __fastcall CheckBoxHeight(const Acnttypes::TacObject* SkinData, const bool SmallGlyphs = true);
extern PACKAGE void __fastcall acDrawCheck(const System::Types::TRect &R, const Vcl::Stdctrls::TCheckBoxState AState, const bool AEnabled, const Vcl::Graphics::TBitmap* Bmp, const Sconst::TCacheInfo &CI, const System::TObject* CommonSkinData, const bool SmallGlyphs = true, int CtrlState = 0x0);
extern PACKAGE void __fastcall DrawBmp(Vcl::Graphics::TCanvas* ACanvas, Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, bool Reflected);
extern PACKAGE HICON __fastcall MakeCompIcon(Vcl::Graphics::TBitmap* Img);
extern PACKAGE void __fastcall ChangeBitmapPixels(Vcl::Graphics::TBitmap* Bmp, TacChangeColor ChangeProc, int Param, System::Uitypes::TColor SkipColor);
extern PACKAGE void __fastcall ChangeColorBrightness(Sconst::TsColor_ &Prop, const int Param);
extern PACKAGE void __fastcall ChangeColorSaturation(Sconst::TsColor_ &Prop, const int Param);
extern PACKAGE void __fastcall ChangeColorHUE(Sconst::TsColor_ &Prop, const int Param);
extern PACKAGE void __fastcall ChangeColorTone(Sconst::TsColor_ &Prop, const int Param);
extern PACKAGE void __fastcall MakeAlphaPixel(Sconst::TsColor_ &Prop, const int Param);
extern PACKAGE bool __fastcall acLayered(void);
extern PACKAGE int __fastcall SwapInteger(const int i);
extern PACKAGE Sconst::TsColor_ __fastcall ChangeTone(const Sconst::TsColor_ Color, const Sconst::TsColor_RGB Tone)/* overload */;
extern PACKAGE void __fastcall acSetLayout(HDC hdc, unsigned dwLayout);
extern PACKAGE unsigned __fastcall acGetLayout(HDC hdc);
extern PACKAGE System::Uitypes::TColor __fastcall ChangeTone(const System::Uitypes::TColor Color, const System::Uitypes::TColor Tone)/* overload */;
extern PACKAGE System::Uitypes::TColor __fastcall ChangeBrightness(const System::Uitypes::TColor Color, const int Delta);
extern PACKAGE System::Uitypes::TColor __fastcall ChangeSaturation(const System::Uitypes::TColor Color, const int Delta)/* overload */;
extern PACKAGE Sconst::TsColor_ __fastcall ChangeSaturation(const int Delta, const Sconst::TsColor_ Color)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall Hsv2Rgb(double h, double s, double v);
extern PACKAGE TsHSV __fastcall Rgb2Hsv(Sconst::TsColor C);
extern PACKAGE Sconst::TsColor_ __fastcall ChangeHue(const int Delta, Sconst::TsColor_ C)/* overload */;
extern PACKAGE System::Uitypes::TColor __fastcall ChangeHue(const int Delta, const System::Uitypes::TColor Color)/* overload */;
extern PACKAGE void __fastcall HSVtoRGB(const double H, const double S, const double V, double &R, double &G, double &B);
extern PACKAGE void __fastcall RGBToHSV(const double R, const double G, const double B, double &H, double &S, double &V);
extern PACKAGE void __fastcall GetRgnFromBmp(HRGN &rgn, Vcl::Graphics::TBitmap* MaskBmp, System::Uitypes::TColor TransColor);
extern PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, const unsigned Handle, bool aPleaseDraw = false)/* overload */;
extern PACKAGE Sconst::TCacheInfo __fastcall BGInfoToCI(const Sconst::PacBGInfo BGInfo);
extern PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, const Vcl::Controls::TControl* Control, bool aPleaseDraw = false)/* overload */;
extern PACKAGE void __fastcall AddRgnBmp(Acnttypes::TRects &AOR, Vcl::Graphics::TBitmap* MaskBmp, Sconst::TsColor TransColor);
extern PACKAGE void __fastcall AddRgn(Acnttypes::TRects &AOR, int Width, const Smaskdata::TsMaskData &MaskData, int VertOffset, bool Bottom, int iPadding = 0x0);
extern PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, System::Uitypes::TColor CustomColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, System::Uitypes::TColor CustomColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, System::Classes::TComponent* SkinManager, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, const Smaskdata::TsMaskData &md)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, HDC DC, System::Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, HDC DC, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemBG(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern PACKAGE int __fastcall PaintSection(const Vcl::Graphics::TBitmap* Bmp, const System::UnicodeString Section, const System::UnicodeString SecondSection, const int State, const Acnttypes::TacObject* CommonSkinData, const System::Types::TPoint &ParentOffset, const System::Uitypes::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern PACKAGE int __fastcall PaintSection(const Vcl::Graphics::TBitmap* Bmp, int SectionIndex, const int SecondIndex, const int State, const Acnttypes::TacObject* CommonSkinData, const System::Types::TPoint &ParentOffset, const System::Uitypes::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern PACKAGE void __fastcall PaintItem(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, Vcl::Graphics::TBitmap* ItemBmp, bool UpdateCorners, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern PACKAGE bool __fastcall PaintSkinControl(const Scommondata::TsCommonData* SkinData, const Vcl::Controls::TControl* Parent, const bool Filling, int State, const System::Types::TRect &R, const System::Types::TPoint &pP, const Vcl::Graphics::TBitmap* ItemBmp, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0);
extern PACKAGE void __fastcall CopyChannel32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const int Channel)/* overload */;
extern PACKAGE void __fastcall CopyChannel32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const int Channel, const System::Types::TRect &DstRect, const System::Types::TRect &SrcRect)/* overload */;
extern PACKAGE void __fastcall CopyChannel(const Vcl::Graphics::TBitmap* Bmp32, const Vcl::Graphics::TBitmap* Bmp8, const int Channel, const bool From32To8);
extern PACKAGE void __fastcall PaintControlByTemplate(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &DstRect, const System::Types::TRect &SrcRect, const System::Types::TRect &BorderWidths, const System::Types::TRect &BorderMaxWidths, const System::Types::TRect &DrawModes, const bool StretchCenter, bool FillCenter = true);
extern PACKAGE void __fastcall DrawGlyphEx(Vcl::Graphics::TBitmap* Glyph, Vcl::Graphics::TBitmap* DstBmp, const System::Types::TRect &R, int NumGlyphs, bool Enabled, Sconst::TsDisabledGlyphKind DisabledGlyphKind, int State, int Blend, bool Down = false, bool Reflected = false);
extern PACKAGE void __fastcall FillDC(HDC DC, const System::Types::TRect &aRect, const System::Uitypes::TColor Color);
extern PACKAGE void __fastcall FillDCBorder(const HDC DC, const System::Types::TRect &aRect, const int wl, const int wt, const int wr, const int wb, const System::Uitypes::TColor Color);
extern PACKAGE void __fastcall BitBltBorder(const HDC DestDC, const int X, const int Y, const int Width, const int Height, const HDC SrcDC, const int XSrc, const int YSrc, int WidthLeft, int WidthTop = 0x0, int WidthRight = 0x0, int WidthBottom = 0x0);
extern PACKAGE void __fastcall ExcludeControls(const HDC DC, const Vcl::Controls::TWinControl* Ctrl, const int OffsetX, const int OffsetY);
extern PACKAGE void __fastcall GrayScale(Vcl::Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall GrayScaleTrans(Vcl::Graphics::TBitmap* Bmp, const Sconst::TsColor TransColor);
extern PACKAGE void __fastcall PaintTransBG(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, int Size);
extern PACKAGE void __fastcall SetBmp32Pixels(Vcl::Graphics::TBitmap* &Bmp);
extern PACKAGE System::UnicodeString __fastcall CutText(Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text, int MaxLength);
extern PACKAGE void __fastcall WriteText(Vcl::Graphics::TCanvas* Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags);
extern PACKAGE void __fastcall WriteTextOnDC(HDC DC, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags);
extern PACKAGE int __fastcall acDrawText(HDC hDC, const System::UnicodeString Text, System::Types::TRect &lpRect, unsigned uFormat);
extern PACKAGE bool __fastcall acExtTextOut(HDC DC, int X, int Y, int Options, System::Types::PRect Rect, System::WideChar * Str, int Count, System::PInteger Dx);
extern PACKAGE int __fastcall acTextWidth(const Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text);
extern PACKAGE int __fastcall acTextHeight(const Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text);
extern PACKAGE System::Types::TSize __fastcall acTextExtent(const Vcl::Graphics::TCanvas* Canvas, const System::UnicodeString Text);
extern PACKAGE void __fastcall acTextRect(const Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, int X, int Y, const System::UnicodeString Text);
extern PACKAGE BOOL __fastcall acGetTextExtent(const HDC DC, const System::UnicodeString Str, System::Types::TSize &Size, HFONT AFont = (HFONT)(0x0));
extern PACKAGE void __fastcall acDrawGlowForText(const Vcl::Graphics::TBitmap* DstBmp, System::WideChar * Text, const System::Types::TRect &aRect, unsigned Flags, unsigned Side, int BlurSize, System::Uitypes::TColor Color, Vcl::Graphics::TBitmap* &MaskBmp);
extern PACKAGE void __fastcall acPaintLine(HDC DC, int X1, int Y1, int X2, int Y2);
extern PACKAGE void __fastcall Blur8(Vcl::Graphics::TBitmap* Bmp, double radius);
extern PACKAGE void __fastcall QBlur(Vcl::Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall acWriteTextEx(const Vcl::Graphics::TCanvas* Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags, const Scommondata::TsCommonData* SkinData, const bool Hot, const System::TObject* SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern PACKAGE void __fastcall acWriteTextEx(const Vcl::Graphics::TCanvas* Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags, const int SkinIndex, const bool Hot, const System::TObject* SkinManager = (System::TObject*)(0x0))/* overload */;
extern PACKAGE void __fastcall acWriteText(const Vcl::Graphics::TCanvas* Canvas, const System::WideChar * Text, const bool Enabled, System::Types::TRect &aRect, const unsigned Flags);
extern PACKAGE void __fastcall WriteTextEx(const Vcl::Graphics::TCanvas* Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags, int SkinIndex, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0))/* overload */;
extern PACKAGE void __fastcall WriteTextEx(const Vcl::Graphics::TCanvas* Canvas, System::WideChar * Text, bool Enabled, System::Types::TRect &aRect, unsigned Flags, Scommondata::TsCommonData* SkinData, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern PACKAGE void __fastcall FadeBmp(Vcl::Graphics::TBitmap* FadedBmp, const System::Types::TRect &aRect, int Transparency, const Sconst::TsColor Color, int Blur, int Radius);
extern PACKAGE void __fastcall BlendTransRectangle(Vcl::Graphics::TBitmap* Dst, int X, int Y, Vcl::Graphics::TBitmap* Src, const System::Types::TRect &aRect, System::Byte Blend, System::Uitypes::TColor TransColor = (System::Uitypes::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall BlendTransBitmap(Vcl::Graphics::TBitmap* Bmp, System::Byte Blend, const Sconst::TsColor Color)/* overload */;
extern PACKAGE void __fastcall BlendBmpByMask(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp, const Sconst::TsColor BlendColor);
extern PACKAGE void __fastcall SumBitmaps(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp, const System::Byte AlphaValue);
extern PACKAGE void __fastcall SumBitmapsToDst(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp1, Vcl::Graphics::TBitmap* SrcBmp2, const System::Byte AlphaValue);
extern PACKAGE void __fastcall PaintBmp32(Vcl::Graphics::TBitmap* SrcBmp, Vcl::Graphics::TBitmap* MskBmp);
extern PACKAGE void __fastcall SumBmpRect(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Byte AlphaValue, const System::Types::TRect &SrcRect, const System::Types::TPoint &DstPoint);
extern PACKAGE void __fastcall PaintBmpRect32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &SrcRect, const System::Types::TPoint &DstPoint, System::Byte SrcBlendValue = (System::Byte)(0xff));
extern PACKAGE void __fastcall StretchBmpRect32(const Vcl::Graphics::TBitmap* DstBmp, int XDst, int YDst, int DstWidth, int DstHeight, Vcl::Graphics::TBitmap* SrcBmp, int XSrc, int YSrc, int SrcWidth, int SrcHeight, System::Byte SrcBlendValue = (System::Byte)(0xff));
extern PACKAGE void __fastcall CopyByMask(const System::Types::TRect &R1, const System::Types::TRect &R2, const Vcl::Graphics::TBitmap* Bmp1, const Vcl::Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans)/* overload */;
extern PACKAGE void __fastcall CopyBmp32(const System::Types::TRect &R1, const System::Types::TRect &R2, const Vcl::Graphics::TBitmap* Bmp1, const Vcl::Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, System::Uitypes::TColor GrayedColor, const int Blend, const bool Reflected);
extern PACKAGE void __fastcall CopyByMask(const System::Types::TRect &R1, const System::Types::TRect &R2, const Vcl::Graphics::TBitmap* Bmp1, const Vcl::Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, const Smaskdata::TsMaskData &MaskData)/* overload */;
extern PACKAGE void __fastcall CopyTransBitmaps(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, Sconst::TsColor TransColor);
extern PACKAGE void __fastcall CopyTransRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, const System::Types::TRect &SrcRect, System::Uitypes::TColor TransColor, const Sconst::TCacheInfo &CI, bool UpdateTrans);
extern PACKAGE void __fastcall CopyTransRectA(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int X, int Y, const System::Types::TRect &SrcRect, System::Uitypes::TColor TransColor, const Sconst::TCacheInfo &CI, const int Blend = 0x0);
extern PACKAGE void __fastcall SumBitmapsByMask(Vcl::Graphics::TBitmap* &DstBmp, Vcl::Graphics::TBitmap* &Src1, Vcl::Graphics::TBitmap* &Src2, Vcl::Graphics::TBitmap* MskBmp, System::Word Percent = (System::Word)(0x0));
extern PACKAGE void __fastcall SumByMaskWith32(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const Vcl::Graphics::TBitmap* MskBmp, const System::Types::TRect &aRect);
extern PACKAGE void __fastcall ColorizeByMask(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* MskBmp, const System::Types::TPoint &TopLeft, System::Uitypes::TColor Color, System::Uitypes::TColor BGColor);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall Makerotated90(Vcl::Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall sMakerotated90(Vcl::Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern PACKAGE void __fastcall BitBltRotated(HDC DC, Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TPoint &ACenter, int Angle);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmpLike(const Vcl::Graphics::TBitmap* Bmp);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateAlphaBmp(const Vcl::Graphics::TBitmap* SrcMaskedBmp, const System::Types::TRect &SrcRect);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateMaskFromAlpha(const Vcl::Graphics::TBitmap* SrcAlphaBmp);
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const int Width = 0x0, const int Height = 0x0)/* overload */;
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const System::Types::TRect &R)/* overload */;
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const System::Types::TSize &Size)/* overload */;
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const Vcl::Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE Vcl::Graphics::TBitmap* __fastcall CreateBmp32(const Vcl::Controls::TControl* Ctrl)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall AverageColor(const Sconst::TsColor ColorBegin, const Sconst::TsColor ColorEnd)/* overload */;
extern PACKAGE System::Uitypes::TColor __fastcall AverageColor(const System::Uitypes::TColor ColorBegin, const System::Uitypes::TColor ColorEnd)/* overload */;
extern PACKAGE System::Uitypes::TColor __fastcall BlendColors(const System::Uitypes::TColor Color1, const System::Uitypes::TColor Color2, const System::Byte BlendOf1);
extern PACKAGE void __fastcall DrawRectangleOnDC(HDC DC, System::Types::TRect &R, System::Uitypes::TColor ColorTop, System::Uitypes::TColor ColorBottom, int &Width);
extern PACKAGE void __fastcall TileBitmap(const Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &aRect, const Vcl::Graphics::TGraphic* Graphic)/* overload */;
extern PACKAGE void __fastcall TileBitmap(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &aRect, Vcl::Graphics::TGraphic* Graphic, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0x0))/* overload */;
extern PACKAGE void __fastcall TileMasked(Vcl::Graphics::TBitmap* Bmp, System::Types::TRect &aRect, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0xa));
extern PACKAGE void __fastcall CalcButtonLayout(const System::Types::TRect &Client, const System::Types::TPoint &GlyphSize, const System::Types::TSize &TextRectSize, Vcl::Buttons::TButtonLayout Layout, System::Classes::TAlignment Alignment, int AMargin, int Spacing, System::Types::TPoint &GlyphPos, System::Types::TRect &TextBounds, int BiDiFlags, System::Classes::TVerticalAlignment VerticalAlignment = (System::Classes::TVerticalAlignment)(0x2));
extern PACKAGE int __fastcall GetFontHeight(HWND hFont, bool NoLeading = false);
extern PACKAGE bool __fastcall FontSizeIsNear(const Vcl::Graphics::TFont* BaseFont, const System::UnicodeString TestText, const System::UnicodeString FontName);
extern PACKAGE System::Types::TSize __fastcall GetStringSize(HGDIOBJ hFont, const System::UnicodeString Text, unsigned Flags = (unsigned)(0x0), bool WrapText = false, int MaxWidth = 0x7fffffff, bool IsItalic = false);
extern PACKAGE void __fastcall LoadBmpFromPngFile(Vcl::Graphics::TBitmap* Bmp, const System::UnicodeString FileName);
extern PACKAGE void __fastcall LoadBmpFromPngStream(Vcl::Graphics::TBitmap* Bmp, System::Classes::TStream* Stream);
extern PACKAGE void __fastcall FocusRect(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R, System::Uitypes::TColor LightColor = (System::Uitypes::TColor)(0xff00000f), System::Uitypes::TColor DarkColor = (System::Uitypes::TColor)(0x0));
extern PACKAGE bool __fastcall FontsEqual(const Vcl::Graphics::TFont* Font1, const Vcl::Graphics::TFont* Font2);
extern PACKAGE void __fastcall acPaintStdBtn(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool AEnabled, bool AFocusRect, int AState);
extern PACKAGE void __fastcall Stretch(const Vcl::Graphics::TBitmap* Src, const Vcl::Graphics::TBitmap* Dst, const int DstWidth, const int DstHeight, const TFilterType Filter);
extern PACKAGE double __fastcall acCos(int Angle);
extern PACKAGE double __fastcall acSin(int Angle);

}	/* namespace Sgraphutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGRAPHUTILS)
using namespace Sgraphutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgraphutilsHPP
