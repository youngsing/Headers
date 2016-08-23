//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOBluetoothDevice, IOBluetoothHandsFreeExpansion, IOBluetoothHostController, IOBluetoothRFCOMMChannel, IOBluetoothUserNotification, NSDate, NSMutableArray;
@protocol IOBluetoothHandsFreeDelegate;

@interface IOBluetoothHandsFree : NSObject
{
    IOBluetoothRFCOMMChannel *_rfcommChannel;
    IOBluetoothUserNotification *_rfcommChannelNotification;
    unsigned int _supportedFeatures;
    void *_reserved1;
    float _previousInputVolume;
    float _previousOutputVolume;
    BOOL _previousOutputMuted;
    IOBluetoothDevice *_device;
    unsigned char _deviceRFCOMMChannelID;
    unsigned int _deviceSupportedFeatures;
    unsigned int _deviceCallHoldModes;
    unsigned int _deviceSupportedSMSServices;
    NSMutableArray *_statusIndicators;
    int _handsFreeState;
    unsigned long long _SMSMode;
    BOOL _SMSEnabled;
    BOOL _connectSCOAfterSLCConnected;
    IOBluetoothHandsFreeExpansion *_reserved;
}

+ (id)localServiceRecord;
+ (id)deviceUUID;
+ (id)localUUID;
+ (unsigned char)rfcommChannelID;
@property BOOL connectSCOAfterSLCConnected; // @synthesize connectSCOAfterSLCConnected=_connectSCOAfterSLCConnected;
@property int handsFreeState; // @synthesize handsFreeState=_handsFreeState;
@property(getter=isSMSEnabled) BOOL SMSEnabled; // @synthesize SMSEnabled=_SMSEnabled;
@property unsigned long long SMSMode; // @synthesize SMSMode=_SMSMode;
@property(retain) NSMutableArray *statusIndicators; // @synthesize statusIndicators=_statusIndicators;
@property unsigned int deviceCallHoldModes; // @synthesize deviceCallHoldModes=_deviceCallHoldModes;
@property unsigned int deviceSupportedSMSServices; // @synthesize deviceSupportedSMSServices=_deviceSupportedSMSServices;
@property unsigned int deviceSupportedFeatures; // @synthesize deviceSupportedFeatures=_deviceSupportedFeatures;
@property unsigned char deviceRFCOMMChannelID; // @synthesize deviceRFCOMMChannelID=_deviceRFCOMMChannelID;
@property(retain) IOBluetoothDevice *device; // @synthesize device=_device;
@property BOOL previousOutputMuted; // @synthesize previousOutputMuted=_previousOutputMuted;
@property float previousOutputVolume; // @synthesize previousOutputVolume=_previousOutputVolume;
@property float previousInputVolume; // @synthesize previousInputVolume=_previousInputVolume;
@property unsigned int supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
@property(retain) IOBluetoothUserNotification *rfcommChannelNotification; // @synthesize rfcommChannelNotification=_rfcommChannelNotification;
@property(retain) IOBluetoothRFCOMMChannel *rfcommChannel; // @synthesize rfcommChannel=_rfcommChannel;
- (id)encodePDU:(id)arg1 message:(id)arg2;
- (id)decodePDU:(id)arg1;
- (id)encodeUserData:(id)arg1;
- (id)decodeUserData:(long long)arg1 userData:(id)arg2 length:(unsigned int)arg3;
- (id)encodeNumber:(id)arg1;
- (id)decodeNumber:(id)arg1 isSCA:(BOOL)arg2 type:(unsigned int *)arg3;
- (unsigned int)readOctet:(id)arg1;
- (BOOL)hasData:(id)arg1;
- (id)parseList:(id)arg1;
- (id)stripParenthesis:(id)arg1;
- (id)deviceServiceRecord;
- (void)openRFCOMMChannel;
- (void)removeAudioListeners;
- (void)addAudioListeners;
- (unsigned int)outputDeviceID;
- (unsigned int)inputDeviceID;
- (void)sendOutputVolume;
- (void)sendInputVolume;
- (void)processIncomingData:(char *)arg1 length:(unsigned long long)arg2;
- (id)driverID;
- (void)BluetoothHCIEventNotificationMessage:(id)arg1 inNotificationMessage:(const struct IOBluetoothHCIEventNotificationMessage *)arg2;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;
- (void)handleDeviceDisconnectedNotification:(id)arg1;
- (void)rfcommChannelClosed:(id)arg1;
- (void)rfcommChannelData:(id)arg1 data:(void *)arg2 length:(unsigned long long)arg3;
- (void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2;
- (void)handleIncomingRFCOMMChannelOpened:(id)arg1 channel:(id)arg2;
- (BOOL)isSCOConnected;
- (void)disconnectSCO;
- (void)connectSCO;
@property(readonly, getter=isConnected) BOOL connected;
- (void)disconnect;
- (void)connect;
- (void)createIndicator:(id)arg1 min:(int)arg2 max:(int)arg3 currentValue:(int)arg4;
- (void)setIndicator:(id)arg1 value:(int)arg2;
- (id)indicatorDictionary:(id)arg1;
- (int)indicator:(id)arg1;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
@property(getter=isOutputMuted) BOOL outputMuted;
@property float outputVolume;
@property(getter=isInputMuted) BOOL inputMuted;
@property float inputVolume;
@property unsigned char codecID;
@property unsigned short SCOConnectionHandle;
@property BOOL disconnectAfterDisconnectingSCO;
@property(retain) IOBluetoothHostController *hostController;
@property(retain) NSDate *lastUpdatedOutputVolume;
@property(retain) NSDate *lastUpdatedInputVolume;
@property id <IOBluetoothHandsFreeDelegate> delegate;
- (void)finalize;
- (void)dealloc;

@end

