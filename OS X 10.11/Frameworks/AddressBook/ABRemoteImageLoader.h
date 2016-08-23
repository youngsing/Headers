//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface ABRemoteImageLoader : NSObject
{
    NSOperationQueue *_workQueue;
}

+ (id)personForEmailAddresses:(id)arg1;
+ (id)sharedRemoteImageLoader;
- (void)cancelLoadingImageDataForTag:(long long)arg1;
- (long long)beginLoadingImageForEmails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)beginLoadingImageForEmails:(id)arg1 forClient:(id)arg2;
- (long long)beginLoadingImageForPerson:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

