//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVSettingKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;
@protocol _TSKAnimatorDelegate;

@interface _TSKZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _operation;
    id <_TSKAnimatorDelegate> _animatorDelegate;
}

@property(nonatomic) __weak id <_TSKAnimatorDelegate> animatorDelegate; // @synthesize animatorDelegate=_animatorDelegate;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)_animatePush:(_Bool)arg1 withContext:(id)arg2;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
