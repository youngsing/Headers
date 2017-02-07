//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

#import <HomeKitDaemon/HMDCameraSettingProactiveReaderDelegate-Protocol.h>

@class HMDCameraResidentMessageHandler, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMFNetMonitor, NSMutableArray, NSSet, NSString;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate>
{
    _Bool _microphonePresent;
    _Bool _speakerPresent;
    NSSet *_cameraStreamManagers;
    HMDCameraSnapshotManager *_snapshotManager;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSMutableArray *_settingProactiveReaders;
    HMFNetMonitor *_networkMonitor;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(retain, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly, nonatomic) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly, nonatomic) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly, nonatomic) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property(readonly, nonatomic, getter=isSpeakerPresent) _Bool speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property(readonly, nonatomic, getter=isMicrophonePresent) _Bool microphonePresent; // @synthesize microphonePresent=_microphonePresent;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)monitorForEventsForServices:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)registerForMessages;
- (void)_setControlSupport;
- (id)_createCameraManagers:(id)arg1;
- (id)dumpState;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithAccessory:(id)arg1 uuid:(id)arg2 services:(id)arg3 msgDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
