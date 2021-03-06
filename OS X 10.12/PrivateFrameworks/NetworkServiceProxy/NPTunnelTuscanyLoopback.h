//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow, NSData, NSMutableData;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany
{
    unsigned long long _blobSizes[4];
    struct _NSRange _currentRange;
    BOOL _connected;
    NSData *_dayPassBytes;
    NSMutableData *_sendBuffer;
    NSData *_doneMarker;
    unsigned long long _currentBlobSizeIndex;
    void *_window;
    NPTunnelFlow *_flow;
}

@property BOOL connected; // @synthesize connected=_connected;
@property(retain) NPTunnelFlow *flow; // @synthesize flow=_flow;
@property void *window; // @synthesize window=_window;
@property unsigned long long currentBlobSizeIndex; // @synthesize currentBlobSizeIndex=_currentBlobSizeIndex;
@property(retain) NSData *doneMarker; // @synthesize doneMarker=_doneMarker;
@property(retain) NSMutableData *sendBuffer; // @synthesize sendBuffer=_sendBuffer;
@property(readonly) NSData *dayPassBytes; // @synthesize dayPassBytes=_dayPassBytes;
- (void).cxx_destruct;
- (BOOL)isConnectionAlive;
- (void)cancelConnectionTimer;
- (void)startConnectionTimer;
- (void)writeDataToConnection:(id)arg1;
- (void)readMinimumBytes:(unsigned long long)arg1 maximumBytes:(unsigned long long)arg2;
- (unsigned long long)initialWindowSize;
- (BOOL)selectBestEdge;
- (BOOL)canHandleMoreData;
- (long long)currentMTU;
- (void)setDayPass:(id)arg1;
- (id)dayPass;
- (BOOL)createConnectionWithInitialData:(id)arg1;
- (unsigned long long)maxFrameSize;
- (void)removeFlow:(unsigned long long)arg1;
- (BOOL)addNewFlow:(id)arg1;
- (void)createTuscanyClient;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

@end

