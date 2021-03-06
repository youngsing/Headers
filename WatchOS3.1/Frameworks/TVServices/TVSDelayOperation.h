//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSAsynchronousOperation.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface TVSDelayOperation : TVSAsynchronousOperation
{
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
    double _tolerance;
}

+ (id)delayOperationWithDelay:(double)arg1;
@property(readonly) double tolerance; // @synthesize tolerance=_tolerance;
@property(readonly) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_cancelTimer;
- (void)dealloc;
- (id)init;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;

@end

