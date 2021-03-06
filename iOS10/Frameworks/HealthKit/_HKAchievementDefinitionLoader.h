//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _HKMobileAssetDownloadManager;
@protocol OS_dispatch_queue;

@interface _HKAchievementDefinitionLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _externalDefinitionsChangedNotificationCount;
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSDictionary *_allDefinitionsByIdentifier;
    NSDictionary *_builtinDefinitionsByIdentifier;
    NSDictionary *_remoteDefinitionsByIdentifier;
    NSDictionary *_injectedTestDefinitionsByIdentifier;
    NSDictionary *_resourcesPathURLsByIdentifier;
    NSDictionary *_stickersPathURLsByIdentifier;
}

+ (id)_definitionIdentifiersFromAssets:(id)arg1;
+ (id)_assetsGroupedByDefinitionIdentifier:(id)arg1;
+ (id)_achievementAssetPathURLsByIdentifier:(id)arg1;
+ (id)_loadAchievementDefinitionsFromAsset:(id)arg1;
+ (void)_getNewestAsset:(id *)arg1 olderAssets:(id *)arg2 installedOnly:(_Bool)arg3 fromAssets:(id)arg4;
+ (void)_getDefinitionsAsset:(id *)arg1 resourcesAssets:(id *)arg2 stickersAssets:(id *)arg3 installedOnly:(_Bool)arg4 fromCombinedAssets:(id)arg5;
+ (_Bool)_loadsRemoteDefinitions;
+ (void)_setLoadsRemoteDefinitions:(_Bool)arg1;
+ (void)_loadLoadsRemoteDefinitions;
+ (id)serverURLWithError:(id *)arg1;
+ (void)setServerURL:(id)arg1;
+ (id)_findAchievementAssetsToDownload:(id *)arg1 remove:(id *)arg2 installed:(id *)arg3 amongAssets:(id)arg4 definitions:(id)arg5 withFilterBlock:(CDUnknownBlockType)arg6;
+ (void)initialize;
+ (id)sharedLoader;
- (void).cxx_destruct;
- (id)_achievementDefinitionsByIdentifier;
- (void)_achievementAssetsDidChangeWithAssets:(id)arg1 postDarwinNotification:(_Bool)arg2;
- (id)_allAchievementStickersPredicate;
- (id)_allAchievementResourcesPredicate;
- (id)_definitionsPlistPredicate;
- (id)_compatibilityVersionPredicate;
- (void)_stickerAvailabilityDidChange;
- (void)_clearInjectedDefinitionsForTesting;
- (void)_injectDefinitionsForTesting:(id)arg1;
- (void)_fetchCurrentAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_updateStickerAvailabilityWithDownloadedAssets:(id)arg1 usingFilter:(id)arg2;
- (void)updateAchievementStickersAssetsRemovingExpired:(_Bool)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAchievementResourcesAssetsRemovingExpired:(_Bool)arg1 withFilter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDefinitionsAssetWithCompletion:(CDUnknownBlockType)arg1;
- (id)stickersBundleForIdentifier:(id)arg1;
- (id)resourcesBundleForIdentifier:(id)arg1;
- (_Bool)isDefinitionWithIdentifierLoaded:(id)arg1;
- (id)allRemotelyDefinedDefinitionIdentifiers;
- (id)loadedRemotelyDefinedDefinitionIdentifiers;
- (_Bool)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (_Bool)isDefinitionWithIdentifierRemotelyDefined:(id)arg1;
- (id)achievementDefinitionForIdentifier:(id)arg1;
- (id)allAchievementDefinitionIdentifiers;
- (id)allAchievementDefinitions;
- (void)_queue_clearCaches;
- (void)_clearCaches;
- (void)_achievementDefinitionsChangedExternally;
- (id)init;

@end

