//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCCaptureSessionObserver-Protocol.h>

@class NSString, RCAudioSessionRoutingController, RCCaptureSession, _RCCaptureInputDeviceSession;

@interface RCCaptureInputDevice : NSObject <RCCaptureSessionObserver>
{
    _Bool _inputAvailable;
    NSString *_activeInputRouteName;
    RCAudioSessionRoutingController *_audioRouteController;
    _RCCaptureInputDeviceSession *_pendingInputSession;
    _RCCaptureInputDeviceSession *_preparingInputSession;
    _RCCaptureInputDeviceSession *_activeInputSession;
}

+ (id)sharedCaptureDevice;
@property(retain, nonatomic) _RCCaptureInputDeviceSession *activeInputSession; // @synthesize activeInputSession=_activeInputSession;
@property(retain, nonatomic) _RCCaptureInputDeviceSession *preparingInputSession; // @synthesize preparingInputSession=_preparingInputSession;
@property(retain, nonatomic) _RCCaptureInputDeviceSession *pendingInputSession; // @synthesize pendingInputSession=_pendingInputSession;
@property(readonly, nonatomic) RCAudioSessionRoutingController *audioRouteController; // @synthesize audioRouteController=_audioRouteController;
@property(readonly, nonatomic) NSString *activeInputRouteName; // @synthesize activeInputRouteName=_activeInputRouteName;
@property(readonly, nonatomic, getter=isInputAvailable) _Bool inputAvailable; // @synthesize inputAvailable=_inputAvailable;
- (void).cxx_destruct;
- (id)_inputSessionForCaptureSession:(id)arg1;
- (_Bool)_removeInputSessionForCaptureSession:(id)arg1 attemptToBeginPending:(_Bool)arg2;
- (id)_activeOrPreparingCaptureSession;
- (void)_beginPendingSession;
- (void)_setPendingCaptureSession:(id)arg1 useStartSoundEffect:(_Bool)arg2 sessionPreparedBlock:(CDUnknownBlockType)arg3;
- (void)_handleDidEndCaptureSession:(id)arg1 success:(_Bool)arg2;
- (void)_updateSelectedRouteAndPostNotification:(_Bool)arg1;
- (void)_updateInputAvailabilityAndPostNotification:(_Bool)arg1;
- (void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2;
- (void)captureSession:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)_pickedRouteDidChangeNotification:(id)arg1;
- (void)_availableRoutesMaskDidChangeNotification:(id)arg1;
- (void)_captureDeviceWasDisconnectedNotification:(id)arg1;
- (void)_captureDeviceWasConnectedNotification:(id)arg1;
@property(readonly, nonatomic) _Bool canExitApplication;
@property(readonly, nonatomic, getter=isPhoneCallRouteActive) _Bool phoneCallRouteActive;
@property(readonly, nonatomic) RCCaptureSession *activeCaptureSession; // @dynamic activeCaptureSession;
- (void)fetchActiveInputRouteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRecordingWithSession:(id)arg1 sessionFinishedBlock:(CDUnknownBlockType)arg2;
- (void)beginRecordingWithCaptureWaveformDataSource:(id)arg1 useStartSoundEffect:(_Bool)arg2 sessionPreparedBlock:(CDUnknownBlockType)arg3 sessionFinishedBlock:(CDUnknownBlockType)arg4;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

