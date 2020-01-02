// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sStoreUtils.pas' rev: 22.00

#ifndef SstoreutilsHPP
#define SstoreutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sstoreutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::UnicodeString __fastcall ReadIniString(const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString FileName)/* overload */;
extern PACKAGE System::UnicodeString __fastcall ReadIniString(const System::UnicodeString Section, const System::UnicodeString Named, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE int __fastcall ReadIniInteger(const System::UnicodeString Section, const System::UnicodeString Named, int Value, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE void __fastcall ReadIniStrings(Classes::TStrings* Value, const System::UnicodeString Section, const System::UnicodeString Named, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE void __fastcall ReadIniStrings(Classes::TStrings* Value, const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString FileName)/* overload */;
extern PACKAGE int __fastcall ReadIniInteger(const System::UnicodeString Section, const System::UnicodeString Named, int Value, const System::UnicodeString FileName)/* overload */;
extern PACKAGE System::UnicodeString __fastcall ReadRegString(HKEY Key, const System::UnicodeString Section, const System::UnicodeString Named);
extern PACKAGE void __fastcall WriteRegString(HKEY Key, const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString Value);
extern PACKAGE void __fastcall DeleteRegParam(HKEY Key, const System::UnicodeString Section, const System::UnicodeString Named);
extern PACKAGE void __fastcall WriteRegInteger(const System::UnicodeString Section, const System::UnicodeString Named, int Value);
extern PACKAGE void __fastcall WriteIniStr(const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString Value, const System::UnicodeString FileName)/* overload */;
extern PACKAGE void __fastcall WriteIniStr(const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall WriteIniStrings(const System::UnicodeString Section, const System::UnicodeString Named, Classes::TStrings* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall WriteIniStrings(const System::UnicodeString Section, const System::UnicodeString Named, const System::UnicodeString FileName, Classes::TStrings* Value)/* overload */;
extern PACKAGE void __fastcall WriteIniFont(const System::UnicodeString Section, const System::UnicodeString Named, Graphics::TFont* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall ReadIniFont(const System::UnicodeString Section, const System::UnicodeString Named, Graphics::TFont* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall ReadSection(Classes::TStringList* Src, Classes::TStringList* Dest, const System::UnicodeString Name);
extern PACKAGE System::UnicodeString __fastcall ReadValue(Classes::TStringList* Src, const System::UnicodeString Section, const System::UnicodeString ValueName);

}	/* namespace Sstoreutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sstoreutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SstoreutilsHPP
