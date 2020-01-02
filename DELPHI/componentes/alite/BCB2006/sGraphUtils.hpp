// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sgraphutils.pas' rev: 10.00

#ifndef SgraphutilsHPP
#define SgraphutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Smaskdata.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Jpeg.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgraphutils
{
//-- type declarations -------------------------------------------------------
struct TsHSV
{
	
public:
	int h;
	double s;
	double v;
} ;

#pragma option push -b-
enum TFilterType { ftBox, ftTriangle, ftHermite, ftBell, ftSpline, ftLanczos3, ftMitchell };
#pragma option pop

typedef Byte *TByteArrays[1000001];

typedef Sysutils::PByteArray *PByteArrays;

typedef Shortint TKernelSize;

typedef void __fastcall (*TacChangeColor)(Sconst::TsColor_ &Color, const int Param);

//-- var, const, procedure ---------------------------------------------------
static const Shortint MaxKernelSize = 0x10;
extern PACKAGE int FCheckWidth;
extern PACKAGE int FCheckHeight;
extern PACKAGE unsigned User32Lib;
extern PACKAGE unsigned Gdi32Lib;
extern PACKAGE bool __stdcall (*SetLayeredWindowAttributes)(unsigned Hwnd, unsigned crKey, Byte bAlpha, unsigned dwFlags);
extern PACKAGE bool __stdcall (*UpdateLayeredWindow)(unsigned Handle, HDC hdcDest, Types::PPoint pptDst, Types::PSize _psize, HDC hdcSrc, Types::PPoint pptSrc, unsigned crKey, Windows::PBlendFunction pblend, unsigned dwFlags);
extern PACKAGE unsigned __stdcall (*SetLayout)(HDC hdc, unsigned dwLayout);
extern PACKAGE unsigned __stdcall (*GetLayout)(HDC hdc);
extern PACKAGE void __fastcall SetFontSmoothing(Graphics::TFont* AFont);
extern PACKAGE void __fastcall CopyBmp(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp);
extern PACKAGE bool __fastcall InitLine(Graphics::TBitmap* Bmp, void * &Line0, int &Delta);
extern PACKAGE void __fastcall DrawCloseBtn(HDC DC, const Types::TRect &R, int State);
extern PACKAGE void __fastcall DrawColorArrow(const Graphics::TCanvas* Canvas, const Graphics::TColor Color, const Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern PACKAGE void __fastcall DrawColorArrow(const Graphics::TBitmap* aBmp, const Graphics::TColor Color, const Types::TRect &R, const Sconst::TacSide Direction, int PPI)/* overload */;
extern PACKAGE void __fastcall DrawArrow(const Graphics::TBitmap* aBmp, const Graphics::TColor Color1, const Graphics::TColor Color2, const Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern PACKAGE void __fastcall DrawArrow(HDC DC, const Graphics::TColor Color1, const Graphics::TColor Color2, const Types::TRect &R, const Sconst::TacSide Direction, int LineWidth, int AngleShift, int ArrowSize, Acnttypes::TacArrowsStyle Style, int PPI = 0x60)/* overload */;
extern PACKAGE HFONT __fastcall MakeAngledFont(HDC DC, Graphics::TFont* Font, int Orient);
extern PACKAGE int __fastcall CheckBoxWidth(const Acnttypes::TacObject* SkinData, const bool SmallGlyphs = true);
extern PACKAGE int __fastcall CheckBoxHeight(const Acnttypes::TacObject* SkinData, const bool SmallGlyphs = true);
extern PACKAGE void __fastcall acDrawCheck(const Types::TRect &R, const Stdctrls::TCheckBoxState AState, const bool AEnabled, const Graphics::TBitmap* Bmp, const Sconst::TCacheInfo &CI, const System::TObject* CommonSkinData, const bool SmallGlyphs = true, int CtrlState = 0x0);
extern PACKAGE void __fastcall DrawBmp(Graphics::TCanvas* ACanvas, Graphics::TBitmap* Bmp, const Types::TRect &R, bool Reflected);
extern PACKAGE HICON __fastcall MakeCompIcon(Graphics::TBitmap* Img);
extern PACKAGE void __fastcall ChangeBitmapPixels(Graphics::TBitmap* Bmp, TacChangeColor ChangeProc, int Param, Graphics::TColor SkipColor);
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
extern PACKAGE Graphics::TColor __fastcall ChangeTone(const Graphics::TColor Color, const Graphics::TColor Tone)/* overload */;
extern PACKAGE Graphics::TColor __fastcall ChangeBrightness(const Graphics::TColor Color, const int Delta);
extern PACKAGE Graphics::TColor __fastcall ChangeSaturation(const Graphics::TColor Color, const int Delta)/* overload */;
extern PACKAGE Sconst::TsColor_ __fastcall ChangeSaturation(const int Delta, const Sconst::TsColor_ Color)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall Hsv2Rgb(double h, double s, double v);
extern PACKAGE TsHSV __fastcall Rgb2Hsv(Sconst::TsColor C);
extern PACKAGE Sconst::TsColor_ __fastcall ChangeHue(const int Delta, Sconst::TsColor_ C)/* overload */;
extern PACKAGE Graphics::TColor __fastcall ChangeHue(const int Delta, const Graphics::TColor Color)/* overload */;
extern PACKAGE void __fastcall HSVtoRGB(const double H, const double S, const double V, double &R, double &G, double &B);
extern PACKAGE void __fastcall RGBToHSV(const double R, const double G, const double B, double &H, double &S, double &V);
extern PACKAGE void __fastcall GetRgnFromBmp(HRGN &rgn, Graphics::TBitmap* MaskBmp, Graphics::TColor TransColor);
extern PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, const unsigned Handle, bool aPleaseDraw = false)/* overload */;
extern PACKAGE Sconst::TCacheInfo __fastcall BGInfoToCI(const Sconst::PacBGInfo BGInfo);
extern PACKAGE bool __fastcall GetBGInfo(const Sconst::PacBGInfo BGInfo, const Controls::TControl* Control, bool aPleaseDraw = false)/* overload */;
extern PACKAGE void __fastcall AddRgnBmp(Acnttypes::TRects &AOR, Graphics::TBitmap* MaskBmp, Sconst::TsColor TransColor);
extern PACKAGE void __fastcall AddRgn(Acnttypes::TRects &AOR, int Width, const Smaskdata::TsMaskData &MaskData, int VertOffset, bool Bottom, int iPadding = 0x0);
extern PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Classes::TComponent* SkinManager, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, Graphics::TColor CustomColor = (Graphics::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall PaintItemBG(int SkinIndex, const Sconst::TCacheInfo &ci, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int TextureIndex = 0xffffffff, int HotTextureIndex = 0xffffffff, Graphics::TColor CustomColor = (Graphics::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItemBGFast(int SkinIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItemFast(int SkinIndex, int MaskIndex, int BGIndex, int BGHotIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Classes::TComponent* SkinManager, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, int BGIndex = 0xffffffff, int BGHotIndex = 0xffffffff)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, Acnttypes::TacObject* CommonSkinData, const Smaskdata::TsMaskData &md)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, HDC DC, Classes::TComponent* SkinManager)/* overload */;
extern PACKAGE void __fastcall PaintItem(int SkinIndex, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, HDC DC, Acnttypes::TacObject* CommonSkinData)/* overload */;
extern PACKAGE void __fastcall PaintItemBG(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern PACKAGE int __fastcall PaintSection(const Graphics::TBitmap* Bmp, const AnsiString Section, const AnsiString SecondSection, const int State, const Acnttypes::TacObject* CommonSkinData, const Types::TPoint &ParentOffset, const Graphics::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern PACKAGE int __fastcall PaintSection(const Graphics::TBitmap* Bmp, int SectionIndex, const int SecondIndex, const int State, const Acnttypes::TacObject* CommonSkinData, const Types::TPoint &ParentOffset, const Graphics::TColor BGColor, HDC ParentDC = (HDC)(0x0))/* overload */;
extern PACKAGE void __fastcall PaintItem(Scommondata::TsCommonData* SkinData, const Sconst::TCacheInfo &ci, bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, Graphics::TBitmap* ItemBmp, bool UpdateCorners, int OffsetX = 0x0, int OffsetY = 0x0)/* overload */;
extern PACKAGE bool __fastcall PaintSkinControl(const Scommondata::TsCommonData* SkinData, const Controls::TControl* Parent, const bool Filling, int State, const Types::TRect &R, const Types::TPoint &pP, const Graphics::TBitmap* ItemBmp, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0);
extern PACKAGE void __fastcall CopyChannel32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const int Channel)/* overload */;
extern PACKAGE void __fastcall CopyChannel32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const int Channel, const Types::TRect &DstRect, const Types::TRect &SrcRect)/* overload */;
extern PACKAGE void __fastcall CopyChannel(const Graphics::TBitmap* Bmp32, const Graphics::TBitmap* Bmp8, const int Channel, const bool From32To8);
extern PACKAGE void __fastcall PaintControlByTemplate(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Types::TRect &DstRect, const Types::TRect &SrcRect, const Types::TRect &BorderWidths, const Types::TRect &BorderMaxWidths, const Types::TRect &DrawModes, const bool StretchCenter, bool FillCenter = true);
extern PACKAGE void __fastcall DrawGlyphEx(Graphics::TBitmap* Glyph, Graphics::TBitmap* DstBmp, const Types::TRect &R, int NumGlyphs, bool Enabled, Sconst::TsDisabledGlyphKind DisabledGlyphKind, int State, int Blend, bool Down = false, bool Reflected = false);
extern PACKAGE void __fastcall FillDC(HDC DC, const Types::TRect &aRect, const Graphics::TColor Color);
extern PACKAGE void __fastcall FillDCBorder(const HDC DC, const Types::TRect &aRect, const int wl, const int wt, const int wr, const int wb, const Graphics::TColor Color);
extern PACKAGE void __fastcall BitBltBorder(const HDC DestDC, const int X, const int Y, const int Width, const int Height, const HDC SrcDC, const int XSrc, const int YSrc, int WidthLeft, int WidthTop = 0x0, int WidthRight = 0x0, int WidthBottom = 0x0);
extern PACKAGE void __fastcall ExcludeControls(const HDC DC, const Controls::TWinControl* Ctrl, const int OffsetX, const int OffsetY);
extern PACKAGE void __fastcall GrayScale(Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall GrayScaleTrans(Graphics::TBitmap* Bmp, const Sconst::TsColor TransColor);
extern PACKAGE void __fastcall PaintTransBG(Graphics::TBitmap* Bmp, const Types::TRect &R, Graphics::TColor Color1, Graphics::TColor Color2, int Size);
extern PACKAGE void __fastcall SetBmp32Pixels(Graphics::TBitmap* &Bmp);
extern PACKAGE AnsiString __fastcall CutText(Graphics::TCanvas* Canvas, const AnsiString Text, int MaxLength);
extern PACKAGE void __fastcall WriteText(Graphics::TCanvas* Canvas, char * Text, bool Enabled, Types::TRect &aRect, unsigned Flags);
extern PACKAGE void __fastcall WriteTextOnDC(HDC DC, char * Text, bool Enabled, Types::TRect &aRect, unsigned Flags);
extern PACKAGE int __fastcall acDrawText(HDC hDC, const AnsiString Text, Types::TRect &lpRect, unsigned uFormat);
extern PACKAGE bool __fastcall acExtTextOut(HDC DC, int X, int Y, int Options, Types::PRect Rect, char * Str, int Count, System::PInteger Dx);
extern PACKAGE int __fastcall acTextWidth(const Graphics::TCanvas* Canvas, const AnsiString Text);
extern PACKAGE int __fastcall acTextHeight(const Graphics::TCanvas* Canvas, const AnsiString Text);
extern PACKAGE tagSIZE __fastcall acTextExtent(const Graphics::TCanvas* Canvas, const AnsiString Text);
extern PACKAGE void __fastcall acTextRect(const Graphics::TCanvas* Canvas, const Types::TRect &Rect, int X, int Y, const AnsiString Text);
extern PACKAGE BOOL __fastcall acGetTextExtent(const HDC DC, const AnsiString Str, tagSIZE &Size, HFONT AFont = (HFONT)(0x0));
extern PACKAGE void __fastcall acDrawGlowForText(const Graphics::TBitmap* DstBmp, char * Text, const Types::TRect &aRect, unsigned Flags, unsigned Side, int BlurSize, Graphics::TColor Color, Graphics::TBitmap* &MaskBmp);
extern PACKAGE void __fastcall acPaintLine(HDC DC, int X1, int Y1, int X2, int Y2);
extern PACKAGE void __fastcall Blur8(Graphics::TBitmap* Bmp, double radius);
extern PACKAGE void __fastcall QBlur(Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall acWriteTextEx(const Graphics::TCanvas* Canvas, const char * Text, const bool Enabled, Types::TRect &aRect, const unsigned Flags, const Scommondata::TsCommonData* SkinData, const bool Hot, const System::TObject* SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern PACKAGE void __fastcall acWriteTextEx(const Graphics::TCanvas* Canvas, const char * Text, const bool Enabled, Types::TRect &aRect, const unsigned Flags, const int SkinIndex, const bool Hot, const System::TObject* SkinManager = (System::TObject*)(0x0))/* overload */;
extern PACKAGE void __fastcall acWriteText(const Graphics::TCanvas* Canvas, const char * Text, const bool Enabled, Types::TRect &aRect, const unsigned Flags);
extern PACKAGE void __fastcall WriteTextEx(const Graphics::TCanvas* Canvas, char * Text, bool Enabled, Types::TRect &aRect, unsigned Flags, int SkinIndex, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0))/* overload */;
extern PACKAGE void __fastcall WriteTextEx(const Graphics::TCanvas* Canvas, char * Text, bool Enabled, Types::TRect &aRect, unsigned Flags, Scommondata::TsCommonData* SkinData, bool Hot, System::TObject* SkinManager = (System::TObject*)(0x0), bool CanGlow = true)/* overload */;
extern PACKAGE void __fastcall FadeBmp(Graphics::TBitmap* FadedBmp, const Types::TRect &aRect, int Transparency, const Sconst::TsColor Color, int Blur, int Radius);
extern PACKAGE void __fastcall BlendTransRectangle(Graphics::TBitmap* Dst, int X, int Y, Graphics::TBitmap* Src, const Types::TRect &aRect, Byte Blend, Graphics::TColor TransColor = (Graphics::TColor)(0xff00ff))/* overload */;
extern PACKAGE void __fastcall BlendTransBitmap(Graphics::TBitmap* Bmp, Byte Blend, const Sconst::TsColor Color)/* overload */;
extern PACKAGE void __fastcall BlendBmpByMask(Graphics::TBitmap* SrcBmp, Graphics::TBitmap* MskBmp, const Sconst::TsColor BlendColor);
extern PACKAGE void __fastcall SumBitmaps(Graphics::TBitmap* SrcBmp, Graphics::TBitmap* MskBmp, const Byte AlphaValue);
extern PACKAGE void __fastcall SumBitmapsToDst(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp1, Graphics::TBitmap* SrcBmp2, const Byte AlphaValue);
extern PACKAGE void __fastcall PaintBmp32(Graphics::TBitmap* SrcBmp, Graphics::TBitmap* MskBmp);
extern PACKAGE void __fastcall SumBmpRect(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Byte AlphaValue, const Types::TRect &SrcRect, const Types::TPoint &DstPoint);
extern PACKAGE void __fastcall PaintBmpRect32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Types::TRect &SrcRect, const Types::TPoint &DstPoint, Byte SrcBlendValue = (Byte)(0xff));
extern PACKAGE void __fastcall StretchBmpRect32(const Graphics::TBitmap* DstBmp, int XDst, int YDst, int DstWidth, int DstHeight, Graphics::TBitmap* SrcBmp, int XSrc, int YSrc, int SrcWidth, int SrcHeight, Byte SrcBlendValue = (Byte)(0xff));
extern PACKAGE void __fastcall CopyByMask(const Types::TRect &R1, const Types::TRect &R2, const Graphics::TBitmap* Bmp1, const Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans)/* overload */;
extern PACKAGE void __fastcall CopyBmp32(const Types::TRect &R1, const Types::TRect &R2, const Graphics::TBitmap* Bmp1, const Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, Graphics::TColor GrayedColor, const int Blend, const bool Reflected);
extern PACKAGE void __fastcall CopyByMask(const Types::TRect &R1, const Types::TRect &R2, const Graphics::TBitmap* Bmp1, const Graphics::TBitmap* Bmp2, const Sconst::TCacheInfo &CI, const bool UpdateTrans, const Smaskdata::TsMaskData &MaskData)/* overload */;
extern PACKAGE void __fastcall CopyTransBitmaps(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp, int X, int Y, Sconst::TsColor TransColor);
extern PACKAGE void __fastcall CopyTransRect(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp, int X, int Y, const Types::TRect &SrcRect, Graphics::TColor TransColor, const Sconst::TCacheInfo &CI, bool UpdateTrans);
extern PACKAGE void __fastcall CopyTransRectA(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp, int X, int Y, const Types::TRect &SrcRect, Graphics::TColor TransColor, const Sconst::TCacheInfo &CI, const int Blend = 0x0);
extern PACKAGE void __fastcall SumBitmapsByMask(Graphics::TBitmap* &DstBmp, Graphics::TBitmap* &Src1, Graphics::TBitmap* &Src2, Graphics::TBitmap* MskBmp, Word Percent = (Word)(0x0));
extern PACKAGE void __fastcall SumByMaskWith32(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Graphics::TBitmap* MskBmp, const Types::TRect &aRect);
extern PACKAGE void __fastcall ColorizeByMask(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* MskBmp, const Types::TPoint &TopLeft, Graphics::TColor Color, Graphics::TColor BGColor);
extern PACKAGE Graphics::TBitmap* __fastcall Makerotated90(Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern PACKAGE Graphics::TBitmap* __fastcall sMakerotated90(Graphics::TBitmap* &Bmp, bool CW, bool KillSource = true);
extern PACKAGE void __fastcall BitBltRotated(HDC DC, Graphics::TBitmap* SrcBmp, const Types::TPoint &ACenter, int Angle);
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmpLike(const Graphics::TBitmap* Bmp);
extern PACKAGE Graphics::TBitmap* __fastcall CreateAlphaBmp(const Graphics::TBitmap* SrcMaskedBmp, const Types::TRect &SrcRect);
extern PACKAGE Graphics::TBitmap* __fastcall CreateMaskFromAlpha(const Graphics::TBitmap* SrcAlphaBmp);
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmp32(const int Width = 0x0, const int Height = 0x0)/* overload */;
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmp32(const Types::TRect &R)/* overload */;
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmp32(const tagSIZE &Size)/* overload */;
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmp32(const Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE Graphics::TBitmap* __fastcall CreateBmp32(const Controls::TControl* Ctrl)/* overload */;
extern PACKAGE Sconst::TsColor __fastcall AverageColor(const Sconst::TsColor ColorBegin, const Sconst::TsColor ColorEnd)/* overload */;
extern PACKAGE Graphics::TColor __fastcall AverageColor(const Graphics::TColor ColorBegin, const Graphics::TColor ColorEnd)/* overload */;
extern PACKAGE Graphics::TColor __fastcall BlendColors(const Graphics::TColor Color1, const Graphics::TColor Color2, const Byte BlendOf1);
extern PACKAGE void __fastcall DrawRectangleOnDC(HDC DC, Types::TRect &R, Graphics::TColor ColorTop, Graphics::TColor ColorBottom, int &Width);
extern PACKAGE void __fastcall TileBitmap(const Graphics::TCanvas* Canvas, const Types::TRect &aRect, const Graphics::TGraphic* Graphic)/* overload */;
extern PACKAGE void __fastcall TileBitmap(Graphics::TCanvas* Canvas, Types::TRect &aRect, Graphics::TGraphic* Graphic, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0x0))/* overload */;
extern PACKAGE void __fastcall TileMasked(Graphics::TBitmap* Bmp, Types::TRect &aRect, const Sconst::TCacheInfo &CI, const Smaskdata::TsMaskData &MaskData, Sconst::TacFillMode FillMode = (Sconst::TacFillMode)(0xa));
extern PACKAGE void __fastcall CalcButtonLayout(const Types::TRect &Client, const Types::TPoint &GlyphSize, const tagSIZE &TextRectSize, Buttons::TButtonLayout Layout, Classes::TAlignment Alignment, int AMargin, int Spacing, Types::TPoint &GlyphPos, Types::TRect &TextBounds, int BiDiFlags, Classes::TVerticalAlignment VerticalAlignment = (Classes::TVerticalAlignment)(0x2));
extern PACKAGE int __fastcall GetFontHeight(HWND hFont, bool NoLeading = false);
extern PACKAGE bool __fastcall FontSizeIsNear(const Graphics::TFont* BaseFont, const AnsiString TestText, const AnsiString FontName);
extern PACKAGE tagSIZE __fastcall GetStringSize(HGDIOBJ hFont, const AnsiString Text, unsigned Flags = (unsigned)(0x0), bool WrapText = false, int MaxWidth = 0x7fffffff, bool IsItalic = false);
extern PACKAGE void __fastcall LoadBmpFromPngFile(Graphics::TBitmap* Bmp, const AnsiString FileName);
extern PACKAGE void __fastcall LoadBmpFromPngStream(Graphics::TBitmap* Bmp, Classes::TStream* Stream);
extern PACKAGE void __fastcall FocusRect(Graphics::TCanvas* Canvas, const Types::TRect &R, Graphics::TColor LightColor = (Graphics::TColor)(0xff00000f), Graphics::TColor DarkColor = (Graphics::TColor)(0x0));
extern PACKAGE bool __fastcall FontsEqual(const Graphics::TFont* Font1, const Graphics::TFont* Font2);
extern PACKAGE void __fastcall acPaintStdBtn(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool AEnabled, bool AFocusRect, int AState);
extern PACKAGE void __fastcall Stretch(const Graphics::TBitmap* Src, const Graphics::TBitmap* Dst, const int DstWidth, const int DstHeight, const TFilterType Filter);
extern PACKAGE double __fastcall acCos(int Angle);
extern PACKAGE double __fastcall acSin(int Angle);

}	/* namespace Sgraphutils */
using namespace Sgraphutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sgraphutils
