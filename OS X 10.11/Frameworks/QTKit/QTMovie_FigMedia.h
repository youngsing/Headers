//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QTKit/QTMovieMediaHelper.h>

@class NSMapTable, NSThread, NSURL, QTMovie, QTMovieFigVisualContextRenderHelper, QTWeakReference;

__attribute__((visibility("hidden")))
@interface QTMovie_FigMedia : QTMovieMediaHelper
{
    NSThread *_initializingThread;
    struct OpaqueFigPlayer *_figPlayer;
    struct OpaqueFigPlaybackItem *_playbackItem;
    struct OpaqueFigVisualContext *_visualContext;
    struct OpaqueFigSemaphore *_readyForPlaybackSemaphore;
    NSURL *_url;
    long long _loadState;
    int _loadStateErrorCode;
    QTMovieFigVisualContextRenderHelper *_renderHelper;
    NSMapTable *_trackHelpers;
    BOOL _attachedToMainThread;
    BOOL _willMigrateToMainThread;
    BOOL _isActive;
    BOOL _looping;
    BOOL _loopingBackAndForth;
    float _playWhenReadyRate;
    float _volumeAtMuting;
    BOOL _isMuted;
    BOOL _containsProtectedMedia;
    BOOL _containsStreamingSource;
    BOOL _playWhenReady;
    BOOL _postsClosedCaptionChangeNotifications;
    BOOL _postsNonForcedSubtitleChangeNotifications;
    BOOL _playbackRangeActive;
    CDStruct_977f9211 _playbackRange;
    QTMovie *_sessionClonedMovie;
    id _chapterObserver;
    unsigned long long _mostRecentlySetChapterIndex;
    QTWeakReference *_weakReference;
}

