//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject
{
    id _internal;
}

+ (id)allAssets;
+ (id)allVideos;
+ (id)allPhotos;
@property(retain, nonatomic) ALAssetsFilterInternal *internal; // @synthesize internal=_internal;
- (void)_setFilter:(int)arg1;
- (int)_filter;
- (void)dealloc;
- (id)init;

@end
