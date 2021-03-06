//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSIndexPath, NSString;
@protocol PUDisplayAsset, PUDisplayAssetCollection;

@interface PUAssetReference : NSObject <NSCopying>
{
    id <PUDisplayAsset> _asset;
    id <PUDisplayAssetCollection> _assetCollection;
    NSIndexPath *_indexPath;
    NSString *_dataSourceIdentifier;
}

@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) id <PUDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)init;

@end

