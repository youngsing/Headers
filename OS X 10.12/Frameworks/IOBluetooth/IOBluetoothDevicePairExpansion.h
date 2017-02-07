//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BluetoothHIDDeviceController, IOBluetoothHostController, IOBluetoothL2CAPChannel;

@interface IOBluetoothDevicePairExpansion : NSObject
{
    unsigned short pageTimeout;
    IOBluetoothHostController *hostController;
    BOOL supportsAuthentication;
    BOOL isNonSSPKeypressNotificationCapable;
    IOBluetoothL2CAPChannel *channel;
    BOOL Q6BDAddrRange;
    BOOL isWiiRemote;
    BOOL isNeuroSwitch;
    BOOL _isWiiUProController;
    BluetoothHIDDeviceController *bluetoothHIDDeviceController;
    BOOL isPolyVision;
}

@property BOOL isPolyVision; // @synthesize isPolyVision;
@property BOOL isWiiUProController; // @synthesize isWiiUProController=_isWiiUProController;
@property(retain) BluetoothHIDDeviceController *bluetoothHIDDeviceController; // @synthesize bluetoothHIDDeviceController;
@property BOOL isNeuroSwitch; // @synthesize isNeuroSwitch;
@property BOOL isWiiRemote; // @synthesize isWiiRemote;
@property BOOL Q6BDAddrRange; // @synthesize Q6BDAddrRange;
@property(retain) IOBluetoothL2CAPChannel *channel; // @synthesize channel;
@property BOOL isNonSSPKeypressNotificationCapable; // @synthesize isNonSSPKeypressNotificationCapable;
@property BOOL supportsAuthentication; // @synthesize supportsAuthentication;
@property(retain) IOBluetoothHostController *hostController; // @synthesize hostController;
@property unsigned short pageTimeout; // @synthesize pageTimeout;

@end
