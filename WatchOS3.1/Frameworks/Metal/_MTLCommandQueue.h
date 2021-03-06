//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, _MTLDevice;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MTLCommandQueue : NSObject
{
    _MTLDevice *_dev;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t _pendingQueueLock;
    struct _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    NSString *_label;
    int _backgroundTrackingPID;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _Bool _profilingEnabled;
    _Bool _StatEnabled;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _numCommandBuffers;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _listIndex;
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosClass;
    long long _qosRelativePriority;
    _Bool _executionEnabled;
    _Bool _skipRender;
    _Bool _openGLQueue;
}

@property(readonly) _Bool isOpenGLQueue; // @synthesize isOpenGLQueue=_openGLQueue;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property int backgroundTrackingPID; // @synthesize backgroundTrackingPID=_backgroundTrackingPID;
@property _Bool executionEnabled; // @synthesize executionEnabled=_executionEnabled;
@property(readonly) long long qosRelativePriority; // @synthesize qosRelativePriority=_qosRelativePriority;
@property(readonly) unsigned long long qosClass; // @synthesize qosClass=_qosClass;
@property(readonly) unsigned long long maxCommandBufferCount; // @synthesize maxCommandBufferCount=_maxCommandBufferCount;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
@property(nonatomic) unsigned long long numCommandBuffers; // @synthesize numCommandBuffers=_numCommandBuffers;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations; // @synthesize StatLocations=_StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions; // @synthesize StatOptions=_StatOptions;
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property(getter=isProfilingEnabled) _Bool profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property _Bool skipRender; // @synthesize skipRender=_skipRender;
@property(copy) NSString *label; // @synthesize label=_label;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (unsigned long long)getAndIncrementNumCommandBuffers;
- (void)addPerfSampleHandler:(CDUnknownBlockType)arg1;
- (int)requestCounters:(id)arg1;
- (void)availableCounters;
- (void)insertDebugCaptureBoundary;
- (void)finish;
- (void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4;
- (void)commitCommandBuffer:(id)arg1 wake:(_Bool)arg2;
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;
- (void)completeCommandBuffers:(id *)arg1 count:(unsigned long long)arg2;
- (void)_submitAvailableCommandBuffers;
- (void)enqueueCommandBuffer:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setSubmissionQueue:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;

@end

