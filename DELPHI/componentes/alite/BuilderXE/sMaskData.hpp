// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMaskData.pas' rev: 22.00

#ifndef SmaskdataHPP
#define SmaskdataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smaskdata
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacOutEffData
{
	
public:
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
};


typedef System::DynamicArray<TacOutEffData> TacOutEffArray;

struct DECLSPEC_DRECORD TsMaskData
{
	
public:
	Graphics::TBitmap* Bmp;
	System::UnicodeString ClassName;
	System::UnicodeString PropertyName;
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
};


typedef TsMaskData *PsMaskData;

struct DECLSPEC_DRECORD TsFontColor
{
	
public:
	Graphics::TColor Color;
	Graphics::TColor Left;
	Graphics::TColor Top;
	Graphics::TColor Right;
	Graphics::TColor Bottom;
};


struct DECLSPEC_DRECORD TsGenState
{
	
public:
	int GlowSize;
	int ImagePercent;
	int TextureIndex;
	int Transparency;
	int GradientPercent;
	Graphics::TColor Color;
	Graphics::TColor GlowColor;
	TsFontColor FontColor;
	Sconst::TsGradArray GradientArray;
};


typedef System::StaticArray<TsGenState, 3> TsProps;

struct DECLSPEC_DRECORD TsGeneralData
{
	
public:
	System::UnicodeString ParentClass;
	System::UnicodeString ClassName;
	TsProps Props;
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
};


typedef System::DynamicArray<TsMaskData> TsMaskArray;

typedef System::DynamicArray<TsGeneralData> TsGeneralDataArray;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE tagSIZE __fastcall MkSize(const TsMaskData &md)/* overload */;
extern PACKAGE bool __fastcall ScaleMaskData(TsMaskData &md, const Graphics::TBitmap* MasterBmp, bool IgnoreFuchsia);

}	/* namespace Smaskdata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Smaskdata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SmaskdataHPP
