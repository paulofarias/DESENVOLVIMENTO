// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGlyphUtils.pas' rev: 33.00 (Windows)

#ifndef SglyphutilsHPP
#define SglyphutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ImgList.hpp>
#include <acAlphaImageList.hpp>
#include <sConst.hpp>
#include <sCommonData.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sglyphutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacAddedGlyph;
//-- type declarations -------------------------------------------------------
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
	__fastcall virtual ~TacAddedGlyph();
	int __fastcall ImageCount();
	int __fastcall Height();
	int __fastcall Width();
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
