//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_tcp_listener;

@interface BridgeXPCListener : NSObject
{
    NSObject<OS_dispatch_queue> *internal_queue;
    NSObject<OS_tcp_listener> *listener;
    unsigned long long BridgeXPCListenerState;
    unsigned long long state;
    unsigned long long BridgeXPCListenerType;
    unsigned long long listener_type;
    _Bool eos_notifications_registered;
    CDUnknownBlockType eventHandler;
    NSObject<OS_dispatch_queue> *targetQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)accept:(id)arg1;
- (void)activate;
- (void)initEOSDeviceNotifications;
- (void)setupQueues;
- (id)initWithEOSPortNumber:(unsigned int)arg1;
- (id)initWithPortNumber:(unsigned int)arg1;
- (id)initWithEOSService:(unsigned int)arg1;
- (id)initWithLaunchdSockets:(id)arg1;
- (id)initWithEOSEntitlement:(_Bool)arg1;

@end
