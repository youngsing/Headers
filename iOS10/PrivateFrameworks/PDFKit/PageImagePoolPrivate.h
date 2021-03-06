//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFDocumentView;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PageImagePoolPrivate : NSObject
{
    PDFDocumentView *documentView;
    int activePageIndex;
    NSMutableDictionary *highResPageImages;
    NSMutableDictionary *mediumResPageImages;
    NSMutableDictionary *lowResPageImages;
    NSObject<OS_dispatch_queue> *workQueue;
    // Error parsing type: AB, name: willForceUpdateWork
    // Error parsing type: Ai, name: forcedWorkCount
    NSObject<OS_dispatch_group> *forceUpdateWorkGroup;
    // Error parsing type: AB, name: isQueuedForWork
    _Bool hasReduceTransparency;
    int pageRangeHighRes;
    int pageRangeMediumRes;
    int pageRangeLowRes;
    int pageResolutionHighRes;
    int pageResolutionMediumRes;
    int pageResolutionLowRes;
    // Error parsing type: AB, name: isCancled
    _Bool forceUseMainThread;
}

- (void).cxx_destruct;

@end

