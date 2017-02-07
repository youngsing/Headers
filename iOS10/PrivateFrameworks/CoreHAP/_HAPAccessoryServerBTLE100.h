//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBTLE.h>

#import <CoreHAP/CBPeripheralDelegate-Protocol.h>
#import <CoreHAP/HAPSecuritySessionDelegate-Protocol.h>

@class CBCharacteristic, CBService, HAPSecuritySession, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_source;

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <HAPSecuritySessionDelegate, CBPeripheralDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    _Bool _startPairingRequested;
    _Bool _pairingFeaturesRead;
    _Bool _securitySessionOpening;
    _Bool _disconnecting;
    _Bool _unpairedIdentifyRequested;
    _Bool _removeOnDisconnect;
    unsigned long long _state;
    unsigned long long _connectionRetryCount;
    NSMapTable *_btleServiceToHAPServiceMap;
    unsigned long long _characteristicDiscoveryRequestCount;
    unsigned long long _characteristicValueReadCount;
    unsigned long long _metadataDiscoveryRequestCount;
    unsigned long long _metadataValueReadCount;
    unsigned long long _availableInstanceID;
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;
    NSMapTable *_hapCharacteristicReadCompletionQueues;
    NSMapTable *_hapCharacteristicWriteCompletionQueues;
    NSMapTable *_hapCharacteristicEnableEventCompletionQueues;
    NSMutableArray *_addRemovePairingOperationsQueue;
    CBService *_pairingService;
    CBCharacteristic *_pairSetupCharacteristic;
    CBCharacteristic *_pairVerifyCharacteristic;
    CBCharacteristic *_pairingFeaturesCharacteristic;
    CBCharacteristic *_pairingsCharacteristic;
    CBService *_accessoryInfoService;
    CBCharacteristic *_identifyCharacteristic;
    CBCharacteristic *_modelCharacteristic;
    CBCharacteristic *_serialNumberCharacteristic;
    CBCharacteristic *_manufacturerCharacteristic;
    NSString *_controllerUsername;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    unsigned long long _pairingFeatureFlags;
    HAPSecuritySession *_securitySession;
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;
    double _idleConnectionTimeoutInSec;
    CDUnknownBlockType _unpairedIdentifyCompletionBlock;
}

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;
+ (id)deserializeCharacteristicReadData:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(_Bool)arg3 error:(id *)arg4;
+ (id)serializeCharacteristicWriteValue:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(_Bool)arg3 authenticationData:(id)arg4 error:(id *)arg5;
@property(nonatomic) _Bool removeOnDisconnect; // @synthesize removeOnDisconnect=_removeOnDisconnect;
@property(copy, nonatomic) CDUnknownBlockType unpairedIdentifyCompletionBlock; // @synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock;
@property(nonatomic) _Bool unpairedIdentifyRequested; // @synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested;
@property(nonatomic, getter=isDisconnecting) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(nonatomic) double idleConnectionTimeoutInSec; // @synthesize idleConnectionTimeoutInSec=_idleConnectionTimeoutInSec;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer; // @synthesize connectionLifetimeTimer=_connectionLifetimeTimer;
@property(nonatomic, getter=isSecuritySessionOpening) _Bool securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property(nonatomic) unsigned long long pairingFeatureFlags; // @synthesize pairingFeatureFlags=_pairingFeatureFlags;
@property(nonatomic) _Bool pairingFeaturesRead; // @synthesize pairingFeaturesRead=_pairingFeaturesRead;
@property(nonatomic) _Bool startPairingRequested; // @synthesize startPairingRequested=_startPairingRequested;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property(retain, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property(retain, nonatomic) CBCharacteristic *manufacturerCharacteristic; // @synthesize manufacturerCharacteristic=_manufacturerCharacteristic;
@property(retain, nonatomic) CBCharacteristic *serialNumberCharacteristic; // @synthesize serialNumberCharacteristic=_serialNumberCharacteristic;
@property(retain, nonatomic) CBCharacteristic *modelCharacteristic; // @synthesize modelCharacteristic=_modelCharacteristic;
@property(retain, nonatomic) CBCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property(retain, nonatomic) CBService *accessoryInfoService; // @synthesize accessoryInfoService=_accessoryInfoService;
@property(retain, nonatomic) CBCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property(retain, nonatomic) CBService *pairingService; // @synthesize pairingService=_pairingService;
@property(retain, nonatomic) NSMutableArray *addRemovePairingOperationsQueue; // @synthesize addRemovePairingOperationsQueue=_addRemovePairingOperationsQueue;
@property(retain, nonatomic) NSMapTable *hapCharacteristicEnableEventCompletionQueues; // @synthesize hapCharacteristicEnableEventCompletionQueues=_hapCharacteristicEnableEventCompletionQueues;
@property(retain, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues; // @synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues;
@property(retain, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues; // @synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues;
@property(retain, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap; // @synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap;
@property(nonatomic) unsigned long long availableInstanceID; // @synthesize availableInstanceID=_availableInstanceID;
@property(nonatomic) unsigned long long metadataValueReadCount; // @synthesize metadataValueReadCount=_metadataValueReadCount;
@property(nonatomic) unsigned long long metadataDiscoveryRequestCount; // @synthesize metadataDiscoveryRequestCount=_metadataDiscoveryRequestCount;
@property(nonatomic) unsigned long long characteristicValueReadCount; // @synthesize characteristicValueReadCount=_characteristicValueReadCount;
@property(nonatomic) unsigned long long characteristicDiscoveryRequestCount; // @synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount;
@property(retain, nonatomic) NSMapTable *btleServiceToHAPServiceMap; // @synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap;
@property(nonatomic) unsigned long long connectionRetryCount; // @synthesize connectionRetryCount=_connectionRetryCount;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_dequeueAndContinueOperation;
- (void)_enqueueOperation:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(_Bool)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleConnectionLifetimeTimeout;
- (void)_cancelConnectionLifetimeTimer;
- (void)_updateConnectionLifetimeTimer;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (int)_pairSetupTryPassword:(id)arg1;
- (int)_handlePairSetupExchangeWithData:(id)arg1;
- (int)_pairSetupStart;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (id)_pairVerifyHAPCharacteristic;
- (id)_pairSetupHAPCharacteristic;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (_Bool)_shouldEnableSessionSecurity;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_nextInstanceID;
- (_Bool)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3;
- (id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2;
- (void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleReadDescriptorValues;
- (void)_handleDescriptorDiscovery;
- (void)_handleHAPServiceDiscovery;
- (void)_getAttributeDatabase;
- (void)discoverAccessories;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (id)getLocalPairingIdentityAndAllowCreation:(_Bool)arg1 error:(id *)arg2;
- (void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg1;
- (void)_reallyEstablishSecureSession;
- (void)_establishSecureSession;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (void)_readValueForCharacteristic:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readCharacteristicValues:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1;
- (void)_enqueueEnableEventCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (void)_enqueueReadCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (CDUnknownBlockType)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (void)_enqueueWriteCompletionHandler:(CDUnknownBlockType)arg1 forCharacteristic:(id)arg2;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleSuccessfulBTLEConnection;
- (void)handleConnectionWithError:(id)arg1;
- (void)_setupBTLEConnectionToPeripheral;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_enableEvent:(_Bool)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)_handlePairingStateMachine;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)_checkForAuthPrompt;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairing;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (unsigned long long)hapBLEProtocolVersion;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_resetState;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 configNumber:(id)arg7 category:(id)arg8 connectionIdleTime:(unsigned char)arg9 browser:(id)arg10 keyStore:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
