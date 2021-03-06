//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKThreadDispatcher.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher
{
    NSObject<OS_dispatch_queue> *_queue;
    // Error parsing type: Ai, name: _suspendCount
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLowPriorityDispatcher;
+ (id)_singletonAlloc;
- (id)p_dispatchQueue;
- (void)resume;
- (void)suspend;
@property(readonly, getter=isSuspended) _Bool suspended;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

