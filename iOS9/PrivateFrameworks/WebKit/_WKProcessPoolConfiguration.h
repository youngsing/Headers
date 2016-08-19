//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURL;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property(nonatomic) long long diskCacheSizeOverride;
@property(nonatomic) unsigned long long maximumProcessCount;
@property(copy, nonatomic) NSURL *injectedBundleURL;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
