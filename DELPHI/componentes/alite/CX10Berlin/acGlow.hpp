// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acGlow.pas' rev: 31.00 (Windows)

#ifndef AcglowHPP
#define AcglowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <acntTypes.hpp>
#include <sSkinManager.hpp>
#include <sCommonData.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acglow
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool bGlowingDestroying;
extern DELPHI_PACKAGE int __fastcall ShowGlow(const System::Types::TRect &RealRect, const System::UnicodeString SkinSection, const System::UnicodeString Name, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall ShowGlow(const System::Types::TRect &RealRect, const int *MaskIndexes, const int MaskIndexes_High, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall HideGlow(int &ID, bool DoAnimation = false);
extern DELPHI_PACKAGE void __fastcall SetGlowAlpha(int ID, System::Byte aAlpha);
extern DELPHI_PACKAGE void __fastcall ClearGlows(bool ManualFreeing = false);
}	/* namespace Acglow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACGLOW)
using namespace Acglow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcglowHPP
