// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sspeedbutton.pas' rev: 11.00

#ifndef SspeedbuttonHPP
#define SspeedbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Sfade.hpp>	// Pascal unit
#include <Actnlist.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sspeedbutton
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSplitterStyle { dsBorder, dsLine };
#pragma option pop

class DELPHICLASS TsSpeedButton;
class PASCALIMPLEMENTATION TsSpeedButton : public Buttons::TSpeedButton 
{
	typedef Buttons::TSpeedButton inherited;
	
private:
	int FBlend;
	int FTextOffset;
	int FOldSpacing;
	int FImageIndex;
	int FOldNumGlyphs;
	int FImageIndexHot;
	int FImageIndexPressed;
	int FImageIndexDisabled;
	int FImageIndexSelected;
	bool OldFlat;
	bool FWordWrap;
	bool FReflected;
	bool FStdParent;
	bool FBGCopying;
	bool FStoredDown;
	bool FUseEllipsis;
	bool FShowCaption;
	bool SkipDropDown;
	bool FDrawOverBorder;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TAlignment FAlignment;
	Classes::TAlignment FTextAlignment;
	Graphics::TColor FGlyphColorTone;
	Graphics::TBitmap* FStdBG;
	Menus::TPopupMenu* FDropdownMenu;
	Imglist::TChangeLink* FImageChangeLink;
	Sconst::TacGrayedMode FGrayedMode;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TsDisabledGlyphKind FDisabledGlyphKind;
	Imglist::TCustomImageList* FImages;
	Comctrls::TToolButtonStyle FButtonStyle;
	Sconst::TBmpPaintEvent FOnPaint;
	Sconst::TacAnimatEvents FAnimatEvents;
	TacSplitterStyle FSplitterStyle;
	void __fastcall SetGlyphColorTone(const Graphics::TColor Value);
	void __fastcall SetDropdownMenu(const Menus::TPopupMenu* Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetButtonStyle(const Comctrls::TToolButtonStyle Value);
	void __fastcall SetDisabledGlyphKind(const Sconst::TsDisabledGlyphKind Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetAlignment(const int Index, const Classes::TAlignment Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetSplitterStyle(const TacSplitterStyle Value);
	
protected:
	bool FGrayed;
	bool FHotState;
	bool DroppedDown;
	bool MenuVisible;
	bool FMenuOwnerMode;
	int OldMargin;
	int ActMargin;
	int ActSpacing;
	int ActAddedWidth;
	int ActArrowWidth;
	int ActTextOffset;
	int ActGlyphWidth;
	int ActArrowSpacing;
	#pragma pack(push,1)
	tagSIZE ActTextSize;
	#pragma pack(pop)
	AnsiString OldCaption;
	Buttons::TButtonLayout OldLayout;
	Classes::TNotifyEvent OldOnChange;
	void __fastcall DrawCaption(void);
	void __fastcall InitParams(void);
	int __fastcall ArrowWidth(void);
	int __fastcall GenMargin(void);
	void __fastcall DoDrawText(Types::TRect &R, unsigned Flags);
	virtual void __fastcall DrawGlyph(void);
	virtual int __fastcall GlyphWidth(bool Common = false);
	virtual int __fastcall GlyphHeight(void);
	virtual void __fastcall CopyFromCache(HDC aDC);
	bool __fastcall FontStored(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall PaintArrow(const Types::PRect pR, int Mode);
	void __fastcall ActionChanged(System::TObject* Sender);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	HIDESBASE void __fastcall GlyphChanged(System::TObject* Sender);
	virtual void __fastcall Ac_CMMouseEnter(void);
	virtual void __fastcall Ac_CMMouseLeave(void);
	virtual void __fastcall StdPaint(bool PaintButton = true);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC TMetaClass* __fastcall GetActionLinkClass(void);
	Types::TRect __fastcall CaptionRect(bool ShiftClicked = true);
	Types::TRect __fastcall ArrowRect();
	bool __fastcall CanShiftContent(void);
	void __fastcall GraphRepaint(void);
	void __fastcall UpdateControl(void);
	
public:
	tagSIZE __fastcall TextRectSize();
	virtual Imglist::TCustomImageList* __fastcall GetImages(void);
	virtual int __fastcall CurrentImageIndex(void);
	virtual int __fastcall CurrentState(void);
	Types::TRect __fastcall ImgRect(bool ShiftClicked = true);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsSpeedButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TsSpeedButton(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	__property Canvas ;
	
__published:
	__property Align  = {default=0};
	__property OnDragDrop ;
	__property OnDragOver ;
	__property DragKind  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property Margin  = {default=-1};
	__property Font  = {stored=FontStored};
	__property ParentFont  = {stored=FontStored, default=1};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Sconst::TBmpPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Comctrls::TToolButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, default=0};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledGlyphKind DisabledGlyphKind = {read=FDisabledGlyphKind, write=SetDisabledGlyphKind, default=0};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=SetDropdownMenu};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Sconst::TacGrayedMode GrayedMode = {read=FGrayedMode, write=FGrayedMode, default=1};
	__property Graphics::TColor GlyphColorTone = {read=FGlyphColorTone, write=SetGlyphColorTone, default=536870911};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, index=0, default=2};
	__property Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetAlignment, index=1, default=2};
	__property int Blend = {read=FBlend, write=SetInteger, index=0, default=0};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
	__property int TextOffset = {read=FTextOffset, write=SetInteger, index=2, default=0};
	__property int ImageIndexHot = {read=FImageIndexHot, write=SetInteger, index=3, default=-1};
	__property int ImageIndexPressed = {read=FImageIndexPressed, write=SetInteger, index=4, default=-1};
	__property int ImageIndexDisabled = {read=FImageIndexDisabled, write=SetInteger, index=5, default=-1};
	__property int ImageIndexSelected = {read=FImageIndexSelected, write=SetInteger, index=6, default=-1};
	__property bool DrawOverBorder = {read=FDrawOverBorder, write=SetBoolean, index=0, default=1};
	__property bool Grayed = {read=FGrayed, write=SetBoolean, index=1, default=0};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=2, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetBoolean, index=3, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetBoolean, index=4, default=1};
	__property bool UseEllipsis = {read=FUseEllipsis, write=SetBoolean, index=5, default=1};
	__property TacSplitterStyle SplitterStyle = {read=FSplitterStyle, write=SetSplitterStyle, default=0};
};


