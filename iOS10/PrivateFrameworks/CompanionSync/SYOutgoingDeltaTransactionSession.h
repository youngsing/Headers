//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_os_activity> *_sessionActivity;
    long long _state;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    _SYMessageTimerTable *_timers;
    _Bool _canRestart;
    _Bool _canRollback;
    _Bool _cancelled;
}

- (_Bool)wasCancelled;
- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void).cxx_destruct;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)cancelWithError:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_installStateListener;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_processNextState;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_notifySessionComplete;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_fetchNextBatch;
- (void)_waitForMessageWindow;
- (void)_setupChangeConcurrency;
- (unsigned long long)protocolVersion;
- (_Bool)isSending;
- (_Bool)isResetSync;
- (void)_setStateQuietly:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)initWithService:(id)arg1;

@end

