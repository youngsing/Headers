//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    CDStruct_1b6d18a9 movieFragmentInterval;
    NSArray *metadata;
    _Bool sendLastVideoPreviewFrame;
    _Bool recording;
    _Bool paused;
}

- (void)dealloc;
- (id)init;

@end