+ (void)clearDownloadCache;
+ (void)clearDownloadCacheForSite:(id)arg1;
+ (id)sitesInDownloadCache;
+ (id)movieMIMETypesWithOptions:(int)arg1;
+ (id)movieFileTypes:(int)arg1;
+ (BOOL)canInitWithDataReference:(id)arg1 fileTypes:(int)arg2 error:(id *)arg3;
+ (BOOL)canInitWithFile:(id)arg1 fileTypes:(int)arg2 error:(id *)arg3;
+ (BOOL)canInitWithURL:(id)arg1 fileTypes:(int)arg2 error:(id *)arg3;
+ (id)validationAttributesForDataReference:(id)arg1 fileTypes:(int)arg2 withAttributes:(id)arg3 error:(id *)arg4;
+ (id)validationAttributesForURL:(id)arg1 fileTypes:(int)arg2 withAttributes:(id)arg3 error:(id *)arg4;
+ (void)initialize;
- (BOOL)setMetadata:(id)arg1 forFormat:(id)arg2;
- (BOOL)validateMetadata:(id)arg1 forFormat:(id)arg2 error:(id *)arg3;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (BOOL)detachFromCurrentThread;
- (BOOL)attachToCurrentThread;
- (void)setAudioChannelLayout:(struct AudioChannelLayout *)arg1 error:(id *)arg2;
- (struct AudioChannelLayout *)audioChannelLayout;
- (void)setAudioDevice:(id)arg1 error:(id *)arg2;
- (void)_signalReadyForPlaybackSemaphore;
- (void)_unregisterForPropertyChanges;
- (void)_registerForPropertyChanges;
- (void)copyStateFromMediaHelper:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 forParent:(id)arg2;
- (void)_clearCachedImageData;
- (void *)frameImageAtTime:(CDStruct_900afa40)arg1 withAttributes:(id)arg2 error:(id *)arg3;
- (id)_trackHelpers;
- (id)sourceString;
- (BOOL)isDRMAuthorized;
- (BOOL)isDRMProtected;
- (void)setPlaybackRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)playbackRange;
- (void)_checkForChapterChanges;
- (id)currentChapterName;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (unsigned int)currentChapterIndex;
- (int)chapterMode;
- (id)chaptersDeep;
- (id)chapterTrack;
- (long long)chapterIndexForTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)startTimeOfChapter:(long long)arg1;
- (id)chapters;
- (long long)chapterCount;
- (BOOL)hasChapters;
- (BOOL)hasClosedCaptions;
- (CDStruct_900afa40)keyframeStartTime:(CDStruct_900afa40)arg1;
- (void)step:(int)arg1;
- (void)stepBackward;
- (void)stepForward;
- (void)gotoPosterTime;
- (void)gotoEnd;
- (void)_handleLoopEndpoint;
- (void)gotoBeginning;
- (void)stop;
- (void)play;
- (void)autoplay:(float)arg1;
- (void)autoplay;
- (struct MatrixRecord)originalMovieMatrix;
- (unsigned long long)droppedVideoFrameCount;
- (void)setApertureMode:(id)arg1;
- (id)apertureMode;
- (long long)timeScale;
- (double)dynamicFrameRate;
- (float)staticFrameRate;
- (BOOL)hasFrameRate;
- (id)fileName;
- (void)getDefaultDataLocatorAttributeKey:(id *)arg1 andValue:(id *)arg2;
- (id)initialDataReference;
- (id)dataReference;
- (id)URL;
- (unsigned int)movieType;
- (int)dataRate;
- (CDStruct_900afa40)maxTimeLoaded;
- (unsigned long long)dataSize;
- (void)_setURL:(id)arg1;
- (BOOL)hasSubtitles;
- (BOOL)hasVideo;
- (BOOL)hasDuration;
- (BOOL)hasAudio;
- (BOOL)_hasEnabledTrackOfType:(unsigned int)arg1;
- (BOOL)_hasTrackOfType:(unsigned int)arg1;
- (id)annotationsExtended;
- (id)annotations;
- (id)annotationsWithCommonKeys;
- (id)albumArtworkAttributes;
- (id)albumArtworkMovie;
- (id)modificationTime;
- (id)creationTime;
- (id)controllerType;
- (id)artist;
- (id)metaDataDescription;
- (id)format;
- (id)genre;
- (id)copyright;
- (id)displayName;
- (id)fullName;
- (id)author;
- (id)album;
- (id)_metaDataStringOfType:(id)arg1;
- (void)setLoopsBackAndForth:(BOOL)arg1;
- (void)setLoops:(BOOL)arg1;
- (BOOL)loopsBackAndForth;
- (BOOL)loops;
- (id)loadedRanges;
- (id)availableRanges;
- (void)_setPlayWhenReadyRate:(float)arg1;
- (float)_playWhenReadyRate;
- (void)_setPlayWhenReadyToYES;
- (void)_setPlayWhenReady:(BOOL)arg1;
- (BOOL)_playWhenReady;
- (id)loadStateError;
- (void)_setLoadStateErrorCode:(int)arg1;
- (int)_loadStateErrorCode;
- (void)_setLoadState:(long long)arg1;
- (void)_postLoadStateChangedNotificationAndAutoplay:(id)arg1;
- (long long)loadState;
- (BOOL)_playbackItemLoaded;
- (BOOL)isStreaming;
- (BOOL)hasQuartzComposer;
- (BOOL)_isAtEnd;
- (BOOL)isPlaying;
- (BOOL)isInteractive;
- (BOOL)isLinear;
- (BOOL)isVRMovie;
- (BOOL)isFlashMovie;
- (BOOL)isSteppable;
- (id)diagnosticString;
- (BOOL)usesQuickTime;
- (BOOL)usesFigMedia;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setCurrentTime:(CDStruct_900afa40)arg1 inRange:(CDStruct_977f9211)arg2;
- (void)setCurrentTime:(CDStruct_900afa40)arg1;
- (CDStruct_900afa40)currentTime;
- (void)setRate:(float)arg1;
- (float)preferredRate;
- (float)rate;
- (void)setFigVolume:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (struct CGSize)naturalSize;
- (struct CGSize)currentSize;
- (CDStruct_900afa40)duration;
- (BOOL)canUndo;
- (BOOL)canPaste;
- (BOOL)canCut;
- (BOOL)canCopy;
- (BOOL)editable;
- (void)setUseHardwareVideoDecoderIfAvailable:(BOOL)arg1;
- (BOOL)useHardwareVideoDecoderIfAvailable;
- (BOOL)usesHardwareVideoDecoder;
- (void)addImageConsumerNoNotify:(id)arg1;
- (void)_createRenderHelperIfNecessary;
- (id)_renderHelper;
- (struct OpaqueCMTimebase *)_timebase;
- (void)_setVisualContext:(struct OpaqueFigVisualContext *)arg1;
- (struct OpaqueFigVisualContext *)_visualContext;
- (void)_handleMovieDidPlayToTheEnd;
- (void)setChapterTrack:(id)arg1;
- (void)_postSubtitleDidChangeNotification:(id)arg1;
- (BOOL)postsNonForcedSubtitleDidChangeNotifications;
- (void)setPostsNonForcedSubtitleDidChangeNotifications:(BOOL)arg1;
- (void)_postClosedCaptionDidChangeNotification:(id)arg1;
- (void)setPostsClosedCaptionDidChangeNotifications:(BOOL)arg1;
- (BOOL)wouldUseVisualContext;
- (BOOL)usesVisualContext;
- (struct OpaqueFigPlaybackItem *)figPlaybackItem;
- (struct OpaqueFigPlayer *)figPlayer;
- (id)_initializingThread;
- (BOOL)_attachedToMainThread;
- (id)_enabledTracksWithCharacteristic:(id)arg1;
- (id)tracksWithCharacteristic:(id)arg1;
- (id)trackByID:(long long)arg1;
- (id)trackByIndexAndType:(long long)arg1 type:(unsigned int)arg2 flags:(long long)arg3;
- (id)trackAtIndex:(int)arg1;
- (int)trackCount;
- (id)_enabledTracksOfMediaType:(id)arg1;
- (id)tracksOfMediaType:(id)arg1;
- (id)enabledTracks;
- (id)tracks;
- (id)trackEnumerator;
- (void)_initializingThreadWillExit:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)finalize;
- (id)initWithAttributes:(id)arg1 error:(id *)arg2 forParent:(id)arg3;

@end

