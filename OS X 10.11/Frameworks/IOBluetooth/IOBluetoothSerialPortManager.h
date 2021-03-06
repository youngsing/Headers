//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IOBluetoothSerialPortManager : NSObject
{
}

+ (int)removePort:(id)arg1;
+ (void)removeAllSerialPortsForDevice:(id)arg1;
+ (int)updatePort:(id)arg1 removeAndReaddIfNecessary:(BOOL)arg2;
+ (int)addPort:(id)arg1;
+ (BOOL)isAcceptableSerialPortName:(id)arg1;
+ (id)getBSDTTYCompatibleNameForDevice:(id)arg1 andServiceName:(id)arg2;
+ (BOOL)canModifySerialPort:(id)arg1;
+ (BOOL)serialPortExists:(id)arg1;
+ (id)getBluetoothModemPortDictionary;
+ (id)getSerialPortWithName:(id)arg1;
+ (id)getAllPersistentOutgoingSerialPortsForDevice:(id)arg1;
+ (id)getAllOutgoingPersistentSerialPorts:(BOOL)arg1 andIncomingPersistentSerialPorts:(BOOL)arg2 includeBluetoothModemPort:(BOOL)arg3;
+ (int)deviceHasSerialPortServices:(id)arg1 count:(int *)arg2 includeRFCOMMServices:(BOOL)arg3 includeDUNServices:(BOOL)arg4;
+ (id)getUniqueSerialPortNameWithBaseString:(id)arg1;
+ (void)resetSerialPortCreationUniqueIndex;
+ (id)createOutgoingSerialPortForFirstServiceOnDevice:(id)arg1 withUUID:(unsigned short)arg2;
+ (id)createOutgoingSerialPortForFirstSerialServiceOnDevice:(id)arg1;

@end

