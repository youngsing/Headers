//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NFHardwareEventListener-Protocol.h>
#import <PassKitCore/NFRemoteAdminEventListener-Protocol.h>

@class NFSecureElement, NSArray, NSHashTable, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener>
{
    BOOL _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_queue> *_observerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_objectDisposalQueue;
    NSHashTable *_observers;
    NFSecureElement *_secureElement;
    NSArray *_secureElementArray;
    CDUnknownBlockType _pairingChangeHandler;
}

+ (id)secureElementIdentifiers;
+ (id)primarySecureElementIdentifier;
- (void).cxx_destruct;
- (void)_registerPairingChangeHandler;
@property(readonly, nonatomic) NSUUID *ownerUserUUID;
@property(readonly, nonatomic) NSArray *secureElementIdentifiers;
@property(readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property(readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property(readonly, nonatomic) NSString *primaryRegionTopic;
@property(readonly, nonatomic) unsigned long long supportedTechnologies;
@property(readonly, nonatomic) BOOL isDeletingAllApplets;
@property(readonly, nonatomic) BOOL isInRestrictedMode;
@property(readonly, nonatomic) BOOL isProductionSigned;
@property(readonly, nonatomic) BOOL isOwnable;
- (BOOL)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2;
- (unsigned long long)ownershipStateForUserUUID:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)queueConnectionToSeverForAppletIdentifiers:(id)arg1;
- (BOOL)queueConnectionToSeverWithPushTopic:(id)arg1;
- (void)stateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)legacyStateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appletWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAppletsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)pairingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)SEPPairingInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementQueuingServerConnection:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (void)secureElement:(id)arg1 didChangeRestrictedMode:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
