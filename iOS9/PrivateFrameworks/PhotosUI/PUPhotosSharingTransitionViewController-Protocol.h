//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotosSharingTransitionContext, UICollectionView, UICollectionViewLayout, UIView;

@protocol PUPhotosSharingTransitionViewController <NSObject>
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
- (UIView *)embeddedActivityView;
- (void)setPhotosSharingTransitionLayout:(UICollectionViewLayout *)arg1 animated:(_Bool)arg2;
- (void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1;
- (UICollectionView *)transitionCollectionView;
@end