#pragma option push -b-
enum TacSysCommand { acscClose, acscMinimize, acscMaxNorm };
#pragma option pop

class DELPHICLASS TsSysButton;
class PASCALIMPLEMENTATION TsSysButton : public TsSpeedButton 
{
	typedef TsSpeedButton inherited;
	
private:
	TacSysCommand FSysCommand;
	bool FDrawAsIcon;
	int FVertIndent;
	Forms::TCustomForm* __fastcall ParentForm(void);
	int __fastcall CharIndex(void);
	void __fastcall UpdateSize(void);
	tagSIZE __fastcall GlyphSize();
	void __fastcall SetDrawAsIcon(const bool Value);
	void __fastcall SetSysCommand(const TacSysCommand Value);
	void __fastcall SetVertIndent(const int Value);
	Types::TRect __fastcall GlyphRect();
	
public:
	DYNAMIC void __fastcall Click(void);
	int __fastcall SkinGlyphIndex(void);
	__fastcall virtual TsSysButton(Classes::TComponent* AOwner);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall StdPaint(bool PaintButton = true);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall Loaded(void);
	virtual bool __fastcall PrepareCache(void);
	
__published:
	__property bool DrawAsIcon = {read=FDrawAsIcon, write=SetDrawAsIcon, default=1};
	__property int VertIndent = {read=FVertIndent, write=SetVertIndent, default=-1};
	__property TacSysCommand SysCommand = {read=FSysCommand, write=SetSysCommand, default=0};
public:
	#pragma option push -w-inl
	/* TsSpeedButton.Destroy */ inline __fastcall virtual ~TsSysButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacSpeedButtonActionLink;
class PASCALIMPLEMENTATION TacSpeedButtonActionLink : public Buttons::TSpeedButtonActionLink 
{
	typedef Buttons::TSpeedButtonActionLink inherited;
	
protected:
	int FImageIndex;
	virtual void __fastcall SetImageIndex(int Value);
public:
	#pragma option push -w-inl
	/* TSpeedButtonActionLink.Create */ inline __fastcall virtual TacSpeedButtonActionLink(System::TObject* AClient) : Buttons::TSpeedButtonActionLink(AClient) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TacSpeedButtonActionLink(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsTimerSpeedButton;
class PASCALIMPLEMENTATION TsTimerSpeedButton : public TsSpeedButton 
{
	typedef TsSpeedButton inherited;
	
private:
	bool FAllowTimer;
	
public:
	__fastcall virtual TsTimerSpeedButton(Classes::TComponent* AOwner);
	
__published:
	__property bool AllowTimer = {read=FAllowTimer, write=FAllowTimer, default=1};
public:
	#pragma option push -w-inl
	/* TsSpeedButton.Destroy */ inline __fastcall virtual ~TsTimerSpeedButton(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sspeedbutton */
using namespace Sspeedbutton;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sspeedbutton
