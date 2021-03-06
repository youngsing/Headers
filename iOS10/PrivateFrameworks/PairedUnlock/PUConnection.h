//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedUnlock/PUUnlockClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, PUConnectionDelegate;

@interface PUConnection : NSObject <PUUnlockClient>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <PUConnectionDelegate> _delegate;
    CDUnknownBlockType _getRemoteDevicePasscodeStateHandler;
    CDUnknownBlockType _remoteDeviceRemoveLockoutHandler;
}

+ (void)syncPasscodeState;
@property(copy, nonatomic) CDUnknownBlockType remoteDeviceRemoveLockoutHandler; // @synthesize remoteDeviceRemoveLockoutHandler=_remoteDeviceRemoveLockoutHandler;
@property(copy, nonatomic) CDUnknownBlockType getRemoteDevicePasscodeStateHandler; // @synthesize getRemoteDevicePasscodeStateHandler=_getRemoteDevicePasscodeStateHandler;
@property __weak id <PUConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)remoteDeviceDidRemoveLockout:(_Bool)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceHasPasscode:(_Bool)arg1 isLocked:(_Bool)arg2 isUnlockOnly:(_Bool)arg3 error:(id)arg4;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompletePasscodeAction:(_Bool)arg1 error:(id)arg2;
- (void)didDisableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didPairForUnlock:(_Bool)arg1 error:(id)arg2;
- (id)delegateIfRespondsToSelector:(SEL)arg1;
- (void)getRemoteDeviceState:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceRemoveLockout:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDevicePasscodeAction:(long long)arg1 type:(long long)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (const char *)queueNameWithSuffix:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

