//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimation, CALayer, NSArray;

@interface SATVIntroAnimator : NSObject
{
    _Bool _clickRunning;
    _Bool _shadowRunning;
    _Bool _enabled;
    double _cycleDuration;
    CAAnimation *_shadowAnimation;
    CAAnimation *_clickAnimation;
    CALayer *_clickLayer;
    CALayer *_shadowLayer;
    NSArray *_cyclingViews;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shadowRunning; // @synthesize shadowRunning=_shadowRunning;
@property(nonatomic) _Bool clickRunning; // @synthesize clickRunning=_clickRunning;
@property(retain, nonatomic) NSArray *cyclingViews; // @synthesize cyclingViews=_cyclingViews;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) CALayer *clickLayer; // @synthesize clickLayer=_clickLayer;
@property(retain, nonatomic) CAAnimation *clickAnimation; // @synthesize clickAnimation=_clickAnimation;
@property(retain, nonatomic) CAAnimation *shadowAnimation; // @synthesize shadowAnimation=_shadowAnimation;
@property(nonatomic) double cycleDuration; // @synthesize cycleDuration=_cycleDuration;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_addAnimations;
- (id)layerForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithAnimations:(id)arg1 layers:(id)arg2 cyclingViews:(id)arg3;

@end
