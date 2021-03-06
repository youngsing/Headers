//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TURepeatingActor;
@protocol OS_dispatch_queue;

@interface TUSoundPlayer : NSObject
{
    unsigned int _soundID;
    NSObject<OS_dispatch_queue> *_queue;
    TURepeatingActor *_repeatingActor;
}

@property(nonatomic) unsigned int soundID; // @synthesize soundID=_soundID;
@property(retain, nonatomic) TURepeatingActor *repeatingActor; // @synthesize repeatingActor=_repeatingActor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stopPlaying;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playSound:(unsigned int)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3;
- (void)playSoundIndefinitely:(unsigned int)arg1 pauseDurationBetweenIterations:(double)arg2;
- (void)playSound:(unsigned int)arg1;
- (id)init;

@end

