//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVNowPlayingInfoPanelItemList.h>

@protocol AVNowPlayingInfoPanelFilmStripDelegate;

__attribute__((visibility("hidden")))
@interface AVNowPlayingInfoPanelFilmStrip : AVNowPlayingInfoPanelItemList
{
    struct CGSize _displayImageSize;
    id <AVNowPlayingInfoPanelFilmStripDelegate> _filmStripDelegate;
    struct CGSize _aspectRatio;
}

+ (double)desiredCellWidth;
+ (double)spaceBetweenItems;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak id <AVNowPlayingInfoPanelFilmStripDelegate> filmStripDelegate; // @synthesize filmStripDelegate=_filmStripDelegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)preferredContentSize;
- (unsigned long long)numberOfItems;
- (void)reloadFilmStripFramesRange:(struct _NSRange)arg1;
- (void)reloadFilmStripFrames;
- (struct CGSize)displayImageSizeForIndexPath:(id)arg1;
- (struct CGSize)displaySizeOfImages;
- (struct CGSize)_displaySizeOfImage:(id)arg1;
- (struct CGSize)_displaySizeForSize:(struct CGSize)arg1;
- (id)titleForIndexPath:(id)arg1;
- (id)imageProxyForIndexPath:(id)arg1;
- (id)imageForIndexPath:(id)arg1;
- (unsigned long long)numberOfFrames;
- (id)initWithIdentifier:(id)arg1;

@end
