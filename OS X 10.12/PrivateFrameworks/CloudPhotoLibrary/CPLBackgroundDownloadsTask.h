//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_downloadTaskGroups;
    BOOL _shouldStop;
    NSError *_badError;
    NSError *_stopError;
    BOOL _hasResetQueue;
    unsigned long long _successfullyDownloadedResourcesCount;
    unsigned long long _failedDownloadedResourcesCount;
    unsigned long long _total;
    unsigned long long _activeDownloadTaskCount;
    unsigned long long _downloadTaskGroupsCount;
}

- (void).cxx_destruct;
- (id)description;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_updateActiveDownloadTaskCount;
- (void)_enqueueTasksLocked;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (id)_downloadTasksSortedForBatching:(id)arg1;
- (void)_finishTaskLocked;
- (id)initWithEngineLibrary:(id)arg1;

@end

