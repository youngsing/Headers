//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSDistantObject, NSPort;
@protocol NSConnectionDelegate;

@interface NSConnection : NSObject
{
    id receivePort;
    id sendPort;
    id delegate;
    int busy;
    int localProxyCount;
    int waitCount;
    id delayedRL;
    id statistics;
    unsigned char isDead;
    unsigned char isValid;
    unsigned char wantsInvalid;
    unsigned int authGen:1;
    unsigned int authCheck:1;
    unsigned int _reserved1:1;
    unsigned int _reserved2:1;
    unsigned int doRequest:1;
    unsigned int isQueueing:1;
    unsigned int isMulti:1;
    unsigned int invalidateRP:1;
    id ___1;
    id ___2;
    id runLoops;
    id requestModes;
    id rootObject;
    void *registerInfo;
    id replMode;
    id classInfoImported;
    id releasedProxies;
    id reserved;
}

+ (void)_enableLogging:(BOOL)arg1;
+ (void)_toggleLogging;
+ (id)statistics;
+ (id)currentConversation;
+ (id)allConnections;
+ (id)defaultConnection;
+ (id)serviceConnectionWithName:(id)arg1 rootObject:(id)arg2;
+ (id)serviceConnectionWithName:(id)arg1 rootObject:(id)arg2 usingNameServer:(id)arg3;
+ (id)rootProxyForConnectionWithRegisteredName:(id)arg1 host:(id)arg2 usingNameServer:(id)arg3;
+ (id)rootProxyForConnectionWithRegisteredName:(id)arg1 host:(id)arg2;
+ (id)rootProxyForConnectionWithPrivilegedName:(id)arg1;
+ (id)connectionWithPrivilegedName:(id)arg1;
+ (id)connectionWithRegisteredName:(id)arg1 host:(id)arg2;
+ (id)connectionWithRegisteredName:(id)arg1 host:(id)arg2 usingNameServer:(id)arg3;
+ (id)connectionWithReceivePort:(id)arg1 sendPort:(id)arg2;
+ (id)lookUpConnectionWithReceivePort:(id)arg1 sendPort:(id)arg2;
+ (void)initialize;
- (void)runInNewThread;
- (void)run;
- (void)removeRunLoop:(id)arg1;
- (void)addRunLoop:(id)arg1;
@property(readonly) BOOL multipleThreadsEnabled;
- (void)enableMultipleThreads;
- (BOOL)hasRunLoop:(id)arg1;
- (void)removePortsFromRunLoop:(id)arg1;
- (void)addPortsToRunLoop:(id)arg1;
- (id)description;
- (void)_setUseKC:(BOOL)arg1;
@property(readonly, copy) NSDictionary *statistics;
- (void)_sendBeforeTime:(double)arg1 coder:(id)arg2 doAuthenticationCheck:(BOOL)arg3;
- (BOOL)_verifyComponents:(id)arg1;
- (void)_authenticateComponents:(id)arg1;
- (void)sendInvocation:(id)arg1;
- (void)sendInvocation:(id)arg1 internal:(BOOL)arg2;
- (void)returnResult:(id)arg1 exception:(id)arg2 sequence:(unsigned int)arg3 imports:(id)arg4;
- (id)dispatchInvocation:(id)arg1;
- (void)handleRequest:(id)arg1 sequence:(unsigned int)arg2;
- (BOOL)_shouldDispatch:(id *)arg1 invocation:(id)arg2 sequence:(unsigned int)arg3 coder:(id)arg4;
- (id)newConversation;
- (BOOL)sendWireCountForWireID:(unsigned int)arg1 port:(id)arg2;
- (void)handlePortCoder:(id)arg1;
- (void)handlePortMessage:(id)arg1;
- (void)dispatchWithComponents:(id)arg1;
- (id)portCoderWithComponents:(id)arg1;
- (Class)_portCoderClassWithComponents:(id)arg1;
- (Class)_portCoderClass;
@property(readonly, copy) NSArray *localObjects;
@property(readonly, copy) NSArray *remoteObjects;
- (void)releaseWireID:(unsigned int)arg1 count:(unsigned long long)arg2;
- (void)sendReleasedProxies;
- (void)decodeReleasedProxies:(id)arg1;
- (void)handleUnkeyedReleasedProxies:(char *)arg1 length:(unsigned long long)arg2;
- (void)handleKeyedReleasedProxies:(id)arg1;
- (void)encodeReleasedProxies:(id)arg1;
- (void)_encodeProxyList:(id)arg1 forCoder:(id)arg2;
- (void)_setWhitelist:(id)arg1;
- (unsigned long long)versionForClassNamed:(id)arg1;
- (void)addClassNamed:(char *)arg1 version:(unsigned long long)arg2;
- (void)_decrementLocalProxyCount;
- (void)_incrementLocalProxyCount;
@property(retain) id rootObject;
- (id)keyedRootObject;
@property(readonly, retain) NSDistantObject *rootProxy;
@property(readonly, retain) NSPort *sendPort;
@property(readonly, retain) NSPort *receivePort;
- (void)setReplyMode:(id)arg1;
- (id)replyMode;
@property(readonly, copy) NSArray *requestModes;
- (void)removeRequestMode:(id)arg1;
- (void)addRequestMode:(id)arg1;
@property id <NSConnectionDelegate> delegate;
@property BOOL independentConversationQueueing;
@property double replyTimeout;
@property double requestTimeout;
- (void)finalize;
- (void)invalidate;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
@property(readonly, getter=isValid) BOOL valid;
- (BOOL)registerName:(id)arg1 withNameServer:(id)arg2;
- (BOOL)registerName:(id)arg1;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2;
- (id)init;
- (void)_portInvalidated:(id)arg1;

@end

