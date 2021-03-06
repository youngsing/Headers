//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDynamicItemBehavior.h>

__attribute__((visibility("hidden")))
@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior
{
    _Bool _enabled;
    double _completionHandlerInvocationDelay;
    CDUnknownBlockType _completionHandler;
    long long _frameCount;
    struct CGVector _targetVelocity;
}

@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double completionHandlerInvocationDelay; // @synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay;
@property(nonatomic) struct CGVector targetVelocity; // @synthesize targetVelocity=_targetVelocity;
- (void).cxx_destruct;
- (void)cancel;
- (void)willMoveToAnimator:(id)arg1;

@end

