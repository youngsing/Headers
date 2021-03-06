//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate>
{
    _Bool _disabled;
}

+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)reset;
- (void)endTransitionForKeyView:(id)arg1;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)gestureTransitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;
- (void)gestureTransitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 direction:(int)arg3;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightSelectLeftInvertedTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryInvertedTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapLeftSelectRightInvertedTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryInvertedTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapPrimaryExitInvertedTransform;
- (id)keycapPrimaryExitTransform;
- (id)keycapRightInvertedTransform;
- (id)keycapRightStandardTransform;
- (id)keycapLeftInvertedTransform;
- (id)keycapLeftStandardTransform;
- (id)keycapAlternateSpaceInvertedTransform;
- (id)keycapAlternateSpaceTransform;
- (id)keycapPrimarySpaceInvertedTransform;
- (id)keycapPrimarySpaceTransform;
- (id)keycapAlternateBackspaceInvertedTransform;
- (id)keycapAlternateBackspaceTransform;
- (id)keycapPrimaryBackspaceInvertedTransform;
- (id)keycapPrimaryBackspaceTransform;
- (id)keycapAlternateStandardInvertedTransform;
- (id)keycapAlternateStandardTransform;
- (id)keycapPrimaryStandardInvertedTransform;
- (id)keycapPrimaryStandardTransform;
- (id)keycapNullTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
@property(readonly, nonatomic) _Bool shouldPurgeKeyViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

