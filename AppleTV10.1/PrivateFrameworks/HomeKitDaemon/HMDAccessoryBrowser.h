//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPAccessoryServerBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HAPAccessoryServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWatchSystemStateDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserIP, HAPAccessoryServerBrowserRelay, HMDHomeManager, HMFMessageDispatcher, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDAccessoryBrowser : NSObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDWatchSystemStateDelegate>
{
    _Bool _appIsInForeground;
    _Bool _activeSiriCommand;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_messageDispatcher;
    unsigned long long _generationCounter;
    NSMutableSet *_browsingXPCConnections;
    HMDHomeManager *_homeManager;
    NSMapTable *_delegates;
    NSMutableArray *_accessoryServerBrowsers;
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;
    HAPAccessoryServerBrowserRelay *_relayAccessoryServerBrowser;
    NSMutableArray *_identifiersOfBTLEPairedAccessories;
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;
    NSMutableArray *_identifiersOfPairedAccessories;
    NSMutableSet *_unpairedAccessories;
    NSMutableSet *_discoveredBridgeableAccessories;
    NSMapTable *_currentlyPairingAccessories;
    NSHashTable *_tombstonedHAPAccessoryServers;
    NSHashTable *_discoveringBLEAccessoryServerIdentifiers;
    NSMutableSet *_discoveredAccessoryServerIdentifiers;
}

@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers; // @synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers; // @synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers; // @synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers;
@property(retain, nonatomic) NSMapTable *currentlyPairingAccessories; // @synthesize currentlyPairingAccessories=_currentlyPairingAccessories;
@property(readonly, nonatomic) NSMutableSet *discoveredBridgeableAccessories; // @synthesize discoveredBridgeableAccessories=_discoveredBridgeableAccessories;
@property(readonly, nonatomic) NSMutableSet *unpairedAccessories; // @synthesize unpairedAccessories=_unpairedAccessories;
@property(retain, nonatomic) NSMutableArray *identifiersOfPairedAccessories; // @synthesize identifiersOfPairedAccessories=_identifiersOfPairedAccessories;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // @synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE;
@property(retain, nonatomic) NSMutableArray *identifiersOfBTLEPairedAccessories; // @synthesize identifiersOfBTLEPairedAccessories=_identifiersOfBTLEPairedAccessories;
@property(nonatomic) _Bool activeSiriCommand; // @synthesize activeSiriCommand=_activeSiriCommand;
@property(nonatomic) _Bool appIsInForeground; // @synthesize appIsInForeground=_appIsInForeground;
@property(readonly, nonatomic) HAPAccessoryServerBrowserRelay *relayAccessoryServerBrowser; // @synthesize relayAccessoryServerBrowser=_relayAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // @synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // @synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser;
@property(retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // @synthesize accessoryServerBrowsers=_accessoryServerBrowsers;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableSet *browsingXPCConnections; // @synthesize browsingXPCConnections=_browsingXPCConnections;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (id)dumpRegisteredPairedAccessories;
- (id)dumpUnpairedAccessories;
- (void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)accessoryServerDidUpdateStateNumber:(id)arg1;
- (void)accessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3;
- (void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_checkDelegatesofBlockedAccessoryServer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2;
- (void)_notifyDelegatesToRetrieveAccessoryServers:(id)arg1;
- (void)_notifyDelegatesOfReachabilityChange:(_Bool)arg1 forBTLEAccessories:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)_notifyDelegatesOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2;
- (void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2;
- (void)_startPairingInterruptionTimer:(id)arg1;
- (void)_stopReconfirmTimer:(id)arg1;
- (void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(_Bool)arg3 stateNumber:(id)arg4;
- (void)_notifyDelegatesOfNewPairedAccessoryServer:(id)arg1 stateChanged:(_Bool)arg2 stateNumber:(id)arg3;
- (void)_resurrectAccessoryServer:(id)arg1;
- (void)_discoverAccessories:(id)arg1;
- (void)_tombstoneAccessoryServer:(id)arg1;
- (void)_notifyDelegatesOfTombstonedAccessoryServer:(id)arg1;
- (_Bool)_shouldAccessoryServerBeTombstoned:(id)arg1;
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1;
- (_Bool)_isAccessoryServerTombstoned:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2;
- (void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2;
- (void)_pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 setupCodeProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)_handleSetupCodeAvailable:(id)arg1;
- (void)_removeDiscoveredBridgeableAccessories:(id)arg1;
- (void)_addDiscoveredBridgeableAccessories:(id)arg1;
- (void)_removeUnpairedAccessory:(id)arg1;
- (void)_removePairingInformationForUnpairedAccessory:(id)arg1;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (void)_sendNewAccessoryData:(id)arg1 added:(_Bool)arg2;
- (void)_notifyDelegatesOfNewAccessory:(id)arg1;
- (id)_unpairedAccessoryForServer:(id)arg1;
- (id)_unpairedAccessoryWithServerIdentifier:(id)arg1;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (void)_setBTLEPowerChangeCompletionHandler;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)handleAppTermination:(id)arg1;
- (void)_registerForMessages;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)resurrectAccessoryServer:(id)arg1;
- (void)tombstoneAccessoryServer:(id)arg1;
- (void)discoverAccessories:(id)arg1;
- (void)_stopDiscoveringAccessoriesWithForce:(_Bool)arg1;
- (void)_startDiscoveringAccessories;
- (void)_startDiscoveringPairedAccessories;
- (void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (_Bool)_isBrowsingAllowed;
- (void)_startOrStopAccessoryDiscovery;
- (void)_stopBtleAccessoryReachabilityProbeTimer;
- (void)_btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)handleSetupCodeAvailable:(id)arg1;
- (void)pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 setupCodeProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)discoveredAccessoryServers;
- (void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;
- (void)removeDiscoveredBridgeableAccessories:(id)arg1;
- (void)addDiscoveredBridgeableAccessories:(id)arg1;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isBrowsingAllowed;
- (void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;
- (void)homeLocationChangeNotification:(id)arg1;
- (void)handleNoActiveSiriCommand:(id)arg1;
- (void)handleNoActiveHomeKitApp:(id)arg1;
- (void)_handleNoActiveHomeKitAppOrSiriCommand;
- (void)handleHomeKitAppInForeground:(id)arg1;
- (void)activate:(_Bool)arg1;
- (void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringPairedAccessories;
- (void)resetConfiguration;
- (void)deregisterPairedAccessory:(id)arg1;
- (void)registerPairedAccessory:(id)arg1 btleTransport:(_Bool)arg2;
- (id)unpairedAccessoryWithUUID:(id)arg1;
- (id)allUnpairedAccessories;
- (void)dealloc;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)configureBTLEQoSLimits:(unsigned long long)arg1;
- (void)configureAccessory:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(_Bool)arg3;
- (void)configureWithHomeManager:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

