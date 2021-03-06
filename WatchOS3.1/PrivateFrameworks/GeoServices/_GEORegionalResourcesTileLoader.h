//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEORegionalResourceTileData, GEOResourceLoader, GEOResourceManifestConfiguration, NSLock;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesTileLoader : NSObject
{
    GEORegionalResourceTileData *_tile;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceLoader *_resourceLoader;
    NSLock *_lock;
}

- (void)cancel;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey *)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end

