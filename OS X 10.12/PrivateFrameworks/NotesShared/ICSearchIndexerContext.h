//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSearchIndexableMutableIdentifiers, ICThreadBlockDispatcher, NSDictionary, NSMutableSet, NSOperationQueue;
@protocol ICSearchIndexerAccountMigrationHandler, ICSearchIndexerContextDelegate;

@interface ICSearchIndexerContext : NSObject
{
    BOOL _coreSpotlightDisabled;
    BOOL _indexCommunicationSupportEnabled;
    BOOL _nonBlocking;
    BOOL _supportsCompletionHandling;
    BOOL _legacyObjectsOnly;
    BOOL _shouldCreateIndexerOnDemand;
    BOOL _canUpdateMigrationState;
    BOOL _indexingDisabled;
    BOOL _canUpdateIndexClientState;
    BOOL _shouldPurgeMemoryAfterIndexingEachObject;
    BOOL _enumerateAllObjectsFromMainContextOnly;
    BOOL _wasEverPaused;
    BOOL _alwaysRunInDispatchQueue;
    id <ICSearchIndexerContextDelegate> _delegate;
    id <ICSearchIndexerAccountMigrationHandler> _accountMigrationHandler;
    ICThreadBlockDispatcher *_indexerBlockDispatcher;
    NSOperationQueue *_chooseToMigrateOperationQueue;
    NSDictionary *_changeNotifyingManagedObjectContextMap;
    long long _pauseLevel;
    ICSearchIndexableMutableIdentifiers *_didChangeDeletedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_didChangeAddedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_didChangeUpdatedIdentifiers;
    ICSearchIndexableMutableIdentifiers *_immediateIdentifiers;
    NSMutableSet *_migrationStateUpdatedLegacyAccountObjectIDs;
}

+ (id)searchIndexableIdentifiersForLegacyManagedObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 changeNotifyingManagedObjectContextMap:(id)arg3;
+ (id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3 changeNotifyingManagedObjectContextMap:(id)arg4 enumerateWithBlock:(CDUnknownBlockType)arg5;
+ (id)changeNotifyingManagedObjectContextForKey:(id)arg1;
+ (id)keyForChangeNotifyingManagedObjectContext:(id)arg1;
@property(retain, nonatomic) NSMutableSet *migrationStateUpdatedLegacyAccountObjectIDs; // @synthesize migrationStateUpdatedLegacyAccountObjectIDs=_migrationStateUpdatedLegacyAccountObjectIDs;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *immediateIdentifiers; // @synthesize immediateIdentifiers=_immediateIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *didChangeUpdatedIdentifiers; // @synthesize didChangeUpdatedIdentifiers=_didChangeUpdatedIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *didChangeAddedIdentifiers; // @synthesize didChangeAddedIdentifiers=_didChangeAddedIdentifiers;
@property(retain, nonatomic) ICSearchIndexableMutableIdentifiers *didChangeDeletedIdentifiers; // @synthesize didChangeDeletedIdentifiers=_didChangeDeletedIdentifiers;
@property(readonly, nonatomic) BOOL alwaysRunInDispatchQueue; // @synthesize alwaysRunInDispatchQueue=_alwaysRunInDispatchQueue;
@property(nonatomic) BOOL wasEverPaused; // @synthesize wasEverPaused=_wasEverPaused;
@property(nonatomic) long long pauseLevel; // @synthesize pauseLevel=_pauseLevel;
@property(copy) NSDictionary *changeNotifyingManagedObjectContextMap; // @synthesize changeNotifyingManagedObjectContextMap=_changeNotifyingManagedObjectContextMap;
@property(retain, nonatomic) NSOperationQueue *chooseToMigrateOperationQueue; // @synthesize chooseToMigrateOperationQueue=_chooseToMigrateOperationQueue;
@property(retain, nonatomic) ICThreadBlockDispatcher *indexerBlockDispatcher; // @synthesize indexerBlockDispatcher=_indexerBlockDispatcher;
@property(nonatomic) BOOL enumerateAllObjectsFromMainContextOnly; // @synthesize enumerateAllObjectsFromMainContextOnly=_enumerateAllObjectsFromMainContextOnly;
@property(nonatomic) BOOL shouldPurgeMemoryAfterIndexingEachObject; // @synthesize shouldPurgeMemoryAfterIndexingEachObject=_shouldPurgeMemoryAfterIndexingEachObject;
@property(nonatomic) BOOL canUpdateIndexClientState; // @synthesize canUpdateIndexClientState=_canUpdateIndexClientState;
@property(nonatomic) BOOL indexingDisabled; // @synthesize indexingDisabled=_indexingDisabled;
@property(nonatomic) BOOL canUpdateMigrationState; // @synthesize canUpdateMigrationState=_canUpdateMigrationState;
@property(nonatomic) BOOL shouldCreateIndexerOnDemand; // @synthesize shouldCreateIndexerOnDemand=_shouldCreateIndexerOnDemand;
@property(nonatomic) BOOL legacyObjectsOnly; // @synthesize legacyObjectsOnly=_legacyObjectsOnly;
@property(nonatomic) BOOL supportsCompletionHandling; // @synthesize supportsCompletionHandling=_supportsCompletionHandling;
@property(nonatomic) BOOL nonBlocking; // @synthesize nonBlocking=_nonBlocking;
@property(nonatomic) BOOL indexCommunicationSupportEnabled; // @synthesize indexCommunicationSupportEnabled=_indexCommunicationSupportEnabled;
@property(nonatomic) BOOL coreSpotlightDisabled; // @synthesize coreSpotlightDisabled=_coreSpotlightDisabled;
@property(nonatomic) __weak id <ICSearchIndexerAccountMigrationHandler> accountMigrationHandler; // @synthesize accountMigrationHandler=_accountMigrationHandler;
@property(nonatomic) __weak id <ICSearchIndexerContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetChangedIdentifiers;
- (void)notifyDelegateAboutIdentifiersUpdates;
- (void)notifyDelegateAboutIdentifiersUpdatesIfPossibleWithUpdateCount:(unsigned long long)arg1;
- (void)notifyDelegateAboutUpdatedIdentifiersWithResults:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (void)performUpdateWithResults:(id)arg1;
- (void)updateWithDeletedLegacyObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2;
- (void)updateWithDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3 changeNotifyingManagedObjectContext:(id)arg4;
- (void)objectsDidChange:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)resetPauseLevel;
- (void)unpauseIndexing;
- (void)pauseIndexing;
- (void)localAccountMigrationStateDidChange:(id)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)updateResultsForDidChooseToMigrateAccount:(BOOL)arg1 legacyAccountType:(long long)arg2;
- (id)searchIndexableObjectInMainContextForObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3;
- (BOOL)evaluateObjectForSearchIndexableIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (BOOL)evaluateObjectWithObjectIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 mainContextOnly:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)enumerateAllObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeSearchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1;
- (void)addSearchIndexableNoteContext:(id)arg1 withChangeNotifyingManagedObjectContext:(id)arg2;
- (id)searchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1;
- (id)searchIndexableNoteContextOfClass:(Class)arg1 forSearchIndexableObject:(id)arg2;
- (id)searchIndexableNoteContextsFromMap:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2 changeNotifyingManagedObjectContext:(id)arg3;
- (void)invalidateAllNoteContexts;
- (void)setAlwaysRunInDispatchQueue;
- (void)setAlwaysRunInDispatchQueueIfNeeded;
- (void)dealloc;
- (id)init;

@end
