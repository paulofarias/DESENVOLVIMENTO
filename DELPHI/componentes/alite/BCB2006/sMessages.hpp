// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Smessages.pas' rev: 10.00

#ifndef SmessagesHPP
#define SmessagesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smessages
{
//-- type declarations -------------------------------------------------------
struct TacSectionInfo
{
	
public:
	AnsiString siName;
	int siSkinIndex;
	bool siRepaintNeeded;
} ;

typedef TacSectionInfo *PacSectionInfo;

//-- var, const, procedure ---------------------------------------------------
static const Word SM_ALPHACMD = 0xa100;
static const Shortint AC_SETNEWSKIN = 0x1;
static const Shortint AC_REMOVESKIN = 0x2;
static const Shortint AC_REFRESH = 0x3;
static const Shortint AC_GETPROVIDER = 0x4;
static const Shortint AC_GETCACHE = 0x5;
static const Shortint AC_ENDPARENTUPDATE = 0x6;
static const Shortint AC_CTRLHANDLED = 0x7;
static const Shortint AC_UPDATING = 0x8;
static const Shortint AC_GETDEFINDEX = 0x9;
static const Shortint AC_PREPARING = 0xa;
static const Shortint AC_GETHALFVISIBLE = 0xb;
static const Shortint AC_GETLISTSW = 0xc;
static const Shortint AC_UPDATESECTION = 0xd;
static const Shortint AC_DROPPEDDOWN = 0xe;
static const Shortint AC_SETSECTION = 0xf;
static const Shortint AC_STOPFADING = 0x10;
static const Shortint AC_SETBGCHANGED = 0x11;
static const Shortint AC_INVALIDATE = 0x12;
static const Shortint AC_CHILDCHANGED = 0x13;
static const Shortint AC_SETCHANGEDIFNECESSARY = 0x14;
static const Shortint AC_GETCONTROLCOLOR = 0x15;
static const Shortint AC_SETHALFVISIBLE = 0x16;
static const Shortint AC_PREPARECACHE = 0x17;
static const Shortint AC_DRAWANIMAGE = 0x18;
static const Shortint AC_CONTROLLOADED = 0x19;
static const Shortint AC_GETSKININDEX = 0x1a;
static const Shortint AC_GETSERVICEINT = 0x1b;
static const Shortint AC_UPDATECHILDREN = 0x1c;
static const Shortint AC_MOUSEENTER = 0x1d;
static const Shortint AC_MOUSELEAVE = 0x1e;
static const Shortint AC_BEGINUPDATE = 0x1f;
static const Shortint AC_ENDUPDATE = 0x20;
static const Shortint AC_CLEARCACHE = 0x21;
static const Shortint AC_GETBG = 0x22;
static const Shortint AC_GETDISKIND = 0x23;
static const Shortint AC_FONTSCHANGED = 0x24;
static const Shortint AC_GETSKINDATA = 0x25;
static const Shortint AC_PRINTING = 0x26;
static const Shortint AC_PAINTOUTER = 0x28;
static const Shortint AC_BEFORESCROLL = 0x33;
static const Shortint AC_AFTERSCROLL = 0x34;
static const Shortint AC_REINITSCROLLS = 0x35;
static const Shortint AC_GETCOLORTONE = 0x36;
static const Shortint AC_LINKOBJ = 0x37;
static const Shortint AC_GETAPPLICATION = 0x3c;
static const Shortint AC_PARENTCLOFFSET = 0x3d;
static const Shortint AC_NCPAINT = 0x3e;
static const Shortint AC_SETPOSCHANGING = 0x3f;
static const Shortint AC_GETPOSCHANGING = 0x40;
static const Shortint AC_SETALPHA = 0x41;
static const Shortint AC_GETFONTINDEX = 0x42;
static const Shortint AC_GETBORDERWIDTH = 0x43;
static const Shortint AC_SETSCALE = 0x44;
static const Shortint AC_GETSCALE = 0x45;
static const Shortint AC_GETOUTRGN = 0x46;
static const Shortint AC_COPYDATA = 0x47;
static const Shortint AC_POPUPCLOSED = 0x48;
static const Shortint AC_UPDATESHADOW = 0x49;
static const Shortint AC_SKINCHANGED = 0x4a;
static const Shortint AC_SKINLISTCHANGED = 0x4b;
static const Shortint AC_PAINTFLOATITEMS = 0x4c;
static const Shortint AC_UPDATEFLOATITEMS = 0x4d;
static const Shortint AC_UPDATEITEMSALPHA = 0x4e;
static const Shortint AC_UPDATEPAGEBTN = 0x4e;
static const Shortint AC_GETTOPWND = 0x4f;
static const Shortint AC_SETFLOATZORDER = 0x50;
static const Shortint AC_UPDATEFLOATBITMAPS = 0x51;
static const Shortint AC_KILLTIMERS = 0x52;
static const Shortint AC_SETNCSKINNED = 0x53;
static const Shortint AC_REFLECTLAYOUT = 0x54;
static const Shortint AC_ISOPAQUE = 0x55;
static const Shortint AC_GETCOMMONSKINDATA = 0x56;
static const Shortint AC_ANIMSCALE = 0x57;
static const Shortint AC_GETDEFSECTION = 0x58;
static const int AC_GETBG_HI = 2228224;
static const int AC_REFRESH_HI = 196608;
static const int AC_UPDATING_HI = 524288;
static const int AC_SETNEWSKIN_HI = 65536;
static const int AC_GETSERVICEINT_HI = 1769472;
static const int AC_REMOVESKIN_HI = 131072;
static const int AC_PREPARECACHE_HI = 1507328;
static const int AC_BEGINUPDATE_HI = 2031616;
static const int AC_ENDUPDATE_HI = 2097152;
static const int AC_PAINTOUTER_HI = 2621440;
static const int AC_SETBGCHANGED_HI = 1114112;
static const int AC_GETCONTROLCOLOR_HI = 1376256;
static const int AC_GETDEFINDEX_HI = 589824;
static const int AC_CLEARCACHE_HI = 2162688;
static const int AC_SETSCALE_HI = 4456448;
static const int AC_GETSKINDATA_HI = 2424832;
static const int AC_MOUSELEAVE_HI = 1966080;
static const int AC_GETPROVIDER_HI = 262144;
static const int AC_ENDPARENTUPDATE_HI = 393216;
static const int AC_CTRLHANDLED_HI = 458752;
static const int AC_GETFONTINDEX_HI = 4325376;
static const int AC_STOPFADING_HI = 1048576;
static const Word WM_DRAWMENUBORDER = 0xbcb3;
static const Word WM_DRAWMENUBORDER2 = 0xbcb4;

}	/* namespace Smessages */
using namespace Smessages;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Smessages
