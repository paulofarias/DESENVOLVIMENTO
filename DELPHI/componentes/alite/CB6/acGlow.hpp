// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acGlow.pas' rev: 6.00

#ifndef acGlowHPP
#define acGlowHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sCommonData.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acglow
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool bGlowingDestroying;
extern PACKAGE int __fastcall ShowGlow(const Types::TRect &RealRect, const AnsiString SkinSection, const AnsiString Name, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern PACKAGE int __fastcall ShowGlow(const Types::TRect &RealRect, const int * MaskIndexes, const int MaskIndexes_Size, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern PACKAGE void __fastcall HideGlow(int &ID, bool DoAnimation = false);
extern PACKAGE void __fastcall SetGlowAlpha(int ID, Byte aAlpha);
extern PACKAGE void __fastcall ClearGlows(bool ManualFreeing = false);

}	/* namespace Acglow */
using namespace Acglow;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acGlow
