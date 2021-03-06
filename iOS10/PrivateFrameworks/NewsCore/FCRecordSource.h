//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/FCFetchCoordinatorDelegate-Protocol.h>

@class FCCKDatabase, FCCacheCoordinator, FCFetchCoordinator, FCKeyValueStore, FCThreadSafeMutableDictionary, NSArray, NSString;

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing>
{
    FCCKDatabase *_contentDatabase;
    FCKeyValueStore *_localStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCFetchCoordinator *_fetchCoordinator;
    FCThreadSafeMutableDictionary *_fetchErrorsByKey;
}

+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)identifierFromCKRecord:(id)arg1;
+ (id)canaryRecordName;
+ (_Bool)supportsDeletions;
+ (id)defaultCachePolicy;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (unsigned long long)storeVersion;
+ (id)storeFilename;
+ (id)recordType;
@property(readonly, nonatomic) FCThreadSafeMutableDictionary *fetchErrorsByKey; // @synthesize fetchErrorsByKey=_fetchErrorsByKey;
@property(readonly, nonatomic) FCFetchCoordinator *fetchCoordinator; // @synthesize fetchCoordinator=_fetchCoordinator;
@property(readonly, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) FCCKDatabase *contentDatabase; // @synthesize contentDatabase=_contentDatabase;
- (void).cxx_destruct;
- (id)_fetchErrorForKey:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3;
- (id)_identifierFromCKRecordID:(id)arg1;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 context:(id)arg3;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (_Bool)isRecordStale:(id)arg1 withCachePolicy:(id)arg2;
- (void)updateFetchDateForRecordIDs:(id)arg1;
- (id)saveRecords:(id)arg1;
- (id)cachedRecordsWithIDs:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1;
- (id)_desiredKeysForContentStoreFrontID:(id)arg1;
- (id)_localizedKeysByOriginalWithCacheDictionary:(id)arg1;
- (id)_desiredKeysWithCacheDictionary:(id)arg1;
- (id)localizableKeys;
@property(readonly, nonatomic) NSArray *genericKeys;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
@property(readonly, nonatomic) NSArray *desiredKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

