//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/CSSearchableIndexInterface-Protocol.h>
#import <SpotlightDaemon/CSSearchableIndexServiceInterface-Protocol.h>

@class CSIndexingQueue, MDIndexAgent, NSSet, NSString;
@protocol CSSearchableIndexServiceInterface><NSXPCProxyCreating, MDIndexer;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface>
{
    CSIndexingQueue *_activityQueue;
    _Bool _isInternal;
    _Bool _quotaDisabled;
    unsigned int _clientUID;
    MDIndexAgent *_agent;
    NSObject<MDIndexer> *_indexer;
    NSString *_clientBundleID;
    NSString *_protectionClass;
    NSSet *_tccAllowances;
}

@property(nonatomic) _Bool quotaDisabled; // @synthesize quotaDisabled=_quotaDisabled;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) NSSet *tccAllowances; // @synthesize tccAllowances=_tccAllowances;
@property(copy, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(nonatomic) unsigned int clientUID; // @synthesize clientUID=_clientUID;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain, nonatomic) NSObject<MDIndexer> *indexer; // @synthesize indexer=_indexer;
@property(nonatomic) __weak MDIndexAgent *agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)checkInWithProtectionClass:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flushUserActivities;
- (void)_dispatchActivities:(id)arg1 flush:(_Bool)arg2;
- (void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_dispatchToReceiversWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 deletes:(id)arg7;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 itemsHTML:(id)arg6 clientState:(id)arg7 clientStateName:(id)arg8 deletes:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
@property(readonly, nonatomic) NSObject<CSSearchableIndexServiceInterface><NSXPCProxyCreating> *clientLink;
- (_Bool)_jobForIndex:(long long)arg1;
- (_Bool)_bundleIsInTCCWhiteList:(id)arg1;
- (id)_checkBundleIDHelper:(id)arg1;
- (id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4 allowedOnH4:(_Bool)arg5;
@property(readonly, nonatomic) CSIndexingQueue *activityQueue;
- (void)_makeActivityQueueIfNecessary;
@property(readonly, nonatomic) NSString *processDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

