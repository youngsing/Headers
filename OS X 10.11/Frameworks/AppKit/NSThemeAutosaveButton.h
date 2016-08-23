//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import <AppKit/NSPopoverDelegate-Protocol.h>

@class NSError, NSPopover, NSString;

__attribute__((visibility("hidden")))
@interface NSThemeAutosaveButton : NSButton <NSPopoverDelegate>
{
    long long _editState;
    NSError *_autosavingError;
    double _pulseAnimationStartTime;
    id _animationCompletionBlock;
    id _showHideDelay;
    id _eventMonitor;
    id _flagsChangedEventMonitor;
    NSPopover *_documentPopover;
    double _imageAlphaValue;
    NSError *_nonModalError;
    NSPopover *_alertPopover;
    BOOL _needsShowAlertPopover;
    BOOL _userIsIdleForAlertPopover;
}

+ (id)_textColorForDisplayingAlertPopover;
+ (Class)cellClass;
- (void)viewDidMoveToWindow;
- (void)_windowDidOrderOnScreen:(id)arg1;
- (id)nonModalDocumentError;
- (void)setNonModalDocumentError:(id)arg1;
- (id)documentAutosavingError;
- (void)setDocumentAutosavingError:(id)arg1;
- (long long)documentEditingState;
- (void)setDocumentEditingState:(long long)arg1 animate:(BOOL)arg2;
- (BOOL)_shouldColorTextForAlertPopover;
- (id)displayedPopover;
- (void)popoverDidClose:(id)arg1;
- (BOOL)mouseDownEvent:(id)arg1 wouldReactivatePopover:(id)arg2;
- (void)_hidePopover;
- (void)_delayedHideAlertPopover;
- (void)_userBecameIdleForAlertPopover;
- (void)_setupAlertPopoverAutohideIgnoringRecentEvents:(BOOL)arg1;
- (void)_showAlertPopoverIgnoringRecentEvents:(BOOL)arg1;
- (void)_showDocumentPopoverThenContinue:(CDUnknownBlockType)arg1;
- (void)_repositionPopover;
- (struct CGRect)_popoverPositioningRectInSuperview;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_setTitleAndRedisplay:(id)arg1;
- (id)_buttonTitle;
- (void)updateRolloverState;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_performMouseDownWithEvent:(id)arg1;
- (BOOL)_shouldShowDocumentPopoverWithMouseDownEvent:(id)arg1;
- (void)_setTitleCellHighlighted:(BOOL)arg1;
- (BOOL)_shouldShowSeparatorField;
- (BOOL)_shouldUseWindowTitleCell;
- (void)_showOrHideArrowAnimate:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_cancelFadeAnimationDelay;
- (void)_setAnimationCompletionBlock:(CDUnknownBlockType)arg1 withDuration:(double)arg2;
- (void)_cancelAnimationCompletionBlock;
- (void)_updateSeparatorFieldStringValue;
- (BOOL)_arrowShouldBeHidden;
- (id)_documentWindow;
- (id)_containingThemeFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

