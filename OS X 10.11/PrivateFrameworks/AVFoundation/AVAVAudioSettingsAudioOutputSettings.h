//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAudioOutputSettings.h>

#import <AVFoundation/AVDecodedAudioSettingsForFig-Protocol.h>
#import <AVFoundation/AVReencodedAudioSettingsForFig-Protocol.h>

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
- (id)audioOptions;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)willYieldCompressedSamples;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

