//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface PLPhotoAnalysisServiceClient : NSObject
{
    NSURL *_libraryURL;
    NSXPCConnection *_xpcConnection;
    NSDictionary *_cachedRequestContextDictionary;
    NSObject<OS_dispatch_semaphore> *_notifySemaphore;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)dumpAnalysisStatusError:(id *)arg1;
- (void)configureXPCConnection;
- (void)setupXpcConnection;
- (id)initWithLibraryURL:(id)arg1;
- (void)notifyPhotoLibraryOpened;
- (id)initWithDatabase:(id)arg1;
- (void)invalidate;
- (id)init;
- (void)faceProcessingStatusForUserInterface:(CDUnknownBlockType)arg1;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)reclusterFacesWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)resetFaceClusteringState:(id *)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id *)arg3;
- (id)suggestedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (long long)suggestedFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceSuggestions:(id)arg2 toBeRejectedFaceSuggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)suggestedFacesForFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 error:(id *)arg6;
- (BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (id)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 error:(id *)arg2;
- (BOOL)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id *)arg3 subtitle:(id *)arg4 error:(id *)arg5;
- (BOOL)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id *)arg2 subtitle:(id *)arg3 error:(id *)arg4;
- (BOOL)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(CDUnknownBlockType)arg1;
- (BOOL)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id *)arg4;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id *)arg1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)requestInvalidatePersistentCaches:(id *)arg1;
- (BOOL)requestInvalidateTransientCaches:(id *)arg1;
- (void)requestGraphRebuildFractionCompletedWithReply:(CDUnknownBlockType)arg1;
- (id)requestGraphStatus:(id *)arg1;
- (id)requestGraphStatistic:(id *)arg1;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id *)arg2;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id *)arg3;
- (id)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id *)arg5;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id *)arg5;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestAssetsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestRelatedMomentsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestSocialGroupsForFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (id)requestAllSocialGroupsForFaceCollectionIdentifier:(id)arg1 withError:(id *)arg2;
- (id)requestSortedArrayOfFaceCollectionIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (id)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dispatchBlockWithoutBoost:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)requestContextDictionaryWithOperationId:(BOOL)arg1;
- (id)requestContextDictionary;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;

@end
