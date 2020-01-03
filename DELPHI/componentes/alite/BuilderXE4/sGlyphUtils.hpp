// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGlyphUtils.pas' rev: 25.00 (Windows)

#ifndef SglyphutilsHPP
#define SglyphutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <acAlphaImageList.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sglyphutils
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacAddedGlyph;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacAddedGlyph : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FBlend;
	int FImageIndex;
	bool FGrayed;
	System::Uitypes::TColor FColorTone;
	Vcl::Controls::TWinControl* FOwner;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	void __fastcall ImageListChange(System::TObject* Sender);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetGrayed(const bool Value);
	void __fastcall SetColorTone(const System::Uitypes::TColor Value);
	
public:
	Scommondata::TsCommonData* SkinData;
	__fastcall virtual TacAddedGlyph(Vcl::Controls::TWinControl* AOwner, Scommondata::TsCommonData* ASkinData);
	__fastcall virtual ~TacAddedGlyph(void);
	int __fastcall ImageCount(void);
	int __fastcall Height(void);
	int __fastcall Width(void);
	void __fastcall Invalidate(bool UpdateCoords = false);
	
__published:
	__property System::Uitypes::TColor ColorTone = {read=FColorTone, write=SetColorTone, default=536870911};
	__property bool Grayed = {read=FGrayed, write=SetGrayed, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int Blend = {read=FBlend, write=SetInteger, index=0, default=0};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 iServCharCount = System::Int8(0x14);
static const System::Int8 iServCharMin = System::Int8(0x15);
static const System::Int8 iServCharMax = System::Int8(0x16);
static const System::Int8 iServCharRest = System::Int8(0x17);
static const System::Int8 iServCharClose = System::Int8(0x18);
extern DELPHI_PACKAGE Acalphaimagelist::TsCharImageList* acCharImages;
}	/* namespace Sglyphutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGLYPHUTILS)
using namespace Sglyphutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SglyphutilsHPP
