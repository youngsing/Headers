//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, PLPhotoTileViewController;

@protocol PUPresentingPhotoBrowserController <NSObject>

@optional
@property(readonly, nonatomic) PLPhotoTileViewController *currentTile;
@property(nonatomic) PHAsset *currentAsset;
- (void)updateOverlaysAnimated:(_Bool)arg1;
@end

