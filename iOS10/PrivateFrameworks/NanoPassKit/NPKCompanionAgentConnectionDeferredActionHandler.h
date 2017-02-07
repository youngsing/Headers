//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject
{
    NSMutableDictionary *_deferredActions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_deferredSharedPaymentWebServiceContexts;
}

+ (id)sharedDeferredActionHandler;
@property(retain, nonatomic) NSMutableDictionary *deferredSharedPaymentWebServiceContexts; // @synthesize deferredSharedPaymentWebServiceContexts=_deferredSharedPaymentWebServiceContexts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMutableDictionary *deferredActions; // @synthesize deferredActions=_deferredActions;
- (void).cxx_destruct;
- (void)_handleDevicePairingFailure:(id)arg1;
- (void)_handleDeviceUnpaired:(id)arg1;
- (void)_handleDevicePaired:(id)arg1;
- (void)_handleDeviceBecameActive:(id)arg1;
- (void)_handleCompanionAgentStarted;
- (void)_cleanUpDeferredDataForPairingID:(id)arg1;
- (void)_performDeferredActions;
- (void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1;
- (void)performActionWhenCompanionAgentIsAvailable:(CDUnknownBlockType)arg1 forDevice:(id)arg2;
- (void)dealloc;
- (id)init;

@end
