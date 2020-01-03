// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acfontstore.pas' rev: 21.00

#ifndef AcfontstoreHPP
#define AcfontstoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acfontstore
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacEmbeddedFont;
class PASCALIMPLEMENTATION TacEmbeddedFont : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
protected:
	System::UnicodeString FFileName;
	System::UnicodeString FFontName;
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
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName};
	__property System::UnicodeString FontName = {read=FFontName, write=FFontName};
};


class DELPHICLASS TacEmbeddedFonts;
class PASCALIMPLEMENTATION TacEmbeddedFonts : public Classes::TCollection
{
	typedef Classes::TCollection inherited;
	
public:
	TacEmbeddedFont* operator[](int index) { return Items[index]; }
	
protected:
	Classes::TComponent* FOwner;
	HIDESBASE TacEmbeddedFont* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TacEmbeddedFont* Value);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__fastcall virtual ~TacEmbeddedFonts(void);
	__fastcall TacEmbeddedFonts(Classes::TComponent* AOwner);
	__property TacEmbeddedFont* Items[int index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TacFonts;
class PASCALIMPLEMENTATION TacFonts : public TacEmbeddedFonts
{
	typedef TacEmbeddedFonts inherited;
	
public:
	/* TacEmbeddedFonts.Destroy */ inline __fastcall virtual ~TacFonts(void) { }
	/* TacEmbeddedFonts.Create */ inline __fastcall TacFonts(Classes::TComponent* AOwner) : TacEmbeddedFonts(AOwner) { }
	
};


class DELPHICLASS TsFontStore;
class PASCALIMPLEMENTATION TsFontStore : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	TacFonts* FFonts;
	Classes::TNotifyEvent FOnFontListChanged;
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TsFontStore(Classes::TComponent* AOwner);
	__fastcall virtual ~TsFontStore(void);
	int __fastcall GetFontNames(Classes::TStringList* aStrings);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFonts(void);
	
__published:
	__property TacFonts* Fonts = {read=FFonts, write=FFonts};
	__property Classes::TNotifyEvent OnFontListChanged = {read=FOnFontListChanged, write=FOnFontListChanged};
};


//-- var, const, procedure ---------------------------------------------------
#define sOTFWarning L"Warning! Some Otf-fonts may be non-usable under some old W"\
	L"indows systems.\r\nBe careful with using of Otf-fonts unde"\
	L"r old Windows systems."
#define sWarnRead L"I have read this warning, I will remember about it.\r\nDo "\
	L"not show this window anymore."

}	/* namespace Acfontstore */
using namespace Acfontstore;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcfontstoreHPP
