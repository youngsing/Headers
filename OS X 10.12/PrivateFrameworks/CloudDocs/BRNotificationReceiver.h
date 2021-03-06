//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRItemNotificationReceiving-Protocol.h>

@class BRNotificationQueue, NSMutableDictionary, NSString;
@protocol BRItemNotificationSending, BRNotificationReceiverDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id <BRItemNotificationSending> _sender;
    // Error parsing type: Ai, name: _gatherDones
    id <BRNotificationReceiverDelegate> _delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    // Error parsing type: Ai, name: _suspendCount
    int _networkReachabilityToken;
    BOOL _isNetworkReachable;
    BOOL _isInvalidated;
}

@property(retain, nonatomic) id <BRNotificationReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double batchingDelay; // @synthesize batchingDelay=_batchingDelay;
@property(nonatomic) unsigned long long batchingChanges; // @synthesize batchingChanges=_batchingChanges;
- (void).cxx_destruct;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)networkDidChangeReachabilityStatusTo:(BOOL)arg1;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_receiveUpdates:(id)arg1;
- (void)_signalSourceIfNeeded;
- (oneway void)invalidateAndDontNotifyDelegate;
- (oneway void)invalidate;
- (void)invalidateAndNotify:(BOOL)arg1;
- (void)_invalidateAndNotify:(BOOL)arg1;
- (void)flush;
- (void)resume;
- (void)suspend;
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (id)_obtainNotificationSenderFromDaemon;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long pendingCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

