// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sglyphutils.pas' rev: 21.00

#ifndef SglyphutilsHPP
#define SglyphutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Acalphaimagelist.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit

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
static const ShortInt iServCharCount = 0x14;
static const ShortInt iServCharMin = 0x15;
static const ShortInt iServCharMax = 0x16;
static const ShortInt iServCharRest = 0x17;
static const ShortInt iServCharClose = 0x18;
extern PACKAGE Acalphaimagelist::TsCharImageList* acCharImages;

}	/* namespace Sglyphutils */
using namespace Sglyphutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SglyphutilsHPP
