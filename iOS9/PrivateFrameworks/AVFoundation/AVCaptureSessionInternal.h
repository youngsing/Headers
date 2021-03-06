//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureSessionConfiguration, AVRunLoopCondition, AVWeakReference, FigCaptureSessionConfiguration, NSError, NSHashTable, NSMutableArray, NSString;

@interface AVCaptureSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    AVCaptureDevice *adjustingDeviceActiveFormat;
    int beginConfigRefCount;
    FigCaptureSessionConfiguration *sessionConfig;
    struct OpaqueFigCaptureSession *figCaptureSession;
    _Bool figCaptureSessionRunning;
    _Bool figCaptureSessionStarted;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSHashTable *videoPreviewLayers;
    NSMutableArray *connections;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    NSError *stopError;
    _Bool running;
    _Bool interrupted;
    _Bool usesApplicationAudioSession;
    _Bool automaticallyConfiguresApplicationAudioSession;
    AVRunLoopCondition *runLoopCondition;
    _Bool waitingForFigCaptureSessionToStart;
    _Bool waitingForFigCaptureSessionToStop;
    _Bool waitingForFigCaptureSessionConfigurationToBecomeLive;
    _Bool waitingForFigCaptureSessionToStopDueToEmptyConfig;
    struct OpaqueCMClock *masterClock;
    _Bool notifiesOnMainThread;
    _Bool adjustingVideoDeviceHDREnabled;
    _Bool resetVideoZoomFactorAndMinMaxFrameDurations;
    _Bool authorizedToUseCameraInMultipleForegroundAppLayout;
}

@end

