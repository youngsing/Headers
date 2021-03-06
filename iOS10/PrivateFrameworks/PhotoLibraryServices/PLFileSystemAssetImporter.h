//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, PLPhotoLibrary;

@interface PLFileSystemAssetImporter : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    _Bool _hasProcessedAnyAssets;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
    NSMutableDictionary *_existingOIDsByUUID;
    unsigned long long _thumbnailBatchFetchSize;
}

+ (id)_mediaDirectoryPath;
@property(nonatomic) unsigned long long thumbnailBatchFetchSize; // @synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize;
@property(retain, nonatomic) NSMutableDictionary *existingOIDsByUUID; // @synthesize existingOIDsByUUID=_existingOIDsByUUID;
@property(retain, nonatomic) NSMutableDictionary *existingUUIDsByPath; // @synthesize existingUUIDsByPath=_existingUUIDsByPath;
@property(retain, nonatomic) NSMutableSet *existingUUIDs; // @synthesize existingUUIDs=_existingUUIDs;
- (unsigned long long)nextThumbnailIndex;
- (void)addAvailableThumbnailIndex:(unsigned long long)arg1;
- (_Bool)_setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (_Bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2;
- (_Bool)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 forceInsert:(_Bool)arg2 forceUpdate:(_Bool)arg3 fixAddedDate:(_Bool)arg4;
- (id)assetURLisInDatabase:(id)arg1;
- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

