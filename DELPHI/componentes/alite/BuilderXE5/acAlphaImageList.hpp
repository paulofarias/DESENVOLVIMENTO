// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAlphaImageList.pas' rev: 26.00 (Windows)

#ifndef AcalphaimagelistHPP
#define AcalphaimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acalphaimagelist
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsImageFormat : unsigned char { ifPNG, ifICO, ifBMP32 };

class DELPHICLASS TsImgListItem;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsImgListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FText;
	System::UnicodeString FImageName;
	TsImageFormat FImageFormat;
	Vcl::Graphics::TPixelFormat FPixelFormat;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadData(System::Classes::TStream* Reader);
	void __fastcall WriteData(System::Classes::TStream* Writer);
	
public:
	int OrigWidth;
	int OrigHeight;
	Vcl::Graphics::TBitmap* CacheBmp;
	System::Classes::TMemoryStream* ImgData;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TsImgListItem(System::Classes::TCollection* ACollection);
	__fastcall virtual ~TsImgListItem(void);
	
__published:
	__property TsImageFormat ImageFormat = {read=FImageFormat, write=FImageFormat, nodefault};
	__property System::UnicodeString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property Vcl::Graphics::TPixelFormat PixelFormat = {read=FPixelFormat, write=FPixelFormat, default=7};
	__property System::UnicodeString Text = {read=FText, write=FText};
};

#pragma pack(pop)

class DELPHICLASS TsImgListItems;
class DELPHICLASS TsAlphaImageList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsImgListItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TsImgListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsAlphaImageList* FOwner;
	HIDESBASE TsImgListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsImgListItem* Value);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TsImgListItems(TsAlphaImageList* AOwner);
	__fastcall virtual ~TsImgListItems(void);
	__property TsImgListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

#pragma pack(pop)

class DELPHICLASS TacImageList;
class PASCALIMPLEMENTATION TacImageList : public Vcl::Controls::TImageList
{
	typedef Vcl::Controls::TImageList inherited;
	
protected:
	System::Uitypes::TColor ForeColor;
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	void __fastcall AddAsIcon(Vcl::Graphics::TBitmap* Bmp, int Ndx);
	virtual void __fastcall ClearCache(int ImgIndex = 0xffffffff) = 0 ;
	
public:
	int PixelsPerInch;
	bool IgnoreTransparency;
	__fastcall virtual TacImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TacImageList(void);
	HIDESBASE virtual int __fastcall Count(void) = 0 ;
	virtual Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0) = 0 ;
	virtual bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image, int GlyphHeight = 0x0) = 0 ;
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TacImageList(int AWidth, int AHeight) : Vcl::Controls::TImageList(AWidth, AHeight) { }
	
};


