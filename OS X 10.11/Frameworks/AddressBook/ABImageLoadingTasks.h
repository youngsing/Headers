//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ABImageLoadingTasks : NSObject
{
}

+ (id)gravatarImageLoaderTaskWithRequest:(id)arg1;
+ (id)directoryServicesImageTaskWithRequest:(id)arg1;
+ (id)libraryDirectoryImageTaskWithRequest:(id)arg1;
+ (id)remoteImageTaskWithRequest:(id)arg1;
+ (id)imageIdentifiersForRequest:(id)arg1;
+ (id)localLargeImageTaskWithRequest:(id)arg1;
+ (id)localThumbnailImageTaskWithRequest:(id)arg1;
+ (id)imageLoadingTaskForPerson:(id)arg1 emails:(id)arg2;
+ (id)imageTaskWithRequest:(id)arg1;

@end

