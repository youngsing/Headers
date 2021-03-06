//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator
{
    unsigned long long _startingTSDSIndex;
    NSString *_headerNote;
    unsigned long long _stackshotFrameAddress;
    unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
    BOOL _forceOneBasedTimeIndexes;
}

@property(readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses; // @synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses;
@property unsigned long long stackshotFrameAddress; // @synthesize stackshotFrameAddress=_stackshotFrameAddress;
@property(copy) NSString *headerNote; // @synthesize headerNote=_headerNote;
@property BOOL forceOneBasedTimeIndexes; // @synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes;
- (void).cxx_destruct;
- (void)printFooterToOutputStream:(id)arg1;
- (void)printHeaderToOutputStream:(id)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sortedTasks;
- (void)setSamples:(id)arg1;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1;
- (int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1;
- (id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)kernelSampleTaskForSymbolication;
- (id)initWithSampleStore:(id)arg1;
@property(readonly) BOOL hasTargetProcess;
@property BOOL printHeavyStacks;
@property BOOL printSpinSignatureStack;

@end

