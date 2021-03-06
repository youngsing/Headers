//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreBluetooth/CBXpcConnectionDelegate-Protocol.h>

@class CBXpcConnection, NSHashTable, NSMutableSet, NSSet, NSString;
@protocol CBScalablePipeManagerDelegate;

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate>
{
    id <CBScalablePipeManagerDelegate> _delegate;
    CBXpcConnection *_connection;
    NSMutableSet *_identifiers;
    NSHashTable *_pipes;
    long long _state;
}

@property(readonly) long long state; // @synthesize state=_state;
@property(readonly) NSSet *identifiers; // @synthesize identifiers=_identifiers;
- (void)xpcConnectionDidFinalize;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleDataAvailable:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)handlePipeDisconnected:(id)arg1;
- (void)handlePipeConnected:(id)arg1;
- (void)handleEndpointRemoved:(id)arg1;
- (void)handleEndpointAdded:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4;
- (void)unregisterAllEndpoints;
- (void)unregisterEndpoint:(id)arg1;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3;
- (void)orphanPipes;
- (id)pipeForName:(id)arg1 identifier:(id)arg2;
- (_Bool)sendMsg:(int)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedWhenOff:(int)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

