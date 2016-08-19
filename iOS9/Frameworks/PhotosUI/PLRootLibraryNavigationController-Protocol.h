//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>
#import <PhotosUI/PLCloudFeedNavigating-Protocol.h>

@class PHAsset, PHAssetCollection, PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PLRootLibraryNavigationController <NSObject, PLCloudFeedNavigating>
- (_Bool)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1 refetchSectionsIfNeeded:(_Bool)arg2;
- (_Bool)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1;
- (_Bool)cloudFeedIsAvailableForNavigation;
- (_Bool)commentIsAvailableForNavigation:(PLCloudSharedComment *)arg1 inAsset:(PLManagedAsset *)arg2;
- (_Bool)assetIsAvailableForNavigation:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2;
- (_Bool)albumIsAvailableForNavigation:(struct NSObject *)arg1;
- (_Bool)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToComment:(PLCloudSharedComment *)arg1 forAsset:(PLManagedAsset *)arg2 animated:(_Bool)arg3;
- (void)navigateToRevealAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)navigateToAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2 animated:(_Bool)arg3;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 initiallyHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(_Bool)arg2 completion:(void (^)(UIViewController *))arg3;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(PLCloudSharedAlbum *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedWithCompletion:(void (^)(UIViewController *))arg1;
- (void)navigateToOneUpForAsset:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(_Bool)arg3;
- (void)navigateToLastYearPhotosSearchAnimated:(_Bool)arg1;
- (void)navigateToPhotosSearchAnimated:(_Bool)arg1;
- (void)navigateToPhotosContentBottomAnimated:(_Bool)arg1;
- (void)navigateToAsset:(PLManagedAsset *)arg1 animated:(_Bool)arg2;
- (void)navigateToContentMode:(int)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
@end
