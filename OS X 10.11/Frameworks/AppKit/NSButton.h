//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSAccessibilityButton-Protocol.h>
#import <AppKit/NSUserInterfaceValidations-Protocol.h>

@class NSImage, NSString;

@interface NSButton : NSControl <NSUserInterfaceValidations, NSAccessibilityButton>
{
}

+ (void)initialize;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (void)springLoadingHighlightChanged:(id)arg1;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)_canDisableBaseVibrancy;
- (double)baselineOffsetFromBottom;
- (BOOL)_hasExtra10_11BordersInToolbars;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)_inToolbar;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (id)_sound;
- (void)_setSound:(id)arg1;
- (id)sound;
- (void)setSound:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFlipped;
- (id)_popupToSubstituteInInit;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)altModifySelection:(id)arg1;
- (void)shiftModifySelection:(id)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (void)_setWindow:(id)arg1;
- (id)_recursiveFindDefaultButtonCell;
- (BOOL)_canBecomeDefaultButton;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_keyEquivalentModifierMaskMatchesModifierFlags:(unsigned long long)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)highlight:(BOOL)arg1;
@property unsigned long long keyEquivalentModifierMask;
@property(copy) NSString *keyEquivalent;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
- (id)_focusRingBleedRegion;
@property(getter=isTransparent) BOOL transparent;
@property(getter=isBordered) BOOL bordered;
@property long long state;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (void)setAlternateAction:(SEL)arg1;
- (SEL)alternateAction;
- (void)setPeriodicInterval:(double)arg1;
- (double)periodicInterval;
- (void)setPeriodicDelay:(double)arg1;
- (double)periodicDelay;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (unsigned long long)imageScaling;
@property unsigned long long imagePosition;
@property(retain) NSImage *alternateImage;
@property(retain) NSImage *image;
- (void)setAttributedAlternateTitle:(id)arg1;
- (id)attributedAlternateTitle;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
@property(copy) NSString *alternateTitle;
@property(copy) NSString *title;
@property(getter=isSpringLoaded) BOOL springLoaded;
@property long long maxAcceleratorLevel;
- (void)setMaxState:(long long)arg1;
- (long long)maxState;
- (id)initWithFrame:(struct CGRect)arg1;
@property unsigned long long bezelStyle;
- (void)setNextState;
@property BOOL allowsMixedState;
- (void)_clearMouseTrackingForCell:(id)arg1;
- (void)_setMouseTrackingForCell:(id)arg1;
@property BOOL showsBorderOnlyWhileMouseInside;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

