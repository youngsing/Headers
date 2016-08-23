//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DRTrack : NSObject
{
    void *_ref;
}

+ (void)initialize;
+ (BOOL)isPropertyKey:(id)arg1;
+ (void)setupBindings;
+ (id)trackForAudioFile:(id)arg1;
+ (id)trackForAudioOfLength:(id)arg1 producer:(id)arg2;
+ (id)trackForRootFolder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (float)testProductionSpeedForLength:(unsigned int)arg1;
- (unsigned long long)estimateLength;
- (float)testProductionSpeedForInterval:(double)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)init;
- (id)initWithProducer:(id)arg1;
- (struct DRTrackObject *)_obj;
- (float)_testProductionSpeedForLength:(unsigned int)arg1 orInterval:(double)arg2;
- (id)initWithProperties:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;
- (void)setPreGap:(id)arg1;
- (id)preGap;
- (id)length;
- (int)_postBurnCallback;
- (int)_verificationDoneCallback;
- (int)_verifyDataCallback:(struct DRTrackProductionInfo *)arg1;
- (int)_verifyPreGapCallback:(struct DRTrackProductionInfo *)arg1;
- (int)_verificationStartingCallback;
- (int)_produceDataCallback:(struct DRTrackProductionInfo *)arg1;
- (int)_producePreGapCallback:(struct DRTrackProductionInfo *)arg1;
- (int)_preBurnCallback:(id)arg1;
- (int)_estimateSizeCallback:(unsigned long long *)arg1;
- (void)setDVDTimestamp:(id)arg1;
- (id)dvdTimestamp;
- (void)setDVDCopyrightInfo:(id)arg1;
- (id)dvdCopyrightInfo;
- (void)setMaximumBurnSpeed:(float)arg1;
- (float)maximumBurnSpeed;
- (void)setSessionFormat:(long long)arg1;
- (long long)sessionFormat;
- (void)setTrackMode:(long long)arg1;
- (long long)trackMode;
- (void)setBlockType:(long long)arg1;
- (long long)blockType;
- (void)setDataForm:(long long)arg1;
- (long long)dataForm;
- (void)setBlockSize:(unsigned short)arg1;
- (unsigned short)blockSize;
- (void)setLength:(id)arg1;
- (void)setVerificationType:(id)arg1;
- (id)verificationType;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)arg1;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

