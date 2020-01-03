// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acPNG.pas' rev: 6.00

#ifndef acPNGHPP
#define acPNGHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sConst.hpp>	// Pascal unit
#include <acZLibEx.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acpng
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TColorScheme { csUnknown, csIndexed, csG, csGA, csRGB, csRGBA, csBGR, csBGRA, csCMY, csCMYK, csCIELab, csYCbCr, csPhotoYCC };
#pragma option pop

#pragma option push -b-
enum acPNG__1 { coAlpha, coApplyGamma, coNeedByteSwap, coLabByteRange, coLabChromaOffset };
#pragma option pop

typedef Set<acPNG__1, coAlpha, coLabChromaOffset>  TConvertOptions;

#pragma option push -b-
enum TRawPaletteFormat { pfInterlaced8Triple, pfInterlaced8Quad, pfPlane8Triple, pfPlane8Quad, pfInterlaced16Triple, pfInterlaced16Quad, pfPlane16Triple, pfPlane16Quad };
#pragma option pop

typedef void __fastcall (__closure *TConversionMethod)(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);

typedef DynamicArray<int >  acPNG__3;

class DELPHICLASS TColorManager;
class PASCALIMPLEMENTATION TColorManager : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	bool FChanged;
	Byte FSourceBPS;
	Byte FTargetBPS;
	Byte FSourceSPP;
	Byte FTargetSPP;
	float FMainGamma;
	float FDisplayGamma;
	Byte FGammaTable[256];
	float FYCbCrCoefficients[3];
	DynamicArray<int >  FCrToRedTable;
	DynamicArray<int >  FCbToBlueTable;
	DynamicArray<int >  FCrToGreenTable;
	DynamicArray<int >  FCbToGreenTable;
	TColorScheme FSourceScheme;
	TColorScheme FTargetScheme;
	TConversionMethod FRowConversion;
	TConvertOptions FSourceOptions;
	TConvertOptions FTargetOptions;
	
