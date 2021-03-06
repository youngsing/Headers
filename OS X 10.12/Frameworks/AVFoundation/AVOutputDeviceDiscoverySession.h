//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySessionInternal, NSArray;

@interface AVOutputDeviceDiscoverySession : NSObject
{
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

@property(readonly, nonatomic) BOOL devicePresenceDetected;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(nonatomic) long long discoveryMode;
- (void)finalize;
- (void)dealloc;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)init;

@end

