//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCModule-Protocol.h>

@class BRCAccountSession, NSString, brc_task_tracker;
@protocol OS_dispatch_queue;

@interface BRCFSWriter : NSObject <BRCModule>
{
    BRCAccountSession *_session;
    // Error parsing type: Ai, name: _suspendCount
    NSObject<OS_dispatch_queue> *_serialQueue;
    brc_task_tracker *_taskTracker;
    BOOL _isCancelled;
}

+ (BOOL)_isPathMatchIdle:(const CDStruct_177058d5 *)arg1;
@property(readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;
- (void)fixupItemsAtStartup;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(char *)arg6;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_stageCreationOfDirectory:(id)arg1;
- (id)bouncePath:(id)arg1 toPreservePathMatch:(id)arg2;
- (BOOL)bouncePathMatch:(const CDStruct_177058d5 *)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (id)_generateGentleBounceForPathMatch:(const CDStruct_177058d5 *)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
