//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOBluetooth/IOBluetoothObject.h>

#import <IOBluetooth/NSPortDelegate-Protocol.h>

@class IOBluetoothDevice, IOBluetoothL2CAPChannel, NSPort, NSString;

@interface IOBluetoothRFCOMMChannel : IOBluetoothObject <NSPortDelegate>
{
    BOOL mChannelIsOpen;
    unsigned short mMTU;
    BOOL mIsIncoming;
    IOBluetoothDevice *mDevice;
    IOBluetoothL2CAPChannel *mL2Channel;
    NSPort *mDataAvailablePort;
    struct _IODataQueueMemory *mIncomingDataQueue;
    id delegate;
    id mIncomingDataListener;
    void *mIncomingDataListenerRefCon;
    id mEventDataListener;
    void *mEventDataListenerRefCon;
    unsigned long long mObjectID;
    unsigned char mChannelID;
    void *_mReserved;
}

+ (id)withObjectID:(unsigned long long)arg1;
+ (id)withRFCOMMChannelRef:(struct OpaqueIOBluetoothObjectRef *)arg1;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2 withChannelID:(unsigned char)arg3 direction:(int)arg4;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2;
+ (id)getKeyForIOService:(unsigned int)arg1;
+ (id)getUniqueObjectDictionary:(BOOL)arg1;
- (id)registerForChannelCloseNotification:(id)arg1 selector:(SEL)arg2;
- (unsigned long long)getObjectID;
- (id)getDevice;
- (unsigned char)getChannelID;
- (id)delegate;
- (int)setDelegate:(id)arg1;
- (int)sendRemoteLineStatus:(int)arg1;
- (int)setSerialParameters:(unsigned int)arg1 dataBits:(unsigned char)arg2 parity:(int)arg3 stopBits:(unsigned char)arg4;
- (int)writeSimple:(void *)arg1 length:(unsigned short)arg2 sleep:(BOOL)arg3 bytesSent:(unsigned int *)arg4;
- (int)writeSync:(void *)arg1 length:(unsigned short)arg2;
- (int)writeAsync:(void *)arg1 length:(unsigned short)arg2 refcon:(void *)arg3;
- (int)write:(void *)arg1 length:(unsigned short)arg2 sleep:(BOOL)arg3;
- (BOOL)isTransmissionPaused;
- (BOOL)isIncoming;
- (unsigned short)getMTU;
- (BOOL)isOpen;
- (int)closeChannel;
- (struct OpaqueIOBluetoothObjectRef *)getRFCOMMChannelRef;
- (BOOL)ioServiceTerminated:(unsigned int)arg1;
- (int)closeKernelConnection;
- (void)updateFromNewIOService:(unsigned int)arg1;
- (id)initWithIOService:(unsigned int)arg1;
- (BOOL)isValid;
- (id)getKey;
- (int)updateReleationships:(unsigned int)arg1;
- (int)instantiateOnDevice:(id)arg1;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)setChannelID:(unsigned char)arg1;
- (BOOL)waitforChanneOpen;
- (BOOL)channelStateIsClosed;
- (BOOL)channelStateIsClosing;
- (BOOL)channelStateIsOpening;
- (BOOL)channelStateIsOpen;
- (int)channelState;
- (BOOL)isInitiatorLocal;
- (id)getL2CAPChannel;
- (void)setL2CAPChannel:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)processIncomingData:(struct IOBluetoothUserMessageBlock *)arg1;
- (int)destroyQueue;
- (int)createQueue;
- (void)handleMachMessage:(void *)arg1;
- (int)sendTestByte:(unsigned char)arg1;
- (int)pauseTransmission:(BOOL)arg1;
- (int)sendMSCOnBadChannel:(unsigned char)arg1;
- (int)sendCommand:(unsigned char)arg1;
- (int)openChannel;
- (int)setProperties:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

