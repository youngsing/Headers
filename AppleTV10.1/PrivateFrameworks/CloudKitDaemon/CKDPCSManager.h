//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDProtocolTranslatorIdentityDelegate-Protocol.h>

@class CKDClientContext, NSArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol NSObject, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate>
{
    NSArray *_sharingIdentityFingerprints;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    NSString *_currentAccountIdentifier;
    NSMutableDictionary *_PCSIdentityWrappersByServiceName;
    struct _PCSIdentityData *_debugIdentity;
    NSString *_serviceName;
    NSString *_liverpoolPublicKey;
    id <NSObject> _contextObserver;
    NSObject<OS_dispatch_source> *_pcsUpdateSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource; // @synthesize pcsUpdateSource=_pcsUpdateSource;
@property(retain, nonatomic) id <NSObject> contextObserver; // @synthesize contextObserver=_contextObserver;
@property(retain, nonatomic) NSString *liverpoolPublicKey; // @synthesize liverpoolPublicKey=_liverpoolPublicKey;
@property(retain, nonatomic) NSArray *sharingIdentityFingerprints; // @synthesize sharingIdentityFingerprints=_sharingIdentityFingerprints;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) struct _PCSIdentityData *debugIdentity; // @synthesize debugIdentity=_debugIdentity;
@property(retain, nonatomic) NSMutableDictionary *PCSIdentityWrappersByServiceName; // @synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName;
@property(retain) NSString *currentAccountIdentifier; // @synthesize currentAccountIdentifier=_currentAccountIdentifier;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)protectionIdentifierFromShareProtection:(struct _OpaquePCSShareProtection *)arg1;
- (id)etagFromPCSData:(id)arg1;
- (id)wrapEncrypedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3;
- (id)unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3;
- (id)referenceSignatureFromAssetKey:(id)arg1;
- (id)referenceIdentifierStringFromAssetKey:(id)arg1;
- (id)newAssetKeyWithError:(id *)arg1;
- (id)wrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (id)unwrapAssetKey:(id)arg1 withRecordPCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (id)decryptChainPCSForRecordPCS:(id)arg1;
- (id)sharingIdentityDataFromPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)removePublicKeyID:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (void)removePublicKeys:(id)arg1 fromPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removeEncryptedPCS:(id)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removeSharingIdentity:(struct _PCSIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)removePublicIdentity:(struct _PCSPublicIdentityData *)arg1 fromSharePCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)addSharingIdentity:(struct _PCSIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (id)addIdentityBackToPCS:(struct _OpaquePCSShareProtection *)arg1;
- (id)addPublicIdentity:(struct _PCSPublicIdentityData *)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3;
- (id)etagFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (id)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 error:(id *)arg3;
- (id)decryptPCSDataOnSharePCS:(id)arg1;
- (struct _OpaquePCSShareProtection *)createSharePCSFromEncryptedData:(id)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createSharePCSFromData:(id)arg1 sharingIdentity:(struct _PCSIdentityData *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (id)dataFromSharePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createChainPCSWithError:(id *)arg1;
- (struct _OpaquePCSShareProtection *)createSharePublicPCSWithIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createSharePCSForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _OpaquePCSShareProtection *)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(struct _OpaquePCSShareProtection *)arg2 withError:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createEmptySharePCSWithError:(id *)arg1;
- (id)etagFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (_Bool)removeSharePCS:(struct _OpaquePCSShareProtection *)arg1 fromRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (_Bool)addSharePCS:(struct _OpaquePCSShareProtection *)arg1 toRecordPCS:(struct _OpaquePCSShareProtection *)arg2 permission:(unsigned long long)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 error:(id *)arg3;
- (struct _OpaquePCSShareProtection *)createRecordPCSFromData:(id)arg1 zonePCS:(struct _OpaquePCSShareProtection *)arg2 logFailure:(_Bool)arg3 error:(id *)arg4;
- (id)dataFromRecordPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithEncryptedZonePCS:(struct __CFData *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (struct _OpaquePCSShareProtection *)createRecordPCSWithZonePCS:(struct _OpaquePCSShareProtection *)arg1 sharePCS:(struct _OpaquePCSShareProtection *)arg2 createLite:(_Bool)arg3 error:(id *)arg4;
- (id)updateServiceIdentityOnZonePCS:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)zonePCSNeedsUpdate:(struct _OpaquePCSShareProtection *)arg1;
- (id)repairZonePCSData:(id)arg1 error:(id *)arg2;
- (id)etagFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createZonePCSFromData:(id)arg1 error:(id *)arg2;
- (id)dataFromZonePCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;
- (struct _OpaquePCSShareProtection *)createZonePCSWithError:(id *)arg1;
- (id)publicKeyIDFromIdentity:(struct _OpaquePCSShareProtection *)arg1;
- (id)_fingerprintsFromIdentitySet:(struct _PCSIdentitySetData *)arg1;
- (id)addIdentityForService:(unsigned long long)arg1 toPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_addIdentity:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 toPCS:(struct _OpaquePCSShareProtection *)arg3;
- (struct _PCSPublicIdentityData *)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentityData *)createSharingIdentityFromData:(id)arg1 error:(id *)arg2;
- (id)dataFromSharingIdentity:(struct _PCSIdentityData *)arg1 error:(id *)arg2;
- (_Bool)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id *)arg4;
- (id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id *)arg4;
- (struct _PCSIdentityData *)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2;
- (struct _PCSIdentityData *)createRandomSharingIdentityWithError:(id *)arg1;
- (id)copyPublicIdentityForDSID:(id)arg1 withError:(id *)arg2;
- (id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSPublicIdentityData *)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id *)arg2;
- (id)_copyPublicKeyDataForIdentitySet:(struct _PCSIdentitySetData *)arg1 withService:(unsigned long long)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_copyServiceIdentityWithType:(unsigned long long)arg1 withError:(id *)arg2;
- (struct _PCSIdentitySetData *)_copyServiceIdentityWithType:(unsigned long long)arg1 useCache:(_Bool)arg2 withError:(id *)arg3;
- (id)_PCSServiceStringFromCKServiceType:(unsigned long long)arg1;
- (struct _PCSIdentitySetData *)_copyIdentityForService:(id)arg1 useCache:(_Bool)arg2 withError:(id *)arg3;
- (struct _PCSIdentitySetData *)_reallyCopyIdentityForService:(id)arg1 withError:(id *)arg2;
- (id)_internalServicesToCombineWithLiverpoolKey;
- (struct _PCSIdentitySetData *)copyServiceIdentityForDSID:(id)arg1 withError:(id *)arg2;
- (struct _PCSIdentitySetData *)_createIdentitySetByAddingLiverpoolIdentity:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)_createInMemoryIdentitySetForService:(id)arg1 error:(id *)arg2;
- (id)_addServiceIdentitiesOfType:(id)arg1 toSet:(struct _PCSIdentitySetData *)arg2 fromSet:(struct _PCSIdentitySetData *)arg3 markCurrent:(_Bool)arg4;
- (struct _PCSIdentityData *)debugSharingIdentity;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (id)_serviceNameForContainerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

