//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver
{
    NSArray *_times;
    CDUnknownBlockType _block;
}

- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (CDStruct_1b6d18a9)_nextFiringTimeAfterTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_previousFiringTimeBeforeTime:(CDStruct_1b6d18a9)arg1;
- (void)_effectiveRateChanged;
- (void)_fireBlock;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 times:(id)arg2 queue:(struct dispatch_queue_s *)arg3 block:(CDUnknownBlockType)arg4;

@end

