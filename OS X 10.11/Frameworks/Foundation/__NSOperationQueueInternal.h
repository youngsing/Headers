//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject
{
    struct _opaque_pthread_mutex_t __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    struct dispatch_queue_s *__pending_barrier;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __unused2;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    BOOL __propertyQOS;
    struct dispatch_queue_s *__dispatch_queue;
    char __nameBuffer[160];
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end
