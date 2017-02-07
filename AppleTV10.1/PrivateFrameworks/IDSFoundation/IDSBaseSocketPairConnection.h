//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMWeakReference, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    _Bool _writeSourceIsResumed;
}

@property(readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;
- (_Bool)sendData:(id)arg1;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)start;
- (void)_processBytesAvailable;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setDestination:(id)arg1;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end
