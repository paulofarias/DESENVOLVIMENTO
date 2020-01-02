// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acGlow.pas' rev: 22.00

#ifndef AcglowHPP
#define AcglowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acglow
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool bGlowingDestroying;
extern PACKAGE int __fastcall ShowGlow(const Types::TRect &RealRect, const System::UnicodeString SkinSection, const System::UnicodeString Name, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern PACKAGE int __fastcall ShowGlow(const Types::TRect &RealRect, int const *MaskIndexes, const int MaskIndexes_Size, const int Margin, const int Alpha, HWND WndHandle, Scommondata::TsCommonData* SkinData = (Scommondata::TsCommonData*)(0x0))/* overload */;
extern PACKAGE void __fastcall HideGlow(int &ID, bool DoAnimation = false);
extern PACKAGE void __fastcall SetGlowAlpha(int ID, System::Byte aAlpha);
extern PACKAGE void __fastcall ClearGlows(bool ManualFreeing = false);

}	/* namespace Acglow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Acglow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcglowHPP
