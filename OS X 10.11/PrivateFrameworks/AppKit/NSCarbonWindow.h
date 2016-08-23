//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface NSCarbonWindow : NSWindow
{
    struct OpaqueWindowPtr *_windowRef;
    BOOL _windowRefIsOwned;
    CDUnknownFunctionPointerType _handleEventUPP;
    struct OpaqueEventHandlerRef *_eventHandler;
    BOOL _passingCarbonWindowActivationEvents;
    BOOL _forceNotKeyWindowForInputContext;
    BOOL _handlingCarbonWindowActivationEvents;
    unsigned int _cwFlags;
}

+ (void)setWindowLevelOfWindowGroupForWindowRef:(struct OpaqueWindowPtr *)arg1 toLevel:(long long)arg2;
+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
@property unsigned int cwFlags; // @synthesize cwFlags=_cwFlags;
- (int)_focusRelinquished;
- (int)_focusAcquired;
- (void)_removeReferencesToCarbonWindowRef;
- (BOOL)_allowsActiveInputContext;
- (void)_setForceNotKeyWindowForInputContext:(BOOL)arg1;
- (int)handleMouseDownEvent:(struct OpaqueEventRef *)arg1 at:(struct Point)arg2 inPart:(short)arg3 withMods:(unsigned int)arg4;
- (void)handleCarbonBoundsChange;
- (BOOL)validateMenuItem:(id)arg1;
- (void)undo:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)redo:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)clear:(id)arg1;
- (unsigned char)sendCarbonUpdateHICommandStatusEvent:(unsigned int)arg1 withMenuRef:(struct OpaqueMenuRef *)arg2 andMenuItemIndex:(unsigned short)arg3;
- (void)sendCarbonProcessHICommandEvent:(unsigned int)arg1;
- (unsigned int)carbonHICommandIDFromActionSelector:(SEL)arg1;
- (void)_restoreLevelAfterRunningModal;
- (id)_clearModalWindowLevel;
- (void)_setModalWindowLevel;
- (struct CGRect)startRectForSheet:(id)arg1;
- (BOOL)worksWhenModal;
- (void)setHidesOnDeactivate:(BOOL)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)_handleEventsTheCarbonWay;
- (void)resignMainWindow;
- (void)resignKeyWindow;
- (void)setStyleMask:(unsigned long long)arg1;
- (void)_setEventMask:(long long)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setLevel:(long long)arg1;
- (long long)level;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)display;
- (BOOL)isExcludedFromWindowsMenu;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)becomeMainWindow;
- (void)becomeKeyWindow;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)_windowMovedToRect:(struct CGRect)arg1;
- (void)_termWindowIfOwner;
- (void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(BOOL)arg3 forCounter:(BOOL)arg4 force:(BOOL)arg5 isModal:(BOOL)arg6;
- (void)_oldPlaceWindow:(struct CGRect)arg1;
- (id)_destroyRealWindow:(BOOL)arg1;
- (void)_commonAwake;
- (void)_cancelKey:(id)arg1;
- (void)_postCarbonWindowActivateEvent:(BOOL)arg1 makeKeyWindow:(BOOL)arg2;
- (void)sendSuperEvent:(id)arg1;
- (BOOL)reconcileToCarbonWindowBounds;
- (struct CGRect)carbonPlatformWindowBounds;
- (unsigned int)_carbonWindowClass;
- (void)_setWindowRef:(struct OpaqueWindowPtr *)arg1;
- (void)_removeWindowRef;
- (BOOL)_managesWindowRef;
- (BOOL)_hasWindowRef;
- (struct OpaqueWindowPtr *)windowRef;
- (void)finalize;
- (void)dealloc;
- (void)_cleanup;
- (id)initWithCarbonWindowRef:(struct OpaqueWindowPtr *)arg1 takingOwnership:(BOOL)arg2;
- (id)initWithCarbonWindowRef:(struct OpaqueWindowPtr *)arg1 takingOwnership:(BOOL)arg2 disableOrdering:(BOOL)arg3;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