class PASCALIMPLEMENTATION TsAlphaImageList : public TacImageList
{
	typedef TacImageList inherited;
	
private:
	bool FLoaded;
	bool FUseCache;
	bool AcChanging;
	bool FAllowScale;
	bool ItemsUpdating;
	bool StdListIsGenerated;
	TsImgListItems* FItems;
	System::Uitypes::TColor FBkColor;
	HIDESBASE System::Uitypes::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(TsImgListItems* const Value);
	HIDESBASE void __fastcall SetBkColor(const System::Uitypes::TColor Value);
	void __fastcall SetUseCache(const bool Value);
	int __fastcall GetDimension(const int Index);
	void __fastcall SetDimension(const int Index, const int Value);
	
protected:
	int FSavedScale;
	int SavedHeight;
	int SavedWidth;
	void __fastcall SetNewScale(int Value);
	void __fastcall CreateImgList(void);
	bool __fastcall CanScale(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall KillImgList(void);
	bool __fastcall IsDuplicated(void);
	void __fastcall ItemsClear(void);
	virtual void __fastcall ClearCache(int ImgIndex = 0xffffffff);
	
public:
	bool StdMode;
	bool DoubleData;
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE void __fastcall Clear(void);
	HIDESBASE void __fastcall Replace(int AIndex, Vcl::Graphics::TBitmap* ABmp32);
	HIDESBASE int __fastcall Add(Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(TsAlphaImageList* const ImgList);
	virtual int __fastcall Count(void);
	__fastcall virtual TsAlphaImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsAlphaImageList(void);
	void __fastcall UpdateFromStd(void);
	void __fastcall GenerateStdList(void);
	virtual bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	virtual Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0);
	HIDESBASE int __fastcall AddImage(Vcl::Imglist::TCustomImageList* Value, int Index);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromPngStream(System::Classes::TStream* const Stream);
	bool __fastcall TryLoadFromFile(const System::UnicodeString FileName);
	bool __fastcall TryLoadFromPngStream(System::Classes::TStream* Stream);
	void __fastcall MoveItem(int CurIndex, int NewIndex);
	HIDESBASE void __fastcall SetNewDimensions(NativeUInt Value);
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height = {read=GetDimension, write=SetDimension, index=0, default=16};
	__property Width = {read=GetDimension, write=SetDimension, index=1, default=16};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property TsImgListItems* Items = {read=FItems, write=SetItems};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TsAlphaImageList(int AWidth, int AHeight) : TacImageList(AWidth, AHeight) { }
	
};


class DELPHICLASS TsVirtualImageList;
class PASCALIMPLEMENTATION TsVirtualImageList : public Vcl::Imglist::TCustomImageList
{
	typedef Vcl::Imglist::TCustomImageList inherited;
	
private:
	typedef System::DynamicArray<Vcl::Graphics::TBitmap*> _TsVirtualImageList__1;
	
	
private:
	int FWidth;
	int FHeight;
	bool FUseCache;
	bool AcChanging;
	bool FStdHandleUsed;
	bool StdListIsGenerated;
	_TsVirtualImageList__1 CachedImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	TacImageList* FAlphaImageList;
	System::Uitypes::TColor FForeColor;
	void __fastcall SetAlphaImageList(TacImageList* const Value);
	void __fastcall SetUseCache(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetForeColor(const System::Uitypes::TColor Value);
	void __fastcall SetStdHandleUsed(const bool Value);
	
protected:
	int State;
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	bool __fastcall CanUseCache(void);
	void __fastcall CreateImgList(void);
	void __fastcall KillImgList(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall AddAsIcon(Vcl::Graphics::TBitmap* Bmp, int Ndx);
	__property System::Uitypes::TColor ForeColor = {read=FForeColor, write=SetForeColor, nodefault};
	
public:
	int PixelsPerInch;
	int CurrentScale;
	double __fastcall ScaleValue(void);
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	__fastcall virtual TsVirtualImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsVirtualImageList(void);
	HIDESBASE int __fastcall Count(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index);
	void __fastcall ClearItems(int ImgIndex = 0xffffffff);
	virtual void __fastcall Loaded(void);
	void __fastcall RenderCacheNow(int ItemIndex = 0xffffffff);
	void __fastcall UpdateList(bool IgnoreGenerated = true);
	void __fastcall SetCharColor(System::Uitypes::TColor AColor, int AIndex, bool IgnoreDefault);
	
__published:
	__property int Height = {read=FHeight, write=SetInteger, index=0, default=16};
	__property int Width = {read=FWidth, write=SetInteger, index=1, default=16};
	__property TacImageList* AlphaImageList = {read=FAlphaImageList, write=SetAlphaImageList};
	__property bool StdHandleUsed = {read=FStdHandleUsed, write=SetStdHandleUsed, default=1};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TsVirtualImageList(int AWidth, int AHeight) : Vcl::Imglist::TCustomImageList(AWidth, AHeight) { }
	
};


enum DECLSPEC_DENUM TacBlendingMode : unsigned char { bmInactive, bmAlways };

class DELPHICLASS TacCharListItem;
class DELPHICLASS TsCharImageList;
class PASCALIMPLEMENTATION TacCharListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FAngle;
	int FOffsetY;
	int FOrientation;
	System::Word FChar;
	System::UnicodeString FImageName;
	System::Uitypes::TFontPitch FPitch;
	System::Uitypes::TColor FColor;
	System::Uitypes::TFontCharset FCharset;
	System::UnicodeString FFontName;
	System::Uitypes::TFontStyles FStyle;
	double FScalingFactor;
	bool FDrawContour;
	System::Uitypes::TColor FSecondColor;
	System::Word FAddedChar;
	System::Uitypes::TColor FAddedColor;
	System::Uitypes::TFontCharset FAddedCharset;
	int FAddedOffsetX;
	int FAddedOffsetY;
	System::UnicodeString FAddedFontName;
	int FAddedSize;
	void __fastcall SetPitch(const System::Uitypes::TFontPitch Value);
	void __fastcall SetStyle(const System::Uitypes::TFontStyles Value);
	Vcl::Graphics::TBitmap* __fastcall GetImage(int CharHeight = 0x0);
	TsCharImageList* __fastcall ImgList(void);
	void __fastcall SetScalingFactor(const double Value);
	bool __fastcall NotDefScaling(void);
	bool __fastcall NotDefFont(void);
	bool __fastcall NotEmptyAdded(void);
	void __fastcall SetAngle(const int Value);
	void __fastcall SetDrawContour(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetWord(const int Index, const System::Word Value);
	void __fastcall SetAddedFontName(const System::UnicodeString Value);
	void __fastcall SetColor(const int Index, const System::Uitypes::TColor Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetCharset(const int Index, const System::Uitypes::TFontCharset Value);
	
public:
	Vcl::Graphics::TBitmap* CacheBmp;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TacCharListItem(System::Classes::TCollection* ACollection);
	int __fastcall ActualWidth(bool UseAngle);
	__fastcall virtual ~TacCharListItem(void);
	void __fastcall Invalidate(void);
	
__published:
	__property int Angle = {read=FAngle, write=SetAngle, default=0};
	__property System::Uitypes::TFontPitch Pitch = {read=FPitch, write=SetPitch, default=0};
	__property System::Uitypes::TFontStyles Style = {read=FStyle, write=SetStyle, default=0};
	__property double ScalingFactor = {read=FScalingFactor, write=SetScalingFactor, stored=NotDefScaling};
	__property bool DrawContour = {read=FDrawContour, write=SetDrawContour, default=0};
	__property System::UnicodeString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property int Orientation = {read=FOrientation, write=SetInteger, index=0, default=0};
	__property int OffsetY = {read=FOffsetY, write=SetInteger, index=1, default=0};
	__property int AddedOffsetX = {read=FAddedOffsetX, write=SetInteger, index=2, default=0};
	__property int AddedOffsetY = {read=FAddedOffsetY, write=SetInteger, index=3, default=0};
	__property int AddedSize = {read=FAddedSize, write=SetInteger, index=4, default=50};
	__property System::Word Char = {read=FChar, write=SetWord, index=0, default=0};
	__property System::Word AddedChar = {read=FAddedChar, write=SetWord, index=1, default=0};
	__property System::UnicodeString FontName = {read=FFontName, write=SetFontName, stored=NotDefFont};
	__property System::UnicodeString AddedFontName = {read=FAddedFontName, write=SetAddedFontName, stored=NotEmptyAdded};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, index=0, default=536870911};
	__property System::Uitypes::TColor SecondColor = {read=FSecondColor, write=SetColor, index=1, default=536870911};
	__property System::Uitypes::TColor AddedColor = {read=FAddedColor, write=SetColor, index=2, default=536870911};
	__property System::Uitypes::TFontCharset Charset = {read=FCharset, write=SetCharset, index=0, default=1};
	__property System::Uitypes::TFontCharset AddedCharset = {read=FAddedCharset, write=SetCharset, index=1, default=1};
};


class DELPHICLASS TacCharListItems;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacCharListItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TacCharListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsCharImageList* FOwner;
	HIDESBASE TacCharListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacCharListItem* Value);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	void __fastcall CheckItems(void);
	
public:
	__fastcall TacCharListItems(TsCharImageList* AOwner);
	__fastcall virtual ~TacCharListItems(void);
	__property TacCharListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TacCharItemData
{
public:
	int Angle;
	int OffsetY;
	int Orientation;
	System::Uitypes::TColor Color;
	System::Uitypes::TColor SecondColor;
	System::Word Char;
	HFONT Handle;
	System::UnicodeString FontName;
	bool DrawContour;
	System::Uitypes::TFontPitch Pitch;
	System::Uitypes::TFontStyles Style;
	System::Uitypes::TFontCharset Charset;
	double ScalingFactor;
	int AddedOffsetX;
	int AddedOffsetY;
	int AddedSize;
	System::Word AddedChar;
	System::Uitypes::TColor AddedColor;
	System::Uitypes::TFontCharset AddedCharset;
};


class DELPHICLASS TacEmbeddedFont;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacEmbeddedFont : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
protected:
	System::UnicodeString FFileName;
	System::UnicodeString FFontName;
	NativeUInt Handle;
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadData(System::Classes::TStream* Reader);
	void __fastcall WriteData(System::Classes::TStream* Writer);
	
public:
	System::Classes::TMemoryStream* FontData;
	__fastcall virtual ~TacEmbeddedFont(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TacEmbeddedFont(System::Classes::TCollection* ACollection);
	void __fastcall UnLoadFont(void);
	void __fastcall LoadFont(void);
	
__published:
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName};
	__property System::UnicodeString FontName = {read=FFontName, write=FFontName};
};

#pragma pack(pop)

class DELPHICLASS TacEmbeddedFonts;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacEmbeddedFonts : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TacEmbeddedFont* operator[](int Index) { return Items[Index]; }
	
protected:
	TsCharImageList* FOwner;
	HIDESBASE TacEmbeddedFont* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacEmbeddedFont* const Value);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TacEmbeddedFonts(void);
	__fastcall TacEmbeddedFonts(TsCharImageList* AOwner);
	__property TacEmbeddedFont* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsCharImageList : public TacImageList
{
	typedef TacImageList inherited;
	
private:
	bool AcChanging;
	bool FAllowScale;
	bool StdListIsGenerated;
	System::Uitypes::TColor FBkColor;
	TacCharListItems* FItems;
	TacEmbeddedFonts* FEmbeddedFonts;
	TacBlendingMode FBlendingMode;
	System::Byte FBlendValue;
	HIDESBASE System::Uitypes::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(TacCharListItems* const Value);
	HIDESBASE void __fastcall SetBkColor(const System::Uitypes::TColor Value);
	int __fastcall GetDimension(const int Index);
	void __fastcall SetDimension(const int Index, const int Value);
	void __fastcall SetEmbeddedFonts(TacEmbeddedFonts* const Value);
	void __fastcall SetBlendingMode(const TacBlendingMode Value);
	void __fastcall SetBlendValue(const System::Byte Value);
	
protected:
	bool FLoaded;
	int State;
	int FSavedScale;
	int SavedHeight;
	int SavedWidth;
	void __fastcall SetNewScale(int Value);
	void __fastcall CreateImgList(void);
	bool __fastcall CanScale(void);
	bool __fastcall CanUseCache(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall PrepareBmp(Vcl::Graphics::TBitmap* Bmp, int Index, const System::Types::TRect &aRect, int CharHeight, int Offset);
	void __fastcall UnLoadAllFonts(void);
	void __fastcall LoadAllFonts(void);
	
public:
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	void __fastcall UpdateStd(int i);
	int __fastcall AddItem(const TacCharItemData &ItemData);
	void __fastcall SetCharColor(System::Uitypes::TColor AColor, int AIndex, bool IgnoreDefault);
	void __fastcall KillImgList(void);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE void __fastcall Clear(void);
	virtual void __fastcall ClearCache(int ImgIndex = 0xffffffff);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(TsCharImageList* const ImgList);
	int __fastcall FontIndex(const System::UnicodeString aFontName);
	virtual int __fastcall Count(void);
	__fastcall virtual TsCharImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsCharImageList(void);
	void __fastcall GenerateStdList(void);
	virtual bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	virtual Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0);
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap32Color(int Index, int aWidth, int aHeight, System::Uitypes::TColor CharColor, int GlyphHeight = 0x0);
	bool __fastcall ItemIsCached(TacCharListItem* Item, int RequiredWidth, int RequiredHeight, int CharHeight, System::Uitypes::TColor RequiredColor);
	virtual void __fastcall Loaded(void);
	HIDESBASE void __fastcall SetNewDimensions(NativeUInt Value);
	bool __fastcall AddEmbeddedFont(const System::UnicodeString FileName, const System::UnicodeString FontName);
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height = {read=GetDimension, write=SetDimension, index=0, default=24};
	__property Width = {read=GetDimension, write=SetDimension, index=1, default=26};
	__property TacEmbeddedFonts* EmbeddedFonts = {read=FEmbeddedFonts, write=SetEmbeddedFonts};
	__property TacCharListItems* Items = {read=FItems, write=SetItems};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property System::Byte BlendValue = {read=FBlendValue, write=SetBlendValue, default=255};
	__property TacBlendingMode BlendingMode = {read=FBlendingMode, write=SetBlendingMode, default=0};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TsCharImageList(int AWidth, int AHeight) : TacImageList(AWidth, AHeight) { }
	
};


