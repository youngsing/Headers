//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDisplayTiming.h>

__attribute__((visibility("hidden")))
@interface _NSDisplayTiming : NSDisplayTiming
{
    double _interval;
    double _displayOffset;
    double _submissionLatency;
}

- (double)submissionTimeStampBeforeTimeStamp:(double)arg1;
- (double)submissionTimeStampAfterTimeStamp:(double)arg1;
- (double)displayTimeStampForSubmissionTimeStamp:(double)arg1;
- (double)submissionTimeStampForDisplayTimeStamp:(double)arg1;
- (double)displayTimeStampBeforeTimeStamp:(double)arg1;
- (double)displayTimeStampAfterTimeStamp:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDisplayOffset:(double)arg1 interval:(double)arg2 submissionLatency:(double)arg3;
- (id)initWithHostTime:(unsigned long long)arg1 interval:(unsigned long long)arg2;

@end
