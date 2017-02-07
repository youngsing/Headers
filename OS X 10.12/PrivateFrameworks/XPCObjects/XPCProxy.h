//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XPCObjects/NSCopying-Protocol.h>

@class NSArray, Protocol;
@protocol OS_dispatch_queue, OS_xpc_object, XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id <XPCProxyTarget> _target;
    Class _remoteClass;
    Protocol *_remoteProtocol;
    CDUnknownBlockType _errorHandler;
    BOOL _invalidated;
    BOOL _useTraditionalEncoder;
    NSArray *_whitelistedClassNames;
}

+ (void)initialize;
@property(nonatomic) BOOL useTraditionalEncoder; // @synthesize useTraditionalEncoder=_useTraditionalEncoder;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property Protocol *remoteProtocol; // @synthesize remoteProtocol=_remoteProtocol;
@property Class remoteClass; // @synthesize remoteClass=_remoteClass;
@property id <XPCProxyTarget> target; // @synthesize target=_target;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_proxyDescription;
- (id)_errorForXpcError:(id)arg1;
- (id)_objectForXpcEncoding:(id)arg1;
- (id)_newXpcEncodingForObject:(id)arg1;
- (void)_getInvocationArgument:(void *)arg1 argumentType:(const char *)arg2 class:(Class *)arg3 forXpcArgument:(id)arg4 message:(id)arg5;
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)arg1 ofType:(const char *)arg2;
- (id)_newMessageAndReplyHandler:(CDUnknownBlockType *)arg1 forInvocation:(id)arg2;
- (id)_invocationForMessage:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;

@end
