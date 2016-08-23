//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class NSEvent, NSForceClickMonitor;

@interface NSImmediateActionGestureRecognizer : NSGestureRecognizer
{
    long long _flags;
    struct CGPoint _location;
    struct CGPoint _startLocation;
    long long _style;
    NSEvent *_startEvent;
    NSForceClickMonitor *_forceClickMonitor;
    id _animationController;
}

- (BOOL)_delegateShouldAttemptToRecognizeWithEvent:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)_shouldSendActionWhenPossibleConcurrentlyWithRecognizer:(id)arg1;
- (void)_didSendActions;
- (id)_startEvent;
- (id)_forceClickMonitor;
- (id)_desiredPressureBehavior;
- (unsigned long long)_acceptedEventMask;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (BOOL)shouldBeArchived;
- (double)animationProgress;
- (void)setAnimationController:(id)arg1;
- (id)animationController;
- (void)setDelegate:(id)arg1;
- (id)_delegate;
- (id)delegate;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end

