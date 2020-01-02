// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sstoreutils.pas' rev: 11.00

#ifndef SstoreutilsHPP
#define SstoreutilsHPP

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
#include <Forms.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Inifiles.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sstoreutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE AnsiString __fastcall ReadIniString(const AnsiString Section, const AnsiString Named, const AnsiString FileName)/* overload */;
extern PACKAGE AnsiString __fastcall ReadIniString(const AnsiString Section, const AnsiString Named, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE int __fastcall ReadIniInteger(const AnsiString Section, const AnsiString Named, int Value, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE void __fastcall ReadIniStrings(Classes::TStrings* Value, const AnsiString Section, const AnsiString Named, Inifiles::TMemIniFile* r)/* overload */;
extern PACKAGE void __fastcall ReadIniStrings(Classes::TStrings* Value, const AnsiString Section, const AnsiString Named, const AnsiString FileName)/* overload */;
extern PACKAGE int __fastcall ReadIniInteger(const AnsiString Section, const AnsiString Named, int Value, const AnsiString FileName)/* overload */;
extern PACKAGE AnsiString __fastcall ReadRegString(HKEY Key, const AnsiString Section, const AnsiString Named);
extern PACKAGE void __fastcall WriteRegString(HKEY Key, const AnsiString Section, const AnsiString Named, const AnsiString Value);
extern PACKAGE void __fastcall DeleteRegParam(HKEY Key, const AnsiString Section, const AnsiString Named);
extern PACKAGE void __fastcall WriteRegInteger(const AnsiString Section, const AnsiString Named, int Value);
extern PACKAGE void __fastcall WriteIniStr(const AnsiString Section, const AnsiString Named, const AnsiString Value, const AnsiString FileName)/* overload */;
extern PACKAGE void __fastcall WriteIniStr(const AnsiString Section, const AnsiString Named, const AnsiString Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall WriteIniStrings(const AnsiString Section, const AnsiString Named, Classes::TStrings* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall WriteIniStrings(const AnsiString Section, const AnsiString Named, const AnsiString FileName, Classes::TStrings* Value)/* overload */;
extern PACKAGE void __fastcall WriteIniFont(const AnsiString Section, const AnsiString Named, Graphics::TFont* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall ReadIniFont(const AnsiString Section, const AnsiString Named, Graphics::TFont* Value, Inifiles::TMemIniFile* IniFile)/* overload */;
extern PACKAGE void __fastcall ReadSection(Classes::TStringList* Src, Classes::TStringList* Dest, const AnsiString Name);
extern PACKAGE AnsiString __fastcall ReadValue(Classes::TStringList* Src, const AnsiString Section, const AnsiString ValueName);

}	/* namespace Sstoreutils */
using namespace Sstoreutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sstoreutils
