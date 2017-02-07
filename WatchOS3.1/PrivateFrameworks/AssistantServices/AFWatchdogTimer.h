//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    double _interval;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_source> *_timerSource;
    unsigned long long _timerState;
    NSDate *_startTime;
    double _remainingTimeInterval;
}

- (void).cxx_destruct;
- (void)reset;
- (_Bool)cancelIfNotAlreadyCanceled;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)_scheduleTimerWithInterval:(double)arg1;
- (void)_scheduleTimer;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
