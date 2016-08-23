//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SyncServices/ISyncSession.h>

#import <SyncServices/ISyncSessionCallback-Protocol.h>

@class ISDClientState, ISDRecord, ISDRecordStore, ISDStructuredDelta, ISyncClient, ISyncRecordSnapshot, NSArray, NSCountedSet, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRunLoop, NSSet, NSString;

@interface ISyncConcreteSession : ISyncSession <ISyncSessionCallback>
{
    ISyncClient *_client;
    NSString *_clientId;
    NSString *_planId;
    NSArray *_entityNames;
    NSArray *_entities;
    NSArray *_syncStates;
    int _anchorPhase;
    NSArray *_anchorRefreshSyncEntities;
    NSArray *_anchorSlowSyncEntities;
    NSDictionary *_pendingNextAnchors;
    NSDictionary *_truthPullers;
    ISDClientState *_clientState;
    ISDStructuredDelta *_structuredDelta;
    ISDRecordStore *_truth;
    ISyncRecordSnapshot *_snapshot;
    NSString *_cancelReason;
    NSDictionary *_cancelUserInfo;
    NSRunLoop *_waitingRunLoop;
    id _callbackTarget;
    SEL _callbackSelector;
    id _callbackSessionArgument;
    BOOL _shouldInvokeCallback;
    BOOL _pendingCancel;
    BOOL _running;
    BOOL _applyPushedChanges;
    BOOL _vacuumClientStateAfterSync;
    id _pushedChangesObserver;
    NSMutableSet *_modifiedRecordIdentifiers;
    NSMutableSet *_addedRecordIdentifiers;
    NSMutableSet *_deletedRecordIdentifiers;
    NSMutableSet *_deletedGlobalIds;
    NSCountedSet *_accumulatedPushedAdds;
    NSCountedSet *_accumulatedPushedModifies;
    NSCountedSet *_accumulatedPushedDeletes;
    NSCountedSet *_accumulatedPulledAdds;
    NSCountedSet *_accumulatedPulledModifies;
    NSCountedSet *_accumulatedPulledDeletes;
    int _sessionResponse;
    unsigned int _currentGeneration;
    int _phase;
    int _newPhase;
    NSMutableSet *_lostRecordIds;
    NSMutableSet *_lostRecordIdsForReplacement;
    NSMutableDictionary *_relationshipInfoMap;
    NSMutableDictionary *_knownRecordEntityNumbers;
    NSDate *_lastServerPingDate;
    NSMutableSet *_recordIdsToDeleteAfterPushing;
    NSMutableDictionary *_pushedChangesCache;
    NSMutableDictionary *_pushedRecordsCache;
    NSMutableSet *_pushedDeletesCache;
    NSMutableSet *_pushedAddedRecordIds;
    unsigned long long _pushedCacheSize;
    int _rebuildIndicesAfterPushing;
    BOOL _modifiesDuringPushing;
    NSSet *_refreshSyncingEntityNames;
    BOOL _changeStoreHasChanges;
    NSSet *_slowSyncingEntityNames;
    NSMutableDictionary *_unacceptedClientRecords;
    NSMutableDictionary *_acceptedClientRecords;
    NSMutableDictionary *_rejectedClientRecords;
    NSMutableDictionary *_acceptedUnknowns;
    NSMutableSet *_rejectedUnknowns;
    NSMutableSet *_unchangedRecordIds;
    unsigned long long _addCount;
    unsigned long long _modifyCount;
    unsigned long long _deleteCount;
    unsigned long long _pushCount;
    NSMutableDictionary *_dataReferencesToSave;
    NSMutableArray *_recordIdsWithDataReferencesToDelete;
    ISDRecord *_recordBeingPushed;
    BOOL _ignoreDecodedDataWrapper;
    NSMutableSet *_acceptedFormattedRecordsWithDataReferences;
    NSArray *_clientRecordCache;
    NSMutableDictionary *_recordIdsNotToPropagate;
    NSDate *enterSessionCreateTime;
    NSDate *enterPushingTime;
    NSDate *enterMinglingTime;
    NSDate *enterPullingTime;
}

