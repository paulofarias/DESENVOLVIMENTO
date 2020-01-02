// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acalphaimagelist.pas' rev: 11.00

#ifndef AcalphaimagelistHPP
#define AcalphaimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acalphaimagelist
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsImageFormat { ifPNG, ifICO, ifBMP32 };
#pragma option pop

class DELPHICLASS TsImgListItem;
class PASCALIMPLEMENTATION TsImgListItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FText;
	AnsiString FImageName;
	TsImageFormat FImageFormat;
	Graphics::TPixelFormat FPixelFormat;
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	void __fastcall ReadData(Classes::TStream* Reader);
	void __fastcall WriteData(Classes::TStream* Writer);
	
public:
	int OrigWidth;
	int OrigHeight;
	Graphics::TBitmap* CacheBmp;
	Classes::TMemoryStream* ImgData;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TsImgListItem(Classes::TCollection* ACollection);
	__fastcall virtual ~TsImgListItem(void);
	
__published:
	__property TsImageFormat ImageFormat = {read=FImageFormat, write=FImageFormat, nodefault};
	__property AnsiString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property Graphics::TPixelFormat PixelFormat = {read=FPixelFormat, write=FPixelFormat, default=7};
	__property AnsiString Text = {read=FText, write=FText};
};


class DELPHICLASS TsImgListItems;
class DELPHICLASS TsAlphaImageList;
class DELPHICLASS TacImageList;
class PASCALIMPLEMENTATION TacImageList : public Controls::TImageList 
{
	typedef Controls::TImageList inherited;
	
protected:
	Graphics::TColor ForeColor;
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	void __fastcall AddAsIcon(Graphics::TBitmap* Bmp, int Ndx);
	virtual void __fastcall ClearCache(int ImgIndex = 0xffffffff) = 0 ;
	
public:
	int PixelsPerInch;
	bool IgnoreTransparency;
	__fastcall virtual TacImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TacImageList(void);
	HIDESBASE virtual int __fastcall Count(void) = 0 ;
	virtual Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0) = 0 ;
	virtual bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image, int GlyphHeight = 0x0) = 0 ;
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TacImageList(int AWidth, int AHeight) : Controls::TImageList(AWidth, AHeight) { }
	#pragma option pop
	
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
	Graphics::TColor FBkColor;
	HIDESBASE Graphics::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(const TsImgListItems* Value);
	HIDESBASE void __fastcall SetBkColor(const Graphics::TColor Value);
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
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
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
	HIDESBASE void __fastcall Replace(int AIndex, Graphics::TBitmap* ABmp32);
	HIDESBASE int __fastcall Add(Graphics::TBitmap* Image, Graphics::TBitmap* Mask);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(const TsAlphaImageList* ImgList);
	virtual int __fastcall Count(void);
	__fastcall virtual TsAlphaImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TsAlphaImageList(void);
	void __fastcall UpdateFromStd(void);
	void __fastcall GenerateStdList(void);
	virtual bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	virtual Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0);
	HIDESBASE int __fastcall AddImage(Imglist::TCustomImageList* Value, int Index);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFromFile(const AnsiString FileName);
	void __fastcall LoadFromPngStream(const Classes::TStream* Stream);
	bool __fastcall TryLoadFromFile(const AnsiString FileName);
	bool __fastcall TryLoadFromPngStream(Classes::TStream* Stream);
	void __fastcall MoveItem(int CurIndex, int NewIndex);
	HIDESBASE void __fastcall SetNewDimensions(unsigned Value);
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height  = {read=GetDimension, write=SetDimension, index=0, default=16};
	__property Width  = {read=GetDimension, write=SetDimension, index=1, default=16};
	__property Graphics::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property TsImgListItems* Items = {read=FItems, write=SetItems};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TsAlphaImageList(int AWidth, int AHeight) : TacImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TsImgListItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TsImgListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsAlphaImageList* FOwner;
	HIDESBASE TsImgListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsImgListItem* Value);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TsImgListItems(TsAlphaImageList* AOwner);
	__fastcall virtual ~TsImgListItems(void);
	__property TsImgListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


typedef DynamicArray<Graphics::TBitmap* >  acAlphaImageList__6;