protected:
	Byte __fastcall ComponentScaleConvert(Word Value);
	Byte __fastcall ComponentScaleGammaConvert(Word Value);
	Byte __fastcall ComponentSwapScaleGammaConvert(Word Value);
	Byte __fastcall ComponentSwapScaleConvert(Word Value);
	void __fastcall RowConvertBGR2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertBGR2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertCIELAB2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertCIELAB2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertCMYK2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertCMYK2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertGray(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertIndexed8(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertIndexedBoth16(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertIndexedSource16(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertIndexedTarget16(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertRGB2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertRGB2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertPhotoYCC2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertPhotoYCC2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertYCbCr2BGR(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall RowConvertYCbCr2RGB(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	void __fastcall CreateYCbCrLookup(void);
	Graphics::TPixelFormat __fastcall GetPixelFormat(int Index);
	void __fastcall PrepareConversion(void);
	void __fastcall SetSourceBitsPerSample(const Byte Value);
	void __fastcall SetTargetBitsPerSample(const Byte Value);
	void __fastcall SetSourceColorScheme(const TColorScheme Value);
	void __fastcall SetTargetColorScheme(const TColorScheme Value);
	void __fastcall SetSourceSamplesPerPixel(const Byte Value);
	void __fastcall SetTargetSamplesPerPixel(const Byte Value);
	
public:
	__fastcall TColorManager(void);
	void __fastcall ConvertRow(const void * * Source, const int Source_Size, void * Target, unsigned Count, Byte Mask);
	HPALETTE __fastcall CreateColorPalette(const void * * Data, const int Data_Size, TRawPaletteFormat DataFormat, unsigned ColorCount, bool RGB);
	HPALETTE __fastcall CreateGrayscalePalette(bool MinimumIsWhite);
	void __fastcall Error(const AnsiString Msg);
	void __fastcall SetGamma(float MainGamma, float DisplayGamma = 2.200000E+00);
	__property Byte SourceBitsPerSample = {read=FSourceBPS, write=SetSourceBitsPerSample, nodefault};
	__property TColorScheme SourceColorScheme = {read=FSourceScheme, write=SetSourceColorScheme, nodefault};
	__property TConvertOptions SourceOptions = {read=FSourceOptions, write=FSourceOptions, nodefault};
	__property Graphics::TPixelFormat SourcePixelFormat = {read=GetPixelFormat, index=0, nodefault};
	__property Byte SourceSamplesPerPixel = {read=FSourceSPP, write=SetSourceSamplesPerPixel, nodefault};
	__property Byte TargetBitsPerSample = {read=FTargetBPS, write=SetTargetBitsPerSample, nodefault};
	__property TColorScheme TargetColorScheme = {read=FTargetScheme, write=SetTargetColorScheme, nodefault};
	__property TConvertOptions TargetOptions = {read=FTargetOptions, write=FTargetOptions, nodefault};
	__property Graphics::TPixelFormat TargetPixelFormat = {read=GetPixelFormat, index=1, nodefault};
	__property Byte TargetSamplesPerPixel = {read=FTargetSPP, write=SetTargetSamplesPerPixel, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TColorManager(void) { }
	#pragma option pop
	
};


typedef DynamicArray<Byte >  TByteArray;

typedef DynamicArray<unsigned >  TCardinalArray;

typedef DynamicArray<float >  TFloatArray;

class DELPHICLASS TLZ77Decoder;
class PASCALIMPLEMENTATION TLZ77Decoder : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	#pragma pack(push, 1)
	Aczlibex::TZStreamRec FStream;
	#pragma pack(pop)
	
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
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TLZ77Decoder(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum acPNG__5 { ioBigEndian, ioUseGamma };
#pragma option pop

typedef Set<acPNG__5, ioBigEndian, ioUseGamma>  TImageOptions;

#pragma option push -b-
enum TCompressionType { ctUnknown, ctNone, ctLZ77 };
#pragma option pop

struct TImageProperties;
typedef TImageProperties *PImageProperties;

#pragma pack(push, 4)
struct TImageProperties
{
	TImageOptions Options;
	unsigned Width;
	TColorScheme ColorScheme;
	Byte BitsPerSample;
	Byte SamplesPerPixel;
	TCompressionType Compression;
} ;
#pragma pack(pop)

typedef char TChunkType[4];

#pragma pack(push, 1)
struct TPNGChunkHeader
{
	unsigned Length;
	char ChunkType[4];
} ;
#pragma pack(pop)

class DELPHICLASS TPNGGraphic;
class PASCALIMPLEMENTATION TPNGGraphic : public Graphics::TBitmap 
{
	typedef Graphics::TBitmap inherited;
	
private:
	TColorManager* FColorManager;
	TImageProperties FImageProperties;
	DynamicArray<Byte >  FTransparency;
	Graphics::TColor FBackgroundColor;
	#pragma pack(push, 1)
	Types::TRect FProgressRect;
	#pragma pack(pop)
	
	unsigned FBasePosition;
	Classes::TStream* FStream;
	TLZ77Decoder* FDecoder;
	int FIDATSize;
	void *FRawBuffer;
	void *FCurrentSource;
	#pragma pack(push, 1)
	TPNGChunkHeader FHeader;
	#pragma pack(pop)
	
	unsigned FCurrentCRC;
	int FSourceBPP;
	HPALETTE FPalette;
	Graphics::TColor FTransparentColor;
	bool __fastcall IsChunk(const char * ChunkType);
	unsigned __fastcall LoadAndSwapHeader(void);
	void __fastcall ApplyFilter(Byte Filter, System::PByte Line, System::PByte PrevLine, System::PByte Target, int BPP, int BytesPerRow);
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
	HIDESBASE void __fastcall LoadFromResourceName(unsigned Instance, const AnsiString ResName);
	virtual void __fastcall Draw(Graphics::TCanvas* ACanvas, const Types::TRect &Rect);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	/*         class method */ static bool __fastcall CanLoad(TMetaClass* vmt, const AnsiString FileName)/* overload */;
	/*         class method */ static bool __fastcall CanLoad(TMetaClass* vmt, Classes::TStream* Stream)/* overload */;
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
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acPNG
