//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettings, AVWeakReference, NSArray, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface AVCapturePhotoOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    long long lastSettingsUniqueID;
    NSArray *availablePhotoPixelFormatTypes;
    NSArray *availablePhotoCodecTypes;
    NSArray *availableRawPhotoPixelFormatTypes;
    _Bool stillImageStabilizationSupported;
    _Bool dualCameraFusionSupported;
    NSArray *supportedHDRModes;
    NSArray *supportedFlashModes;
    _Bool highResolutionCaptureEnabled;
    unsigned long long maxBracketedCapturePhotoCount;
    _Bool lensStabilizationDuringBracketedCaptureSupported;
    _Bool livePhotoCaptureSupported;
    _Bool livePhotoCaptureEnabled;
    _Bool livePhotoAutoTrimmingEnabled;
    CDStruct_1b6d18a9 livePhotoMovieDuration;
    CDStruct_1b6d18a9 livePhotoMovieVideoFrameDuration;
    CDStruct_79c71658 livePhotoMovieDimensions;
    _Bool livePhotoCaptureSuspended;
    _Bool imageOptimizationForOfflineVideoStabilizationSupported;
    _Bool optimizesImagesForOfflineVideoStabilization;
    _Bool livePhotoMovieProcessingSuspended;
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;
    int flashSceneObserverCount;
    int HDRSceneObserverCount;
    int stillImageStabilizationSceneObserverCount;
    _Bool isFlashScene;
    _Bool isHDRScene;
    _Bool isStillImageStabilizationScene;
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
    struct OpaqueFigSimpleMutex *requestsLock;
    NSMutableArray *requests;
    NSMutableArray *prepareRequests;
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;
}

@end

