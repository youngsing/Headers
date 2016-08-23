//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters
{
    AVAudioMixSweepFilterEffectParametersInternal *_sweepFilterAudioEffect;
}

+ (id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;
@property(readonly, nonatomic) float sweepValue;
@property(readonly, nonatomic) float bypassThreshold;
@property(readonly, nonatomic) int maximumCutOffFrequency;
@property(readonly, nonatomic) int minimumCutOffFrequency;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)sweepFilterEffectWithSweepValue:(float)arg1;
- (id)initWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;
- (id)init;

@end
