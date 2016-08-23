//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABMetadataManager-Protocol.h>

@class ABMetadataIgnoredDirectories, ABMetadataInfoFile, ABProcessSharedLock, CNWeakReference, NSMutableDictionary, NSOperationQueue, NSString;

@interface ABMetadataOperationController : NSObject <ABMetadataManager>
{
    ABProcessSharedLock *_metadataSharedLock;
    NSString *_metadataDirectory;
    ABMetadataInfoFile *_infoFile;
    CNWeakReference *_weakAddressBook;
    NSOperationQueue *_queue;
    unsigned long long _suspended;
    NSMutableDictionary *_delinquentRecords;
    ABMetadataIgnoredDirectories *_ignoredDirectories;
}

+ (BOOL)waitUntilAllOperationsAreFinishedWithTimeout:(double)arg1;
+ (void)waitUntilAllOperationsAreFinished;
+ (void)cancelAllOperations;
+ (id)operationQueue;
+ (id)sharedInstanceForAddressBook:(id)arg1;
+ (id)futureSharedInstanceForAddressBook:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void)mdlog:(id)arg1 action:(id)arg2;
- (void)manageMetadataForRecords:(id)arg1 action:(int)arg2;
- (BOOL)shouldIgnoreUpdates;
- (void)runIgnoringUpdates:(CDUnknownBlockType)arg1;
- (id)addressBook;
- (void)waitForThreadsToFinishWithTimeout:(double)arg1;
- (void)waitForThreadsToFinish;
- (void)addOperation:(id)arg1;
- (BOOL)isSuspended;
- (void)setSuspended:(BOOL)arg1;
- (void)stopImmediately;
- (BOOL)nts_RestoreFromMetaDataAndTriggerSync:(BOOL)arg1;
- (BOOL)nts_RestoreFromMetaData;
- (BOOL)restoreFromMetaData;
- (void)stateOfTheMetadata;
- (void)validateAllMetaDataForceRebuild:(BOOL)arg1;
- (void)wipeMetaDataDirectory;
- (void)reportDelinquentUIDs:(id)arg1 forJobType:(int)arg2;
- (void)writeMetadata:(id)arg1 toURL:(id)arg2;
- (void)removeMetadataForRecordWithUniqueId:(id)arg1 quantumBaseURLs:(id)arg2;
- (void)markViewedForRecord:(id)arg1 tryAgain:(BOOL)arg2;
- (void)stamp;
- (void)setLastChangeCount:(long long)arg1;
- (long long)lastChangeCount;
- (BOOL)isRunning;
- (void)validateMetaDataIfNeeded;
- (void)resetMetaData;
- (id)viewedDateForPerson:(id)arg1;
- (id)viewedDateForRecordWithUniqueId:(id)arg1;
- (void)markPersonWithUniqueIdAsViewed:(id)arg1;
- (void)markPersonAsViewed:(id)arg1;
- (void)markPersonWithUniqueIdAsViewed:(id)arg1 secondTry:(BOOL)arg2;
- (void)processRecords:(id)arg1;
- (BOOL)hasRecordsInMetaDataCache;
- (void)addUniqueIdsMissingFromSet:(id)arg1 toArray:(id)arg2 forClass:(Class)arg3 prefetch:(BOOL)arg4 inAddressBook:(id)arg5;
- (void)completed:(id)arg1 forType:(int)arg2;
- (void)planToComplete:(id)arg1 forType:(int)arg2;
- (void)removeDuplicates:(id)arg1;
- (void)removeDuplicatesForType:(int)arg1;
- (id)opsForType:(int)arg1;
- (id)keyForType:(long long)arg1;
- (void)unlockInfo;
- (void)writeOutInfo;
- (BOOL)lockInfo;
- (void)postpone;
- (void)_postpone;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 ignoredDirectories:(id)arg2;
- (id)initWithAddressBook:(id)arg1;
- (id)currentChecksumForDatabase;
- (id)currentChecksumForDirectory:(id)arg1;
- (id)metaDataCachePathForUID:(id)arg1;
- (id)metaDataCacheFilenameForUID:(id)arg1;
- (id)metaDataCacheDirectory;
- (id)metaDataLockFileProxy;
- (id)metaDataLockFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

