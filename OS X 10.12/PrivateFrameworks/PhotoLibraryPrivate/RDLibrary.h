//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiClientLibrary.h>

@class NSObject, RDLibraryAppPrivateData, RDLibraryProperties;
@protocol OS_dispatch_queue;

@interface RDLibrary : LiClientLibrary
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    BOOL _suppressSearchIndexUpdates;
    unsigned long long _highestMasterIdOnOpen;
    RDLibraryProperties *_libraryProperties;
    RDLibraryAppPrivateData *_appPrivateData;
}

+ (BOOL)isLibraryKeyForCanonicalLibrary:(id)arg1;
+ (Class)appPrivateDataClass;
+ (Class)propertiesClass;
@property(nonatomic) BOOL suppressSearchIndexUpdates; // @synthesize suppressSearchIndexUpdates=_suppressSearchIndexUpdates;
@property(retain, nonatomic) RDLibraryAppPrivateData *appPrivateData; // @synthesize appPrivateData=_appPrivateData;
@property(retain, nonatomic) RDLibraryProperties *libraryProperties; // @synthesize libraryProperties=_libraryProperties;
@property unsigned long long highestMasterIdOnOpen; // @synthesize highestMasterIdOnOpen=_highestMasterIdOnOpen;
- (void).cxx_destruct;
- (unsigned short)clientImportedByType;
- (BOOL)isLibraryForKey:(id)arg1;
- (BOOL)isSharedPhotoStreamLibrary;
- (BOOL)isSystemLibrary;
- (id)backgroundQueue;
- (void)close;
- (id)libraryRepairer;
- (id)libraryUpgrader;
- (void)setupPreUpgradeProperties;
- (id)initAsWellKnownClient:(unsigned char)arg1;
- (id)initAsWellKnownClient:(unsigned char)arg1 withLibrarySchema:(id)arg2;
- (id)volumeTable;
- (id)versionAnalysisStateTable;
- (id)versionTable;
- (id)sceneInVersionTable;
- (id)placeForVersionTable;
- (id)placeTable;
- (id)personTable;
- (id)momentYearTable;
- (id)momentCollectionTable;
- (id)momentTable;
- (id)modelResourceTable;
- (id)memoryRepresentativeVersionTable;
- (id)memoryMovieVersionTable;
- (id)memoryCuratedVersionTable;
- (id)memoryTable;
- (id)masterTable;
- (id)keywordForVersionTable;
- (id)keywordTable;
- (id)importGroupTable;
- (id)imageProxyStateTable;
- (id)imageMaskTable;
- (id)folderTable;
- (id)facePrintTable;
- (id)faceGroupFaceTable;
- (id)faceGroupTable;
- (id)faceTable;
- (id)customSortEntryTable;
- (id)cloudResourceTable;
- (id)bookmarkTable;
- (id)attachmentTable;
- (id)albumVersionTable;
- (id)albumTable;
- (id)adminDataTable;
- (id)adjustmentDataTable;

@end
