//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding>
{
    AVOutputContextInternal *_outputContext;
}

+ (_Bool)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (struct OpaqueFigEndpointPicker *)copySystemVideoPicker;
+ (_Bool)supportsSecureCoding;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)outputContext;
- (_Bool)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (id)outputDevice;
- (id)associatedAudioDeviceID;
@property(readonly, nonatomic) NSString *deviceName;
- (void)setApplicationProcessID:(int)arg1;
- (int)applicationProcessID;
- (id)contextUUID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (void)_handlePickerServerConnectionDiedNotification;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)_weakReference;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithContextUUID:(id)arg1;
- (id)init;

@end
