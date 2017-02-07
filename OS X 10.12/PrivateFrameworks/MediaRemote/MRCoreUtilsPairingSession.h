//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRPairedDevice, MRPasscodeCredentials, NSArray, NSData, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession
{
    unsigned long long _state;
    MRPasscodeCredentials *_credentials;
    struct PairingSessionPrivate *_pairingSession;
    struct {
        void *context;
        CDUnknownFunctionPointerType showSetupCode_f;
        CDUnknownFunctionPointerType hideSetupCode_f;
        CDUnknownFunctionPointerType promptForSetupCode_f;
        CDUnknownFunctionPointerType copyIdentity_f;
        CDUnknownFunctionPointerType findPeer_f;
        CDUnknownFunctionPointerType savePeer_f;
        CDUnknownFunctionPointerType resumeRequest_f;
        CDUnknownFunctionPointerType resumeResponse_f;
    } _pairingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    MRPairedDevice *_device;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
@property(readonly, nonatomic) MRPairedDevice *device; // @synthesize device=_device;
- (id)_peerIdentifier:(struct PairingSessionPrivate *)arg1;
- (id)_extendedInfoDictionary;
- (id)_updatePeer:(struct PairingSessionPrivate *)arg1;
- (id)_removePeer:(struct PairingSessionPrivate *)arg1;
- (id)_addPeer:(struct PairingSessionPrivate *)arg1;
- (void)_onQueueDeriveEncryptionKeys;
- (void)_handleSetupExchangeComplete;
- (void)_delegateDidEnterPasscode:(id)arg1;
- (id)_onQueuePerformPairingExchangeWithInputData:(id)arg1 error:(id *)arg2;
- (void)_handlePairingFailureWithError:(id)arg1;
- (id)_onQueueInitializePairingSessionWithState:(unsigned long long)arg1;
- (int)_promptForSetupCodeWithDelay:(double)arg1;
- (void)_hideSetupCode;
- (int)_displaySetupCode:(id)arg1;
- (id)_generateSetupCodeWithMaximumLength:(unsigned long long)arg1;
- (id)updatePairing;
- (id)unpair;
@property(readonly, nonatomic) NSArray *pairedDevices;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)open;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end
