//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBExclusiveTouchGestureRecognizerDelegate-Protocol.h>
#import <FrontBoard/UIGestureRecognizerDelegate-Protocol.h>

@class BKSTouchStream, FBSDisplay, NSMutableSet, NSSet, NSString, UIGestureRecognizer;

@interface _FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBExclusiveTouchGestureRecognizerDelegate>
{
    NSMutableSet *_recognizingGestures;
    NSMutableSet *_internalGestures;
    NSMutableSet *_externalGestures;
    _Bool _achievedMaximumMovement;
    _Bool _didSeeExclusiveTouchBegan;
    FBSDisplay *_display;
    UIGestureRecognizer *_exclusiveTouchGesture;
    BKSTouchStream *_touchStream;
}

@property(retain, nonatomic) BKSTouchStream *touchStream; // @synthesize touchStream=_touchStream;
@property(nonatomic) _Bool didSeeExclusiveTouchBegan; // @synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan;
@property(nonatomic) _Bool achievedMaximumMovement; // @synthesize achievedMaximumMovement=_achievedMaximumMovement;
@property(retain, nonatomic) UIGestureRecognizer *exclusiveTouchGesture; // @synthesize exclusiveTouchGesture=_exclusiveTouchGesture;
@property(readonly, retain, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(_Bool)arg2 timestamp:(double)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)windowForSystemGestures;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *gestureRecognizers;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_removeInternalGestures;
- (void)_addInternalGesturesToView:(id)arg1;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

