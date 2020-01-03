// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sCheckListBox.pas' rev: 29.00 (Windows)

#ifndef SchecklistboxHPP
#define SchecklistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <sListBox.hpp>
#include <sConst.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Schecklistbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsCheckListBox;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TCheckChanging)(System::TObject* Sender, int AItemIndex, Vcl::Stdctrls::TCheckBoxState ANewState, bool &ChangingAllowed);

class PASCALIMPLEMENTATION TsCheckListBox : public Slistbox::TsListBox
{
	typedef Slistbox::TsListBox inherited;
	
private:
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FHeaderBackgroundColor;
	System::Classes::TList* FWrapperList;
	bool FAllowGrayed;
	System::UnicodeString FHeaderSkin;
	System::Classes::TNotifyEvent FOnClickCheck;
	bool FDblClickToggle;
	TCheckChanging FOnCheckChanging;
	void __fastcall DrawCheck(const System::Types::TRect &R, Vcl::Stdctrls::TCheckBoxState AState, bool AEnabled, Vcl::Graphics::TBitmap* Bmp, const Sconst::TCacheInfo &CI)/* overload */;
	void __fastcall DrawCheck(const System::Types::TRect &R, Vcl::Stdctrls::TCheckBoxState AState, bool AEnabled, Vcl::Graphics::TCanvas* C)/* overload */;
	void __fastcall ToggleClickCheck(int Index);
	void __fastcall InvalidateCheck(int Index);
	System::TObject* __fastcall CreateWrapper(int Index);
	System::TObject* __fastcall ExtractWrapper(int Index);
	bool __fastcall HaveWrapper(int Index);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClick(Winapi::Messages::TWMMouse &Message);
	bool __fastcall GetHeader(int Index);
	System::TObject* __fastcall GetWrapper(int Index);
	bool __fastcall GetChecked(int Index);
	bool __fastcall GetItemEnabled(int Index);
	Vcl::Stdctrls::TCheckBoxState __fastcall GetState(int Index);
	void __fastcall SetItemEnabled(int Index, const bool Value);
	void __fastcall SetHeader(int Index, const bool Value);
	void __fastcall SetState(int Index, Vcl::Stdctrls::TCheckBoxState AState);
	void __fastcall SetChecked(int Index, bool Checked);
	void __fastcall SetHeaderBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderSkin(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC NativeInt __fastcall InternalGetItemData(int Index);
	DYNAMIC NativeInt __fastcall GetItemData(int Index);
	DYNAMIC void __fastcall InternalSetItemData(int Index, NativeInt AData);
	DYNAMIC void __fastcall SetItemData(int Index, NativeInt AData);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	int __fastcall SearchNextItem(bool GoForward);
	virtual void __fastcall LoadRecreateItems(System::Classes::TStrings* RecreateItems);
	virtual void __fastcall SaveRecreateItems(System::Classes::TStrings* RecreateItems);
	DYNAMIC void __fastcall ResetContent(void);
	DYNAMIC void __fastcall DeleteString(int Index);
	virtual void __fastcall ClickCheck(void);
	int __fastcall GetCheckWidth(void);
	
public:
	__fastcall virtual TsCheckListBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsCheckListBox(void);
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property bool ItemEnabled[int Index] = {read=GetItemEnabled, write=SetItemEnabled};
	__property Vcl::Stdctrls::TCheckBoxState State[int Index] = {read=GetState, write=SetState};
	__property bool Header[int Index] = {read=GetHeader, write=SetHeader};
	
__published:
	__property System::Classes::TNotifyEvent OnClickCheck = {read=FOnClickCheck, write=FOnClickCheck};
	__property TCheckChanging OnCheckChanging = {read=FOnCheckChanging, write=FOnCheckChanging};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property bool DblClickToggle = {read=FDblClickToggle, write=FDblClickToggle, default=0};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=SetHeaderColor, default=-16777193};
	__property System::Uitypes::TColor HeaderBackgroundColor = {read=FHeaderBackgroundColor, write=SetHeaderBackgroundColor, default=-16777192};
	__property System::UnicodeString HeaderSkin = {read=FHeaderSkin, write=SetHeaderSkin};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=0};
	__property Color = {default=-16777211};
	__property Columns = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property Items;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Sorted = {default=0};
	__property Style = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCheckListBox(HWND ParentWindow) : Slistbox::TsListBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Schecklistbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCHECKLISTBOX)
using namespace Schecklistbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SchecklistboxHPP
