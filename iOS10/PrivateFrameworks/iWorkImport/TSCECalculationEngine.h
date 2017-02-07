//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSDate, NSMutableArray, NSObject, NSString, NSTimeZone, TSCENamedReferenceManager, TSCERewriteTableIDInfo, TSCETableInfosByName, TSCETransaction, TSCEUUidReferenceMap, TSKAccessController, TSKChangeGroup, TSKChangeNotifier;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, TSKMultiTableRemapping;

__attribute__((visibility("hidden")))
@interface TSCECalculationEngine : TSPObject
{
    TSKAccessController *_accessController;
    TSKChangeNotifier *_changeNotifier;
    struct TSCEDependencyTracker *_dependencyTracker;
    TSCEUUidReferenceMap *_uuidReferenceMap;
    TSCERewriteTableIDInfo *_tableIDHistory;
    int _xlImportDateMode;
    NSString *_previousLocaleIdentifier;
    NSDate *_currentDate;
    NSTimeZone *_currentTimeZone;
    unsigned long long _documentRandSeed;
    int _recalculationThreadState;
    struct _opaque_pthread_mutex_t _recalculationThreadStateMutex;
    _Bool _shouldCancelRecalculation;
    int _calculationPauseCount;
    NSObject<OS_dispatch_group> *_recalcLoopGroup;
    _Bool _blockingUntilRecalcIsComplete;
    NSObject<OS_dispatch_group> *_recalcDispatchGroup;
    // Error parsing type: Ai, name: _recalcDispatchGroupSize
    NSObject<OS_dispatch_queue> *_recalcHighPriorityQueue;
    NSObject<OS_dispatch_queue> *_recalcLowPriorityQueue;
    NSObject<OS_dispatch_semaphore> *_modifiedOwnersSem;
    struct __CFSet *_modifiedOwnersInThisRecalcCycle;
    _Bool _shouldRefillRecalcQueue;
    struct __CFDictionary *_referenceResolvers;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving>>>> _referenceResolversByUid;
    unordered_set_c04cc813 _unregisterIOUs;
    struct __CFDictionary *_legacyGlobalIDStringToOwnerIDDictionary;
    TSCETableInfosByName *_tableInfosByName;
    unsigned long long _batchingGroupCellDirtyingLevel;
    _Bool _dirtyRandomVolatileFunctionsAtEndOfDirtyBatching;
    NSMutableArray *_calculationStateObservers;
    unsigned long long _suppressWillModifyCallsLevel;
    unsigned long long _numberOfFormulas;
    TSCENamedReferenceManager *_namedReferenceManager;
    TSKChangeGroup *_pendingChangesForAsyncNotification;
    NSObject<OS_dispatch_queue> *_writeMutualExclusionQueue;
    _Bool _dirtyAllFormulasInDocumentDidLoad;
    struct __CFUUID *_transposingTableID;
    id <TSKMultiTableRemapping> _currentTableIDRemapper;
    TSCETransaction *_transaction;
    unsigned long long _loadFromFileVersion;
    id <TSKMultiTableRemapping> _currentTableIdRemapper;
}

