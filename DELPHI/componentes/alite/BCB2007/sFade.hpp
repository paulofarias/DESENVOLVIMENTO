// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sfade.pas' rev: 11.00

#ifndef SfadeHPP
#define SfadeHPP

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
#include <Extctrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acthdtimer.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sfade
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall EventEnabled(Sconst::TacAnimatEvent Event, Sconst::TacAnimatEvents CurrentProperty, Sskinmanager::TsSkinManager* SkinManager = (Sskinmanager::TsSkinManager*)(0x0));
extern PACKAGE bool __fastcall UpdateGlowing_CB(System::TObject* Data, int iIteration);
extern PACKAGE bool __fastcall UpdateGraphic_CB(System::TObject* Data, int iIteration);
extern PACKAGE bool __fastcall UpdateWindow_CB(System::TObject* Data, int iIteration);
extern PACKAGE void __fastcall DoChangePaint(Scommondata::TsCommonData* Data, int State, Acthdtimer::TacAnimProc AAnimProc, bool AllowAnimation, bool Fast, bool MakeGlowing = true);

}	/* namespace Sfade */
using namespace Sfade;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sfade
