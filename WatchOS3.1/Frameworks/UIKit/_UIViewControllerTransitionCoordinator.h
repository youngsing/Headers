//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerTransitionCoordinator-Protocol.h>

@class NSMutableArray, NSString, UIView, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>
{
    _UIViewControllerTransitionContext *__mainContext;
    NSMutableArray *__alongsideAnimations;
    NSMutableArray *__alongsideAnimationViews;
    NSMutableArray *__alongsideCompletions;
    NSMutableArray *__interactiveChangeHandlers;
}

@property(retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // @synthesize _interactiveChangeHandlers=__interactiveChangeHandlers;
@property(retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // @synthesize _alongsideCompletions=__alongsideCompletions;
@property(retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // @synthesize _alongsideAnimationViews=__alongsideAnimationViews;
@property(retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // @synthesize _alongsideAnimations=__alongsideAnimations;
@property(nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // @synthesize _mainContext=__mainContext;
- (void).cxx_destruct;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(_Bool)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;
- (id)_alongsideCompletions:(_Bool)arg1;
- (id)_alongsideAnimations:(_Bool)arg1;
- (id)_interactiveChangeHandlers:(_Bool)arg1;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (struct CGAffineTransform)affineTransform;
- (_Bool)isRotating;
@property(readonly, nonatomic) UIView *containerView;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
- (_Bool)isCompleting;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (id)initWithMainContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

