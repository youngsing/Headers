//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSDataMediaItem.h>

#import <TVServices/TVSLeaseAgentDelegate-Protocol.h>
#import <TVServices/TVSSecureKeyDeliveryCoordinatorDelegate-Protocol.h>

@class NSError, NSNumber, NSObject, NSOperationQueue, NSString, NSURL, TVSBookmark, TVSDataItem, TVSDataType, TVSDocumentLoader, TVSLeaseAgent, TVSPlayer, TVSSecureKeyDeliveryCoordinator, TVSSecureKeyStandardLoader;
@protocol TVSMediaItem;

@interface TVSStoreMediaItem : TVSDataMediaItem <TVSLeaseAgentDelegate, TVSSecureKeyDeliveryCoordinatorDelegate>
{
    _Bool _bookmarksDisabled;
    _Bool _ignoreLeaseAgentStateChanges;
    _Bool _needsRentalCheckin;
    _Bool _addedSettingsObservers;
    _Bool _allowedToUsePreloadedHLSURL;
    TVSSecureKeyStandardLoader *_secureKeyLoader;
    NSString *_actionParams;
    NSString *_rentalID;
    NSURL *_launchPlaybackURL;
    NSURL *_hlsPlaylistURL;
    NSNumber *_contentRatingRank;
    TVSDataType *_dataType;
    NSNumber *_bookmarkOverrideTime;
    TVSDataItem *_storeDataItem;
    TVSLeaseAgent *_leaseAgent;
    id _acquisitionToken;
    TVSSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;
    TVSDocumentLoader *_trickPlayImageConfigDocumentLoader;
    NSObject<TVSMediaItem> *_scrubMediaItem;
    TVSPlayer *_scrubPlayer;
    unsigned long long _loadingContext;
    NSError *_skdError;
    TVSBookmark *_bookmark;
    NSOperationQueue *_rottenTomatoesOperationQueue;
    NSNumber *_cachedParentalRestrictionsEnabled;
}

