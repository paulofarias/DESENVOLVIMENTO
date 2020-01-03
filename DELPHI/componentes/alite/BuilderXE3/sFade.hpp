// CodeGear C++Builder
// Copyright (c) 1995, 2012 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sFade.pas' rev: 24.00 (Windows)

#ifndef SfadeHPP
#define SfadeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sfade
{
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
