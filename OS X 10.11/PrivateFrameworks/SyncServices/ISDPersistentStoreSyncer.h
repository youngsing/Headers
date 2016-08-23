//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISyncClient, ISyncSession, NSArray, NSDictionary, NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator, NSSet;

@interface ISDPersistentStoreSyncer : NSObject
{
    id _syncHandler;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_syncContext;
    NSDictionary *_fastSyncHelpers;
    NSArray *_contextsToMonitor;
    NSArray *_contextsToReload;
    NSSet *_synchronizedEntities;
    NSMutableDictionary *_qualifiedEntityNames;
    BOOL _isSyncing;
    ISyncClient *_syncClient;
    ISyncSession *_session;
    NSError *_error;
    NSMutableSet *_objectsToFormat;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_relations;
    NSArray *_syncEntityNames;
}

- (void)_notifyDidCancelSyncSession;
- (void)_notifyDidFinishSyncSession;
- (void)_notifyDidCommitChangesInSyncSession:(id)arg1;
- (BOOL)_notifyDidPullChangesInSyncSession;
- (BOOL)_notifyWillPullChangesInSyncSession;
- (BOOL)_notifyDidPushChangesInSyncSession;
- (BOOL)_notifyWillPushChangesInSyncSession;
- (BOOL)_notifyShouldStartSyncSession;
- (id)_syncEntityNamesForPulling;
- (id)_syncEntityNamesForPushing;
- (id)_syncEntityNames;
- (id)_managedObjectWithIdentifier:(id)arg1 inContext:(id)arg2;
- (id)_managedObjectWithIdentifier:(id)arg1;
- (id)_syncEntityNameFromCDEntity:(id)arg1;
- (void)_addDeepUserInfoOfEntityDescription:(id)arg1 inMutableDictionary:(id)arg2;
- (id)_cdEntityNameFromSyncEntityName:(id)arg1;
- (void)syncContextDidSave:(id)arg1;
- (void)_updateRelations;
- (BOOL)_updateObject:(id)arg1 withChange:(id)arg2;
- (BOOL)_updateObjectWithChange:(id)arg1;
- (BOOL)_insertManagedObject:(id *)arg1 fromChange:(id)arg2 entityName:(id)arg3;
- (BOOL)_deleteManagedObjectForChange:(id)arg1;
- (id)_recordFromObject:(id)arg1 ofSyncEntityName:(id)arg2;
- (BOOL)_deleteAllObjectsForSyncEntityName:(id)arg1;
- (BOOL)_saveSyncContext;
- (void)_revertObjectFromErrorDictionary:(id)arg1;
- (void)_cancelSyncing;
- (void)_finishSyncing;
- (void)_cleanUpAfterSyncing;
- (BOOL)_pullChanges;
- (BOOL)_prepareToPullChanges;
- (BOOL)_changeIsValidInEditingContexts:(id)arg1;
- (BOOL)_pushChangesForSyncEntityName:(id)arg1;
- (BOOL)_pushAllRecordForSyncEntityName:(id)arg1;
- (BOOL)_pushChanges;
- (BOOL)_negotiateSyncMode;
- (void)_beginSyncing;
- (BOOL)synchronize;
- (void)synchronizerThreadMain;
- (void)client:(id)arg1 canBeginSyncingWithSession:(id)arg2;
- (BOOL)synchronizeInBackground:(BOOL)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)synchronizedEntities;
- (void)setContextsToReload:(id)arg1;
- (void)setContextsToMonitor:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)syncClient;
- (void)setSyncClient:(id)arg1;
- (id)syncSession;
- (id)fastSyncHelpers;
- (void)setFastSyncHelpers:(id)arg1;
- (id)syncHandler;
- (void)setSyncHandler:(id)arg1;
- (void)dealloc;

@end

