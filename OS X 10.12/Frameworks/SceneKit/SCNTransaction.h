//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNTransaction : NSObject
{
}

+ (unsigned int)currentState;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)postCommandWithContext:(void *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;
+ (BOOL)immediateMode;
+ (void)setImmediateMode:(BOOL)arg1;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (id)valueForKey:(id)arg1;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setDisableActions:(BOOL)arg1;
+ (BOOL)disableActions;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (id)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (double)animationDuration;
+ (void)unlock;
+ (void)lock;
+ (void)flush;
+ (void)commitImmediate;
+ (void)commit;
+ (void)begin;
- (id)animationTimingFunction;
- (void)setAnimationTimingFunction:(id)arg1;
- (BOOL)disableActions;
- (void)setDisableActions:(BOOL)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void)unlock;
- (void)lock;
- (void)flush;
- (void)commit;
- (void)begin;

@end
