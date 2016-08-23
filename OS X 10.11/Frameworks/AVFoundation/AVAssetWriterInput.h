//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVOutputSettings, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost>
{
    AVAssetWriterInputInternal *_internal;
}

+ (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
@property(readonly) long long numberOfAppendFailures;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (long long)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)respondToEachPassDescriptionOnQueue:(struct dispatch_queue_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)currentPassDescription;
- (BOOL)canPerformMultiplePasses;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (BOOL)performsMultiPassEncodingIfSupported;
@property(nonatomic) BOOL expectsMediaDataInRealTime;
@property(readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (BOOL)_prepareToFinishWritingReturningError:(id *)arg1;
- (void)_prepareToEndSession;
- (void)_didStartInitialSession;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaFileType:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic, getter=_isAttachedToMetadataAdaptor) BOOL attachedToMetadataAdaptor;
- (void)_attachToMetadataAdaptor:(id)arg1;
@property(nonatomic, getter=_isAttachedToPixelBufferAdaptor, setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;
@property(copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property(readonly, nonatomic, getter=_pixelBufferPool) struct __CVPixelBufferPool *pixelBufferPool;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (id)sampleReferenceBaseURL;
- (void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1;
- (BOOL)writesMediaDataToBeginningOfFile;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (long long)preferredMediaChunkSize;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (long long)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)preferredMediaChunkDuration;
@property(readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property(nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
- (void)setLayer:(long long)arg1;
- (long long)layer;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (BOOL)marksOutputTrackAsEnabled;
- (void)setExtendedLanguageTag:(id)arg1;
- (id)extendedLanguageTag;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
@property(copy, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings;
@property(readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic, getter=_trackID) int trackID;
@property(retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property(readonly, nonatomic, getter=_status) long long status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
@property(retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

