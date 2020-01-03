// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acpng.pas' rev: 21.00

#ifndef AcpngHPP
#define AcpngHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <Aczlibex.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acpng
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TColorScheme { csUnknown, csIndexed, csG, csGA, csRGB, csRGBA, csBGR, csBGRA, csCMY, csCMYK, csCIELab, csYCbCr, csPhotoYCC };
#pragma option pop

#pragma option push -b-
enum Acpng__1 { coAlpha, coApplyGamma, coNeedByteSwap, coLabByteRange, coLabChromaOffset };
#pragma option pop

typedef Set<Acpng__1, coAlpha, coLabChromaOffset>  TConvertOptions;

#pragma option push -b-
enum TRawPaletteFormat { pfInterlaced8Triple, pfInterlaced8Quad, pfPlane8Triple, pfPlane8Quad, pfInterlaced16Triple, pfInterlaced16Quad, pfPlane16Triple, pfPlane16Quad };
#pragma option pop

typedef void __fastcall (__closure *TConversionMethod)(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);

class DELPHICLASS TColorManager;
class PASCALIMPLEMENTATION TColorManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef DynamicArray<int> _TColorManager__1;
	
	
private:
	bool FChanged;
	System::Byte FSourceBPS;
	System::Byte FTargetBPS;
	System::Byte FSourceSPP;
	System::Byte FTargetSPP;
	float FMainGamma;
	float FDisplayGamma;
	StaticArray<System::Byte, 256> FGammaTable;
	StaticArray<float, 3> FYCbCrCoefficients;
	_TColorManager__1 FCrToRedTable;
	_TColorManager__1 FCbToBlueTable;
	_TColorManager__1 FCrToGreenTable;
	_TColorManager__1 FCbToGreenTable;
	TColorScheme FSourceScheme;
	TColorScheme FTargetScheme;
	TConversionMethod FRowConversion;
	TConvertOptions FSourceOptions;
	TConvertOptions FTargetOptions;
	
