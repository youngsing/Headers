//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCPrivateZoneController.h>

@class FCMutexLock, NSMutableDictionary, NSSet;

@interface FCReadingHistory : FCPrivateZoneController
{
    NSMutableDictionary *_itemsByIdentifier;
    NSMutableDictionary *_itemsByArticleID;
    FCMutexLock *_itemsLock;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)localStoreMigrator;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMutexLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) NSMutableDictionary *itemsByArticleID; // @synthesize itemsByArticleID=_itemsByArticleID;
@property(retain, nonatomic) NSMutableDictionary *itemsByIdentifier; // @synthesize itemsByIdentifier=_itemsByIdentifier;
- (void).cxx_destruct;
- (void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2;
- (void)_addHistoryItems:(id)arg1 addToStore:(_Bool)arg2;
- (void)_modifyHistoryForArticleID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_readingHistoryItemForArticleID:(id)arg1;
- (void)clearHistory;
- (void)removeArticleFromHistory:(id)arg1;
- (void)addHeadlineToHistory:(id)arg1;
- (void)markArticle:(id)arg1 asArticleConsumed:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenConsumed:(id)arg1;
- (_Bool)hasArticleBeenConsumed:(id)arg1;
- (void)markArticle:(id)arg1 asOffensive:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenMarkedAsOffensive:(id)arg1;
- (_Bool)hasArticleBeenMarkedAsOffensive:(id)arg1;
- (_Bool)markArticle:(id)arg1 withLikingStatus:(unsigned long long)arg2;
- (unsigned long long)likingStatusForArticleID:(id)arg1;
- (_Bool)markArticle:(id)arg1 asArticleSeen:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenSeen:(id)arg1;
- (_Bool)hasArticleBeenSeen:(id)arg1;
- (_Bool)hasArticleBeenVisited:(id)arg1;
- (void)updateArticle:(id)arg1 withVisitedDate:(id)arg2;
- (void)markArticle:(id)arg1 asArticleRead:(_Bool)arg2;
- (_Bool)toggleArticleHasBeenRead:(id)arg1;
- (_Bool)hasArticleBeenRead:(id)arg1;
- (id)lastVisitedDateForArticleID:(id)arg1;
@property(readonly, nonatomic) NSSet *allConsumedArticleIDs;
@property(readonly, nonatomic) NSSet *allSeenArticleIDs;
@property(readonly, nonatomic) NSSet *allReadArticleIDs;
- (id)_sortedReadingHistoryItemsWithMaxCount:(unsigned long long)arg1;
- (id)allSortedArticleIDsInReadingHistory;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (id)syncReadingHistoryItemRecords:(id)arg1 didRemoveLastVisitedAt:(out _Bool *)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;

@end
