//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSData, NSDictionary, NSLock, NSOperationQueue, NSString;

@interface TVSPushNotificationServer : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;
    APSConnection *_devAPSConnection;
    _Bool _tokenDone;
    _Bool _devTokenDone;
    NSData *_token;
    NSData *_devToken;
    NSLock *_listenersLock;
    NSDictionary *_listenersForTopics;
    NSOperationQueue *_notificationTypeOperationQueue;
}

+ (id)sharedInstance;
- (void)_enqueuePushNotificationTypeRequestWithURL:(id)arg1 body:(id)arg2 debugStr:(id)arg3;
- (id)publicToken;
- (id)devToken;
- (void)removePushNotificationType:(id)arg1;
- (void)addPushNotificationType:(id)arg1 withParameters:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)removeListener:(id)arg1 forTopic:(id)arg2;
- (void)addListener:(id)arg1 forTopic:(id)arg2;
- (_Bool)isDevConnected;
- (_Bool)isConnected;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)stop;
- (void)start:(_Bool)arg1;
- (id)init;
- (void)dealloc;
- (void)_updateAggregateTopics;
- (id)_aggregatedTopics;
- (void)_removeAPSDKeepAliveFile;
- (void)_touchAPSDKeepAliveFile;
- (void)_registerDeviceWithToken:(id)arg1;
- (void)_registerDeviceWithDevToken:(id)arg1;
- (void)_tellListenersATokenChanged;
- (id)_allListeners;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
