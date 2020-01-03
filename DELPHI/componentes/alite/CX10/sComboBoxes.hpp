// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sComboBoxes.pas' rev: 30.00 (Windows)

#ifndef ScomboboxesHPP
#define ScomboboxesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Forms.hpp>
#include <System.Types.hpp>
#include <sCommonData.hpp>
#include <sDefaults.hpp>
#include <sConst.hpp>
#include <acntUtils.hpp>
#include <sGraphUtils.hpp>
#include <acSBUtils.hpp>
#include <acAlphaImageList.hpp>
#include <sSpeedButton.hpp>
#include <sSkinProvider.hpp>
#include <sScrollBox.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Scomboboxes
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsCustomComboBoxEx;
class DELPHICLASS TsComboBoxEx;
class DELPHICLASS TacSkinSelectBtn;
class DELPHICLASS TacSkinSelectForm;
class DELPHICLASS TsSkinSelector;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsCustomComboBoxEx : public Vcl::Comctrls::TCustomComboBoxEx
{
	typedef Vcl::Comctrls::TCustomComboBoxEx inherited;
	
private:
	bool FReadOnly;
	bool FShowButton;
	bool FAllowMouseWheel;
	int State;
	int FPopupWidth;
	HWND ExHandle;
	Scommondata::TsBoundLabel* FBoundLabel;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	Vcl::Comctrls::TComboExItem* __fastcall GetSelectedItem(void);
	void __fastcall SetShowButton(const bool Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	HIDESBASE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE virtual void __fastcall WMDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE virtual System::UnicodeString __fastcall GetText(int AIndex);
	
protected:
	HWND lboxhandle;
	bool FDropDown;
	Acsbutils::TacScrollWnd* ListSW;
	int FGlyphIndex;
	virtual int __fastcall GetItemHt(void);
	virtual bool __fastcall AllowDropDown(void);
	bool __fastcall AllowBtnStyle(void);
	int __fastcall BrdWidth(void);
	int __fastcall ButtonHeight(void);
	System::Types::TRect __fastcall ButtonRect(void);
	void __fastcall PaintButton(void);
	void __fastcall AnimateCtrl(int AState);
	void __fastcall PrepareCache(void);
	void __fastcall UpdateIndexes(void);
	virtual void __fastcall DoDropDown(void);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	virtual bool __fastcall DrawSkinItem(int aIndex, const System::Types::TRect &aRect, Winapi::Windows::TOwnerDrawState aState, HDC aDC);
	
public:
	__fastcall virtual ~TsCustomComboBoxEx(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	__fastcall virtual TsCustomComboBoxEx(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AdjustDropDown(void);
	DYNAMIC void __fastcall CloseUp(void);
	__property Vcl::Comctrls::TComboExItem* SelectedItem = {read=GetSelectedItem};
	
__published:
	__property Color = {stored=ColorStored, default=-16777211};
	__property Font = {stored=FontStored};
	__property ParentFont = {stored=FontStored, default=1};
	__property bool AllowMouseWheel = {read=FAllowMouseWheel, write=FAllowMouseWheel, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property int PopupWidth = {read=FPopupWidth, write=FPopupWidth, default=0};
	__property bool ShowButton = {read=FShowButton, write=SetShowButton, default=1};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property StyleElements = {default=7};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomComboBoxEx(HWND ParentWindow) : Vcl::Comctrls::TCustomComboBoxEx(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TsComboBoxEx : public TsCustomComboBoxEx
{
	typedef TsCustomComboBoxEx inherited;
	
__published:
	__property AutoCompleteOptions = {default=2};
	__property ItemsEx;
	__property Style = {default=0};
	__property StyleEx = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemIndex;
	__property ItemHeight;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property OnBeginEdit;
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndEdit;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnSelect;
	__property OnStartDock;
	__property OnStartDrag;
	__property Images;
	__property DropDownCount = {default=8};
	__property BoundLabel;
	__property DisabledKind = {default=1};
	__property ShowButton = {default=1};
	__property SkinData;
	__property ReadOnly = {default=0};
public:
	/* TsCustomComboBoxEx.Destroy */ inline __fastcall virtual ~TsComboBoxEx(void) { }
	/* TsCustomComboBoxEx.Create */ inline __fastcall virtual TsComboBoxEx(System::Classes::TComponent* AOwner) : TsCustomComboBoxEx(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsComboBoxEx(HWND ParentWindow) : TsCustomComboBoxEx(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TacSkinSelectBtn : public Sspeedbutton::TsSpeedButton
{
	typedef Sspeedbutton::TsSpeedButton inherited;
	
public:
	bool FDoClick;
	DYNAMIC void __fastcall Click(void);
	virtual bool __fastcall PrepareCache(void);
	__fastcall virtual TacSkinSelectBtn(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
public:
	/* TsSpeedButton.Destroy */ inline __fastcall virtual ~TacSkinSelectBtn(void) { }
	
};


enum DECLSPEC_DENUM TacUpdateFlags : unsigned char { ufUpdateThumbs, ufUpdateScale, ufFormCreating, ufFormInitializing };

class PASCALIMPLEMENTATION TacSkinSelectForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
protected:
	int BtnIndex;
	int ItemCount;
	int ItemWidth;
	int ItemHeight;
	Sskinprovider::TsSkinProvider* sp;
	Sscrollbox::TsScrollBox* ScrollBox;
	TsSkinSelector* Selector;
	Acalphaimagelist::TsVirtualImageList* ImgList;
	System::Set<TacUpdateFlags, TacUpdateFlags::ufUpdateThumbs, TacUpdateFlags::ufFormInitializing> UpdateFlags;
	void __fastcall InitFormData(void);
	void __fastcall UpdateBoxSize(void);
	void __fastcall UpdateControls(void);
	void __fastcall UpdateHotControl(void);
	void __fastcall SetBtnIndex(int NewIndex);
	void __fastcall ClickBtn(TacSkinSelectBtn* AButton);
	
public:
	__fastcall virtual ~TacSkinSelectForm(void);
	__fastcall virtual TacSkinSelectForm(System::Classes::TComponent* AOwner, int Dummy);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TacSkinSelectForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TacSkinSelectForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TacThumbSize : unsigned char { tsSmall, tsMedium, tsBig };

class PASCALIMPLEMENTATION TsSkinSelector : public TsCustomComboBoxEx
{
	typedef TsCustomComboBoxEx inherited;
	
private:
	System::Byte FColCount;
	System::Byte FRowCount;
	System::Byte FItemMargin;
	System::Byte FMinItemWidth;
	bool FShowNoSkin;
	TacSkinSelectForm* Form;
	TacThumbSize FThumbSize;
	void __fastcall SetThumbSize(const TacThumbSize Value);
	void __fastcall SetShowNoSkin(const bool Value);
	void __fastcall SetColCount(const System::Byte Value);
	void __fastcall SetRowCount(const System::Byte Value);
	
protected:
	void __fastcall UpdateItemIndex(void);
	void __fastcall UpdateList(bool Immediate);
	virtual bool __fastcall AllowDropDown(void);
	void __fastcall PopulateList(bool Immediate);
	virtual System::UnicodeString __fastcall GetText(int AIndex);
	void __fastcall SetIndex(int BtnIndex, int Step);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	void __fastcall UpdateForm(void);
	virtual void __fastcall DoDropDown(void);
	__fastcall virtual ~TsSkinSelector(void);
	HIDESBASE bool __fastcall DroppedDown(void);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual TsSkinSelector(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property System::Byte ItemMargin = {read=FItemMargin, write=FItemMargin, default=4};
	__property System::Byte ColCount = {read=FColCount, write=SetColCount, default=3};
	__property System::Byte RowCount = {read=FRowCount, write=SetRowCount, default=5};
	__property System::Byte MinItemWidth = {read=FMinItemWidth, write=FMinItemWidth, default=0};
	__property bool ShowNoSkin = {read=FShowNoSkin, write=SetShowNoSkin, default=1};
	__property TacThumbSize ThumbSize = {read=FThumbSize, write=SetThumbSize, default=2};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsSkinSelector(HWND ParentWindow) : TsCustomComboBoxEx(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Scomboboxes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCOMBOBOXES)
using namespace Scomboboxes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScomboboxesHPP
