//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVCaptureDeviceFormat, AVCaptureDeviceInputSource, NSArray, NSLock, NSString;

@interface AVCaptureHALDevice : AVCaptureDevice
{
    NSString *_uniqueID;
    unsigned int _connectionID;
    NSString *_localizedName;
    NSString *_modelID;
    NSString *_manufacturer;
    BOOL _hidden;
    NSArray *_formats;
    AVCaptureDeviceFormat *_activeFormat;
    NSArray *_inputSources;
    AVCaptureDeviceInputSource *_activeInputSource;
    NSLock *_propertiesLock;
    struct AudioStreamBasicDescription *_physicalASBDs;
    struct OpaqueCMClock *_deviceClock;
}

+ (id)_deviceFormatWithASBD:(struct AudioStreamBasicDescription *)arg1 deviceChannelCount:(unsigned int)arg2;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (void)_refreshDevicesFromCallback;
+ (void)_refreshDevices;
+ (id)devices;
+ (void)initialize;
- (void)_postNotificationNamed:(id)arg1;
- (void)relinquishDeviceMaster;
- (BOOL)becomeDeviceMaster:(id *)arg1;
- (void)_handleDeviceIsAliveNotification:(id)arg1;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (struct OpaqueCMClock *)deviceClock;
- (BOOL)isConnected;
- (BOOL)isAlive;
- (BOOL)isInUseByAnotherApplication;
- (void)_refreshInputSourcesFromCallback;
- (void)_refreshInputSources;
- (void)_refreshFormatsFromCallback;
- (void)_refreshFormats;
- (unsigned int)_getDeviceChannelCount;
- (void)_refreshProperties;
- (void)setActiveInputSource:(id)arg1;
- (id)activeInputSource;
- (id)inputSources;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (int)transportType;
- (void)setActiveFormat:(id)arg1;
- (id)activeFormat;
- (id)formats;
- (BOOL)isHidden;
- (id)manufacturer;
- (id)localizedName;
- (id)modelID;
- (void)setConnectionID:(unsigned int)arg1;
- (unsigned int)connectionID;
- (unsigned int)connectionUnitComponentSubType;
- (unsigned int)deviceID;
- (long long)deviceSystem;
- (id)uniqueID;
- (void)dealloc;
- (void)finalize;
- (void)_removePropertyListeners;
- (id)initWithUniqueID:(id)arg1 connectionID:(unsigned int)arg2 isHidden:(BOOL)arg3;
- (id)init;

@end

