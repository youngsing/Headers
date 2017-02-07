//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

@class FCCoverArt, FCHeadlineThumbnail, FCInterestToken, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSObject, NSString, NSURL, NTPBArticleRecord;
@protocol FCChannelProviding;

@interface FCArticleHeadline : FCHeadline
{
    _Bool _hasThumbnail;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _featureCandidate;
    _Bool _needsRapidUpdates;
    _Bool _paid;
    _Bool _canBePurchased;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_primaryAudience;
    NSString *_subtitle;
    NSDate *_publishDate;
    unsigned long long _publisherArticleVersion;
    unsigned long long _backendArticleVersion;
    NSObject<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topicIDs;
    NSArray *_topicScores;
    NSArray *_topicFlags;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NTPBArticleRecord *_articleRecord;
    FCInterestToken *_articleInterestToken;
    long long _behaviorFlags;
    struct CGSize _largestThumbnailSize;
    struct CGRect _thumbnailFocalFrame;
}

+ (_Bool)_simulateTopStoriesBadges;
+ (_Bool)_forceArticlesToBeShownAsSponsored;
@property(nonatomic) long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
@property(retain, nonatomic) FCInterestToken *articleInterestToken; // @synthesize articleInterestToken=_articleInterestToken;
@property(retain, nonatomic) NTPBArticleRecord *articleRecord; // @synthesize articleRecord=_articleRecord;
- (_Bool)canBePurchased;
- (id)coverArt;
- (_Bool)isPaid;
- (long long)minimumNewsVersion;
- (_Bool)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(unsigned long long)arg1;
- (unsigned long long)storyType;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (_Bool)isFeatureCandidate;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (_Bool)isDraft;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (_Bool)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)topicFlags;
- (id)topicScores;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetLQ;
- (id)thumbnailUltraHQ;
- (id)thumbnailHQ;
- (id)thumbnailMedium;
- (id)thumbnail;
- (id)thumbnailLQ;
- (struct CGSize)largestThumbnailSize;
- (_Bool)hasThumbnail;
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;
- (struct CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setSourceChannel:(id)arg1;
- (id)sourceChannel;
- (unsigned long long)backendArticleVersion;
- (unsigned long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)subtitle;
- (id)primaryAudience;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)versionIdentifier;
- (void).cxx_destruct;
- (id)endOfArticleTopicIDs;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 storyStyleConfigs:(id)arg4 storyTypeTimeout:(long long)arg5 rapidUpdatesTimeout:(long long)arg6 assetManager:(id)arg7;
- (id)init;

@end
