// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMaskData.pas' rev: 6.00

#ifndef sMaskDataHPP
#define sMaskDataHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sConst.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smaskdata
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TacOutEffData
{
	Graphics::TColor ColorL;
	Graphics::TColor ColorT;
	Graphics::TColor ColorR;
	Graphics::TColor ColorB;
	int OffsetL;
	int OffsetT;
	int OffsetR;
	int OffsetB;
	int WidthL;
	int WidthT;
	int WidthR;
	int WidthB;
	int Blur;
	int Radius;
	int Mask;
	int Source;
	int Opacity;
} ;
#pragma pack(pop)

typedef DynamicArray<TacOutEffData >  TacOutEffArray;

#pragma pack(push, 4)
struct TsMaskData
{
	Graphics::TBitmap* Bmp;
	AnsiString ClassName;
	AnsiString PropertyName;
	Types::TRect R;
	short ImageCount;
	short MaskType;
	short DrawMode;
	Sconst::TacImgType ImgType;
	System::TObject* Manager;
	short WL;
	short WT;
	short WR;
	short WB;
	int Cfg;
	int MulPPi;
	int DivPPI;
	int SkinIndex;
	int Width;
	int Height;
} ;
#pragma pack(pop)

typedef TsMaskData *PsMaskData;

#pragma pack(push, 4)
struct TsFontColor
{
	Graphics::TColor Color;
	Graphics::TColor Left;
	Graphics::TColor Top;
	Graphics::TColor Right;
	Graphics::TColor Bottom;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TsGenState
{
	int GlowSize;
	int ImagePercent;
	int TextureIndex;
	int Transparency;
	int GradientPercent;
	Graphics::TColor Color;
	Graphics::TColor GlowColor;
	TsFontColor FontColor;
	DynamicArray<Sconst::TsGradPoint >  GradientArray;
} ;
#pragma pack(pop)

typedef TsGenState TsProps[3];

#pragma pack(push, 4)
struct TsGeneralData
{
	AnsiString ParentClass;
	AnsiString ClassName;
	TsGenState Props[3];
	bool UseState2;
	bool GiveOwnFont;
	bool ShiftOnClick;
	bool ReservedBoolean;
	int States;
	int ScrollBorderOffset;
	int GlowCount;
	int GlowMargin;
	int GlowSize;
	int HotGlowSize;
	int BorderIndex;
	int ImgTL;
	int ImgTR;
	int ImgBL;
	int ImgBR;
	Graphics::TColor HotGlowColor;
	Graphics::TColor GlowColor;
	int OuterMode;
	int OuterMask;
	int OuterOpacity;
	Types::TRect OuterOffset;
	int OuterBlur;
	int OuterRadius;
	Graphics::TColor OuterColorL;
	Graphics::TColor OuterColorT;
	Graphics::TColor OuterColorR;
	Graphics::TColor OuterColorB;
} ;
#pragma pack(pop)

typedef DynamicArray<TsMaskData >  TsMaskArray;

typedef DynamicArray<TsGeneralData >  TsGeneralDataArray;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE tagSIZE __fastcall MkSize(const TsMaskData &md)/* overload */;
extern PACKAGE bool __fastcall ScaleMaskData(TsMaskData &md, const Graphics::TBitmap* MasterBmp, bool IgnoreFuchsia);

}	/* namespace Smaskdata */
using namespace Smaskdata;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sMaskData
