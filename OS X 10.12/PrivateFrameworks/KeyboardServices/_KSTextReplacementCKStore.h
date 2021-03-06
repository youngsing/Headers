//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class NSString, _KSCloudKitManager, _KSTextReplacementCoreDataStore;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementCKStore : NSObject <_KSTextReplacementStoreProtocol>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    BOOL _ckMigrationStatusOnCloud;
    BOOL _didRequestFirstPullForAccount;
    _KSTextReplacementCoreDataStore *_coreDataStore;
    _KSCloudKitManager *_cloudKitManager;
}

+ (BOOL)isMigrationCompleted;
@property(nonatomic) BOOL didRequestFirstPullForAccount; // @synthesize didRequestFirstPullForAccount=_didRequestFirstPullForAccount;
@property(nonatomic) BOOL ckMigrationStatusOnCloud; // @synthesize ckMigrationStatusOnCloud=_ckMigrationStatusOnCloud;
@property(retain, nonatomic) _KSCloudKitManager *cloudKitManager; // @synthesize cloudKitManager=_cloudKitManager;
@property(retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
- (void).cxx_destruct;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)queryDeletedEntries;
- (id)queryUpdatedLocalEntries;
- (void)recordSyncStatus;
- (void)pullRemoteDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pushLocalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAccountAvailable;
- (void)queryMigrationStatusOnCloudWithCallback:(CDUnknownBlockType)arg1;
- (void)pushMigrationStatusToCloud:(BOOL)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)removeAllEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)pushAllLocalData;
- (void)accountDidChange:(id)arg1;
- (void)importSampleShortcutsIfNecessary;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)userIdentity;
- (void)dealloc;
- (id)initWithDirectoryPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

