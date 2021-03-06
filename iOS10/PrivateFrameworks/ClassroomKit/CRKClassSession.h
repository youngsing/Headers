//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTransportDelegate-Protocol.h>

@class CATStateMachine, CATTransport, DMFControlSessionIdentifier, NSArray, NSString;
@protocol CRKClassSessionDelegate;

@interface CRKClassSession : NSObject <CATTransportDelegate>
{
    CATStateMachine *mFSM;
    CATTransport *mTransport;
    unsigned short _flags;
    id <CRKClassSessionDelegate> _delegate;
    DMFControlSessionIdentifier *_identifier;
    id _clientIdentity;
    NSArray *_trustedCertificates;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    double _failedConnectionRetryInterval;
}

@property(nonatomic) double failedConnectionRetryInterval; // @synthesize failedConnectionRetryInterval=_failedConnectionRetryInterval;
@property(nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;
@property(nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property(nonatomic) unsigned short flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property(readonly, nonatomic) id clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) DMFControlSessionIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <CRKClassSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
- (void).cxx_destruct;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (void)transportDidConnect:(id)arg1;
- (void)delegateInvalidatedWithState:(id)arg1;
- (void)delegateDisconnected;
- (void)delegateConnected;
- (void)delegateDidChangeState:(long long)arg1 previousState:(long long)arg2;
- (void)delegateWillLoseBeacon;
- (void)delegateInRangeWithContext:(id)arg1;
- (void)delegateNoNetworkWithContext:(id)arg1;
- (void)delegateIdleWithContext:(id)arg1;
- (void)delegateOutOfRangeWithContext:(id)arg1;
- (void)cancelConnectionAttempt;
- (id)studentSocketOptions;
- (void)tryConnecting;
- (void)registerDefaults;
- (void)failedToConnect;
- (void)didConnect;
- (void)lostBeacon;
- (void)invalidate;
- (void)disconnect;
- (void)lostConnection;
- (void)localWiFiBecameUnavailable;
- (void)localWiFiBecameAvailable;
- (void)foundBeaconWithFlags:(unsigned short)arg1;
- (id)initWithIdentifier:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

