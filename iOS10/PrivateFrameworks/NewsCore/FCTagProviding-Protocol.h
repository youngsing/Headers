//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCAssetHandle, NSArray, NSDate, NSString, NSURL;
@protocol FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagProviding, FCTopicProviding;

@protocol FCTagProviding <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool isBlockedExplicitContent;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property(readonly, nonatomic) _Bool publisherPaidWebAccessOptIn;
@property(readonly, nonatomic) _Bool publisherPaidLeakyPaywallOptOut;
@property(readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property(readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property(readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property(readonly, nonatomic) double forYouCutoffTime;
@property(readonly, nonatomic) unsigned long long forYouMaximumArticleCount;
@property(readonly, nonatomic) _Bool isNotificationEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) long long score;
@property(readonly, nonatomic) NSArray *pinnedArticleIDs;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, copy, nonatomic) NSString *coverArticleListID;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property(readonly, nonatomic) _Bool isSubscribable;
@property(readonly, nonatomic) NSArray *relatedChannelIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedTopicIDsForOnboarding;
@property(readonly, nonatomic) NSArray *relatedChannelIDs;
@property(readonly, nonatomic) NSArray *relatedTopicIDs;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, copy, nonatomic) NSString *replacementID;
@property(readonly, nonatomic) _Bool isExplicitContent;
@property(readonly, nonatomic) _Bool isDeprecated;
@property(readonly, nonatomic) _Bool isPublic;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, copy, nonatomic) NSString *versionKey;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSDate *loadDate;
@property(readonly, nonatomic) id <FCTopicProviding> asTopic;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly, nonatomic) _Bool hideAccessoryText;
@property(readonly, nonatomic) unsigned long long tagType;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (NSURL *)authorizationURL;
- (NSString *)feedIDForBin:(long long)arg1;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (_Bool)isAuthenticationSetup;
- (_Bool)isPurchaseSetup;
- (_Bool)isEqualToTag:(id <FCTagProviding>)arg1;
- (_Bool)isNoLongerAvailable;
@end

