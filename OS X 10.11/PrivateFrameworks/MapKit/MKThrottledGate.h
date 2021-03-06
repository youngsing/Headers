//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VKTimer;
@protocol OS_dispatch_queue;

@interface MKThrottledGate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (void).cxx_destruct;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (void)_timerFired:(id)arg1;
- (void)dispatch:(CDUnknownBlockType)arg1;
- (void)_ensureTimer;
- (id)description;
- (void)dealloc;
- (id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3;

@end