typedef void __fastcall (*TIterImagesProc)(Vcl::Imglist::TCustomImageList* ImgList, int Data);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool acIgnoreBlendColor;
extern DELPHI_PACKAGE void __fastcall IterateImageLists(TIterImagesProc CallBack, int Data);
extern DELPHI_PACKAGE bool __fastcall GetImageFormat(const System::UnicodeString FileName, TsImageFormat &ImageFormat)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetImageFormat(System::Classes::TStream* const Stream, TsImageFormat &ImageFormat)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall DrawAlphaImgList(Vcl::Imglist::TCustomImageList* const ImgList, Vcl::Graphics::TBitmap* const DestBmp, const int Left, const int Top, const int ImageIndex, const int Blend, const System::Uitypes::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected, int PPI);
extern DELPHI_PACKAGE void __fastcall DrawAlphaImgListDC(Vcl::Imglist::TCustomImageList* const ImgList, const HDC DC, const int Left, const int Top, const int ImageIndex, const int Blend, const System::Uitypes::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected, int PPI = 0x60);
extern DELPHI_PACKAGE double __fastcall GetDefScaling(System::Uitypes::TFontCharset CharSet, const System::UnicodeString FontName);
extern DELPHI_PACKAGE void __fastcall SetImagesPPI(Vcl::Imglist::TCustomImageList* ImgList, const int PPI);
extern DELPHI_PACKAGE void __fastcall SetImagesState(Vcl::Imglist::TCustomImageList* ImgList, const int AState);
extern DELPHI_PACKAGE void __fastcall ClearImgListCache(Vcl::Imglist::TCustomImageList* ImgList, int ImgIndex = 0xffffffff);
extern DELPHI_PACKAGE bool __fastcall AddImageFromRes(unsigned aInstance, TsAlphaImageList* ImageList, const System::UnicodeString ResName, TsImageFormat aImageFormat);
}	/* namespace Acalphaimagelist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACALPHAIMAGELIST)
using namespace Acalphaimagelist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcalphaimagelistHPP
