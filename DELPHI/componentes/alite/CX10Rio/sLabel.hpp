// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sLabel.pas' rev: 33.00 (Windows)

#ifndef SlabelHPP
#define SlabelHPP

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
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <sDefaults.hpp>
#include <sConst.hpp>
#include <sMessages.hpp>
#include <sSkinManager.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Slabel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsCustomLabel;
struct TsClassSkinData;
class DELPHICLASS TsLabel;
class DELPHICLASS TsImgLabel;
class DELPHICLASS TsEditLabel;
class DELPHICLASS TsWebLabel;
class DELPHICLASS TsKind;
struct TShadowData;
class DELPHICLASS TacOffsetKeeper;
class DELPHICLASS TsShadow;
class DELPHICLASS TsLabelFX;
class DELPHICLASS TsStickyLabel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsShadowMode : unsigned char { smNone, smCustom, smSkin1 };

enum DECLSPEC_DENUM TsKindType : unsigned char { ktStandard, ktCustom, ktSkin };

class PASCALIMPLEMENTATION TsCustomLabel : public Vcl::Stdctrls::TCustomLabel
{
	typedef Vcl::Stdctrls::TCustomLabel inherited;
	
private:
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::UnicodeString FSkinSection;
	int FSkinIndex;
	Sskinmanager::TsSkinManager* FSkinManager;
	bool FSavedParentFont;
	bool FTransparentForMouse;
	void __fastcall SetSkinSection(const System::UnicodeString Value);
	void __fastcall SetSkinManager(Sskinmanager::TsSkinManager* const Value);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual Vcl::Graphics::TFont* __fastcall GetCurrentFont();
	virtual System::Uitypes::TColor __fastcall TextColor();
	int __fastcall SkinIndex();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall ManagerStored();
	
public:
	__fastcall virtual TsCustomLabel(System::Classes::TComponent* AOwner);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall DoDrawText(System::Types::TRect &Rect, int Flags);
	__property Font;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property System::UnicodeString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property Caption = {default=0};
	__property EllipsisPosition = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Transparent = {default=1};
	__property bool TransparentForMouse = {read=FTransparentForMouse, write=FTransparentForMouse, default=0};
	__property Touch;
	__property Layout = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsCustomLabel() { }
	
};


struct DECLSPEC_DRECORD TsClassSkinData
{
public:
	bool CustomColor;
	bool CustomFont;
};


typedef void __fastcall (__closure *TLinkClickEvent)(System::TObject* Sender, System::UnicodeString &ALink, bool &DefaultAction);

class PASCALIMPLEMENTATION TsLabel : public TsCustomLabel
{
	typedef TsCustomLabel inherited;
	
private:
	bool FUseSkinColor;
	void __fastcall SetUseSkinColor(const bool Value);
	
protected:
	virtual System::Uitypes::TColor __fastcall TextColor();
	
public:
	__fastcall virtual TsLabel(System::Classes::TComponent* AOwner);
	
__published:
	__property Font;
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=1};
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsLabel() { }
	
};


class PASCALIMPLEMENTATION TsImgLabel : public TsLabel
{
	typedef TsLabel inherited;
	
private:
	int FSpacing;
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	int FImageIndex;
	bool __fastcall ImageExists();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall DrawIntText(Vcl::Graphics::TCanvas* ACanvas, System::Types::TRect &Rect, int Flags);
	DYNAMIC void __fastcall AdjustBounds();
	
public:
	__fastcall virtual TsImgLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsImgLabel();
	virtual void __fastcall Paint();
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=0, default=-1};
	__property int Spacing = {read=FSpacing, write=SetInteger, index=1, default=4};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
};


class PASCALIMPLEMENTATION TsEditLabel : public TsLabel
{
	typedef TsLabel inherited;
	
public:
	System::TObject* BoundLabel;
	__fastcall TsEditLabel(System::TObject* BoundStruct);
	__fastcall virtual ~TsEditLabel();
public:
	/* TsLabel.Create */ inline __fastcall virtual TsEditLabel(System::Classes::TComponent* AOwner) : TsLabel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TsWebLabel : public TsLabel
{
	typedef TsLabel inherited;
	
private:
	Vcl::Graphics::TFont* FNormalFont;
	void __fastcall SetHoverFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetNormalFont(Vcl::Graphics::TFont* const Value);
	
protected:
	Vcl::Graphics::TFont* FHoverFont;
	System::UnicodeString FURL;
	Sconst::TsWindowShowMode FShowMode;
	virtual System::Uitypes::TColor __fastcall TextColor();
	virtual Vcl::Graphics::TFont* __fastcall GetCurrentFont();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMMouse &Message);
	
public:
	bool MouseAbove;
	__fastcall virtual TsWebLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsWebLabel();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall Loaded();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Vcl::Graphics::TFont* Font = {read=FNormalFont, write=SetNormalFont};
	__property Cursor = {default=-21};
	__property Vcl::Graphics::TFont* HoverFont = {read=FHoverFont, write=SetHoverFont};
	__property Sconst::TsWindowShowMode ShowMode = {read=FShowMode, write=FShowMode, default=10};
	__property System::UnicodeString URL = {read=FURL, write=FURL};
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TsKind : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FColor;
	Vcl::Controls::TControl* FOwner;
	TsKindType FKindType;
	void __fastcall SetKindType(const TsKindType Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall TsKind(Vcl::Controls::TControl* AOwner);
	
__published:
	__property TsKindType KindType = {read=FKindType, write=SetKindType, default=2};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsKind() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TShadowData
{
public:
	int Blur;
	int Offset;
	int Alpha;
	System::Uitypes::TColor Color;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TacOffsetKeeper : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FRightBottom;
	int FLeftTop;
	
__published:
	__property int LeftTop = {read=FLeftTop, write=FLeftTop, stored=true, nodefault};
	__property int RightBottom = {read=FRightBottom, write=FRightBottom, stored=true, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOffsetKeeper() { }
	
public:
	/* TObject.Create */ inline __fastcall TacOffsetKeeper() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TsShadow : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FDistance;
	int FBlurCount;
	bool FBuffered;
	System::Uitypes::TColor FColor;
	TsLabelFX* ParentControl;
	TsShadowMode FMode;
	System::Byte FAlphaValue;
	TacOffsetKeeper* FOffsetKeeper;
	void __fastcall UpdateRGB();
	void __fastcall SetAlphaValue(const System::Byte Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetMode(const TsShadowMode Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	int sr;
	int sg;
	int sb;
	__fastcall TsShadow(TsLabelFX* Control);
	__fastcall virtual ~TsShadow();
	__property bool ShadowBuffered = {read=FBuffered, write=FBuffered, default=0};
	
__published:
	__property TacOffsetKeeper* OffsetKeeper = {read=FOffsetKeeper, write=FOffsetKeeper};
	__property System::Byte AlphaValue = {read=FAlphaValue, write=SetAlphaValue, default=255};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=0};
	__property TsShadowMode Mode = {read=FMode, write=SetMode, default=2};
	__property int BlurCount = {read=FBlurCount, write=SetInteger, index=0, default=4};
	__property int Distance = {read=FDistance, write=SetInteger, index=1, default=1};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsLabelFX : public TsCustomLabel
{
	typedef TsCustomLabel inherited;
	
private:
	int FAngle;
	int OffsTopLeft;
	int FMaskBitsSize;
	bool IntPosChanging;
	bool FNeedInvalidate;
	Vcl::Graphics::TBitmap* FMask;
	void *FMaskBits;
	TsShadow* FShadow;
	TsKind* FKind;
	int PrevCtrlWidth;
	void __fastcall SetAngle(const int Value);
	
protected:
	virtual System::Uitypes::TColor __fastcall TextColor();
	DYNAMIC void __fastcall AdjustBounds();
	
public:
	__fastcall virtual TsLabelFX(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsLabelFX();
	virtual void __fastcall Invalidate();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DoDrawText(System::Types::TRect &Rect, int Flags);
	TShadowData __fastcall CurrentShadowData();
	System::Uitypes::TColor __fastcall CurrentFontColor();
	bool __fastcall ShadowExists();
	void __fastcall UpdatePosition();
	
__published:
	__property Font;
	__property int Angle = {read=FAngle, write=SetAngle, nodefault};
	__property TsKind* Kind = {read=FKind, write=FKind};
	__property TsShadow* Shadow = {read=FShadow, write=FShadow};
};


enum DECLSPEC_DENUM TAlignTo : unsigned char { altLeft, altTop, altBottom, altRight, altTopCenter, altBottomCenter };

class PASCALIMPLEMENTATION TsStickyLabel : public TsLabel
{
	typedef TsLabel inherited;
	
private:
	int FGap;
	TAlignTo FAlignTo;
	Vcl::Controls::TControl* FAttachTo;
	bool FRealigning;
	System::Classes::TWndMethod FOldWinProc;
	void __fastcall SetGap(int Value);
	void __fastcall SetAttachTo(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignTo(TAlignTo Value);
	void __fastcall NewWinProc(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall Adjust(bool MoveLabel);
	
public:
	__fastcall virtual TsStickyLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsStickyLabel();
	virtual void __fastcall Loaded();
	
__published:
	__property Font;
	__property TAlignTo AlignTo = {read=FAlignTo, write=SetAlignTo, default=0};
	__property Vcl::Controls::TControl* AttachTo = {read=FAttachTo, write=SetAttachTo};
	__property int Gap = {read=FGap, write=SetGap, default=2};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Slabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SLABEL)
using namespace Slabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SlabelHPP
