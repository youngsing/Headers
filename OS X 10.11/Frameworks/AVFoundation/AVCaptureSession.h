//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;
}

+ (id)avCaptureSessionPlist;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (void)initialize;
+ (id)allAVCaptureSessionPresets;
- (id)defaultConnectionPropertiesForConnection:(id)arg1;
- (id)defaultOutputSettingsForConnection:(id)arg1 fileType:(id)arg2;
- (void)decompressionRequirementsDidChangeForConnection:(id)arg1;
- (void)decompressionSettingsDidChangeForConnection:(id)arg1;
- (id)_resolvedDecompressionSettingsForInputPort:(id)arg1 alsoRequiresDeviceNative:(char *)arg2;
- (void)_configureAudioDecoderConverters;
- (BOOL)_connectGraphUnitsForGenericConnection:(id)arg1 error:(id *)arg2;
- (BOOL)_buildSupportUnitsForGenericInputPort:(id)arg1 error:(id *)arg2;
- (BOOL)_connectGraphUnitsForClosedCaptionConnection:(id)arg1 error:(id *)arg2;
- (BOOL)_buildSupportUnitsForClosedCaptionInputPort:(id)arg1 error:(id *)arg2;
- (BOOL)_connectGraphUnitsForAudioConnection:(id)arg1 error:(id *)arg2;
- (int *)audioChannelMapForConnection:(id)arg1 size:(unsigned long long *)arg2;
- (BOOL)_buildSupportUnitsForAudioInputPort:(id)arg1 error:(id *)arg2;
- (BOOL)_connectGraphUnitsForVideoConnection:(id)arg1 error:(id *)arg2;
- (BOOL)_buildSupportUnitsForVideoInputPort:(id)arg1 error:(id *)arg2;
- (BOOL)_buildGraphUnitsForConnection:(id)arg1 error:(id *)arg2;
- (BOOL)_buildGraphUnitsForInputPort:(id)arg1 error:(id *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct OpaqueCMIOGraph *)captureGraph;
- (void)_setRunning:(BOOL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)stopRunning;
- (void)startRunning;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (void)_stopAndTearDownGraph;
- (void)_informActiveInputsAndOutputsThatGraphWillStopWithError:(id)arg1;
- (void)_informActiveInputsAndOutputsThatGraphWillStart;
- (void)_setupMasterClock;
- (void)_setupMasterSynchronizers;
- (void)_buildAndRunGraph;
- (void)_endSessionUpdates;
- (void)_beginSessionUpdates;
- (void)_rebuildGraph;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (BOOL)_graphIsRunning;
- (BOOL)_graphIsInitialized;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (BOOL)canAddConnection:(id)arg1;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)removeVideoPreviewLayer:(id)arg1;
- (void)addVideoPreviewLayerWithNoConnection:(id)arg1;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeInput:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *inputs;
- (BOOL)isBeingConfigured;
- (void)commitConfiguration;
- (void)beginConfiguration;
@property(copy, nonatomic) NSString *sessionPreset;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

