//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUAnimationStep : NSObject
{
    double _delay;
    double _duration;
    unsigned long long _options;
    CDUnknownBlockType _animationBlock;
}

+ (void)_performAnimations:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 lastOneFinished:(_Bool)arg3;
+ (void)performAnimations:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)animationStepWithDelay:(double)arg1 duration:(double)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
+ (id)animationWithDuration:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)animationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelay:(double)arg1 duration:(double)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

@end
