//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSBaseMediaItem.h>

@class SSVPlaybackLeaseAsset, SSVPlaybackLeaseResponse, TVSDataItem, TVSMutableBookmark;

@interface TVSFuseMediaItem : TVSBaseMediaItem
{
    _Bool _isMusicVideo;
    _Bool _shouldBookmarkMusicVideo;
    long long _adamID;
    TVSDataItem *_dataItem;
    SSVPlaybackLeaseResponse *_leaseResponse;
    unsigned long long _loadingContext;
    SSVPlaybackLeaseAsset *_currentLeaseAsset;
    TVSMutableBookmark *_bookmark;
}

+ (id)_extractLeaseAssetFromLeaseResponse:(id)arg1;
+ (_Bool)isPendingStartLeaseSession;
+ (void)setPendingStartLeaseSession:(_Bool)arg1;
@property(retain, nonatomic) TVSMutableBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) SSVPlaybackLeaseAsset *currentLeaseAsset; // @synthesize currentLeaseAsset=_currentLeaseAsset;
@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(retain, nonatomic) SSVPlaybackLeaseResponse *leaseResponse; // @synthesize leaseResponse=_leaseResponse;
@property(nonatomic) _Bool shouldBookmarkMusicVideo; // @synthesize shouldBookmarkMusicVideo=_shouldBookmarkMusicVideo;
@property(nonatomic) _Bool isMusicVideo; // @synthesize isMusicVideo=_isMusicVideo;
@property(retain, nonatomic) TVSDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;
- (id)_bookmarkNetTime;
- (id)_propertyNameMappings;
- (void)cleanUpMediaItem;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (id)initWithAdamID:(long long)arg1 isMusicVideo:(_Bool)arg2;
- (id)initWithAdamID:(long long)arg1;

@end

