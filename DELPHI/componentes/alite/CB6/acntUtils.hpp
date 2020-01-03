// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acntUtils.pas' rev: 6.00

#ifndef acntUtilsHPP
#define acntUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acntTypes.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <ShellAPI.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acntutils
{
//-- type declarations -------------------------------------------------------
typedef Sysutils::TSearchRec  TacSearchRec;

typedef TStrings TacStrings;
;

typedef TStringList TacStringList;
;

typedef _WIN32_FIND_DATAA  TacWIN32FindData;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE unsigned __stdcall (*acSHGetFileInfo)(char * pszPath, unsigned dwFileAttributes, _SHFILEINFOA &psfi, unsigned cbFileInfo, unsigned uFlags);
extern PACKAGE int __fastcall GetCaptionFontSize(int DPI = 0x60);
extern PACKAGE HFONT __fastcall acGetTitleFont(int DPI = 0x60);
extern PACKAGE __int64 __fastcall HexToInt(AnsiString HexStr);
extern PACKAGE int __fastcall ScaleInteger(int Value, int SysScale);
extern PACKAGE int __fastcall ScalePPI(int Value, int PPI);
extern PACKAGE int __fastcall PPIToIndex(int PPI);
extern PACKAGE void __fastcall GetIniSections(const Classes::TStringList* IniList, const Classes::TStringList* SectionsList);
extern PACKAGE AnsiString __fastcall ReadIniString(Classes::TStringList* IniList, Classes::TStringList* SectionsList, const AnsiString Section, const AnsiString Ident, const AnsiString Default);
extern PACKAGE int __fastcall ReadIniInteger(Classes::TStringList* IniList, Classes::TStringList* SectionsList, const AnsiString Section, const AnsiString Ident, int Default);
extern PACKAGE int __fastcall ReadRegInt(HKEY Key, const AnsiString Section, const AnsiString Named);
extern PACKAGE void __fastcall Alert(void)/* overload */;
extern PACKAGE void __fastcall Alert(const AnsiString s)/* overload */;
extern PACKAGE void __fastcall Alert(const int i)/* overload */;
extern PACKAGE Messages::TMessage __fastcall MakeMessage(const int aMsg, const int aWParam, const int aLParam, const int aResult);
extern PACKAGE AnsiString __fastcall iff(const bool L, const AnsiString s1, const AnsiString s2)/* overload */;
extern PACKAGE System::TObject* __fastcall iff(const bool L, const System::TObject* o1, const System::TObject* o2)/* overload */;
extern PACKAGE int __fastcall iff(const bool L, const int i1, const int i2)/* overload */;
extern PACKAGE bool __fastcall iff(const bool L, const bool b1, const bool b2)/* overload */;
extern PACKAGE bool __fastcall Between(const int Value, const int i1, const int i2, bool Abs = false);
extern PACKAGE int __fastcall SumTrans(const int i1, const int i2);
extern PACKAGE int __fastcall Maxi(const int i1, const int i2);
extern PACKAGE int __fastcall Mini(const int i1, const int i2);
extern PACKAGE int __fastcall LimitIt(const int Value, const int MinValue, const int MaxValue);
extern PACKAGE void __fastcall ChangeI(int &i1, int &i2);
extern PACKAGE bool __fastcall IsValidFloat(const AnsiString Value, Extended &RetValue);
extern PACKAGE bool __fastcall IsValidIndex(int Value, int Amount, int First = 0x0);
extern PACKAGE AnsiString __fastcall FormatFloatStr(const AnsiString S, const bool Thousands);
extern PACKAGE bool __fastcall acGetAnimation(void);
extern PACKAGE void __fastcall acSetAnimation(const bool Value);
extern PACKAGE bool __fastcall RectIsVisible(const Types::TRect &ParentRect, const Types::TRect &Rect);
extern PACKAGE bool __fastcall RectInRect(const Types::TRect &BigRect, const Types::TRect &SmallRect, bool FullInclude = true);
extern PACKAGE Types::TRect __fastcall RotateRect(const Types::TRect &R, bool Clockwise = true, int ParentWidth = 0x0);
extern PACKAGE Types::TRect __fastcall RectsAnd(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE Types::TRect __fastcall SumRects(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE void __fastcall AddPadding(Types::TRect &R, const Types::TRect &Padding);
extern PACKAGE Types::TRect __fastcall PaddingToRect(Acnttypes::TacPadding* Padding, int PPI);
extern PACKAGE Types::TRect __fastcall MkRect(int Right = 0x0, int Bottom = 0x0, int Left = 0x0, int Top = 0x0)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(Controls::TControl* Ctrl)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(const tagSIZE &Size)/* overload */;
extern PACKAGE void __fastcall ReflectRect(Types::TRect &R, int Width, int Height, bool Horz)/* overload */;
extern PACKAGE void __fastcall ReflectRect(Types::TRect &R, const Types::TRect &MainRect, bool Horz)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(const Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(const Types::TRect &R)/* overload */;
extern PACKAGE Types::TPoint __fastcall MkPoint(const int X = 0x0, const int Y = 0x0)/* overload */;
extern PACKAGE Types::TPoint __fastcall MkPoint(Controls::TControl* Control)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(int Width = 0x0, int Height = 0x0)/* overload */;
extern PACKAGE Types::TRect __fastcall OffsRect(const Types::TRect &aRect, int aOffset)/* overload */;
extern PACKAGE Types::TRect __fastcall OffsRect(const Types::TRect &aRect, int aOffsetX, int aOffsetY)/* overload */;
extern PACKAGE int __fastcall WidthOf(const Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE int __fastcall HeightOf(const Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE bool __fastcall acCharIn(const char C, const Sysutils::TSysCharSet &SysCharSet);
extern PACKAGE int __fastcall acWordPosition(const int N, const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall GetWordNumber(const AnsiString W, const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordPosition(const int N, const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE AnsiString __fastcall ExtractWord(const int N, const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE AnsiString __fastcall acExtractWord(const int N, const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall acWordCount(const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordCount(const AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE AnsiString __fastcall MakeStr(char C, int N);
extern PACKAGE AnsiString __fastcall DelRSpace(const AnsiString S);
extern PACKAGE AnsiString __fastcall DelESpace(const AnsiString S);
extern PACKAGE AnsiString __fastcall DelBSpace(const AnsiString S);
extern PACKAGE AnsiString __fastcall DelChars(const AnsiString S, char Chr);
extern PACKAGE AnsiString __fastcall ReplaceStr(const AnsiString S, const AnsiString Srch, const AnsiString Replace);
extern PACKAGE AnsiString __fastcall ExtractSubStr(const AnsiString S, int &Pos, const Sysutils::TSysCharSet &Delims);
extern PACKAGE bool __fastcall IsEmptyStr(const AnsiString S, const Sysutils::TSysCharSet &EmptyChars);
extern PACKAGE bool __fastcall IsNTFamily(void);
extern PACKAGE Sconst::TCacheInfo __fastcall MakeCacheInfo(const Graphics::TBitmap* aBmp, const int xOffs = 0x0, const int yOffs = 0x0);
extern PACKAGE AnsiString __fastcall AddChar(const char C, const AnsiString S, const int N);
extern PACKAGE bool __fastcall CustomRequest(const AnsiString s);
extern PACKAGE void __fastcall ShowWarning(const AnsiString S);
extern PACKAGE void __fastcall ShowError(const AnsiString s);
extern PACKAGE void __fastcall Delay(const int MSecs);
extern PACKAGE bool __fastcall IsIDERunning(void);
extern PACKAGE BOOL __fastcall IsWOW64Proc(void);
extern PACKAGE void __fastcall WaitTicks(unsigned ABeginTicks, int ADelay = 0xc);
extern PACKAGE void __fastcall InitBlendData(_BLENDFUNCTION &AData, Byte BlendValue);
extern PACKAGE bool __fastcall HasProperty(const System::TObject* Component, const AnsiString PropName);
extern PACKAGE System::TObject* __fastcall GetObjProp(const System::TObject* Component, const AnsiString PropName);
extern PACKAGE bool __fastcall CheckSetProp(const System::TObject* Component, const AnsiString PropName, const AnsiString Value);
extern PACKAGE bool __fastcall SetSetPropValue(const System::TObject* Component, const AnsiString PropName, const AnsiString ValueName, const bool Value);
extern PACKAGE int __fastcall GetIntProp(const System::TObject* Component, const AnsiString PropName);
extern PACKAGE void __fastcall SetIntProp(const System::TObject* Component, const AnsiString PropName, const int Value);
extern PACKAGE AnsiString __fastcall NormalDir(const AnsiString DirName);
extern PACKAGE BOOL __fastcall acFindNextFile(unsigned hFindFile, _WIN32_FIND_DATAA &lpFindFileData);
extern PACKAGE unsigned __fastcall acFindFirstFile(char * lpFileName, _WIN32_FIND_DATAA &lpFindFileData);
extern PACKAGE bool __fastcall ValidFileName(const AnsiString FileName);
extern PACKAGE bool __fastcall acDirExists(const AnsiString Name);
extern PACKAGE AnsiString __fastcall ShortToLongFileName(const AnsiString ShortName);
extern PACKAGE AnsiString __fastcall LongToShortFileName(const AnsiString LongName);
extern PACKAGE AnsiString __fastcall ShortToLongPath(const AnsiString ShortName);
extern PACKAGE AnsiString __fastcall LongToShortPath(const AnsiString LongName);
extern PACKAGE bool __fastcall acCreateDir(const AnsiString DirName);
extern PACKAGE bool __fastcall acRemoveDir(const AnsiString DirName);
extern PACKAGE bool __fastcall acSetCurrentDir(const AnsiString DirName);
extern PACKAGE bool __fastcall acDeleteFile(const AnsiString FileName);
extern PACKAGE bool __fastcall acCopyFile(const AnsiString ExistingFileName, const AnsiString NewFileName, bool bFailIfExists);
extern PACKAGE int __fastcall acFileSetAttr(const AnsiString FileName, unsigned Attr);
extern PACKAGE int __fastcall acFindFirst(const AnsiString Path, int Attr, Sysutils::TSearchRec &F);
extern PACKAGE int __fastcall acFindNext(Sysutils::TSearchRec &F);
extern PACKAGE void __fastcall acFindClose(Sysutils::TSearchRec &F);
extern PACKAGE bool __fastcall ClearDir(const AnsiString Path, bool Delete);
extern PACKAGE AnsiString __fastcall GetAppPath();
extern PACKAGE Graphics::TIcon* __fastcall GetIconForFile(const AnsiString FullFileName, int Flag);
extern PACKAGE bool __fastcall acSameText(const AnsiString S1, const AnsiString S2);
extern PACKAGE void __fastcall acFillString(AnsiString &S, const int nCount, const char C);
extern PACKAGE bool __fastcall CharInSet(const char C, const Sysutils::TSysCharSet &CharSet);
extern PACKAGE void __fastcall InitSysProc(void);
extern PACKAGE void __fastcall AddObjLink(System::TObject* AObj, Controls::TControl* ACtlContainer);
extern PACKAGE void __fastcall AddObjToList(System::TObject* AObj, Classes::TList* AList);
extern PACKAGE void __fastcall DelLinkFromList(System::TObject* ACtl, Classes::TList* AList);
extern PACKAGE void __fastcall DelObjLink(System::TObject* ACtl, Controls::TControl* ACtlContainer)/* overload */;
extern PACKAGE void __fastcall DelObjLink(System::TObject* ACtl, Classes::TList* AList)/* overload */;

}	/* namespace Acntutils */
using namespace Acntutils;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acntUtils
