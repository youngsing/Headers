//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABSyncManager : NSObject
{
}

+ (id)toolPath;
+ (id)defaultClientID;
+ (id)clientID;
+ (id)sharedSyncManager;
- (void)_abSyncProcessDied:(id)arg1;
- (void)scheduleTrickleSyncWithOptions:(id)arg1;
- (void)scheduleTrickleSyncRetry:(unsigned long long)arg1;
- (void)scheduleTrickleSync;
- (BOOL)canExecProcesses;
- (BOOL)isSyncScheduled;
- (void)removeExisitingSyncSchedule;

@end

