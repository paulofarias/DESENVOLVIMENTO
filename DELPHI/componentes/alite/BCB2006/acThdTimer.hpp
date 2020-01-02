// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acthdtimer.pas' rev: 10.00

#ifndef ActhdtimerHPP
#define ActhdtimerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Syncobjs.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acthdtimer
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacTimerThread;
class DELPHICLASS TacThreadedTimer;
typedef bool __fastcall (*TacAnimProc)(System::TObject* Data, int Iteration);

class PASCALIMPLEMENTATION TacThreadedTimer : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FEnabled;
	unsigned FInterval;
	Classes::TNotifyEvent FOnTimer;
	Extctrls::TTimer* FTimerThread;
	Classes::TThreadPriority FThreadPriority;
	void __fastcall StartTimer(void);
	void __fastcall KillTimer(void);
	void __fastcall OnTimer2(System::TObject* Sender);
	
protected:
	bool InHandler;
	bool Executing;
	System::TObject* FOwner;
	void __fastcall UpdateTimer(void);
	void __fastcall SetInterval(unsigned Value);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetOnTimer(Classes::TNotifyEvent Value);
	void __fastcall SetThreadPriority(Classes::TThreadPriority Value);
	void __fastcall Timer(void);
	void __fastcall TimeEvent(System::TObject* Sender);
	
public:
	double Glow;
	double Value;
	double GlowStep;
	double ValueStep;
	int State;
	int Iteration;
	int IntState;
	int OldState;
	int Iterations;
	int ThreadType;
	Graphics::TBitmap* BmpTo;
	Graphics::TBitmap* BmpOut;
	Graphics::TBitmap* BmpFrom;
	#pragma pack(push,1)
	Types::TRect AnimRect;
	#pragma pack(pop)
	System::TObject* AnimData;
	bool Destroyed;
	Controls::TControl* AnimControl;
	TacAnimProc AnimProc;
	__fastcall virtual TacThreadedTimer(Classes::TComponent* AOwner);
	__fastcall virtual TacThreadedTimer(Classes::TComponent* AOwner, bool ChangeEvent);
	__fastcall virtual ~TacThreadedTimer(void);
	void __fastcall CopyFrom(Graphics::TBitmap* &DstBmp, Graphics::TBitmap* SrcBmp, const Types::TRect &R);
	void __fastcall InitData(System::TObject* AData, int AIteration, TacAnimProc AAnimProc, int AState, bool AFast = false);
	virtual void __fastcall TimeHandler(void);
	void __fastcall Reset(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property unsigned Interval = {read=FInterval, write=SetInterval, default=1000};
	__property Classes::TNotifyEvent OnTimer = {read=FOnTimer, write=SetOnTimer};
	__property Classes::TThreadPriority ThreadPriority = {read=FThreadPriority, write=SetThreadPriority, nodefault};
};


class PASCALIMPLEMENTATION TacTimerThread : public Classes::TThread 
{
	typedef Classes::TThread inherited;
	
public:
	unsigned Interval;
	Syncobjs::TSimpleEvent* TimeEvent;
	TacThreadedTimer* OwnerTimer;
	virtual void __fastcall Execute(void);
	void __fastcall DoTimer(void);
public:
	#pragma option push -w-inl
	/* TThread.Create */ inline __fastcall TacTimerThread(bool CreateSuspended) : Classes::TThread(CreateSuspended) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TThread.Destroy */ inline __fastcall virtual ~TacTimerThread(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint TT_GLOWING = 0x1;
extern PACKAGE int __fastcall GetNewTimer(TacThreadedTimer* &ATimer, Classes::TComponent* AOwner, int State);

}	/* namespace Acthdtimer */
using namespace Acthdtimer;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acthdtimer
