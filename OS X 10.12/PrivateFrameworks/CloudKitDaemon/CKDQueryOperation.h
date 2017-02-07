//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import <CloudKitDaemon/CKDOperationPipelining-Protocol.h>

@class CKDRecordFetchAggregator, CKQuery, CKQueryCursor, CKRecordZoneID, NSMutableArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _shouldFetchAssetContent;
    BOOL _fetchAllResults;
    BOOL _hasCalledQueryCursorUpdatedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCursorUpdatedBlock;
    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
    CKDRecordFetchAggregator *_recordFetcher;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    unsigned long long _numRequestsSent;
    NSMutableArray *_requestInfos;
}

@property(nonatomic) BOOL hasCalledQueryCursorUpdatedBlock; // @synthesize hasCalledQueryCursorUpdatedBlock=_hasCalledQueryCursorUpdatedBlock;
@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property(nonatomic) BOOL fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property(retain, nonatomic) CKDRecordFetchAggregator *recordFetcher; // @synthesize recordFetcher=_recordFetcher;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property(copy, nonatomic) CDUnknownBlockType queryCursorUpdatedBlock; // @synthesize queryCursorUpdatedBlock=_queryCursorUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(readonly, nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) CKQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleRecordResponse:(id)arg1 perRequestSchedulerInfo:(id)arg2;
- (void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