+ (void)setDefaultDataType:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSNumber *cachedParentalRestrictionsEnabled; // @synthesize cachedParentalRestrictionsEnabled=_cachedParentalRestrictionsEnabled;
@property(retain, nonatomic) NSOperationQueue *rottenTomatoesOperationQueue; // @synthesize rottenTomatoesOperationQueue=_rottenTomatoesOperationQueue;
@property(nonatomic) _Bool allowedToUsePreloadedHLSURL; // @synthesize allowedToUsePreloadedHLSURL=_allowedToUsePreloadedHLSURL;
@property(retain, nonatomic) TVSBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NSError *skdError; // @synthesize skdError=_skdError;
@property(nonatomic) _Bool addedSettingsObservers; // @synthesize addedSettingsObservers=_addedSettingsObservers;
@property(nonatomic) _Bool needsRentalCheckin; // @synthesize needsRentalCheckin=_needsRentalCheckin;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) TVSPlayer *scrubPlayer; // @synthesize scrubPlayer=_scrubPlayer;
@property(retain, nonatomic) NSObject<TVSMediaItem> *scrubMediaItem; // @synthesize scrubMediaItem=_scrubMediaItem;
@property(retain, nonatomic) TVSDocumentLoader *trickPlayImageConfigDocumentLoader; // @synthesize trickPlayImageConfigDocumentLoader=_trickPlayImageConfigDocumentLoader;
@property(retain, nonatomic) TVSSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator; // @synthesize secureKeyDeliveryCoordinator=_secureKeyDeliveryCoordinator;
@property(nonatomic) _Bool ignoreLeaseAgentStateChanges; // @synthesize ignoreLeaseAgentStateChanges=_ignoreLeaseAgentStateChanges;
@property(retain, nonatomic) id acquisitionToken; // @synthesize acquisitionToken=_acquisitionToken;
@property(retain, nonatomic) TVSLeaseAgent *leaseAgent; // @synthesize leaseAgent=_leaseAgent;
@property(retain, nonatomic) TVSDataItem *storeDataItem; // @synthesize storeDataItem=_storeDataItem;
@property(copy, nonatomic) NSNumber *bookmarkOverrideTime; // @synthesize bookmarkOverrideTime=_bookmarkOverrideTime;
@property(readonly, copy, nonatomic) TVSDataType *dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSNumber *contentRatingRank; // @synthesize contentRatingRank=_contentRatingRank;
@property(copy, nonatomic) NSURL *hlsPlaylistURL; // @synthesize hlsPlaylistURL=_hlsPlaylistURL;
@property(copy, nonatomic) NSURL *launchPlaybackURL; // @synthesize launchPlaybackURL=_launchPlaybackURL;
@property(nonatomic) _Bool bookmarksDisabled; // @synthesize bookmarksDisabled=_bookmarksDisabled;
@property(copy, nonatomic) NSString *rentalID; // @synthesize rentalID=_rentalID;
@property(copy, nonatomic) NSString *actionParams; // @synthesize actionParams=_actionParams;
- (void).cxx_destruct;
- (void)_stopRentalPlaybackReceived:(id)arg1;
- (void)_updateHLSAllowedSetting;
- (_Bool)_parentalRestrictionsEnabled;
- (id)_maxHLSVideoResolution;
- (id)_bookmarkNetTime;
- (id)_adamIDString;
- (id)_serviceIdentifier;
- (_Bool)_supportsPlayCountsPrivate;
- (_Bool)_stopsBackgroundCaching;
- (_Bool)_shouldStopWhenAppIsBackgrounded;
- (_Bool)_optimizeForHighLatency;
- (_Bool)_matchCacheDataByURLPathComponentOnly;
- (_Bool)_preventSpeculativeLoading;
- (_Bool)_mightCacheInBackground;
- (unsigned long long)_cachingStrategy;
- (_Bool)_shouldIncludeStoreCookiesInContentRequests;
- (_Bool)_isStreaming;
- (_Bool)_shouldStopPlaybackWhenVideoResolutionSettingsChange;
- (_Bool)_usePreloadedHLSURL;
- (void)_scrubPlayerItemDidLoad:(id)arg1;
- (void)_loadTomatoRatingDataForAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_mediaItemPreparationCancelled:(unsigned long long)arg1;
- (void)_loadTrickPlayConfigURL;
- (_Bool)_okToSkipBookmarkSync;
- (_Bool)_waitForRentalCheckoutToComplete;
- (_Bool)_requiresRentalCheckout;
- (_Bool)_usesFairPlayStreamingLease;
- (_Bool)_usesFileBasedContentLease;
- (_Bool)_requiresAcquisition;
- (void)_clearDownloadResponse;
- (void)_augmentMediaItemWithDownloadResponse:(id)arg1;
- (void)_startLeaseIfNecessary:(CDUnknownBlockType)arg1;
- (void)_fetchRentalWithCompletion:(CDUnknownBlockType)arg1;
- (void)_acquireItemWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_treatUnratedContentAsRated;
- (_Bool)_supportsBookmarks;
- (id)_dataItemValueForProperty:(id)arg1;
- (void)leaseAgent:(id)arg1 renewalDidFailWithError:(id)arg2;
- (void)mergePropertiesFromDataItem:(id)arg1 toDataItem:(id)arg2;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)cleanUpMediaItem;
- (id)replacementErrorForPlaybackError:(id)arg1;
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;
@property(retain, nonatomic) TVSSecureKeyStandardLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
- (void)loadStreamingKeyForRequest:(id)arg1;
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (id)mediaItemURL;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_addResolutionSettingsObservers;
- (void)_commonInit;
- (id)initWithDataItem:(id)arg1;
- (id)initWithRentalID:(id)arg1;
- (id)initWithDataType:(id)arg1 actionParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
