//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSTimer, NSDate;
@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

@interface BSWatchdog : NSObject
{
    id <BSWatchdogDelegate> _delegate;
    id <BSWatchdogProviding> _provider;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    BSTimer *_timer;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _hasFired;
}

@property(readonly, nonatomic, getter=hasFired) _Bool fired; // @synthesize fired=_hasFired;
@property(readonly, retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, retain, nonatomic) id <BSWatchdogProviding> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) id <BSWatchdogDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_stageTwoTimerFired;
- (void)_stageOneTimerFired;
- (void)_startWatchdogTimer;
- (void)_setupTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_invalidateTimer;
- (void)_completeWatchdogAfterFiring:(_Bool)arg1;
- (void)_watchdogTimerFired;
- (void)_watchdogInvalidated;
- (void)invalidate;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;

@end

