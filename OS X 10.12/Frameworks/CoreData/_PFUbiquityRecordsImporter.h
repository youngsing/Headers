//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSManagedObjectContextFaultingDelegate-Protocol.h>
#import <CoreData/PFUbiquityBaselineRecoveryOperationDelegate-Protocol.h>
#import <CoreData/PFUbiquityBaselineRollOperationDelegate-Protocol.h>
#import <CoreData/PFUbiquityBaselineRollResponseOperationDelegate-Protocol.h>
#import <CoreData/_PFUbiquityRecordImportOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSPersistentStore, NSPersistentStoreCoordinator, NSRecursiveLock, NSSQLCore, NSString, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate>
{
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    PFUbiquitySwitchboardCacheWrapper *_sideLoadCacheWrapper;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    NSRecursiveLock *_schedulingLock;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    unsigned long long _numPendingNotifications;
    NSMutableDictionary *_pendingNotificationUserInfo;
    BOOL _allowBaselineRoll;
    unsigned long long _pendingImportOperationsCount;
}

+ (void)afterDelay:(double)arg1 executeBlockOnRootQueue:(CDUnknownBlockType)arg2;
+ (void)executeBlockOnRootQueue:(CDUnknownBlockType)arg1;
+ (id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
+ (id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id *)arg4;
+ (id)createPrivateCoordinatorForStore:(id)arg1 error:(id *)arg2;
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *privatePSC; // @synthesize privatePSC=_privatePSC;
@property(readonly, nonatomic) NSPersistentStore *privateStore; // @synthesize privateStore=_privateStore;
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *sideLoadCacheWrapper; // @synthesize sideLoadCacheWrapper=_sideLoadCacheWrapper;
@property(readonly, nonatomic) PFUbiquityRecordsImporterSchedulingContext *schedulingContext; // @synthesize schedulingContext=_schedulingContext;
@property BOOL allowBaselineRoll; // @synthesize allowBaselineRoll=_allowBaselineRoll;
@property BOOL importOnlyActiveStores; // @synthesize importOnlyActiveStores=_importOnlyActiveStores;
@property BOOL throttleNotifications; // @synthesize throttleNotifications=_throttleNotifications;
@property(readonly, nonatomic) NSRecursiveLock *schedulingLock; // @synthesize schedulingLock=_schedulingLock;
@property NSObject<OS_dispatch_source> *logRestartTimer; // @synthesize logRestartTimer=_logRestartTimer;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly) BOOL isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(readonly) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly) NSOperationQueue *importQueue; // @synthesize importQueue=_importQueue;
- (void)executeBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)metadataInconsistencyDetectedForStore:(id)arg1;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1;
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1;
- (void)requestBaselineRollForStore:(id)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2;
- (void)scheduleRecoveryTimer;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2;
- (BOOL)shouldThrottleNotificationsWithOperation:(id)arg1;
- (BOOL)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id *)arg2;
- (BOOL)discoverAndImportAllAvailableLogs:(BOOL)arg1 error:(id *)arg2;
- (BOOL)schedulePendingLogs:(BOOL)arg1 error:(id *)arg2;
- (void)tearDown;
- (BOOL)startMonitor:(id *)arg1;
- (BOOL)scheduleTransactionLogOperations:(id)arg1 synchronous:(BOOL)arg2 error:(id *)arg3;
- (BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id *)arg2;
- (BOOL)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (BOOL)isPeerForked:(id)arg1 andLocalKV:(id)arg2;
- (id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(BOOL)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
