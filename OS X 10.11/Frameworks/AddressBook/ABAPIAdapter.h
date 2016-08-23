//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Protocol;

@interface ABAPIAdapter : NSObject
{
    id _adaptedObject;
    Protocol *_localProtocol;
    Protocol *_remoteProtocol;
    BOOL _hasCompletionHandler;
}

+ (unsigned long long)typeEncodingFromReturnType:(const char *)arg1;
+ (SEL)modifiedSelectorFromSeletor:(SEL)arg1 numberOfArguments:(unsigned long long)arg2 hasCompletionHandler:(BOOL)arg3;
+ (id)methodSignatureForSelector:(SEL)arg1 protocol:(id)arg2;
+ (id)remoteProtocolFromLocalProtocol:(id)arg1 localProtocolIsAsync:(BOOL)arg2;
@property(nonatomic) BOOL hasCompletionHandler; // @synthesize hasCompletionHandler=_hasCompletionHandler;
@property(retain, nonatomic) Protocol *remoteProtocol; // @synthesize remoteProtocol=_remoteProtocol;
@property(retain, nonatomic) Protocol *localProtocol; // @synthesize localProtocol=_localProtocol;
@property(retain) id adaptedObject; // @synthesize adaptedObject=_adaptedObject;
- (void)dealloc;
- (CDUnknownBlockType)completionBlockForReturnType:(const char *)arg1 invocation:(id)arg2 untypedBlock:(void *)arg3;
- (id)completionBlockForInvocation:(id)arg1 continuationHandler:(CDUnknownBlockType)arg2;
- (SEL)modifiedSelectorFromSeletor:(SEL)arg1 numberOfArguments:(unsigned long long)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithAdaptedObject:(id)arg1 protocol:(id)arg2 protocolIsAsync:(BOOL)arg3;
- (id)init;

@end

