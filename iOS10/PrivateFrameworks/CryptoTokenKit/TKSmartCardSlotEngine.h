//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSXPCListenerDelegate-Protocol.h>
#import <CryptoTokenKit/TKProtocolSmartCardSlot-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString, NSXPCConnection, NSXPCListener, TKPowerMonitor, TKSmartCardATR, TKSmartCardSessionEngine;
@protocol OS_dispatch_queue, OS_os_log, TKSmartCardSlotDelegate;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate>
{
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    _Bool _idlePowerDownPending;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMutableArray *_powerRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
    _Bool _securePINVerificationSupported;
    _Bool _securePINChangeSupported;
    _Bool _apduSentSinceLastReset;
    long long _maxInputLength;
    long long _maxOutputLength;
    NSArray *_forProcesses;
    id <TKSmartCardSlotDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    TKSmartCardSessionEngine *_session;
}

@property __weak TKSmartCardSessionEngine *session; // @synthesize session=_session;
@property _Bool apduSentSinceLastReset; // @synthesize apduSentSinceLastReset=_apduSentSinceLastReset;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *name; // @synthesize name=_name;
@property __weak id <TKSmartCardSlotDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *forProcesses; // @synthesize forProcesses=_forProcesses;
@property _Bool securePINChangeSupported; // @synthesize securePINChangeSupported=_securePINChangeSupported;
@property _Bool securePINVerificationSupported; // @synthesize securePINVerificationSupported=_securePINVerificationSupported;
@property long long maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;
@property long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
- (void).cxx_destruct;
- (void)dealloc;
- (void)terminate;
- (void)runUserInteraction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAttrib:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_getReservationId;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (void)sessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)leaveSession:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setupSlotWithReply:(CDUnknownBlockType)arg1;
- (void)cardPresent:(_Bool)arg1;
- (void)scheduleIdlePowerDown;
- (void)powerDownWithEject:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setProtocol:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)powerRequestFinished;
- (void)schedulePowerRequest:(CDUnknownBlockType)arg1;
- (void)changeStateTo:(long long)arg1 powerState:(long long)arg2;
- (id)dictionaryForState:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)logWithBytes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

