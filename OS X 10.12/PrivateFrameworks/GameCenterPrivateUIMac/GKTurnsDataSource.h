//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKSplittingDataSource.h>

@interface GKTurnsDataSource : GKSplittingDataSource
{
    struct NSEdgeInsets _cellMarginInsets;
}

@property(nonatomic) struct NSEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)filteredItemsForRawItems:(id)arg1;
- (void)configureDataSource;

@end
