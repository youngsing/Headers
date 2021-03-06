//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSService : NSObject
{
    int _canceled;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_responseListener;
    NSObject<OS_xpc_object> *_responseHandler;
}

- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;
- (_Bool)_unitTestsAreEnabled;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)_shouldSimulate;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id *)arg4;
- (id)_createMessageForService:(id)arg1 arguments:(id)arg2 index:(long long *)arg3;
- (void)_registerConnection:(id)arg1 onQueue:(id)arg2;
- (void)setupResponseConnectionOnQueue:(id)arg1;
- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;
- (void)responseConnection:(id)arg1 handleError:(id)arg2;
@property(readonly, getter=isCanceled) _Bool canceled;
- (void)cancel;
- (void)stop;
- (void)start;
- (id)_connection;
- (id)_createServiceOnQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

