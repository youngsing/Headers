//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface __NSBundleTables : NSObject
{
    NSLock *_lock;
    NSMutableSet *_staticFrameworks;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedFrameworks;
    NSMutableDictionary *_resolvedPathToBundles;
    struct __CFDictionary *_bundleForClassMap;
}

+ (id)bundleTables;
- (id)loadedBundles;
- (id)allBundles;
- (id)allFrameworks;
- (void)setBundle:(id)arg1 forClass:(Class)arg2;
- (id)bundleForClass:(Class)arg1;
- (void)addStaticFrameworkBundles:(id)arg1;
- (void)addBundle:(id)arg1 type:(unsigned long long)arg2;
- (id)addBundle:(id)arg1 forPath:(id)arg2;
- (id)bundleForPath:(id)arg1;
- (void)removeBundle:(id)arg1 forPath:(id)arg2 type:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end
