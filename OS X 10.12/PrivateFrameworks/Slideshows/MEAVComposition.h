//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition;

@interface MEAVComposition : NSObject
{
    AVComposition *_composition;
    AVAudioMix *_audioMix;
}

@property(readonly, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(readonly, nonatomic) AVComposition *composition; // @synthesize composition=_composition;
- (void)dealloc;
- (id)initWithComposition:(id)arg1 andAudioMix:(id)arg2;

@end
