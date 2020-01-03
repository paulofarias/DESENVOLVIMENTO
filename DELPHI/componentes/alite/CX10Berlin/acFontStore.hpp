// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acFontStore.pas' rev: 31.00 (Windows)

#ifndef AcfontstoreHPP
#define AcfontstoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Types.hpp>
#include <sConst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acfontstore
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacEmbeddedFont;
class DELPHICLASS TacEmbeddedFonts;
class DELPHICLASS TacFonts;
class DELPHICLASS TsFontStore;
//-- type declarations -------------------------------------------------------
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

#pragma pack(push,4)
class PASCALIMPLEMENTATION TacEmbeddedFonts : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TacEmbeddedFont* operator[](int index) { return this->Items[index]; }
	
protected:
	System::Classes::TComponent* FOwner;
	HIDESBASE TacEmbeddedFont* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacEmbeddedFont* const Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TacEmbeddedFonts(void);
	__fastcall TacEmbeddedFonts(System::Classes::TComponent* AOwner);
	__property TacEmbeddedFont* Items[int index] = {read=GetItem, write=SetItem/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TacFonts : public TacEmbeddedFonts
{
	typedef TacEmbeddedFonts inherited;
	
public:
	/* TacEmbeddedFonts.Destroy */ inline __fastcall virtual ~TacFonts(void) { }
	/* TacEmbeddedFonts.Create */ inline __fastcall TacFonts(System::Classes::TComponent* AOwner) : TacEmbeddedFonts(AOwner) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsFontStore : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TacFonts* FFonts;
	System::Classes::TNotifyEvent FOnFontListChanged;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TsFontStore(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsFontStore(void);
	int __fastcall GetFontNames(System::Classes::TStringList* aStrings);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFonts(void);
	
__published:
	__property TacFonts* Fonts = {read=FFonts, write=FFonts};
	__property System::Classes::TNotifyEvent OnFontListChanged = {read=FOnFontListChanged, write=FOnFontListChanged};
};


//-- var, const, procedure ---------------------------------------------------
#define sOTFWarning L"Warning! Some Otf-fonts may be non-usable under some old W"\
	L"indows systems.\r\nBe careful with using of Otf-fonts unde"\
	L"r old Windows systems."
#define sWarnRead L"I have read this warning, I will remember about it.\r\nDo "\
	L"not show this window anymore."
}	/* namespace Acfontstore */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACFONTSTORE)
using namespace Acfontstore;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcfontstoreHPP
