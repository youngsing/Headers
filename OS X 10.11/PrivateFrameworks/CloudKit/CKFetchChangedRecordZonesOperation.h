//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKFetchChangedRecordZonesOperation : CKDatabaseOperation
{
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _fetchChangedRecordZonesCompletionBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) CDUnknownBlockType fetchChangedRecordZonesCompletionBlock; // @synthesize fetchChangedRecordZonesCompletionBlock=_fetchChangedRecordZonesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (unsigned long long)activityStart;
@property(readonly, nonatomic) BOOL moreComing;
- (id)initWithPreviousServerChangeToken:(id)arg1;

@end

