//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVRunLoopCondition, AVWeakReference, NSArray;

@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    BOOL alwaysCopiesSampleData;
    BOOL supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    BOOL currentConfigurationIsFinal;
    BOOL extractionCompleteForCurrentConfiguration;
    int finished;
}

@end

