//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

__attribute__((visibility("hidden")))
@interface AUV2BridgeBus : AUAudioUnitBus
{
    AUAudioUnitV2Bridge *_owner;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _scope;
    unsigned int _element;
}

- (void)setEnabled:(_Bool)arg1;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (id)format;
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;

@end

