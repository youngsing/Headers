//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>
#import <Message/RadiosPreferencesDelegate-Protocol.h>

@class AWDMailNetworkDiagnosticsReport, NSLock, NSMutableArray, NSMutableSet, NSString, NSThread, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate>
{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSThread *_thread;
    NSMutableArray *_observers;
    unsigned int _flags;
    _Bool _dns;
    NSMutableSet *_calls;
    NSMutableSet *_backgroundWifiClients;
    int _interface;
    struct __SCPreferences *_wiFiPreferences;
    _Bool _hasCellDataCapability;
    _Bool _hasWiFiCapability;
    _Bool _isWiFiEnabled;
    _Bool _isRoamingAllowed;
    _Bool _data;
    NSString *_dataIndicator;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    struct __SCNetworkReachability *_reachability;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    struct __CTServerConnection *_telephony;
}

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
- (id)copyDiagnosticInformation;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)addBackgroundWifiClient:(id)arg1;
- (void)_updateWifiClientType;
- (void)removeNetworkObserver:(id)arg1;
- (id)addNetworkObserverBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection *)arg3;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
- (_Bool)is4GConnection;
- (_Bool)is3GConnection;
- (_Bool)inAirplaneMode;
- (_Bool)isOnWWAN;
- (_Bool)isFatPipe;
- (_Bool)isNetworkUp;
- (_Bool)_isNetworkUp_nts;
- (_Bool)isDataAvailable;
- (int)dataStatus;
- (_Bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(_Bool)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)_tearDownTelephony_nts;
- (void)_setupSymptons;
- (void)_setUpTelephony_nts;
- (CDStruct_1ef3fb1f)_pollDataAndCallStatus_nts;
- (void)_inititializeWifiManager;
- (id)init;
- (void)airplaneModeChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
