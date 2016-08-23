//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureScreenInputInternal;

@interface AVCaptureScreenInput : AVCaptureInput
{
    AVCaptureScreenInputInternal *_internal;
}

+ (void)initialize;
- (struct OpaqueCMClock *)inputClock;
- (void)_updateGraphicsSubsystemErrorStatusFromPropertyListener:(id)arg1;
- (id)notReadyError;
- (void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2;
- (int)clockProviderNodeForInputPort:(id)arg1;
- (unsigned int)unitOutputNumberForInputPort:(id)arg1;
- (int)graphNodeForInputPort:(id)arg1;
- (void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addInputUnitsForInputPort:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (id)ports;
@property(nonatomic) BOOL removesDuplicateFrames;
- (void)setCaptureTimeScale:(int)arg1;
- (int)captureTimeScale;
@property(nonatomic) double scaleFactor;
@property(nonatomic) BOOL capturesCursor;
@property(nonatomic) BOOL capturesMouseClicks;
- (unsigned int)_mouseClickEffect;
@property(nonatomic) struct CGRect cropRect;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
- (void)_syncScreenInputWithSessionSettings;
- (struct CGRect)_flippedCropRectForCropRect:(struct CGRect)arg1;
- (int)_getInputUnitProperty:(unsigned int)arg1 bytes:(void *)arg2 length:(unsigned int)arg3;
- (int)_setInputUnitProperty:(unsigned int)arg1 bytes:(const void *)arg2 length:(unsigned int)arg3;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithDisplayID:(unsigned int)arg1;

@end
