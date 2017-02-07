//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation
{
    BOOL _hasAttemptedShareUpdate;
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    NSMutableArray *_shareIDs;
    NSDictionary *_baseTokensByShareID;
    NSMutableDictionary *_sharesNeedingUpdateByID;
}

@property(nonatomic) BOOL hasAttemptedShareUpdate; // @synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate;
@property(retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // @synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property(retain, nonatomic) NSMutableArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)updateShares;
- (void)fetchSharesFromServer;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id *)arg2;
- (void)_sendErrorForFailedShares;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (id)activityCreate;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
