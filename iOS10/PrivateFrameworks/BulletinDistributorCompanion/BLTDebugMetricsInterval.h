//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface BLTDebugMetricsInterval : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_start;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)nextUpcomingIntervalDate;
- (void)_cleanupTimer;
- (void)dealloc;
- (id)initWithStart:(double)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

