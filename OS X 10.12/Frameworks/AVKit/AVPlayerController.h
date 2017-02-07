//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <AVKit/AVFunctionBarPlaybackControlsControlling-Protocol.h>
#import <AVKit/NSUserInterfaceValidations-Protocol.h>

@class AVFragmentedMovieMinder, AVFunctionBarMediaSelectionOption, AVOutputContextController, AVPlayer, AVValueTiming, NSArray, NSDictionary, NSError, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerController : NSResponder <AVFunctionBarPlaybackControlsControlling, NSUserInterfaceValidations>
{
    BOOL _jKeyDown;
    BOOL _kKeyDown;
    BOOL _lKeyDown;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    float _rate;
    BOOL _isResumed;
    NSObject<OS_dispatch_source> *_seekTimer;
    double _timeOfLastUpdate;
    BOOL _playbackSuspended;
    BOOL _dontScrubBecauseOfJump;
    double _deltaX;
    double _deltaY;
    double _eventBeginTime;
    double _momentumEndTime;
    double _rateAtEventBegan;
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _ignoreRateKeyValueChange;
    id _updateTimingPeriodicObserverToken;
    id _updateAtMinMaxTimePeriodicObserverToken;
    id _playerItemTimeJumpedObserver;
    id _playerItemDidPlayToEndTimeObserver;
    id _systemWillSleepObserver;
    id _currentLocaleDidChangeObserver;
    CDUnknownBlockType _listenerBlock;
    BOOL _looping;
    long long _actionAtItemEnd;
    BOOL _pendingSeek;
    CDStruct_1b6d18a9 _toleranceBefore;
    CDStruct_1b6d18a9 _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    unsigned long long _scanningCount;
    double _preScanningRate;
    AVFragmentedMovieMinder *_fragmentedMovieMinder;
    BOOL _shouldPlayWhenLikelyToKeepUp;
    AVOutputContextController *_outputContextController;
    BOOL _setOutputContextPending;
    BOOL _forceScanning;
    double _rateBeforeForceScanning;
    BOOL _atMaxTime;
    BOOL _atMinTime;
    BOOL _scrubbing;
    BOOL _seekingInternal;
    BOOL _seeking;
    BOOL _composable;
    BOOL _hasProtectedContent;
    BOOL _compatibleWithAirPlayVideo;
    BOOL _preventingIdleSystemSleep;
    BOOL _preventingIdleDisplaySleep;
    BOOL _disablingAutomaticTermination;
    AVPlayer *_player;
    AVValueTiming *_timing;
    double _seekToTime;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
    CDStruct_1b6d18a9 _seekToTimeInternal;
}

+ (id)keyPathsForValuesAffectingShouldDisableAutomaticTermination;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingShouldPreventIdleSystemSleep;
+ (id)keyPathsForValuesAffectingOutputContext;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentLegibleFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCurrentAudioFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
@property(readonly) AVOutputContextController *outputContextController; // @synthesize outputContextController=_outputContextController;
@property(getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property(retain) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property BOOL hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(getter=isComposable) BOOL composable; // @synthesize composable=_composable;
@property(retain) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property(getter=isSeekingInternal) BOOL seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property(getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(getter=isAtMinTime) BOOL atMinTime; // @synthesize atMinTime=_atMinTime;
@property(getter=isAtMaxTime) BOOL atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property(retain) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)shouldDisableAutomaticTermination;
- (BOOL)shouldPreventIdleDisplaySleep;
- (BOOL)shouldPreventIdleSystemSleep;
- (BOOL)preventsIdleSleep;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)scanningDelays;
- (id)outputContext;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPlayingOnExternalScreen;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (void)updateTiming;
- (void)seekChapterBackward:(id)arg1;
- (BOOL)canSeekChapterBackward;
- (void)seekChapterForward:(id)arg1;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)seekToEnd:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)_updateScanningBackwardRate;
- (void)beginScanningBackward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)_updateScanningForwardRate;
- (void)beginScanningForward:(id)arg1;
- (void)scanForward:(id)arg1;
- (BOOL)canScanForward;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)actuallySeekToTime;
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)seekToTime:(double)arg1;
- (BOOL)canSeek;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasContentChapters;
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
- (id)loadedTimeRanges;
- (double)currentTimeWithinEndTimes;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (double)currentTime;
- (struct CGSize)contentDimensions;
- (float)nominalFrameRate;
@property(readonly) double contentDuration;
- (BOOL)hasContent;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)updateAtMinMaxTime;
- (void)setLooping:(BOOL)arg1;
- (BOOL)isLooping;
- (void)togglePlayback:(id)arg1;
@property(readonly) BOOL canTogglePlayback;
- (void)pause:(id)arg1;
- (BOOL)canPause;
- (void)autoplay:(id)arg1;
- (void)play:(id)arg1;
@property(getter=isPlaying) BOOL playing;
- (BOOL)canPlay;
@property(readonly) NSObject<OS_dispatch_queue> *seekTimer;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isCompletelySeekable;
@property(readonly) NSArray *seekableTimeRanges;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (id)_queuePlayer;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
@property(retain) AVFunctionBarMediaSelectionOption *currentLegibleFunctionBarMediaSelectionOption;
@property(readonly) NSArray *legibleFunctionBarMediaSelectionOptions;
- (BOOL)hasLegibleFunctionBarMediaSelectionOptions;
@property(retain) AVFunctionBarMediaSelectionOption *currentAudioFunctionBarMediaSelectionOption;
@property(readonly) NSArray *audioFunctionBarMediaSelectionOptions;
- (BOOL)hasAudioFunctionBarMediaSelectionOptions;
- (BOOL)hasFunctionBarMediaSelectionOptions;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestType:(long long)arg1;
- (void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isFunctionBarWaveformGeneratorLoaded;
- (id)functionBarWaveformGenerator;
- (void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(struct CGSize)arg2 requestType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)isFunctionBarThumbnailGeneratorLoaded;
- (id)functionBarThumbnailGenerator;
- (void)endFunctionBarScrubbing;
- (void)beginFunctionBarScrubbing;
@property(readonly) BOOL canBeginFunctionBarScrubbing;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleOptions;
- (id)audioOptions;
- (void)reloadLegibleOptions;
- (void)reloadAudioOptions;
- (void)reloadOptions;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)currentAudioMediaSelectionOption;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (id)audioMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (BOOL)_shouldHandleSwipeWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (BOOL)_shouldHandleScrollWheelWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (long long)_handleJKLWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;

// Remaining properties
@property(readonly) NSURL *assetURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
