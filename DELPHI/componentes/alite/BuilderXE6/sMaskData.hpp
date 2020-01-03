// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMaskData.pas' rev: 27.00 (Windows)

#ifndef SmaskdataHPP
#define SmaskdataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smaskdata
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacOutEffData
{
public:
	System::Uitypes::TColor ColorL;
	System::Uitypes::TColor ColorT;
	System::Uitypes::TColor ColorR;
	System::Uitypes::TColor ColorB;
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
	Vcl::Graphics::TBitmap* Bmp;
	System::UnicodeString ClassName;
	System::UnicodeString PropertyName;
	System::Types::TRect R;
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
	System::Uitypes::TColor Color;
	System::Uitypes::TColor Left;
	System::Uitypes::TColor Top;
	System::Uitypes::TColor Right;
	System::Uitypes::TColor Bottom;
};


struct DECLSPEC_DRECORD TsGenState
{
public:
	int GlowSize;
	int ImagePercent;
	int TextureIndex;
	int Transparency;
	int GradientPercent;
	System::Uitypes::TColor Color;
	System::Uitypes::TColor GlowColor;
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
	System::Uitypes::TColor HotGlowColor;
	System::Uitypes::TColor GlowColor;
	int OuterMode;
	int OuterMask;
	int OuterOpacity;
	System::Types::TRect OuterOffset;
	int OuterBlur;
	int OuterRadius;
	System::Uitypes::TColor OuterColorL;
	System::Uitypes::TColor OuterColorT;
	System::Uitypes::TColor OuterColorR;
	System::Uitypes::TColor OuterColorB;
};


typedef System::DynamicArray<TsMaskData> TsMaskArray;

typedef System::DynamicArray<TsGeneralData> TsGeneralDataArray;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Types::TSize __fastcall MkSize(const TsMaskData &md)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ScaleMaskData(TsMaskData &md, Vcl::Graphics::TBitmap* const MasterBmp, bool IgnoreFuchsia);
}	/* namespace Smaskdata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SMASKDATA)
using namespace Smaskdata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SmaskdataHPP
