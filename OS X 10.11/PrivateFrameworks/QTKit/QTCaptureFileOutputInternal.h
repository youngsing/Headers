//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QTCaptureFileOutputInternal : NSObject
{
    struct __CFDictionary *compressionOptions;
    struct CGSize maximumVideoSize;
    double minimumVideoFrameInterval;
    CDStruct_900afa40 maximumRecordedDuration;
    int maximumRecordedDurationLock;
    unsigned long long maximumRecordedFileSize;
    int maximumRecordedFileSizeLock;
    int delegateLock;
}

@end

