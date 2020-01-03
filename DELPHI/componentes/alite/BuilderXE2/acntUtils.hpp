// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acntUtils.pas' rev: 23.00 (Win32)

#ifndef AcntutilsHPP
#define AcntutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acntutils
{
//-- type declarations -------------------------------------------------------
typedef System::Sysutils::TSearchRec TacSearchRec;

typedef System::Classes::TStrings TacStrings;

typedef System::Classes::TStringList TacStringList;

typedef _WIN32_FIND_DATAW TacWIN32FindData;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE unsigned __stdcall (*acSHGetFileInfo)(System::WideChar * pszPath, unsigned dwFileAttributes, _SHFILEINFOW &psfi, unsigned cbFileInfo, unsigned uFlags);
extern PACKAGE int __fastcall GetCaptionFontSize(int DPI = 0x60);
extern PACKAGE HFONT __fastcall acGetTitleFont(int DPI = 0x60);
extern PACKAGE __int64 __fastcall HexToInt(System::AnsiString HexStr);
extern PACKAGE int __fastcall ScaleInteger(int Value, int SysScale);
extern PACKAGE int __fastcall ScalePPI(int Value, int PPI);
extern PACKAGE int __fastcall PPIToIndex(int PPI);
extern PACKAGE void __fastcall GetIniSections(const System::Classes::TStringList* IniList, const System::Classes::TStringList* SectionsList);
extern PACKAGE System::UnicodeString __fastcall ReadIniString(System::Classes::TStringList* IniList, System::Classes::TStringList* SectionsList, const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
extern PACKAGE int __fastcall ReadIniInteger(System::Classes::TStringList* IniList, System::Classes::TStringList* SectionsList, const System::UnicodeString Section, const System::UnicodeString Ident, int Default);
extern PACKAGE int __fastcall ReadRegInt(HKEY Key, const System::UnicodeString Section, const System::UnicodeString Named);
extern PACKAGE void __fastcall Alert(void)/* overload */;
extern PACKAGE void __fastcall Alert(const System::UnicodeString s)/* overload */;
extern PACKAGE void __fastcall Alert(const int i)/* overload */;
extern PACKAGE Winapi::Messages::TMessage __fastcall MakeMessage(const int aMsg, const unsigned aWParam, const int aLParam, const int aResult);
extern PACKAGE System::UnicodeString __fastcall iff(const bool L, const System::UnicodeString s1, const System::UnicodeString s2)/* overload */;
extern PACKAGE System::TObject* __fastcall iff(const bool L, const System::TObject* o1, const System::TObject* o2)/* overload */;
extern PACKAGE int __fastcall iff(const bool L, const int i1, const int i2)/* overload */;
extern PACKAGE bool __fastcall iff(const bool L, const bool b1, const bool b2)/* overload */;
extern PACKAGE bool __fastcall Between(const int Value, const int i1, const int i2, bool Abs = false);
extern PACKAGE int __fastcall SumTrans(const int i1, const int i2);
extern PACKAGE int __fastcall Maxi(const int i1, const int i2);
extern PACKAGE int __fastcall Mini(const int i1, const int i2);
extern PACKAGE int __fastcall LimitIt(const int Value, const int MinValue, const int MaxValue);
extern PACKAGE void __fastcall ChangeI(int &i1, int &i2);
extern PACKAGE bool __fastcall IsValidFloat(const System::AnsiString Value, System::Extended &RetValue);
extern PACKAGE bool __fastcall IsValidIndex(int Value, int Amount, int First = 0x0);
extern PACKAGE System::UnicodeString __fastcall FormatFloatStr(const System::AnsiString S, const bool Thousands);
extern PACKAGE bool __fastcall acGetAnimation(void);
extern PACKAGE void __fastcall acSetAnimation(const bool Value);
extern PACKAGE bool __fastcall RectIsVisible(const System::Types::TRect &ParentRect, const System::Types::TRect &Rect);
extern PACKAGE bool __fastcall RectInRect(const System::Types::TRect &BigRect, const System::Types::TRect &SmallRect, bool FullInclude = true);
extern PACKAGE System::Types::TRect __fastcall RotateRect(const System::Types::TRect &R, bool Clockwise = true, int ParentWidth = 0x0);
extern PACKAGE System::Types::TRect __fastcall RectsAnd(const System::Types::TRect &R1, const System::Types::TRect &R2);
extern PACKAGE System::Types::TRect __fastcall SumRects(const System::Types::TRect &R1, const System::Types::TRect &R2);
extern PACKAGE void __fastcall AddPadding(System::Types::TRect &R, const System::Types::TRect &Padding);
extern PACKAGE System::Types::TRect __fastcall PaddingToRect(Acnttypes::TacPadding* Padding, int PPI);
extern PACKAGE System::Types::TRect __fastcall MkRect(int Right = 0x0, int Bottom = 0x0, int Left = 0x0, int Top = 0x0)/* overload */;
extern PACKAGE System::Types::TRect __fastcall MkRect(Vcl::Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE System::Types::TRect __fastcall MkRect(Vcl::Controls::TControl* Ctrl)/* overload */;
extern PACKAGE System::Types::TRect __fastcall MkRect(const System::Types::TSize &Size)/* overload */;
extern PACKAGE void __fastcall ReflectRect(System::Types::TRect &R, int Width, int Height, bool Horz)/* overload */;
extern PACKAGE void __fastcall ReflectRect(System::Types::TRect &R, const System::Types::TRect &MainRect, bool Horz)/* overload */;
extern PACKAGE System::Types::TSize __fastcall MkSize(const Vcl::Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE System::Types::TSize __fastcall MkSize(const System::Types::TRect &R)/* overload */;
extern PACKAGE System::Types::TPoint __fastcall MkPoint(const int X = 0x0, const int Y = 0x0)/* overload */;
extern PACKAGE System::Types::TPoint __fastcall MkPoint(Vcl::Controls::TControl* Control)/* overload */;
extern PACKAGE System::Types::TSize __fastcall MkSize(int Width = 0x0, int Height = 0x0)/* overload */;
extern PACKAGE System::Types::TRect __fastcall OffsRect(const System::Types::TRect &aRect, int aOffset)/* overload */;
extern PACKAGE System::Types::TRect __fastcall OffsRect(const System::Types::TRect &aRect, int aOffsetX, int aOffsetY)/* overload */;
extern PACKAGE int __fastcall WidthOf(const System::Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE int __fastcall HeightOf(const System::Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE bool __fastcall acCharIn(const System::WideChar C, const System::Sysutils::TSysCharSet &SysCharSet);
extern PACKAGE int __fastcall acWordPosition(const int N, const System::UnicodeString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall GetWordNumber(const System::UnicodeString W, const System::UnicodeString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordPosition(const int N, const System::AnsiString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::AnsiString __fastcall ExtractWord(const int N, const System::AnsiString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::UnicodeString __fastcall acExtractWord(const int N, const System::UnicodeString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall acWordCount(const System::UnicodeString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordCount(const System::AnsiString S, const System::Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::AnsiString __fastcall MakeStr(char C, int N);
extern PACKAGE System::UnicodeString __fastcall DelRSpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelESpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelBSpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelChars(const System::UnicodeString S, System::WideChar Chr);
extern PACKAGE System::UnicodeString __fastcall ReplaceStr(const System::UnicodeString S, const System::UnicodeString Srch, const System::UnicodeString Replace);
extern PACKAGE System::UnicodeString __fastcall ExtractSubStr(const System::AnsiString S, int &Pos, const System::Sysutils::TSysCharSet &Delims);
extern PACKAGE bool __fastcall IsEmptyStr(const System::AnsiString S, const System::Sysutils::TSysCharSet &EmptyChars);
extern PACKAGE bool __fastcall IsNTFamily(void);
extern PACKAGE Sconst::TCacheInfo __fastcall MakeCacheInfo(const Vcl::Graphics::TBitmap* aBmp, const int xOffs = 0x0, const int yOffs = 0x0);
extern PACKAGE System::AnsiString __fastcall AddChar(const char C, const System::AnsiString S, const int N);
extern PACKAGE bool __fastcall CustomRequest(const System::UnicodeString s);
extern PACKAGE void __fastcall ShowWarning(const System::UnicodeString S);
extern PACKAGE void __fastcall ShowError(const System::UnicodeString s);
extern PACKAGE void __fastcall Delay(const int MSecs);
extern PACKAGE bool __fastcall IsIDERunning(void);
extern PACKAGE BOOL __fastcall IsWOW64Proc(void);
extern PACKAGE void __fastcall WaitTicks(unsigned ABeginTicks, int ADelay = 0xc);
extern PACKAGE void __fastcall InitBlendData(_BLENDFUNCTION &AData, System::Byte BlendValue);
extern PACKAGE bool __fastcall HasProperty(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE System::TObject* __fastcall GetObjProp(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE bool __fastcall CheckSetProp(const System::TObject* Component, const System::UnicodeString PropName, const System::UnicodeString Value);
extern PACKAGE bool __fastcall SetSetPropValue(const System::TObject* Component, const System::UnicodeString PropName, const System::UnicodeString ValueName, const bool Value);
extern PACKAGE int __fastcall GetIntProp(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE void __fastcall SetIntProp(const System::TObject* Component, const System::UnicodeString PropName, const int Value);
extern PACKAGE System::UnicodeString __fastcall NormalDir(const System::UnicodeString DirName);
extern PACKAGE BOOL __fastcall acFindNextFile(unsigned hFindFile, _WIN32_FIND_DATAW &lpFindFileData);
extern PACKAGE unsigned __fastcall acFindFirstFile(System::WideChar * lpFileName, _WIN32_FIND_DATAW &lpFindFileData);
extern PACKAGE bool __fastcall ValidFileName(const System::UnicodeString FileName);
extern PACKAGE bool __fastcall acDirExists(const System::UnicodeString Name);
extern PACKAGE System::UnicodeString __fastcall ShortToLongFileName(const System::UnicodeString ShortName);
extern PACKAGE System::UnicodeString __fastcall LongToShortFileName(const System::UnicodeString LongName);
extern PACKAGE System::UnicodeString __fastcall ShortToLongPath(const System::UnicodeString ShortName);
extern PACKAGE System::UnicodeString __fastcall LongToShortPath(const System::UnicodeString LongName);
extern PACKAGE bool __fastcall acCreateDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acRemoveDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acSetCurrentDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acDeleteFile(const System::UnicodeString FileName);
extern PACKAGE bool __fastcall acCopyFile(const System::UnicodeString ExistingFileName, const System::UnicodeString NewFileName, bool bFailIfExists);
extern PACKAGE int __fastcall acFileSetAttr(const System::UnicodeString FileName, unsigned Attr);
extern PACKAGE int __fastcall acFindFirst(const System::UnicodeString Path, int Attr, System::Sysutils::TSearchRec &F);
extern PACKAGE int __fastcall acFindNext(System::Sysutils::TSearchRec &F);
extern PACKAGE void __fastcall acFindClose(System::Sysutils::TSearchRec &F);
extern PACKAGE bool __fastcall ClearDir(const System::UnicodeString Path, bool Delete);
extern PACKAGE System::UnicodeString __fastcall GetAppPath(void);
extern PACKAGE Vcl::Graphics::TIcon* __fastcall GetIconForFile(const System::UnicodeString FullFileName, int Flag);
extern PACKAGE bool __fastcall acSameText(const System::UnicodeString S1, const System::UnicodeString S2);
extern PACKAGE void __fastcall acFillString(System::UnicodeString &S, const int nCount, const System::WideChar C);
extern PACKAGE void __fastcall InitSysProc(void);
extern PACKAGE void __fastcall AddObjLink(System::TObject* AObj, Vcl::Controls::TControl* ACtlContainer);
extern PACKAGE void __fastcall AddObjToList(System::TObject* AObj, System::Classes::TList* AList);
extern PACKAGE void __fastcall DelLinkFromList(System::TObject* ACtl, System::Classes::TList* AList);
extern PACKAGE void __fastcall DelObjLink(System::TObject* ACtl, Vcl::Controls::TControl* ACtlContainer)/* overload */;
extern PACKAGE void __fastcall DelObjLink(System::TObject* ACtl, System::Classes::TList* AList)/* overload */;

}	/* namespace Acntutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACNTUTILS)
using namespace Acntutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcntutilsHPP
