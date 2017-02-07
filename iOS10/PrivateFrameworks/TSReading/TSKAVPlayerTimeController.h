//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject
{
    id mTimeObserver;
    _Bool mObservingPlayerStatus;
    double mAbsoluteCurrentTime;
    double mCurrentTime;
    double mRemainingTime;
    double mUpdateInterval;
    TSKAVPlayerController *mPlayerController;
}

@property(readonly, retain, nonatomic) TSKAVPlayerController *playerController; // @synthesize playerController=mPlayerController;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=mUpdateInterval;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=mRemainingTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=mCurrentTime;
@property(nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=mAbsoluteCurrentTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_endScrubbing;
- (void)p_beginScrubbingIfNeeded;
- (void)p_setTimeValuesWithoutScrubbing;
- (void)p_teardownTimeObserver;
- (void)p_createTimeObserver;
- (void)stopObservingTime;
- (void)startObservingTime;
- (void)dealloc;
- (id)initWithPlayerController:(id)arg1;

@end
