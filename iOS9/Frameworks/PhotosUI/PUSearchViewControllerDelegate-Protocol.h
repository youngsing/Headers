//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PUPhotosGridViewController, PUSearchResultDataSource, PUSearchViewController, UITraitCollection;

@protocol PUSearchViewControllerDelegate <NSObject>
- (void)searchViewControllerDidCancel:(PUSearchViewController *)arg1;
- (void)searchViewController:(PUSearchViewController *)arg1 adaptToTraitCollection:(UITraitCollection *)arg2;
- (void)searchViewController:(PUSearchViewController *)arg1 presentFromResultsViewController:(PUPhotosGridViewController *)arg2 animated:(_Bool)arg3;
- (void)searchViewController:(PUSearchViewController *)arg1 displaySearchResults:(PUSearchResultDataSource *)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(NSString *)arg4 animated:(_Bool)arg5 completion:(void (^)(void))arg6;
- (void)searchViewController:(PUSearchViewController *)arg1 displaySearchResults:(PUSearchResultDataSource *)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(NSString *)arg4 completion:(void (^)(void))arg5;
@end

