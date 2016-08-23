//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol AVPlayerItemDelegate;

@interface AVPlayerItemInternal : NSObject
{
    NSURL *URL;
    struct dispatch_queue_s *ivarAccessQueue;
    AVWeakReference *weakReference;
    AVPropertyStorage *propertyStorage;
    struct dispatch_queue_s *figConfigurationQueue;
    struct dispatch_queue_s *seekQueue;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase *proxyTimebase;
    NSArray *automaticallyLoadedAssetKeys;
    BOOL wasInitializedWithURL;
    AVAsset *asset;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct dispatch_queue_s *stateDispatchQueue;
    NSArray *cachedTracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    BOOL suppressesVideoLayers;
    struct OpaqueCMTimebase *figTimebase;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    BOOL needTimedMetadataNotification;
    BOOL didBecomeReadyForBasicInspection;
    id <AVPlayerItemDelegate> delegate;
    AVAudioMix *audioMix;
    BOOL needToSeekAfterCreatingFigPlaybackItem;
    CDStruct_1b6d18a9 initialTime;
    unsigned int initialSetTimeFlags;
    CDStruct_1b6d18a9 initialMinSnapTime;
    CDStruct_1b6d18a9 initialMaxSnapTime;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    CDUnknownBlockType seekCompletionHandler;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    AVPlayerConnection *playerConnection;
    BOOL shouldOptimizeForExclusivePlayback;
    BOOL allowsExtendedReadAhead;
    long long initialPlaybackLikelyToKeepUpTrigger;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL initialAlwaysMonitorsPlayability;
    BOOL nonForcedSubtitlesEnabled;
    BOOL externalProtectionRequested;
    BOOL savesDownloadedDataToDiskWhenDone;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    CDStruct_1b6d18a9 forwardPlaybackEndTime;
    CDStruct_1b6d18a9 reversePlaybackEndTime;
    NSArray *imageQueueInterpolationCurve;
    BOOL imageQueueInterpolationCurveWasSet;
    BOOL blendsVideoFrames;
    BOOL blendsVideoFramesWasSet;
    BOOL reversesMoreVideoFramesInMemory;
    BOOL reversesMoreVideoFramesInMemoryWasSet;
    BOOL aggressivelyCachesVideoFrames;
    BOOL aggressivelyCachesVideoFramesWasSet;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;
    BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    void *figVideoCompositor;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSDictionary *gaplessInfo;
    long long initialVariantIndex;
    struct __CFString *initialFigTimePitchAlgorithm;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSArray *textStyleRules;
    BOOL networkUsuallyExceedsMaxBitRate;
    BOOL allowProgressiveSwitchUp;
    struct CGSize IFramePrefetchTargetDimensions;
    double preferredPeakBitRate;
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;
    CDStruct_1b6d18a9 maximumForwardBufferDuration;
    BOOL requiresAccessLog;
    NSString *videoApertureMode;
    unsigned int RTCReportingFlags;
    long long status;
    NSError *error;
    NSArray *timedMetadata;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL usesMinimalLatencyForVideoCompositionRendering;
    AVAudioMix *mostRecentlyAppliedAudioMix;
    BOOL canUseExtraNetworking;
    AVWeakReference *playerReference;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
    long long lastContentAuthorizationStatus;
}

@end
