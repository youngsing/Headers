//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEHelper : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _incomingMessageHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_initMessage;
}

@property(readonly) NSObject<OS_xpc_object> *initMessage; // @synthesize initMessage=_initMessage;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType incomingMessageHandler; // @synthesize incomingMessageHandler=_incomingMessageHandler;
- (void).cxx_destruct;
- (void)sendRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)connection;
- (void)dealloc;
- (id)initWithDelegateClassName:(id)arg1 queue:(id)arg2;

@end

