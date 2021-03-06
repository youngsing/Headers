//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <CameraUI/UIApplicationDelegate-Protocol.h>

@class CAMBurstController, CAMCameraRollController, CAMIrisVideoController, CAMKeepAliveController, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMTimelapseController, CAMViewfinderViewController, CUCaptureController, NSString, UIWindow;

@interface CAMApplicationDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *_window;
    CAMViewfinderViewController *_viewfinderViewController;
    CAMCameraRollController *_cameraRollController;
    CUCaptureController *_captureController;
    CAMTimelapseController *_timelapseController;
    CAMPersistenceController *_persistenceController;
    CAMMotionController *_motionController;
    CAMLocationController *_locationController;
    CAMPowerController *_powerController;
    CAMBurstController *_burstController;
    CAMKeepAliveController *_keepAliveController;
    CAMProtectionController *_protectionController;
    CAMRemoteShutterController *_remoteShutterController;
    CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
    CAMIrisVideoController *_irisVideoController;
}

@property(readonly, nonatomic) CAMIrisVideoController *irisVideoController; // @synthesize irisVideoController=_irisVideoController;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager; // @synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager;
@property(readonly, nonatomic) CAMRemoteShutterController *remoteShutterController; // @synthesize remoteShutterController=_remoteShutterController;
@property(readonly, nonatomic) CAMProtectionController *protectionController; // @synthesize protectionController=_protectionController;
@property(readonly, nonatomic) CAMKeepAliveController *keepAliveController; // @synthesize keepAliveController=_keepAliveController;
@property(readonly, nonatomic) CAMBurstController *burstController; // @synthesize burstController=_burstController;
@property(readonly, nonatomic) CAMPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) CAMLocationController *locationController; // @synthesize locationController=_locationController;
@property(readonly, nonatomic) CAMMotionController *motionController; // @synthesize motionController=_motionController;
@property(readonly, nonatomic) CAMPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) CAMTimelapseController *timelapseController; // @synthesize timelapseController=_timelapseController;
@property(readonly, nonatomic) CUCaptureController *captureController; // @synthesize captureController=_captureController;
@property(readonly, nonatomic) CAMCameraRollController *cameraRollController; // @synthesize cameraRollController=_cameraRollController;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)_createSubsystemsWithLaunchOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

