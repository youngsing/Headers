//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFSession;
@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    NFSession *_internalSession;
}

+ (id)startReaderSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (id)startInAppSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)performBlockSyncOnInternalSession:(CDUnknownBlockType)arg1;
- (void)performBlockAsyncOnInternalSession:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long lifecycleState;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateSession;
- (id)initWithInternalSession:(id)arg1;

@end