+ (void)initialize;
- (oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy id)arg1 reason:(bycopy id)arg2;
- (oneway void)sessionWasCancelledForClientWithIdentifier:(bycopy id)arg1 reason:(bycopy id)arg2 userInfo:(bycopy id)arg3;
- (oneway void)clientWithIdCanStartPullingChanges:(bycopy id)arg1;
- (oneway void)clientWithId:(bycopy id)arg1 canBeginSyncingPlanWithId:(bycopy id)arg2 currentGeneration:(unsigned int)arg3 syncModes:(bycopy id)arg4 entities:(bycopy id)arg5 truthPullers:(bycopy id)arg6;
- (void)_setIgnoreDataWrapperDecode:(BOOL)arg1;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)isRunning;
- (void)_transitionStateMachine:(int)arg1;
- (void)setPushedChangesObserver:(id)arg1;
- (void)_setTarget:(id)arg1 selector:(SEL)arg2;
- (void)_notifyTheGuyWaitingToTransitionPhases;
- (void)_waitForTransitionFromPhase:(int)arg1 untilDate:(id)arg2;
- (int)_stateMachinePhase;
- (void)cancelSyncing;
- (void)cancelSyncing:(id)arg1;
- (void)cancelSyncing:(id)arg1 notifyServer:(BOOL)arg2 pendingCancel:(BOOL)arg3;
- (void)_setPendingCancel;
- (BOOL)isCancelled;
- (void)_enterCancelled;
- (void)finishSyncing;
- (void)_enterFinished;
- (void)clientCommittedAcceptedChangesWithNextAnchors:(id)arg1;
- (void)clientCommittedAcceptedChanges;
- (void)_clientCommittedAcceptedChanges;
- (void)_commitAcceptedChangesAndStartAnotherTransaction:(BOOL)arg1;
- (void)_commitUnknownRejects:(id)arg1 acceptedRecordIds:(id)arg2;
- (void)_processRejectedClientRecord:(id)arg1 rejectedRecordIds:(id)arg2 acceptedRecordIds:(id)arg3;
- (void)_commitUnknownAccepts:(id)arg1 deletedRecordIds:(id)arg2 filteredRecordIds:(id)arg3;
- (void)_processAllAcceptedClientRecords:(id)arg1 deletedRecordIds:(id)arg2 filteredRecordIds:(id)arg3;
- (void)_processAcceptedClientRecord:(id)arg1 acceptedRecordIds:(id)arg2 deletedRecordIds:(id)arg3 filteredRecordIds:(id)arg4;
- (void)_finishTransactionAndStartAnother:(BOOL)arg1;
- (void)_snapshot:(id)arg1 willReturnRecordToClient:(id)arg2;
- (void)clientRefusedChangesForRecordWithIdentifier:(id)arg1;
- (void)clientAcceptedChangesForRecordWithIdentifier:(id)arg1 formattedRecord:(id)arg2 newRecordIdentifier:(id)arg3 keepAwayFromServer:(BOOL)arg4;
- (void)_setKeepAwayFromServerForRecordWithId:(id)arg1 ofType:(id)arg2;
- (void)clientAcceptedChangesForRecordWithIdentifier:(id)arg1 formattedRecord:(id)arg2 newRecordIdentifier:(id)arg3;
- (id)_changeForChangeEnumerator:(id)arg1 betweenTruthRecord:(id)arg2 clientRecord:(id)arg3;
- (void)_updateClientRecord:(id)arg1 withChangesFromTruth:(id)arg2 formattedRecordDictionary:(id)arg3 saveUnformattedValues:(BOOL)arg4;
- (BOOL)_hasAlreadyReturnedOrAcceptedChangeForRecordWithIdentifier:(id)arg1;
- (id)changeEnumeratorForEntityNames:(id)arg1;
- (void)_leavePulling;
- (void)_vacuumClientState;
- (void)_logPullSummary;
- (void)_enterPulling;
- (void)_leaveReadyToPull;
- (void)_enterReadyToPull;
- (void)prepareToPullChangesInBackgroundForEntityNames:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)prepareToPullChangesForEntityNames:(id)arg1 beforeDate:(id)arg2;
- (void)_prepareToPullChangesForEntityNames:(id)arg1 inBackground:(BOOL)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)_leaveMingling;
- (void)_enterMingling;
- (void)clientFinishedPushingChangesWithNextAnchors:(id)arg1;
- (void)deleteRecordWithIdentifier:(id)arg1;
- (void)pushChangesFromRecord:(id)arg1 withIdentifier:(id)arg2 withDefaultedPropertyValues:(id)arg3;
- (void)pushChangesFromRecord:(id)arg1 withIdentifier:(id)arg2;
- (void)pushChange:(id)arg1;
- (void)_resetClientAfterException:(id)arg1;
- (void)setPushCacheSize:(unsigned long long)arg1;
- (void)_leavePushing;
- (void)_logUnresolvedReferencesInconsistency;
- (void)_completePushingPhase;
- (void)_logPushSummary;
- (void)_deleteUnreferencedRecords;
- (void)_rollbackPushingPhase;
- (void)setRelationshipPropChanges:(id)arg1 forEntity:(id)arg2 relationshipName:(id)arg3 forRecordId:(id)arg4;
- (id)getInfoForRelationship:(id)arg1 ofEntity:(id)arg2;
- (void)setEntityName:(id)arg1 forRecordId:(id)arg2;
- (void)_validateRelationshipTargets;
- (void)_resolveRecordIdTypes:(id)arg1;
- (void)_validatePushedRecord:(id)arg1 againstEntity:(id)arg2;
- (void)_validatePushedChange:(id)arg1 againstEntity:(id)arg2;
- (void)_notePushingOfKnownPropertyNotRegisteredToSyncByClient:(id)arg1 forPropertyName:(id)arg2 forEntityName:(id)arg3;
- (void)notePushingOfUnknownEntityNamed:(id)arg1 forRecordWithIdentifier:(id)arg2;
- (void)notePushingOfUnknownPropertyNamed:(id)arg1 forEntityNamed:(id)arg2 inChange:(id)arg3;
- (void)notifyUserOfUnresolvedReferences:(id)arg1 onlyUnknownTypeReferences:(BOOL)arg2;
- (id)unresolvedReferencesAreForUnknownTypes:(char *)arg1;
- (void)_validateSubType:(id)arg1 forProperty:(id)arg2 onEntityName:(id)arg3;
- (void)_pushChangesFromRecord:(id)arg1 withGlobalId:(id)arg2;
- (void)_pushChange:(id)arg1;
- (void)_pushDeleteForRecordWithGlobalId:(id)arg1;
- (void)_processPushedStuffIfNowIsAGoodTime;
- (void)_processPushedStuff;
- (void)_processRemainingRecordsAsAdds;
- (void)_processRemainingChangesAsAdds;
- (void)_processModifiedRecords;
- (id)_newDictionaryWithRecordsPushedByClient;
- (void)_processDeletedRecords:(id)arg1;
- (void)_appendChangeToChangeStore:(id)arg1;
- (void)_updateDataReferencesForRecordsWithIdentifiers:(id)arg1 resetOnError:(BOOL)arg2;
- (void)_updateDataReferencesForRecordsWithIdentifiers:(id)arg1;
- (void)isd_didDecodeDataWrapper:(id)arg1 forRecordWithIdentifier:(id)arg2 withPropertyName:(id)arg3;
- (id)isd_willEncodeDataWrapper:(id)arg1 forRecordWithIdentifier:(id)arg2 withPropertyName:(id)arg3;
- (void)_raiseAndResetEntities:(id)arg1 reason:(id)arg2;
- (BOOL)_recordWithDataReferenceWasFormatted:(id)arg1;
- (void)_noteRecordWithDataReferenceWasFormatted:(id)arg1;
- (void)_noteDataWrapper:(id)arg1 forRecordWithIdentifier:(id)arg2 withPropertyName:(id)arg3;
- (void)_noteDataWrapper:(id)arg1 forRecordWithIdentifier:(id)arg2 withPropertyName:(id)arg3 onlyForUpdate:(BOOL)arg4;
- (void)_enterPushing;
- (void)_prepareRecordStoreForSyncing;
- (void)_prepareRecordStoreForTruthPullingEntityNames:(id)arg1;
- (void)_prepareRecordStoreForTruthPushingEntityNames:(id)arg1;
- (void)_prepareRecordStoreForRefreshSyncingEntityNames:(id)arg1;
- (void)_prepareRecordStoreForSlowSyncingEntityNames:(id)arg1;
- (BOOL)_supportedEntityNamesIsEqualToEntityNames:(id)arg1 forClient:(id)arg2;
- (BOOL)_clientIsKnownToSyncAllSupportedEntities:(id)arg1;
- (BOOL)shouldReplaceAllRecordsOnClientForEntityName:(id)arg1;
- (BOOL)shouldPullChangesForEntityName:(id)arg1;
- (BOOL)shouldPushAllRecordsForEntityName:(id)arg1;
- (BOOL)shouldPushChangesForEntityName:(id)arg1;
- (void)clientWantsToPushAllRecordsForEntityNames:(id)arg1;
- (void)clientDidResetEntityNames:(id)arg1;
- (void)_clientDidResetEntityNames:(id)arg1;
- (void)_validateCanPullChangesForEntityNames:(id)arg1;
- (void)_negotiateSyncMode:(int)arg1 forEntityNames:(id)arg2;
- (id)_enterPullingDirectly;
- (void)_leaveNegotiating;
- (void)_enterNegotiating;
- (void)_leavePending;
- (void)_applyAnchorSyncModes;
- (void)_forceCompleteRefreshSyncs;
- (void)_filterRecords;
- (id)_applicableFilters;
- (void)_processLostRecords;
- (void)clientLostRecordWithIdentifier:(id)arg1 shouldReplaceOnNextSync:(BOOL)arg2;
- (id)snapshotOfRecordsInTruth;
- (void)setClientInfo:(id)arg1 forRecordWithIdentifier:(id)arg2;
- (id)clientInfoForRecordWithIdentifier:(id)arg1;
- (void)clientChangedRecordIdentifiers:(id)arg1;
- (BOOL)_convertUnresolvedReferencesToGlobalIds;
- (void)_updateRecordIdMapperWithNewLocalIdentifiers:(id)arg1;
- (void)_updateRecordStoresWithNewLocalIdentifiers:(id)arg1;
- (void)_updateRecordStoresWithNewGlobalIdentifiers:(id)arg1;
- (void)_updateGlobalRecordIdentifiers:(id)arg1 inRecords:(id)arg2;
- (void)_updateGlobalRecordIdentifiers:(id)arg1 inChanges:(id)arg2;
- (id)_entityDescriptionForChange:(id)arg1;
- (void)_updateGlobalRecordIdentifiers:(id)arg1 inKnownTargetsMap:(id)arg2;
- (void)_updateGlobalRecordIdentifiers:(id)arg1 inRecordDictionaries:(id)arg2;
- (void)_replaceRecordIdentifier:(id)arg1 withRecordIdentifier:(id)arg2 inSet:(id)arg3;
- (void)_doPeriodicPingToServer;
- (id)_entityDescriptionWithName:(id)arg1;
- (void)_releaseSnapshot;
- (void)_releaseClientState;
- (void)_createClientState;
- (id)_syncStateForEntityName:(id)arg1;
- (id)_recordIdMapper;
- (void)ping;
- (id)_newEntitiesMapping;
- (id)entityNames;
- (void)setSyncStates:(id)arg1;
- (void)setPendingNextAnchors:(id)arg1;
- (void)setAnchorPhase:(int)arg1;
- (int)anchorPhase;
- (id)_findRecordInCacheWithId:(id)arg1;
- (void)_setClientRecordCache:(id)arg1;
- (void)_setSyncPlanIdentifier:(id)arg1;
- (void)_setAnchorRefreshSyncEntities:(id)arg1;
- (void)_setAnchorSlowSyncEntities:(id)arg1;
- (id)_truthPullingClients;
- (id)_syncPlanIdentifier;
- (long long)_syncPhase;
- (id)_client;
- (void)_cleanupClientAfterFailedAttemptToBeginSession;
- (void)finalize;
- (void)dealloc;
- (void)_doFinalCleanupIfNeeded:(BOOL)arg1;
- (id)knownRecordTypes;
- (void)setApplyPushedChanges:(BOOL)arg1;
- (id)initWithClient:(id)arg1 entityNames:(id)arg2;
- (void)attentionClassDumpUser:(id)arg1 reverseEngineeringThisClassAndCallingPrivateMethodsIsFunButMayLeadToCompleteAndIrrevocableDataLoss:(id)arg2 atTheVeryLeastItWillCauseUnexpectedBehaviourForOtherApplications:(id)arg3 youHaveBeenWarnedAgainstDoingSo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

