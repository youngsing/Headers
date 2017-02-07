//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLPlatformImplementation-Protocol.h>

@class NSDate, NSError;

@protocol CPLEngineSchedulerImplementation <CPLPlatformImplementation, CPLEngineComponent>
- (void)noteSyncSessionFailedWithError:(NSError *)arg1;
- (void)noteSyncSessionSucceeded;
- (void)noteServerHasChanges;
- (void)notePullQueueIsFull;
- (void)notePushQueueIsFull;
- (void)notePushQueueIsEmpty;
- (void)unscheduleNextSyncSession;
- (void)scheduleNextSyncSessionAtDate:(NSDate *)arg1;
- (BOOL)shouldStartSyncSessionFromState:(unsigned long long)arg1;
@end