+ (void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int *)arg2 hi:(int *)arg3;
+ (unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2;
+ (unsigned long long)generateRandomSeed;
+ (_Bool)localVariablesEnabled;
@property(nonatomic) TSKChangeNotifier *changeNotifier; // @synthesize changeNotifier=_changeNotifier;
@property struct __CFUUID *transposingTableID; // @synthesize transposingTableID=_transposingTableID;
@property unsigned long long documentRandomSeed; // @synthesize documentRandomSeed=_documentRandSeed;
@property(retain) id <TSKMultiTableRemapping> currentTableIdRemapper; // @synthesize currentTableIdRemapper=_currentTableIdRemapper;
@property(readonly, retain) TSCERewriteTableIDInfo *tableIDHistory; // @synthesize tableIDHistory=_tableIDHistory;
@property(readonly, retain) TSCEUUidReferenceMap *uuidReferenceMap; // @synthesize uuidReferenceMap=_uuidReferenceMap;
@property(nonatomic) unsigned long long loadFromFileVersion; // @synthesize loadFromFileVersion=_loadFromFileVersion;
@property(retain) NSTimeZone *currentTimeZone; // @synthesize currentTimeZone=_currentTimeZone;
@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unordered_set_264d5b55)cellCoordinatesNeedingExcelImportForTable:(struct __CFUUID *)arg1;
- (unsigned int)delayedArchivingPriority;
- (id)packageLocator;
- (_Bool)shouldDelayArchiving;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)allWholeOwnerDependenciesAsString;
- (id)allSpanningDependenciesAsString;
- (id)allCellDependenciesAsString;
- (id)allFormulaOwnersAsString;
- (void)assertAllDirtyCellsAreOnLeafStack;
- (void)assertDirtyPrecedentsCountConsistency;
- (id)documentLocale;
- (id)documentRoot;
@property(readonly, nonatomic) TSCENamedReferenceManager *namedReferenceManager;
- (_Bool)hasMaxNumFormulas;
- (unsigned long long)numFormulaCellsInOwner:(struct __CFUUID *)arg1;
- (unsigned long long)numberOfCellsWithFormulas;
- (void)removeCalculationStateObserver:(id)arg1;
- (void)addCalculationStateObserver:(id)arg1;
- (CDStruct_fc93c73e)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id *)arg4 gettingSpecifiedTableName:(id *)arg5 gettingRest:(id *)arg6 gettingReferencesMatchingInputAsPrefix:(id *)arg7 gettingStickyBits:(char *)arg8 filterColons:(_Bool)arg9 referenceIsComplete:(_Bool)arg10 outNamesUsed:(_Bool *)arg11;
- (CDStruct_fc93c73e)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id *)arg4 gettingSpecifiedTableName:(id *)arg5 gettingRest:(id *)arg6 gettingReferencesMatchingInputAsPrefix:(id *)arg7 gettingStickyBits:(char *)arg8 filterColons:(_Bool)arg9 referenceIsComplete:(_Bool)arg10 outNamesUsed:(_Bool *)arg11 abortObject:(id)arg12;
- (CDStruct_fc93c73e)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id *)arg6 gettingStickyBits:(char *)arg7 filterColons:(_Bool)arg8 referenceIsComplete:(_Bool)arg9 outNamesUsed:(_Bool *)arg10;
- (_Bool)parseComponentsOfReference:(id)arg1 gettingSheetName:(id *)arg2 gettingTableName:(id *)arg3 gettingRest:(id *)arg4;
- (CDStruct_fc93c73e)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id *)arg6 gettingStickyBits:(char *)arg7 filterColons:(_Bool)arg8 referenceIsComplete:(_Bool)arg9 outNamesUsed:(_Bool *)arg10 abortObject:(id)arg11;
- (CDStruct_fc93c73e)parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 defaultResolver:(id)arg5 outStickyBits:(char *)arg6 gettingReferencesMatchingInputAsPrefix:(id *)arg7 requireFullMatches:(_Bool)arg8 filterColons:(_Bool)arg9 outNamesUsed:(_Bool *)arg10 abortObject:(id)arg11;
- (struct TSUCellCoord)parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char *)arg3 gettingReferencesMatchingInputAsPrefix:(id *)arg4;
- (struct TSCEReferenceSet)emptyReferenceSet;
- (struct TSCEReferenceSet)precedentsOfCell:(CDStruct_de21cb60)arg1;
- (id)escapedStringForRangeReference:(CDStruct_fc93c73e)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (id)escapedStringForRangeReference:(CDStruct_fc93c73e)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4 forceEscaping:(_Bool)arg5;
- (id)stringForRangeReference:(CDStruct_fc93c73e)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4;
- (id)stringForRangeReference:(CDStruct_fc93c73e)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(_Bool)arg4;
- (id)p_stringForRangeReference:(CDStruct_fc93c73e)arg1 hostTableID:(struct __CFUUID *)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 isRangeWithFunction:(_Bool)arg5 quoteComponents:(_Bool)arg6 forceEscaping:(_Bool)arg7;
- (_Bool)referenceIsValid:(CDStruct_fc93c73e)arg1;
- (_Bool)rangeIsWithinTable:(CDStruct_fc93c73e)arg1;
- (CDStruct_d8c645bd)cellHandleRangeForRangeCoord:(struct TSCERangeCoordinate)arg1 inTable:(struct __CFUUID *)arg2;
- (struct TSUCellCoord)cellHandleForCellCoord:(struct TSUCellCoord)arg1 inTable:(struct __CFUUID *)arg2;
- (struct TSCERangeCoordinate)rangeCoordForCellHandleRange:(CDStruct_d8c645bd)arg1 inTable:(struct __CFUUID *)arg2;
- (struct TSUCellCoord)cellCoordForCellHandle:(struct TSUCellCoord)arg1 inTable:(struct __CFUUID *)arg2;
- (void)endBatchingGroupCellDirtying;
- (void)beginBatchingGroupCellDirtying;
- (void)executeBlockWhileCalculationEngineIsNotWriting:(CDUnknownBlockType)arg1;
- (void)startRecalcTaskIfNecessary;
- (void)pauseRecalculationForBlock:(CDUnknownBlockType)arg1;
- (void)startRecalculation;
- (_Bool)recalculationIsPaused;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
- (void)endSuppressingWillModifyCalls;
- (void)beginSuppressingWillModifyCalls;
- (void)p_blockUntilRecalcTaskExitedWithTimeout:(double)arg1;
- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;
- (void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1;
- (_Bool)isCellReferenceDirty:(CDStruct_de21cb60 *)arg1;
- (_Bool)cellContainsAFormula:(CDStruct_de21cb60 *)arg1;
- (void)ownerIsDirty:(struct __CFUUID *)arg1;
- (void)geometryVolatileFunctionsAreDirtyInOwner:(struct __CFUUID *)arg1;
- (void)compassVolatileFunctionsAreDirty;
- (void)locationVolatileFunctionsAreDirty;
- (void)localeVolatileFunctionsAreDirty;
- (void)randomVolatileFunctionsAreDirty;
- (void)timeVolatileFunctionsAreDirty;
- (void)detectAndRepairConsistencyViolations;
- (void)markOnlyDependentsDirty:(const CDStruct_de21cb60 *)arg1;
- (void)indirectCallsAreDirty;
- (void)allFunctionsAreDirty;
- (void)rangeReferenceIsDirty:(CDStruct_fc93c73e *)arg1;
- (void)dirtyCellsForMergingRange:(struct TSCERangeCoordinate)arg1 forTable:(struct __CFUUID *)arg2 headerRowRange:(struct TSCERangeCoordinate)arg3 headerColumnRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfRows:(struct _NSRange)arg1 forTable:(struct __CFUUID *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfColumns:(struct _NSRange)arg1 forTable:(struct __CFUUID *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForRemovalOfRows:(struct _NSRange)arg1 fromTable:(struct __CFUUID *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForRemovalOfColumns:(struct _NSRange)arg1 fromTable:(struct __CFUUID *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(struct __CFUUID *)arg2 forColumns:(_Bool)arg3;
- (void)headerStateOfTableChanged:(struct __CFUUID *)arg1;
- (void)headerStateOfTableChanged:(struct __CFUUID *)arg1 changeIsForColumns:(_Bool)arg2;
- (void)cellReferenceIsDirty:(const CDStruct_de21cb60 *)arg1;
- (void)rollbackTableIDHistoryWithRewrite:(id)arg1;
- (id)extendTableIDHistoryWithRewrite:(id)arg1;
- (_Bool)clearCellIsDirtyAfterRecalc:(CDStruct_de21cb60)arg1;
- (_Bool)referenceWasGuaranteedCleanAtRecalcCycleStart:(struct TSCECReference)arg1;
- (_Bool)cellIsInACycle:(CDStruct_de21cb60 *)arg1;
- (_Bool)allCellsAreClean;
- (unsigned long long)dirtyCellCount;
- (unsigned long long)dirtyCellCountInOwner:(struct __CFUUID *)arg1;
- (unordered_set_58f8aa0e)formulaCellsUsingVolatiles:(unsigned long long)arg1;
- (vector_13f93596)formulaCoordsInRange:(const struct TSCERangeCoordinate *)arg1 inOwner:(struct __CFUUID *)arg2;
- (vector_13f93596)formulaCoordsReferringToRange:(const CDStruct_fc93c73e *)arg1 fromOwner:(struct __CFUUID *)arg2;
- (void)foreachFormulaInOwner:(struct __CFUUID *)arg1 block:(CDUnknownBlockType)arg2;
- (CDStruct_de21cb60)rootCauseForErrorInCell:(const CDStruct_de21cb60 *)arg1 atRootCell:(_Bool *)arg2;
- (void)clearErrorForCell:(const CDStruct_de21cb60 *)arg1;
- (void)setError:(id)arg1 forCell:(const CDStruct_de21cb60 *)arg2;
- (void)removeFormulasFromRange:(CDStruct_fc93c73e)arg1;
- (void)removeAllFormulasFromOwner:(struct __CFUUID *)arg1;
- (void)removeFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2;
- (void)replaceFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4 clearCycle:(_Bool)arg5;
- (void)replaceFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (void)addFormula:(CDStruct_a91f2c80)arg1 inOwner:(struct __CFUUID *)arg2 precedentIterator:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (void)closeTransaction:(id)arg1;
- (id)openTransaction;
- (id)currentTransaction;
- (UUIDData_5fbc143e)uuidForTableUID:(const UUIDData_5fbc143e *)arg1 andIndex:(unsigned short)arg2 direction:(_Bool)arg3;
- (void)setOwnerIDForLegacyGlobalID:(id)arg1 ownerID:(struct __CFUUID *)arg2;
- (struct __CFUUID *)ownerIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(_Bool)arg2;
- (id)tableInfosByName;
- (id)resolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)resolverForTableID:(struct __CFUUID *)arg1;
- (void)clearLegacyGlobalIDs;
- (void)enumerateFormulaOwnersUsingBlock:(CDUnknownBlockType)arg1;
- (struct __CFUUID *)formulaOwnerIDForFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (struct __CFUUID *)formulaOwnerIDForFormulaOwnerID:(struct __CFUUID *)arg1;
- (id)allOwnerIDs;
- (_Bool)allOwnersRegistered;
- (_Bool)ownerUidIsRegistered:(const UUIDData_5fbc143e *)arg1;
- (_Bool)ownerIsRegistered:(struct __CFUUID *)arg1;
- (_Bool)ownerOwesAnUnregister:(struct __CFUUID *)arg1;
- (void)unregisterOwner:(struct __CFUUID *)arg1;
- (int)registerOwnerWithOwnerID:(struct __CFUUID *)arg1 owner:(id)arg2 referenceResolver:(id)arg3 ownerKind:(int)arg4;
- (int)forwardRegisterOwnerWithOwnerID:(struct __CFUUID *)arg1 legacyGlobalID:(id)arg2;
- (void)dirtyCellsForUpgrade;
- (id)previousLocaleIdentifier;
- (void)setXLImportDateMode:(int)arg1;
- (int)xlImportDateMode;
- (void)p_startRecalculationTask;
- (void)recalculateWithTimeout:(double)arg1;
- (void)recalcHoldingWriteLock;
- (void)notifyObserversOfRecalcProgress;
- (void)wroteCells:(const vector_13f93596 *)arg1 inOwnerID:(struct __CFUUID *)arg2;
- (_Bool)recalcHoldingReadLock;
- (void)p_recalcOneCellHoldingReadLock:(CDStruct_de21cb60)arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(_Bool)arg3 isInACycle:(_Bool)arg4;
- (void)p_enqueueTaskForCell:(CDStruct_de21cb60)arg1;
- (CDStruct_de21cb60)p_refillRecalcQueue;
- (int)preferredDispatchQueueSize;
- (void)invalidateAfterRecalc;
- (_Bool)isInCollaborationMode;
- (void)dealloc;
- (void)documentDidLoad;
- (id)accessController;
- (void)setAccessController:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)p_removeApplicationNotification;
- (void)p_addApplicationNotification;
- (id)init;
- (void)initializeDispatchObjects;
@property(readonly) _Bool shouldAbortRecalculation;

@end
