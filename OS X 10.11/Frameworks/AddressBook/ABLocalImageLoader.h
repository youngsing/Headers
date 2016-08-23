//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABLocalImageLoader : NSObject
{
    NSString *_imagesFolder;
}

- (struct CGRect)cropRectForPath:(id)arg1;
- (BOOL)shouldLogPaths;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)largePhotoPathForIdentifier:(id)arg1;
- (id)thumbnailPhotoPathForIdentifier:(id)arg1;
- (id)photoWithPath:(id)arg1 cropRect:(struct CGRect)arg2 identifier:(id)arg3;
- (id)largePhotoForIdentifier:(id)arg1;
- (id)thumbnailPhotoForIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithImagesFolder:(id)arg1;

@end

