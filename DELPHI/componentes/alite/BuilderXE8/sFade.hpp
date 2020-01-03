// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sFade.pas' rev: 29.00 (Windows)

#ifndef SfadeHPP
#define SfadeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <acThdTimer.hpp>
#include <sSkinManager.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sfade
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EventEnabled(Sconst::TacAnimatEvent Event, Sconst::TacAnimatEvents CurrentProperty, Sskinmanager::TsSkinManager* SkinManager = (Sskinmanager::TsSkinManager*)(0x0));
extern DELPHI_PACKAGE bool __fastcall UpdateGlowing_CB(System::TObject* Data, int iIteration);
extern DELPHI_PACKAGE bool __fastcall UpdateGraphic_CB(System::TObject* Data, int iIteration);
extern DELPHI_PACKAGE bool __fastcall UpdateWindow_CB(System::TObject* Data, int iIteration);
extern DELPHI_PACKAGE void __fastcall DoChangePaint(Scommondata::TsCommonData* Data, int State, Acthdtimer::TacAnimProc AAnimProc, bool AllowAnimation, bool Fast, bool MakeGlowing = true);
}	/* namespace Sfade */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SFADE)
using namespace Sfade;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SfadeHPP
