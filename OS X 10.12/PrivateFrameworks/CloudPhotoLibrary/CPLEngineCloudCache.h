//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)allRecordsIsFinal:(BOOL)arg1;
- (id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forIdentifier:(id)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly) BOOL hasDoneAFirstSynchronization;
- (id)remainingClassesForInitialQuery;
- (BOOL)resetInitialSyncAnchorWithError:(id *)arg1;
- (id)initialSyncAnchor;
- (BOOL)setInitialSyncAnchor:(id)arg1 error:(id *)arg2;
- (BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg1 error:(id *)arg2;
- (Class)classOfRecordsForInitialQuery;
- (BOOL)disableInitialQueriesWithError:(id *)arg1;
- (unsigned long long)_indexOfCurrentClassForInitialQueries;
- (BOOL)resetSyncAnchorWithError:(id *)arg1;
- (BOOL)setSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)syncAnchor;
- (BOOL)discardStagedChangesWithError:(id *)arg1;
- (BOOL)commitStagedChangesWithError:(id *)arg1;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)resetWithError:(id *)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)confirmedRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)confirmAllRecordsWithError:(id *)arg1;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id *)arg4;
- (BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;
- (BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 direction:(unsigned long long)arg3 withError:(id *)arg4;
- (BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
