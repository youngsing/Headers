//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyHost-Protocol.h>
#import <AVFoundation/AVWeakObservable-Protocol.h>

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost>
{
    AVAssetWriterInternal *_internal;
}

+ (id)_errorForOSStatus:(int)arg1;
+ (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)startWriting;
@property(copy, nonatomic) NSArray *metadata;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
- (void)setPreferredRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredVolume:(float)arg1;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)preferredTransform;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) BOOL shouldOptimizeForNetworkUse;
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)overallDurationHint;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)movieFragmentInterval;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (BOOL)_supportsSampleReferencesReturningError:(id *)arg1;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, copy, nonatomic) NSString *outputFileType;
@property(readonly, copy, nonatomic) NSURL *outputURL;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
@property(readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property(readonly, copy) NSString *description;
- (void)finalize;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

