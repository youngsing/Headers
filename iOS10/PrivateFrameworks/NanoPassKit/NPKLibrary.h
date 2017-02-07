//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKGizmoClientProtocol-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NPKLibrary : NSObject <NPKGizmoClientProtocol>
{
    NSObject<OS_dispatch_semaphore> *_connectionSemaphore;
    NSXPCConnection *_xpcConnection;
    NSDate *_dateOfLastInvalidation;
    int _invalidationOccurrences;
    _Bool _disabled;
    _Bool _noPassesInDaemon;
    int _updatePassDescriptionsFailureCount;
    _Bool _needsRelevancyInformation;
    _Bool _updatingPassDescriptions;
    _Bool _needsUpdatePassDescriptions;
    _Bool _initialLoadComplete;
    _Bool _serverHasPasses;
    _Bool _serverHasPotentiallyRelevantPasses;
    _Bool _disableCaching;
    NSArray *_passDescriptions;
    NSMutableDictionary *_preferredPaymentApplicationsCache;
    NSMutableDictionary *_passCache;
    NSObject<OS_dispatch_queue> *_passesQueue;
    NSArray *_lastSeenRelevantPassTuples;
    NSTimer *_passLibraryChangedCoalescingTimer;
    NSMutableArray *_workToPerformAfterInitialLoad;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool disableCaching; // @synthesize disableCaching=_disableCaching;
@property _Bool serverHasPotentiallyRelevantPasses; // @synthesize serverHasPotentiallyRelevantPasses=_serverHasPotentiallyRelevantPasses;
@property _Bool serverHasPasses; // @synthesize serverHasPasses=_serverHasPasses;
@property(retain, nonatomic) NSMutableArray *workToPerformAfterInitialLoad; // @synthesize workToPerformAfterInitialLoad=_workToPerformAfterInitialLoad;
@property(nonatomic) _Bool initialLoadComplete; // @synthesize initialLoadComplete=_initialLoadComplete;
@property(retain, nonatomic) NSTimer *passLibraryChangedCoalescingTimer; // @synthesize passLibraryChangedCoalescingTimer=_passLibraryChangedCoalescingTimer;
@property(nonatomic) _Bool needsUpdatePassDescriptions; // @synthesize needsUpdatePassDescriptions=_needsUpdatePassDescriptions;
@property(nonatomic) _Bool updatingPassDescriptions; // @synthesize updatingPassDescriptions=_updatingPassDescriptions;
@property(retain, nonatomic) NSArray *lastSeenRelevantPassTuples; // @synthesize lastSeenRelevantPassTuples=_lastSeenRelevantPassTuples;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *passesQueue; // @synthesize passesQueue=_passesQueue;
@property(retain, nonatomic) NSMutableDictionary *passCache; // @synthesize passCache=_passCache;
@property(retain, nonatomic) NSMutableDictionary *preferredPaymentApplicationsCache; // @synthesize preferredPaymentApplicationsCache=_preferredPaymentApplicationsCache;
@property(retain, nonatomic) NSArray *passDescriptions; // @synthesize passDescriptions=_passDescriptions;
@property(nonatomic) _Bool needsRelevancyInformation; // @synthesize needsRelevancyInformation=_needsRelevancyInformation;
- (void).cxx_destruct;
- (void)handleRelevancyCheckCompletedNotification:(id)arg1;
- (void)handleRelevancyPotentialChangedNotification:(id)arg1;
- (void)handleRelevantPassTuplesChanged:(id)arg1;
- (void)handleRelevantPassTuplesChangedNotification:(id)arg1;
- (void)handlePassLibraryChangedNotification:(id)arg1;
- (void)markAsHavingReceivedLocation;
- (void)performWorkAfterFirstLibraryLoad:(CDUnknownBlockType)arg1;
- (void)boostDaemonUntilPassDBAvailable:(CDUnknownBlockType)arg1;
@property(readonly) NSXPCConnection *xpcConnection; // @dynamic xpcConnection;
- (void)_tearDownConnectionBecauseOfInvalidation;
- (void)_updateRelevantPassIDs;
- (void)_updatePassDescriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePassDescriptions;
- (id)_descriptionsWithFilter:(CDUnknownBlockType)arg1;
- (void)noteWebServiceUpdateNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleEndedServiceModeRequest;
- (void)handleAddedValue:(id)arg1 forPassUniqueID:(id)arg2;
- (void)processFelicaTransitAppletState:(id)arg1 forPassUniqueID:(id)arg2;
- (void)processFelicaTransitHistory:(id)arg1 forPaymentApplication:(id)arg2 withPassUniqueIdentifier:(id)arg3 transactionDate:(id)arg4;
- (void)handlePaymentTransactions:(id)arg1 forPassUniqueIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleValueAddedServiceTransactions:(id)arg1 forPassUniqueIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSecureElementIdentifiers:(CDUnknownBlockType)arg1;
- (void)setExpressTransitUniqueID:(id)arg1 applicationIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSharedWebServiceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSharedWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDeviceHasAnyPaymentPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deletePassWithID:(id)arg1;
- (void)getDiffForPassWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getPassWithID:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)getPassWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)cachedPassWithID:(id)arg1;
@property(readonly, nonatomic) NSArray *nfcPassDescriptions;
@property(readonly, nonatomic) NSArray *nonPaymentPassDescriptions; // @dynamic nonPaymentPassDescriptions;
@property(readonly, nonatomic) NSArray *inAppPaymentPassDescriptions;
@property(readonly, nonatomic) NSArray *contactlessPaymentPassDescriptions;
@property(readonly, nonatomic) NSArray *paymentPassDescriptions; // @dynamic paymentPassDescriptions;
@property(readonly, nonatomic) NSArray *relevantPassTuples;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
