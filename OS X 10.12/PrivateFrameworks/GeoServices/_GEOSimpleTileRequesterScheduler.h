//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterScheduler : NSObject
{
    NSPointerArray *_requesters;
    NSMutableArray *_inProgress;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)sharedScheduler;
- (id)_highestPriorityRequester;
- (void)sendNextRequestIfNecessary;
- (void)operationDidStop:(id)arg1;
- (void)removeTileRequester:(id)arg1;
- (void)addTileRequester:(id)arg1;
- (void)dealloc;
- (id)init;

@end