class DELPHICLASS TsVirtualImageList;
class PASCALIMPLEMENTATION TsVirtualImageList : public Imglist::TCustomImageList 
{
	typedef Imglist::TCustomImageList inherited;
	
private:
	int FWidth;
	int FHeight;
	bool FUseCache;
	bool AcChanging;
	bool FStdHandleUsed;
	bool StdListIsGenerated;
	DynamicArray<Graphics::TBitmap* >  CachedImages;
	Imglist::TChangeLink* FImageChangeLink;
	TacImageList* FAlphaImageList;
	Graphics::TColor FForeColor;
	void __fastcall SetAlphaImageList(const TacImageList* Value);
	void __fastcall SetUseCache(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetForeColor(const Graphics::TColor Value);
	void __fastcall SetStdHandleUsed(const bool Value);
	
protected:
	int State;
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	bool __fastcall CanUseCache(void);
	void __fastcall CreateImgList(void);
	void __fastcall KillImgList(void);
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall AddAsIcon(Graphics::TBitmap* Bmp, int Ndx);
	__property Graphics::TColor ForeColor = {read=FForeColor, write=SetForeColor, nodefault};
	
public:
	int PixelsPerInch;
	int CurrentScale;
	double __fastcall ScaleValue(void);
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	__fastcall virtual TsVirtualImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TsVirtualImageList(void);
	HIDESBASE int __fastcall Count(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	Graphics::TBitmap* __fastcall CreateBitmap32(int Index);
	void __fastcall ClearItems(int ImgIndex = 0xffffffff);
	virtual void __fastcall Loaded(void);
	void __fastcall RenderCacheNow(int ItemIndex = 0xffffffff);
	void __fastcall UpdateList(bool IgnoreGenerated = true);
	void __fastcall SetCharColor(Graphics::TColor AColor, int AIndex, bool IgnoreDefault);
	
__published:
	__property int Height = {read=FHeight, write=SetInteger, index=0, default=16};
	__property int Width = {read=FWidth, write=SetInteger, index=1, default=16};
	__property TacImageList* AlphaImageList = {read=FAlphaImageList, write=SetAlphaImageList};
	__property bool StdHandleUsed = {read=FStdHandleUsed, write=SetStdHandleUsed, default=1};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TsVirtualImageList(int AWidth, int AHeight) : Imglist::TCustomImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TacBlendingMode { bmInactive, bmAlways };
#pragma option pop

class DELPHICLASS TacCharListItem;
class DELPHICLASS TsCharImageList;
class PASCALIMPLEMENTATION TacCharListItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	int FAngle;
	int FOffsetY;
	int FOrientation;
	Word FChar;
	AnsiString FImageName;
	Graphics::TFontPitch FPitch;
	Graphics::TColor FColor;
	Graphics::TFontCharset FCharset;
	AnsiString FFontName;
	Graphics::TFontStyles FStyle;
	double FScalingFactor;
	bool FDrawContour;
	Graphics::TColor FSecondColor;
	Word FAddedChar;
	Graphics::TColor FAddedColor;
	Graphics::TFontCharset FAddedCharset;
	int FAddedOffsetX;
	int FAddedOffsetY;
	AnsiString FAddedFontName;
	int FAddedSize;
	void __fastcall SetPitch(const Graphics::TFontPitch Value);
	void __fastcall SetStyle(const Graphics::TFontStyles Value);
	Graphics::TBitmap* __fastcall GetImage(int CharHeight = 0x0);
	TsCharImageList* __fastcall ImgList(void);
	void __fastcall SetScalingFactor(const double Value);
	bool __fastcall NotDefScaling(void);
	bool __fastcall NotDefFont(void);
	bool __fastcall NotEmptyAdded(void);
	void __fastcall SetAngle(const int Value);
	void __fastcall SetDrawContour(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetWord(const int Index, const Word Value);
	void __fastcall SetAddedFontName(const AnsiString Value);
	void __fastcall SetColor(const int Index, const Graphics::TColor Value);
	void __fastcall SetFontName(const AnsiString Value);
	void __fastcall SetCharset(const int Index, const Graphics::TFontCharset Value);
	
public:
	Graphics::TBitmap* CacheBmp;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TacCharListItem(Classes::TCollection* ACollection);
	int __fastcall ActualWidth(bool UseAngle);
	__fastcall virtual ~TacCharListItem(void);
	void __fastcall Invalidate(void);
	
__published:
	__property int Angle = {read=FAngle, write=SetAngle, default=0};
	__property Graphics::TFontPitch Pitch = {read=FPitch, write=SetPitch, default=0};
	__property Graphics::TFontStyles Style = {read=FStyle, write=SetStyle, default=0};
	__property double ScalingFactor = {read=FScalingFactor, write=SetScalingFactor, stored=NotDefScaling};
	__property bool DrawContour = {read=FDrawContour, write=SetDrawContour, default=0};
	__property AnsiString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property int Orientation = {read=FOrientation, write=SetInteger, index=0, default=0};
	__property int OffsetY = {read=FOffsetY, write=SetInteger, index=1, default=0};
	__property int AddedOffsetX = {read=FAddedOffsetX, write=SetInteger, index=2, default=0};
	__property int AddedOffsetY = {read=FAddedOffsetY, write=SetInteger, index=3, default=0};
	__property int AddedSize = {read=FAddedSize, write=SetInteger, index=4, default=50};
	__property Word Char = {read=FChar, write=SetWord, index=0, default=0};
	__property Word AddedChar = {read=FAddedChar, write=SetWord, index=1, default=0};
	__property AnsiString FontName = {read=FFontName, write=SetFontName, stored=NotDefFont};
	__property AnsiString AddedFontName = {read=FAddedFontName, write=SetAddedFontName, stored=NotEmptyAdded};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, index=0, default=536870911};
	__property Graphics::TColor SecondColor = {read=FSecondColor, write=SetColor, index=1, default=536870911};
	__property Graphics::TColor AddedColor = {read=FAddedColor, write=SetColor, index=2, default=536870911};
	__property Graphics::TFontCharset Charset = {read=FCharset, write=SetCharset, index=0, default=1};
	__property Graphics::TFontCharset AddedCharset = {read=FAddedCharset, write=SetCharset, index=1, default=1};
};


class DELPHICLASS TacCharListItems;
class PASCALIMPLEMENTATION TacCharListItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TacCharListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsCharImageList* FOwner;
	HIDESBASE TacCharListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacCharListItem* Value);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	void __fastcall CheckItems(void);
	
public:
	__fastcall TacCharListItems(TsCharImageList* AOwner);
	__fastcall virtual ~TacCharListItems(void);
	__property TacCharListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


struct TacCharItemData
{
	
public:
	int Angle;
	int OffsetY;
	int Orientation;
	Graphics::TColor Color;
	Graphics::TColor SecondColor;
	Word Char;
	HFONT Handle;
	AnsiString FontName;
	bool DrawContour;
	Graphics::TFontPitch Pitch;
	Graphics::TFontStyles Style;
	Graphics::TFontCharset Charset;
	double ScalingFactor;
	int AddedOffsetX;
	int AddedOffsetY;
	int AddedSize;
	Word AddedChar;
	Graphics::TColor AddedColor;
	Graphics::TFontCharset AddedCharset;
} ;

class DELPHICLASS TacEmbeddedFont;
class PASCALIMPLEMENTATION TacEmbeddedFont : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
protected:
	AnsiString FFileName;
	AnsiString FFontName;
	unsigned Handle;
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	void __fastcall ReadData(Classes::TStream* Reader);
	void __fastcall WriteData(Classes::TStream* Writer);
	
public:
	Classes::TMemoryStream* FontData;
	__fastcall virtual ~TacEmbeddedFont(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TacEmbeddedFont(Classes::TCollection* ACollection);
	void __fastcall UnLoadFont(void);
	void __fastcall LoadFont(void);
	
__published:
	__property AnsiString FileName = {read=FFileName, write=FFileName};
	__property AnsiString FontName = {read=FFontName, write=FFontName};
};


class DELPHICLASS TacEmbeddedFonts;
class PASCALIMPLEMENTATION TacEmbeddedFonts : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TacEmbeddedFont* operator[](int Index) { return Items[Index]; }
	
protected:
	TsCharImageList* FOwner;
	HIDESBASE TacEmbeddedFont* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TacEmbeddedFont* Value);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual ~TacEmbeddedFonts(void);
	__fastcall TacEmbeddedFonts(TsCharImageList* AOwner);
	__property TacEmbeddedFont* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class PASCALIMPLEMENTATION TsCharImageList : public TacImageList 
{
	typedef TacImageList inherited;
	
private:
	bool AcChanging;
	bool FAllowScale;
	bool StdListIsGenerated;
	Graphics::TColor FBkColor;
	TacCharListItems* FItems;
	TacEmbeddedFonts* FEmbeddedFonts;
	TacBlendingMode FBlendingMode;
	Byte FBlendValue;
	HIDESBASE Graphics::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(const TacCharListItems* Value);
	HIDESBASE void __fastcall SetBkColor(const Graphics::TColor Value);
	int __fastcall GetDimension(const int Index);
	void __fastcall SetDimension(const int Index, const int Value);
	void __fastcall SetEmbeddedFonts(const TacEmbeddedFonts* Value);
	void __fastcall SetBlendingMode(const TacBlendingMode Value);
	void __fastcall SetBlendValue(const Byte Value);
	
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
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall PrepareBmp(Graphics::TBitmap* Bmp, int Index, const Types::TRect &aRect, int CharHeight, int Offset);
	void __fastcall UnLoadAllFonts(void);
	void __fastcall LoadAllFonts(void);
	
public:
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	void __fastcall UpdateStd(int i);
	int __fastcall AddItem(const TacCharItemData &ItemData);
	void __fastcall SetCharColor(Graphics::TColor AColor, int AIndex, bool IgnoreDefault);
	void __fastcall KillImgList(void);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE void __fastcall Clear(void);
	virtual void __fastcall ClearCache(int ImgIndex = 0xffffffff);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(const TsCharImageList* ImgList);
	int __fastcall FontIndex(const AnsiString aFontName);
	virtual int __fastcall Count(void);
	__fastcall virtual TsCharImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TsCharImageList(void);
	void __fastcall GenerateStdList(void);
	virtual bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image, int GlyphHeight = 0x0);
	virtual Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight, int GlyphHeight = 0x0);
	Graphics::TBitmap* __fastcall CreateBitmap32Color(int Index, int aWidth, int aHeight, Graphics::TColor CharColor, int GlyphHeight = 0x0);
	bool __fastcall ItemIsCached(TacCharListItem* Item, int RequiredWidth, int RequiredHeight, int CharHeight, Graphics::TColor RequiredColor);
	virtual void __fastcall Loaded(void);
	HIDESBASE void __fastcall SetNewDimensions(unsigned Value);
	bool __fastcall AddEmbeddedFont(const AnsiString FileName, const AnsiString FontName);
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height  = {read=GetDimension, write=SetDimension, index=0, default=24};
	__property Width  = {read=GetDimension, write=SetDimension, index=1, default=26};
	__property TacEmbeddedFonts* EmbeddedFonts = {read=FEmbeddedFonts, write=SetEmbeddedFonts};
	__property TacCharListItems* Items = {read=FItems, write=SetItems};
	__property Graphics::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property Byte BlendValue = {read=FBlendValue, write=SetBlendValue, default=255};
	__property TacBlendingMode BlendingMode = {read=FBlendingMode, write=SetBlendingMode, default=0};
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TsCharImageList(int AWidth, int AHeight) : TacImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


