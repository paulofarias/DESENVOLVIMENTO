// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sDateUtils.pas' rev: 23.00 (Win32)

#ifndef SdateutilsHPP
#define SdateutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sdateutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::TDateTime NullDate;
extern PACKAGE bool NormalYears;
extern PACKAGE System::TDateTime __fastcall FirstDayOfCurrMonth(System::TDateTime D);
extern PACKAGE int __fastcall DaysPerMonth(int AYear, int AMonth);
extern PACKAGE System::Word __fastcall ExtractMonth(System::TDateTime ADate);
extern PACKAGE System::Word __fastcall ExtractYear(System::TDateTime ADate);
extern PACKAGE System::UnicodeString __fastcall DefDateFormat(bool NormalYears);
extern PACKAGE Sconst::TDateOrder __fastcall GetDateOrder(const System::UnicodeString DateFormat);
extern PACKAGE System::UnicodeString __fastcall DefDateMask(System::WideChar BlanksChar, bool NormalYears);
extern PACKAGE bool __fastcall ValidDate(System::TDateTime ADate);
extern PACKAGE bool __fastcall IsValidDate(System::Word Y, System::Word M, System::Word D);
extern PACKAGE bool __fastcall InternalStrToDate(const System::UnicodeString DateFormat, const System::UnicodeString S, System::TDateTime &Date);
extern PACKAGE bool __fastcall ScanDateStr(const System::UnicodeString Format, const System::UnicodeString S, int &D, int &M, int &Y);
extern PACKAGE void __fastcall ExtractMask(const System::AnsiString Format, const System::AnsiString S, char Ch, int Cnt, int &I, int Blank, int Default);
extern PACKAGE System::Word __fastcall CurrentYear(void);
extern PACKAGE int __fastcall ExpandYear(int Year);
extern PACKAGE bool __fastcall ScanDate(const System::UnicodeString S, const System::UnicodeString DateFormat, int &Pos, int &Y, int &M, int &D);
extern PACKAGE System::Byte __fastcall MonthFromName(const System::UnicodeString S, System::Byte MaxLen);
extern PACKAGE System::UnicodeString __fastcall DateToLongStr(System::TDateTime aDate);

}	/* namespace Sdateutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SDATEUTILS)
using namespace Sdateutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SdateutilsHPP
