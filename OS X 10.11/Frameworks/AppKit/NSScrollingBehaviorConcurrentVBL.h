//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollingBehavior.h>

#import <AppKit/_NSScrollStateEventListener-Protocol.h>

@class NSString, _NSScrollingConcurrentConstantData, _NSScrollingConcurrentEventMonitor, _NSScrollingConcurrentMainThreadSynchronizer, _NSScrollingConcurrentVBLMonitor;

__attribute__((visibility("hidden")))
@interface NSScrollingBehaviorConcurrentVBL : NSScrollingBehavior <_NSScrollStateEventListener>
{
    id _theCakeIsALie;
    char *_timeOutCancelledPtr;
    unsigned long long _scrollingMode;
    long long _state;
    _NSScrollingConcurrentConstantData *_constantData;
    _NSScrollingConcurrentVBLMonitor *_vblMonitor;
    _NSScrollingConcurrentEventMonitor *_eventMonitor;
    _NSScrollingConcurrentMainThreadSynchronizer *_mainThreadSynchronizer;
    long long _gestureAxis;
    struct _opaque_pthread_mutex_t _screenDisabledMutex;
    unsigned long long _gestureToken;
    long long _referencePageNumber;
    long long _targetPageNumber;
    unsigned long long _screenDisabledToken;
    struct {
        unsigned int isCursorInTarget:1;
        unsigned int momentumAnimationMustAlign;
        unsigned int reserved:30;
    } _flags;
}

- (void)_animateFreeMomenum;
- (void)_animateSwipePageAlignment;
- (void)_asynchronouslyAllowDelegateToModifyProposedPageAlignedOrigin:(double *)arg1 onAxis:(long long)arg2 withInitialOrigin:(double)arg3 velocity:(double)arg4 synchronousTimeout:(unsigned long long)arg5 gestureToken:(unsigned long long)arg6;
- (void)_asynchronouslyAllowDelegateToAdjustMomentum:(id)arg1 withInitialOrigin:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3 synchronousTimeout:(unsigned long long)arg4 gestureToken:(unsigned long long)arg5;
- (void)scrollStateEvent:(long long)arg1 sender:(id)arg2;
- (void)_updateAnimatedMomentumStateMachingWithScrollStateEvent:(long long)arg1 sender:(id)arg2;
- (void)_updateMomentumEventsStateMachingWithScrollStateEvent:(long long)arg1 sender:(id)arg2;
- (void)_stopGestureScrollTracking;
- (void)waitForEvent;
- (void)checkForGestureContinuance;
- (void)_animateMomentum;
- (BOOL)_snapRubberbandIfRequired;
- (void)_snapRubberband;
- (void)_snapRubberbandWithInitialInitialOrigin:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 stretch:(struct CGSize)arg3;
- (void)_beginMomentumScroll;
- (void)_beginPhysicalScroll;
- (BOOL)_isStretched;
- (void)_scrollView:(id)arg1 trackGestureScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2;
- (void)_updatePageReferenceNumber;
- (void)_scrollView:(id)arg1 trackScrollMayBegin:(id)arg2;
@property unsigned long long gestureToken;
@property long long state;
- (void)automateLiveScrollOfScrollView:(id)arg1;
- (void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2;
- (void)snapRubberBandOfScrollView:(id)arg1;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardMayBeginScrollEvent:(id)arg2;
- (BOOL)supportsConcurrentScrolling;
- (id)_legacyBehavior;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

