//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface QTKitServerController : NSObject
{
    long long _serverUseCount;
    struct _opaque_pthread_mutex_t _serverLifespanLock;
    double _serverKillGracePeriod;
    NSTimer *_serverKillGracePeriodTimer;
    BOOL _logServerLifespan;
    BOOL _logServerUseCount;
    struct __CFDictionary *_objectList;
    int _objectListLock;
    unsigned int _serverPort;
    int _serverPortListLock;
    struct dispatch_queue_s *_serverQueue;
    struct _xpc_connection_s *_serverConnection;
    unsigned int _delegatePort;
    unsigned int _notifierPort;
    struct _opaque_pthread_t *_delegateThread;
    struct _opaque_pthread_t *_notifierThread;
    struct __CFRunLoop *_delegateRunloop;
    struct __CFRunLoop *_notifierRunloop;
}

+ (id)sharedServerController;
+ (void)initialize;
- (void)_postServerDiedNotification:(id)arg1;
- (struct __CFRunLoop *)notificationRunLoop;
- (void)setNotificationRunLoop:(struct __CFRunLoop *)arg1;
- (struct __CFRunLoop *)delegateRunLoop;
- (void)setDelegateRunLoop:(struct __CFRunLoop *)arg1;
- (struct _opaque_pthread_t *)notificationThreadID;
- (void)setNotificationThread:(struct _opaque_pthread_t *)arg1;
- (struct _opaque_pthread_t *)delegateThreadID;
- (void)setDelegateThread:(struct _opaque_pthread_t *)arg1;
- (unsigned int)notifierPort;
- (void)setNotificationPort:(unsigned int)arg1;
- (unsigned int)delegatePort;
- (void)setDelegatePort:(unsigned int)arg1;
- (unsigned int)serverMachPort;
- (void)setServerPort:(unsigned int)arg1;
- (struct _xpc_connection_s *)serverConnection;
- (struct dispatch_queue_s *)serverQueue;
- (void)setServerConnection:(struct _xpc_connection_s *)arg1;
- (id)objectForProxy:(int)arg1;
- (void)removeObjectFromObjectList:(id)arg1;
- (void)addObjectToObjectList:(id)arg1;
- (void)stopUsingServerForObject:(id)arg1;
- (void)startUsingServerForObject:(id)arg1;
- (id)init;

@end
