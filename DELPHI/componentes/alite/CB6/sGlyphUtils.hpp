// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGlyphUtils.pas' rev: 6.00

#ifndef sGlyphUtilsHPP
#define sGlyphUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acAlphaImageList.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sglyphutils
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAddedGlyph;
class PASCALIMPLEMENTATION TacAddedGlyph : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FBlend;
	int FImageIndex;
	bool FGrayed;
	Graphics::TColor FColorTone;
	Controls::TWinControl* FOwner;
	Imglist::TCustomImageList* FImages;
	Imglist::TChangeLink* FImageChangeLink;
	void __fastcall ImageListChange(System::TObject* Sender);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetGrayed(const bool Value);
	void __fastcall SetColorTone(const Graphics::TColor Value);
	
public:
	Scommondata::TsCommonData* SkinData;
	__fastcall virtual TacAddedGlyph(Controls::TWinControl* AOwner, Scommondata::TsCommonData* ASkinData);
	__fastcall virtual ~TacAddedGlyph(void);
	int __fastcall ImageCount(void);
	int __fastcall Height(void);
	int __fastcall Width(void);
	void __fastcall Invalidate(bool UpdateCoords = false);
	
__published:
	__property Graphics::TColor ColorTone = {read=FColorTone, write=SetColorTone, default=536870911};
	__property bool Grayed = {read=FGrayed, write=SetGrayed, default=0};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int Blend = {read=FBlend, write=SetInteger, index=0, default=0};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint iServCharCount = 0x14;
static const Shortint iServCharMin = 0x15;
static const Shortint iServCharMax = 0x16;
static const Shortint iServCharRest = 0x17;
static const Shortint iServCharClose = 0x18;
extern PACKAGE Acalphaimagelist::TsCharImageList* acCharImages;

}	/* namespace Sglyphutils */
using namespace Sglyphutils;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sGlyphUtils
