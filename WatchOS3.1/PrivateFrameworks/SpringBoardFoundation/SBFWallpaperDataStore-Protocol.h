//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSURL, SBFWallpaperOptions, SBWallpaperImage, UIImage;

@protocol SBFWallpaperDataStore <NSObject>
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(SBFWallpaperOptions *)arg1 forVariants:(long long)arg2;
- (SBFWallpaperOptions *)wallpaperOptionsForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(long long)arg2;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (_Bool)setVideoURL:(NSURL *)arg1 forVariant:(long long)arg2;
- (NSURL *)verifiedVideoURLForVariant:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (_Bool)setWallpaperImage:(UIImage *)arg1 forVariant:(long long)arg2;
- (NSData *)wallpaperThumbnailDataForVariant:(long long)arg1;
- (UIImage *)wallpaperOriginalImageForVariant:(long long)arg1;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1;
- (SBWallpaperImage *)wallpaperImageForVariant:(long long)arg1;
@end

