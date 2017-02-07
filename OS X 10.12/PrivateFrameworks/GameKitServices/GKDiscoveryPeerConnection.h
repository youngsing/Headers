//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/GKSimpleTimerDelegate-Protocol.h>

@class GKAsyncSocket, GKSimpleTimer, NSMutableArray, NSMutableData, NSString;
@protocol OS_dispatch_queue;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate>
{
    NSString *_remoteServiceName;
    NSString *_localServiceName;
    BOOL _connected;
    GKAsyncSocket *_connectionSocket;
    NSMutableData *_dataReceived;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    CDUnknownBlockType _receiveDataHandler;
    CDUnknownBlockType _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    GKSimpleTimer *_heartbeatTimer;
    GKSimpleTimer *_heartbeatTimeoutTimer;
    GKSimpleTimer *_timeoutTimer;
    double _connectionTimeoutInSeconds;
    double _heartbeatIntervalInSeconds;
}

+ (unsigned long long)receiveDataLimit;
+ (unsigned long long)sendDataLimit;
+ (void)checkConstants;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler; // @synthesize connectedHandler=_connectedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(copy, nonatomic) NSString *localServiceName; // @synthesize localServiceName=_localServiceName;
@property(copy, nonatomic) NSString *remoteServiceName; // @synthesize remoteServiceName=_remoteServiceName;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)syncCloseConnectionNow;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)timeout:(id)arg1;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (void)syncAcceptedConnection;
- (void)syncSendAccept;
- (void)syncSendHello;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)shouldDecideAboutConnection;
- (void)attachSocketDescriptor:(int)arg1;
- (void)connectToSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (BOOL)syncSetupNewSocket;
- (void)syncConnected:(id)arg1;
- (id)initWithLocalServiceName:(id)arg1;

@end
