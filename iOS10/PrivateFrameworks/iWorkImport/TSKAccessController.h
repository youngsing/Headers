//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray, NSMutableDictionary, TSUWeakReference;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSKAccessController : NSObject
{
    TSUWeakReference *_delegate;
    struct _opaque_pthread_rwlock_t _rwLock;
    _Bool _secondaryThreadWriting;
    _Bool _thenReadingOnMainThread;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    struct __CFRunLoopSource *_mainThreadPingSource;
    NSMutableArray *_pendingMainThreadInvocations;
    struct {
        struct _opaque_pthread_t *threadId;
        unsigned int count;
        CDStruct_2a021fcd ticketInfo;
    } _readerInfo[64];
    CDStruct_2a021fcd _mainThreadTicketInfo;
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    NSObject<OS_dispatch_semaphore> *_outstandingTicketReadLock;
    unsigned int _outstandingTicketCount;
    _Bool _writeLockHeld;
    unsigned long long _writeBlockedMainThreadCount;
    unsigned long long _mainThreadWriteCount;
}

- (void)p_willRelinquishWriteLock;
- (void)p_didAcquireWriteLock;
- (void)p_willAcquireWriteLock;
- (void)p_willRelinquishReadLock;
- (void)p_didAcquireReadLock;
- (void)p_willAcquireReadLock;
- (_Bool)currentThreadHasWriteLock;
- (void)p_signalThread:(id)arg1;
- (_Bool)p_waitWithCondition:(id)arg1 untilDate:(id)arg2;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(_Bool)arg1;
- (void)p_performReadOnMainThread:(id)arg1;
- (void)p_scheduleMainThreadRead:(id)arg1;
- (void)p_dequeueWrite;
- (void)p_enqueueWriteAndBlock;
- (id)p_threadIdentifier;
- (void)p_unblockMainThread;
- (void)p_signalMainThreadWriteComplete;
- (void)p_writeUnlock;
- (void)p_blockMainThread;
- (void)p_writeLockAndBlockMainThread:(_Bool)arg1;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (void)p_blockMainThreadForWrite;
- (void)p_readUnlockReleasingRealLock:(_Bool)arg1;
- (void)p_readUnlock;
- (_Bool)hasWrite;
- (_Bool)hasRead;
- (_Bool)p_hasWrite;
- (_Bool)p_hasRead;
- (void)p_readLockTakingRealLock:(_Bool)arg1;
- (void)p_readLock;
- (_Bool)p_isMainThread;
- (void)p_performRead:(SEL)arg1 eagerlyBlockingMainThread:(_Bool)arg2 thenWrite:(SEL)arg3 thenReadOnMainThread:(SEL)arg4 withTarget:(id)arg5 argument:(void *)arg6 passReadResultToMainThreadRead:(_Bool)arg7;
- (void)performReadAllowingOverlappingImplicitRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void *)arg5 passReadResultToMainThreadRead:(_Bool)arg6;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void *)arg5 passReadResultToMainThreadRead:(_Bool)arg6;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void *)arg5;
- (void)performRead:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(void *)arg4;
- (void)performWrite:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (void)performWrite:(CDUnknownBlockType)arg1 blockMainThread:(_Bool)arg2;
- (void)performWrite:(CDUnknownBlockType)arg1;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3 argument2:(void *)arg4;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (CDStruct_2f1ac7ad *)p_ticketInfoForCurrentThread;
- (CDStruct_2f1ac7ad *)p_ticketInfoForTicket:(id)arg1;
- (void)p_finishReadForTicketInfo:(CDStruct_2f1ac7ad *)arg1;
- (void)i_finishReadForTicket:(id)arg1;
- (void)i_startReadForTicket:(id)arg1;
- (void)performReadWithTicket:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performReadGrantingTicket:(CDUnknownBlockType)arg1;
- (void)performRead:(CDUnknownBlockType)arg1;
- (void)spinMainThreadRunLoopUntil:(SEL)arg1 onTarget:(id)arg2;
- (void)signalIdentifier:(id)arg1;
- (_Bool)waitOnIdentifier:(id)arg1 untilDate:(id)arg2 releaseReadWhileWaiting:(_Bool)arg3;
- (void)waitOnIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

