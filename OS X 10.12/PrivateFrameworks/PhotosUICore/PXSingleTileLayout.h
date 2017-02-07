//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@interface PXSingleTileLayout : PXTilingLayout
{
    struct CGRect _contentBounds;
    struct CGSize _preferredSize;
    struct PXTileIdentifier _tileIdentifier;
}

@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (BOOL)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)prepareLayout;
- (void)setReferenceSize:(struct CGSize)arg1;
- (id)initWithTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)init;

@end
