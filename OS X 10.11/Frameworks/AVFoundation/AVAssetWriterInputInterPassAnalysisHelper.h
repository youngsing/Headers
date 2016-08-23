//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper
{
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (void)markCurrentPassAsFinished;
- (void)markAsFinished;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRespondToInitialPassDescription;
- (BOOL)isReadyForMoreMediaData;
- (id)currentPassDescription;
- (BOOL)canPerformMultiplePasses;
- (long long)status;
- (void)startPassAnalysis;
- (void)dealloc;
- (id)initWithWritingHelper:(id)arg1;
- (id)initWithConfigurationState:(id)arg1;

@end

