//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference;

@interface AVTimebaseObserver : NSObject
{
    struct dispatch_queue_s *_timerQueue;
    AVWeakReference *_weakReference;
    struct dispatch_source_s *_timerSource;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
    BOOL _invalid;
}

@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // @synthesize weakReference=_weakReference;
- (void)_stopObservingTimebaseNotifications;
- (void)_startObservingTimebaseNotifications;
- (void)_removeTimebaseFromTimerSource;
- (void)_finishInitialization;
- (void)_attachTimerSourceToTimebase;
@property(readonly, nonatomic) BOOL invalidated;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)invalidate;
@property(readonly) struct OpaqueCMTimebase *timebase;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 queue:(struct dispatch_queue_s *)arg2;

@end

