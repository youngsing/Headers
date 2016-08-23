//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSRecursiveLock, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation, PFUbiquitySaveSnapshot;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLog : NSObject
{
    NSMutableDictionary *_contents;
    int _transactionLogType;
    BOOL _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    BOOL _inTemporaryLocation;
    BOOL _inStagingLocation;
    BOOL _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    BOOL _loadUsingRetry;
    BOOL _loadedComparisonMetadata;
    BOOL _loadedImportMetadata;
    BOOL _loadedInsertedObjectData;
    BOOL _loadedUpdatedObjectData;
    BOOL _loadedDeletedObjectData;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}

+ (void)updateModificationTimesForLocation:(id)arg1;
+ (id)generateTransactionLogFilename;
+ (int)transactionLogTypeFromLocation:(id)arg1;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (id)transactionLogFilenameUUID;
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id *)arg2;
+ (void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL loadedDeletedObjectData; // @synthesize loadedDeletedObjectData=_loadedDeletedObjectData;
@property(readonly, nonatomic) BOOL loadedUpdatedObjectData; // @synthesize loadedUpdatedObjectData=_loadedUpdatedObjectData;
@property(readonly, nonatomic) BOOL loadedInsertedObjectData; // @synthesize loadedInsertedObjectData=_loadedInsertedObjectData;
@property(readonly, nonatomic) BOOL loadedImportMetadata; // @synthesize loadedImportMetadata=_loadedImportMetadata;
@property(readonly, nonatomic) BOOL loadedComparisonMetadata; // @synthesize loadedComparisonMetadata=_loadedComparisonMetadata;
@property(nonatomic) BOOL loadUsingRetry; // @synthesize loadUsingRetry=_loadUsingRetry;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector; // @synthesize knowledgeVector=_knowledgeVector;
@property(readonly, nonatomic) int transactionLogType; // @synthesize transactionLogType=_transactionLogType;
@property(readonly, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation; // @synthesize temporaryTransactionLogLocation=_temporaryTransactionLogLocation;
@property(readonly, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation; // @synthesize stagingTransactionLogLocation=_stagingTransactionLogLocation;
@property(readonly, nonatomic) PFUbiquityLocation *transactionLogLocation; // @synthesize transactionLogLocation=_transactionLogLocation;
@property(readonly, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot; // @synthesize saveSnapshot=_saveSnapshot;
@property(readonly, nonatomic) NSString *fileProtectionOption; // @synthesize fileProtectionOption=_fileProtectionOption;
@property(readonly, nonatomic) BOOL inStagingLocation; // @synthesize inStagingLocation=_inStagingLocation;
@property(readonly, nonatomic) BOOL inPermanentLocation; // @synthesize inPermanentLocation=_inPermanentLocation;
@property(readonly, nonatomic) BOOL inTemporaryLocation; // @synthesize inTemporaryLocation=_inTemporaryLocation;
@property(nonatomic) BOOL useTemporaryLogLocation; // @synthesize useTemporaryLogLocation=_useTemporaryLogLocation;
- (void)populateContents;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;
- (BOOL)rewriteToDiskWithError:(id *)arg1;
- (BOOL)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id *)arg3;
- (BOOL)writeToDiskWithError:(id *)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;
- (BOOL)moveFileToPermanentLocationWithError:(id *)arg1;
- (BOOL)deleteLogFileWithError:(id *)arg1;
- (void)cleanupExternalDataReferences;
- (id)loadPlistAtLocation:(id)arg1 withError:(id *)arg2;
- (BOOL)loadDeletedObjectsDataWithError:(id *)arg1;
- (BOOL)loadUpdatedObjectsDataWithError:(id *)arg1;
- (BOOL)loadInsertedObjectsDataWithError:(id *)arg1;
- (BOOL)loadImportMetadataWithError:(id *)arg1;
- (BOOL)loadComparisonMetadataWithError:(id *)arg1;
- (BOOL)loadContents:(id *)arg1;
- (BOOL)releaseContents:(id *)arg1;
- (void)releaseDeletedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseInsertedObjects;
@property(readonly, nonatomic) NSNumber *transactionNumber;
@property(readonly, nonatomic) PFUbiquityLocation *currentLocation;
@property(readonly, nonatomic) NSString *transactionLogFilename;
@property(readonly, nonatomic) NSString *modelVersionHash;
@property(readonly, nonatomic) NSString *exportingPeerID;
@property(readonly, nonatomic) NSString *storeName;
- (id)description;
- (void)dealloc;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (id)init;

@end

