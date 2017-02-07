//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

+ (id)layerWithSessionWithNoConnection:(id)arg1;
+ (id)layerWithSession:(id)arg1;
+ (void)initialize;
- (id)notReadyError;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)connectionMediaTypes;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (BOOL)resumePreviewForConnection:(id)arg1;
- (BOOL)pausePreviewForConnection:(id)arg1;
- (BOOL)setPaused:(BOOL)arg1 forConnection:(id)arg2;
- (id)videoDecompressionSettingsForVideoConnection:(id)arg1;
- (int)videoDecompressionRequirementForConnection:(id)arg1;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)arg1;
- (long long)defaultVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoFieldModeForConnection:(id)arg1;
- (long long)defaultVideoOrientationForConnection:(id)arg1;
- (BOOL)supportsVideoOrientationForConnection:(id)arg1;
- (BOOL)defaultVideoMirroringForConnection:(id)arg1;
- (BOOL)supportsVideoMirroringForConnection:(id)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (id)_videoPreviewUnitPixelBufferAttributes;
- (id)pixelBufferAttributes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)inputFormatDescriptionChanged:(id)arg1;
- (void)refreshFormatDescriptionFromInputPort:(id)arg1;
- (void)positionSublayer;
- (BOOL)shouldMirrorPreviewForConnection:(id)arg1;
@property(readonly, nonatomic) AVCaptureConnection *connection;
@property(copy) NSString *videoGravity;
- (id)subLayer;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
@property(retain, nonatomic) AVCaptureSession *session;
- (void)finalize;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)initCommonStorage;
- (id)init;

@end
