//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ICADevices/Device.h>

@interface DeviceList : Device
{
}

+ (id)sharedDeviceList;
- (void)dump;
- (void)disconnectDevicesIfSessionNotOpened;
- (void)disconnectAllDevices;
- (id)giveMeTheBSDName;
- (id)findMassStorageDeviceWithDiskBSDName:(id)arg1;
- (id)findTCPIPDeviceWithAddress:(id)arg1 port:(unsigned int)arg2;
- (id)findBluetoothDevice:(id)arg1;
- (id)findTWAINDevice:(id)arg1;
- (unsigned long long)giveMeTheFireWireGUID;
- (id)findFireWireDevice:(unsigned long long)arg1;
- (unsigned int)giveMeTheUSBLocationID;
- (id)findUSBDevice:(unsigned int)arg1;

@end

