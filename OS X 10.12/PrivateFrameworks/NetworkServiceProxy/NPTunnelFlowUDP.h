//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSDate, NSMutableArray, NWUDPSession;

@interface NPTunnelFlowUDP : NPTunnelFlow
{
    NSMutableArray *_savedDirectData;
    unsigned long long _savedDataSize;
    NWUDPSession *_directSession;
    NSDate *_firstPacketDate;
}

@property(retain) NSDate *firstPacketDate; // @synthesize firstPacketDate=_firstPacketDate;
@property(retain) NWUDPSession *directSession; // @synthesize directSession=_directSession;
@property unsigned long long savedDataSize; // @synthesize savedDataSize=_savedDataSize;
@property(retain) NSMutableArray *savedDirectData; // @synthesize savedDirectData=_savedDirectData;
- (void).cxx_destruct;
- (unsigned long long)currentMaxSendDataSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)sendDataOnDirectSession:(id)arg1;
- (void)readDataFromClient;
- (void)startHandlingIncomingData;
- (void)handleIncomingData:(id)arg1 andError:(id)arg2;
- (void)stopDirectConnection;
- (void)startDirectConnection;
- (void)handleAppData:(id)arg1 andError:(id)arg2;

@end
