//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, _TVCollectionView;

@protocol _TVCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (_Bool)collectionViewCanBecomeFocused:(_TVCollectionView *)arg1;
- (void)collectionView:(_TVCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(_TVCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(_TVCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end
