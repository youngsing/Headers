//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapSnapshotOptions, VKMapSnapshotCreator;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject
{
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    VKMapSnapshotCreator *_lodpiSnapshotCreator;
    VKMapSnapshotCreator *_hidpiSnapshotCreator;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_performSnapshot;
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_cleanupSnapshotCreator;
- (void)_cancel;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;

@end

