//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject
{
    unsigned char __pad1[8];
    NSOperation *__outerOp;
    NSOperation *__prevOp;
    NSOperation *__nextOp;
    NSOperation *__nextPriOp;
    NSOperationQueue *__queue;
    id __dependencies;
    id __down_dependencies;
    long long __unfinished_deps;
    CDUnknownBlockType __completion;
    void *__obsInfo;
    void *__implicitObsInfo;
    long long __seqno;
    double __thread_prio;
    id __children;
    int __RC;
    int __state;
    BOOL __prio;
    unsigned char __cached_isReady;
    unsigned char __isCancelled;
    unsigned char __isBarrier;
    int __qoses;
    struct _opaque_pthread_mutex_t __wait_mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } __wait_cond;
    struct _opaque_pthread_t *__pthread;
    char *__nameBuffer;
    id __activity;
    struct pthread_override_s *__ov;
    unsigned char __pad3[0];
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void *)arg7;
- (id)_activity;
- (id)__;
- (void)_start:(id)arg1;
- (id)_dependencies;
- (void)_removeDependency:(id)arg1 outer:(id)arg2;
- (void)_addDependency:(id)arg1 outer:(id)arg2;
- (void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2;
- (void)_waitUntilFinished:(id)arg1;
- (void)_setName:(id)arg1 outer:(id)arg2;
- (id)_name;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1 outer:(id)arg2;
- (CDUnknownBlockType)_completionBlock;
- (CDUnknownBlockType)_copyCompletionBlock;
- (void)_setThreadPriority:(double)arg1 outer:(id)arg2;
- (double)_threadPriority;
- (void)_setQueuePriority:(long long)arg1 outer:(id)arg2;
- (long long)_queuePriority;
- (BOOL)_isReady;
- (BOOL)_isFinished;
- (BOOL)_isExecuting;
- (void)_cancel:(id)arg1;
- (BOOL)_isCancelled;
- (void)finalize;
- (void)dealloc;
- (void)_invalidate;
- (id)init:(id)arg1;

@end

