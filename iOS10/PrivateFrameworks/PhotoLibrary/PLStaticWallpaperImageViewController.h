//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController
{
}

- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
@property(nonatomic) _Bool colorSamplingEnabled;
- (void)setWallpaperForLocations:(long long)arg1;
- (id)wallpaperImage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_wallPaperPreviewControllerForAsset:(id)arg1;
- (id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1 name:(id)arg2;
- (id)initWithUIImage:(id)arg1;

@end