typedef void __fastcall (*TIterImagesProc)(Imglist::TCustomImageList* ImgList, int Data);

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool acIgnoreBlendColor;
extern PACKAGE void __fastcall IterateImageLists(TIterImagesProc CallBack, int Data);
extern PACKAGE bool __fastcall GetImageFormat(const AnsiString FileName, TsImageFormat &ImageFormat)/* overload */;
extern PACKAGE bool __fastcall GetImageFormat(const Classes::TStream* Stream, TsImageFormat &ImageFormat)/* overload */;
extern PACKAGE tagSIZE __fastcall DrawAlphaImgList(const Imglist::TCustomImageList* ImgList, const Graphics::TBitmap* DestBmp, const int Left, const int Top, const int ImageIndex, const int Blend, const Graphics::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected, int PPI);
extern PACKAGE void __fastcall DrawAlphaImgListDC(const Imglist::TCustomImageList* ImgList, const HDC DC, const int Left, const int Top, const int ImageIndex, const int Blend, const Graphics::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected, int PPI = 0x60);
extern PACKAGE double __fastcall GetDefScaling(Graphics::TFontCharset CharSet, const AnsiString FontName);
extern PACKAGE void __fastcall SetImagesPPI(Imglist::TCustomImageList* ImgList, const int PPI);
extern PACKAGE void __fastcall SetImagesState(Imglist::TCustomImageList* ImgList, const int AState);
extern PACKAGE void __fastcall ClearImgListCache(Imglist::TCustomImageList* ImgList, int ImgIndex = 0xffffffff);
extern PACKAGE bool __fastcall AddImageFromRes(unsigned aInstance, TsAlphaImageList* ImageList, const AnsiString ResName, TsImageFormat aImageFormat);

}	/* namespace Acalphaimagelist */
using namespace Acalphaimagelist;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acalphaimagelist
