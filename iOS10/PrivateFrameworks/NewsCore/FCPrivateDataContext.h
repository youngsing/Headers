//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseDelegate-Protocol.h>
#import <NewsCore/FCPrivateChannelMembershipObserving-Protocol.h>
#import <NewsCore/FCPrivateDataContext-Protocol.h>

@class FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;
@protocol FCContentContext, FCPrivateDataContextInternal, FCPushNotificationHandling;

@interface FCPrivateDataContext : NSObject <FCPrivateChannelMembershipObserving, FCCKDatabaseDelegate, FCPrivateDataContext>
{
    _Bool _privateDataSyncingEnabled;
    FCPersonalizationData *_personalizationData;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    FCUserInfo *_userInfo;
    NSString *_privateDataDirectory;
    FCTagSettings *_tagSettings;
    id <FCPushNotificationHandling> _privatePushNotificationHandler;
    id <FCPrivateDataContextInternal> _internalPrivateDataContext;
    id <FCContentContext> _contentContext;
}

@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext; // @synthesize internalPrivateDataContext=_internalPrivateDataContext;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled; // @synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled;
@property(readonly, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (void)_updateRequestAnonymity;
- (void)privateChannelMembershipControllerDidChange:(id)arg1;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory; // @synthesize privateDataDirectory=_privateDataDirectory;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler; // @synthesize privatePushNotificationHandler=_privatePushNotificationHandler;
@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
- (void)databaseHasBeenRateLimited:(id)arg1 retryAfter:(double)arg2;
- (void)clearCloudKitCaches;
- (id)initWithContext:(id)arg1 privateDatabase:(id)arg2 privateContainer:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(_Bool)arg7 iCloudAccountChanged:(_Bool)arg8;
- (id)initWithContext:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 networkBehaviorMonitor:(id)arg4 privateDataSyncingEnabled:(_Bool)arg5 iCloudAccountChanged:(_Bool)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

