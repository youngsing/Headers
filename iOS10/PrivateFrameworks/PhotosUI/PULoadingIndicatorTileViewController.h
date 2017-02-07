//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

@class PUAssetViewModel, PUProgressIndicatorView;

__attribute__((visibility("hidden")))
@interface PULoadingIndicatorTileViewController : PUTileViewController
{
    _Bool __shouldShowIndeterminateActivityIndicator;
    PUAssetViewModel *_assetViewModel;
    PUProgressIndicatorView *__indicatorView;
}

+ (id)_createIndicatorView;
+ (struct CGSize)loadingIndicatorTileSize;
+ (_Bool)canShowLoadingIndicatorTileForAsset:(id)arg1;
@property(retain, nonatomic, setter=_setIndicatorView:) PUProgressIndicatorView *_indicatorView; // @synthesize _indicatorView=__indicatorView;
@property(nonatomic, setter=_setShouldShowIndeterminateActivityIndicator:) _Bool _shouldShowIndeterminateActivityIndicator; // @synthesize _shouldShowIndeterminateActivityIndicator=__shouldShowIndeterminateActivityIndicator;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)_updateIndicator;
- (void)_setShouldShowIndeterminateActivityIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)becomeReusable;

@end
