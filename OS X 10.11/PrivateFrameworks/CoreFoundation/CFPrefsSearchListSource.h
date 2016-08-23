//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource : CFPrefsSource
{
    struct __CFString *_identifier;
    struct __CFArray *_sourceList;
    struct _opaque_pthread_mutex_t *_searchListLock;
    BOOL initialized;
}

+ (void)withSuiteSearchListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 locked:(BOOL)arg3 perform:(CDUnknownBlockType)arg4;
+ (void)withSnapshotSearchList:(CDUnknownBlockType)arg1;
+ (void)withSearchListForIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 perform:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)finalize;
- (struct __CFString *)domainIdentifier;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)freeze;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (long long)generationCount;
- (long long)generationCountFromListOfSources:(id *)arg1 count:(long long)arg2;
- (void *)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (void)handleReply:(void *)arg1 toRequestNewDataMessage:(void *)arg2 onConnection:(struct _xpc_connection_s *)arg3 retryCount:(int)arg4 error:(char *)arg5;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (BOOL)synchronize;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)addCompatibilitySource;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString *)arg1;
- (void)addSuiteSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)addSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 container:(struct __CFString *)arg4;
- (void)addManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)unlock;
- (void)lock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(struct __CFString *)arg1;

@end

