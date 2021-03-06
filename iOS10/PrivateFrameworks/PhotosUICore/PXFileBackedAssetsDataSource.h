//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSDictionary, _PXFileBackedAssetCollection;

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource
{
    _PXFileBackedAssetCollection *_assetCollection;
    NSDictionary *_assetCollectionBySection;
    NSDictionary *_fileURLsBySection;
}

@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithFileURLsBySection:(id)arg1;

@end

