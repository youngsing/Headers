//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFWallpaper, NSArray, UIImage;

@protocol HFNamedWallpaperSource <NSObject>
- (UIImage *)imageForWallpaper:(HFWallpaper *)arg1;
- (HFWallpaper *)defaultWallpaperForCollection:(long long)arg1;
- (NSArray *)allWallpapersForCollection:(long long)arg1;
@end
