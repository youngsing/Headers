//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject
{
    AVFrameRateRangeInternal *_internal;
}

+ (id)frameRateRangeWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 minDuration:(CDStruct_1b6d18a9)arg4;
+ (CDStruct_1b6d18a9)frameDurationForFrameRate:(double)arg1;
@property(readonly) CDStruct_1b6d18a9 minFrameDuration;
@property(readonly) CDStruct_1b6d18a9 maxFrameDuration;
@property(readonly) double maxFrameRate;
@property(readonly) double minFrameRate;
- (double)frameRateForFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (id)initWithMinRate:(double)arg1 maxRate:(double)arg2 maxDuration:(CDStruct_1b6d18a9)arg3 minDuration:(CDStruct_1b6d18a9)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

