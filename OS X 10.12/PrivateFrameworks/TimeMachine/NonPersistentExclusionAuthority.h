//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, ProcessEventMonitor;

@interface NonPersistentExclusionAuthority : NSObject
{
    NSLock *_exclusionLock;
    NSMutableArray *_exclusions;
    ProcessEventMonitor *_processMonitor;
}

+ (id)sharedAuthority;
- (BOOL)pathIsExcluded:(id)arg1;
- (id)_exclusionForPath:(id)arg1;
- (void)_purgeUnclaimedExclusions;
- (void)unregisterAllExclusionsForProcessID:(int)arg1;
- (void)unregisterPathExclusions:(id)arg1 forProcessID:(int)arg2;
- (void)registerPathExclusions:(id)arg1 forProcessID:(int)arg2;
- (void)dealloc;
- (id)init;

@end

