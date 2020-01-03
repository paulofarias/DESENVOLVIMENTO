// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sFade.pas' rev: 6.00

#ifndef sFadeHPP
#define sFadeHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sSkinManager.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

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
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sFade
