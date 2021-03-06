//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFHTTPClientDelegate-Protocol.h>

@class HMDHTTPDevice, HMFHTTPClient, HMFNetService, NSString, NSUUID;
@protocol HMDHTTPClientMessageTransportDelegate;

@interface HMDHTTPClientMessageTransport : NSObject <HMFHTTPClientDelegate>
{
    _Bool _running;
    id <HMDHTTPClientMessageTransportDelegate> _delegate;
    NSUUID *_identifier;
    HMFNetService *_netService;
    HMDHTTPDevice *_remoteDevice;
    HMFHTTPClient *_client;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(readonly, nonatomic) HMFHTTPClient *client; // @synthesize client=_client;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) HMDHTTPDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDHTTPClientMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)clientDidBecomeUnreachable:(id)arg1;
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)sendPingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;
- (void)_receiveMessage;
- (void)_stopWithError:(id)arg1;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