protected:
	System::Byte __fastcall ComponentScaleConvert(System::Word Value);
	System::Byte __fastcall ComponentScaleGammaConvert(System::Word Value);
	System::Byte __fastcall ComponentSwapScaleGammaConvert(System::Word Value);
	System::Byte __fastcall ComponentSwapScaleConvert(System::Word Value);
	void __fastcall RowConvertBGR2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertBGR2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertCIELAB2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertCIELAB2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertCMYK2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertCMYK2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertGray(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertIndexed8(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertIndexedBoth16(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertIndexedSource16(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertIndexedTarget16(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertRGB2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertRGB2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertPhotoYCC2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertPhotoYCC2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertYCbCr2BGR(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall RowConvertYCbCr2RGB(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	void __fastcall CreateYCbCrLookup(void);
	Graphics::TPixelFormat __fastcall GetPixelFormat(int Index);
	void __fastcall PrepareConversion(void);
	void __fastcall SetSourceBitsPerSample(const System::Byte Value);
	void __fastcall SetTargetBitsPerSample(const System::Byte Value);
	void __fastcall SetSourceColorScheme(const TColorScheme Value);
	void __fastcall SetTargetColorScheme(const TColorScheme Value);
	void __fastcall SetSourceSamplesPerPixel(const System::Byte Value);
	void __fastcall SetTargetSamplesPerPixel(const System::Byte Value);
	
public:
	__fastcall TColorManager(void);
	void __fastcall ConvertRow(void * const *Source, const int Source_Size, void * Target, unsigned Count, System::Byte Mask);
	HPALETTE __fastcall CreateColorPalette(void * const *Data, const int Data_Size, TRawPaletteFormat DataFormat, unsigned ColorCount, bool RGB);
	HPALETTE __fastcall CreateGrayscalePalette(bool MinimumIsWhite);
	void __fastcall Error(const System::UnicodeString Msg);
	void __fastcall SetGamma(float MainGamma, float DisplayGamma = 2.200000E+00);
	__property System::Byte SourceBitsPerSample = {read=FSourceBPS, write=SetSourceBitsPerSample, nodefault};
	__property TColorScheme SourceColorScheme = {read=FSourceScheme, write=SetSourceColorScheme, nodefault};
	__property TConvertOptions SourceOptions = {read=FSourceOptions, write=FSourceOptions, nodefault};
	__property Graphics::TPixelFormat SourcePixelFormat = {read=GetPixelFormat, index=0, nodefault};
	__property System::Byte SourceSamplesPerPixel = {read=FSourceSPP, write=SetSourceSamplesPerPixel, nodefault};
	__property System::Byte TargetBitsPerSample = {read=FTargetBPS, write=SetTargetBitsPerSample, nodefault};
	__property TColorScheme TargetColorScheme = {read=FTargetScheme, write=SetTargetColorScheme, nodefault};
	__property TConvertOptions TargetOptions = {read=FTargetOptions, write=FTargetOptions, nodefault};
	__property Graphics::TPixelFormat TargetPixelFormat = {read=GetPixelFormat, index=1, nodefault};
	__property System::Byte TargetSamplesPerPixel = {read=FTargetSPP, write=SetTargetSamplesPerPixel, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TColorManager(void) { }
	
};


typedef DynamicArray<System::Byte> TByteArray;

typedef DynamicArray<unsigned> TCardinalArray;

typedef DynamicArray<float> TFloatArray;

class DELPHICLASS TLZ77Decoder;
class PASCALIMPLEMENTATION TLZ77Decoder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Aczlibex::TZStreamRec FStream;
	int FZLibResult;
	int FFlushMode;
	bool FAutoReset;
	int __fastcall GetAvailableInput(void);
	int __fastcall GetAvailableOutput(void);
	
public:
	__fastcall TLZ77Decoder(int FlushMode, bool AutoReset);
	void __fastcall Decode(void * &Source, void * &Dest, int PackedSize, int UnpackedSize);
	void __fastcall DecodeEnd(void);
	void __fastcall DecodeInit(void);
	__property int AvailableInput = {read=GetAvailableInput, nodefault};
	__property int AvailableOutput = {read=GetAvailableOutput, nodefault};
	__property int ZLibResult = {read=FZLibResult, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLZ77Decoder(void) { }
	
};


#pragma option push -b-
enum Acpng__4 { ioBigEndian, ioUseGamma };
#pragma option pop

typedef Set<Acpng__4, ioBigEndian, ioUseGamma>  TImageOptions;

#pragma option push -b-
enum TCompressionType { ctUnknown, ctNone, ctLZ77 };
#pragma option pop

struct TImageProperties;
typedef TImageProperties *PImageProperties;

struct TImageProperties
{
	
public:
	TImageOptions Options;
	unsigned Width;
	TColorScheme ColorScheme;
	System::Byte BitsPerSample;
	System::Byte SamplesPerPixel;
	TCompressionType Compression;
};


typedef StaticArray<char, 4> TChunkType;

#pragma pack(push,1)
struct TPNGChunkHeader
{
	
public:
	unsigned Length;
	TChunkType ChunkType;
};
#pragma pack(pop)


class DELPHICLASS TPNGGraphic;
class PASCALIMPLEMENTATION TPNGGraphic : public Graphics::TBitmap
{
	typedef Graphics::TBitmap inherited;
	
private:
	TColorManager* FColorManager;
	TImageProperties FImageProperties;
	TByteArray FTransparency;
	Graphics::TColor FBackgroundColor;
	Types::TRect FProgressRect;
	unsigned FBasePosition;
	Classes::TStream* FStream;
	TLZ77Decoder* FDecoder;
	int FIDATSize;
	void *FRawBuffer;
	void *FCurrentSource;
	TPNGChunkHeader FHeader;
	unsigned FCurrentCRC;
	int FSourceBPP;
	HPALETTE FPalette;
	Graphics::TColor FTransparentColor;
	bool __fastcall IsChunk(const TChunkType ChunkType);
	unsigned __fastcall LoadAndSwapHeader(void);
	void __fastcall ApplyFilter(System::Byte Filter, System::PByte Line, System::PByte PrevLine, System::PByte Target, int BPP, int BytesPerRow);
	void __fastcall LoadBackgroundColor(const void *Description);
	void __fastcall LoadIDAT(const void *Description);
	void __fastcall LoadTransparency(const void *Description);
	int __fastcall SetupColorDepth(int ColorType, int BitDepth);
	void __fastcall ReadRow(void * RowBuffer, int BytesPerRow);
	void __fastcall ReadDataAndCheckCRC(void);
	
public:
	bool Reflected;
	__fastcall virtual TPNGGraphic(void);
	__fastcall virtual ~TPNGGraphic(void);
	HIDESBASE void __fastcall LoadFromResourceName(unsigned Instance, const System::UnicodeString ResName);
	virtual void __fastcall Draw(Graphics::TCanvas* ACanvas, const Types::TRect &Rect);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__classmethod bool __fastcall CanLoad(const System::UnicodeString FileName)/* overload */;
	__classmethod bool __fastcall CanLoad(Classes::TStream* Stream)/* overload */;
	virtual void __fastcall LoadFromStream(Classes::TStream* Stream);
	bool __fastcall ReadImageProperties(Classes::TStream* Stream, unsigned ImageIndex);
	__property Graphics::TColor BackgroundColor = {read=FBackgroundColor, nodefault};
	__property TByteArray Transparency = {read=FTransparency};
	__property TColorManager* ColorManager = {read=FColorManager};
	__property TImageProperties ImageProperties = {read=FImageProperties, write=FImageProperties};
};


//-- var, const, procedure ---------------------------------------------------
#define DefaultDisplayGamma  (2.200000E+00)
extern PACKAGE bool UseACPng;
extern PACKAGE void __fastcall UpdateTransparency(Graphics::TBitmap* Bmp, TPNGGraphic* Png);

}	/* namespace Acpng */
using namespace Acpng;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcpngHPP
