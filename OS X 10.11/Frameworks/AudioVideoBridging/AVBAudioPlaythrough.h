//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioEngine, NSString;

@interface AVBAudioPlaythrough : NSObject
{
    unsigned int _aggregateID;
    unsigned int _inputID;
    unsigned int _outputID;
    NSString *_aggregateUID;
    AVAudioEngine *_audioEngine;
}

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)handleInterruption:(id)arg1;
- (void)configureChainForAudioEngine:(id)arg1 withFormat:(id)arg2;
- (id)initWithInputID:(unsigned int)arg1 andOutputID:(unsigned int)arg2;

@end

