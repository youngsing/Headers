//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NFSession.h>

@class NFApplet, NFTechnologyEvent, NFWeakReference, NSDictionary;
@protocol NFLoyaltyAndPaymentSessionDelegate;

@interface NFLoyaltyAndPaymentSession : NFSession
{
    BOOL _pendingServerRequest;
    BOOL _vasTransactionInProgress;
    BOOL _fieldPresent;
    NFTechnologyEvent *_technologyEvent;
    NFWeakReference *_delegate;
    BOOL _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    NFApplet *_activeApplet;
    NFApplet *_defaultApplet;
}

@property(readonly) NFApplet *defaultApplet; // @synthesize defaultApplet=_defaultApplet;
@property(readonly) NFApplet *activeApplet; // @synthesize activeApplet=_activeApplet;
- (BOOL)enablePlasticCardMode:(BOOL)arg1;
- (BOOL)setHostCards:(id)arg1;
- (id)felicaAppletState:(id)arg1;
- (BOOL)stopCardEmulation;
- (BOOL)startHostCardEmulation;
- (BOOL)_startDeferredCardEmulationWithAuthorization:(id)arg1;
- (BOOL)startDeferredCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (BOOL)_startHostCardEmulation;
- (BOOL)_startCardEmulationWithAuthorization:(id)arg1;
- (BOOL)startCardEmulation:(unsigned char)arg1 authorization:(id)arg2;
- (BOOL)setActivePaymentApplet:(id)arg1;
- (BOOL)setActivePaymentApplet:(id)arg1 makeDefault:(BOOL)arg2;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
@property(readonly) unsigned long long numberOfActiveSecureElements;
- (void)didReceiveActivityTimeout;
- (void)didReceivePendingServerRequest;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didSelectValueAddedService:(BOOL)arg1;
- (void)didFailDeferredAuthorization;
- (void)didExpressModeStateChange:(unsigned int)arg1;
- (void)didFelicaStateChange:(id)arg1;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didDetectField:(BOOL)arg1;
- (void)didEndUnexpectedly;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endSession;
- (void)didStartSession:(id)arg1;
@property id <NFLoyaltyAndPaymentSessionDelegate> delegate;
- (void)dealloc;

@end
