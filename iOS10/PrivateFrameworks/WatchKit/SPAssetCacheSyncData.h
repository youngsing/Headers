//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPAssetCacheAssets;

@interface SPAssetCacheSyncData : NSObject
{
    SPAssetCacheAssets *_permanentCache;
    SPAssetCacheAssets *_transientCache;
    NSString *_cacheIdentifier;
}

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(retain, nonatomic) SPAssetCacheAssets *transientCache; // @synthesize transientCache=_transientCache;
@property(retain, nonatomic) SPAssetCacheAssets *permanentCache; // @synthesize permanentCache=_permanentCache;
- (void).cxx_destruct;
- (id)init;

@end
