//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QTKit/QTKeyValueProxy.h>

@class NSTimer, QTMovie;

__attribute__((visibility("hidden")))
@interface QTMoviePlaybackControllerSelection : QTKeyValueProxy
{
    CDStruct_900afa40 _currentTime;
    NSTimer *_currentTimeTimer;
    double _currentTimeTimerInterval;
    double _currentTimeUpdateFrequency;
    unsigned int _setValueForKeyDepth;
    unsigned int _flags;
}

+ (id)keyPathsForValuesAffectingRemainingTime;
+ (BOOL)shouldProxyValueForRemainingTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (BOOL)shouldProxyValueForCurrentTime;
- (void)setTarget:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)remainingTime;
- (void)setCurrentTime:(id)arg1;
- (id)currentTime;
- (void)_stopScrubbing;
- (void)_startScrubbingIfAppropriate;
@property(nonatomic) BOOL automaticallyPauseWhenSessionResignsActive; // @dynamic automaticallyPauseWhenSessionResignsActive;
@property(nonatomic) BOOL automaticallyPreventsIdleSleep; // @dynamic automaticallyPreventsIdleSleep;
@property(nonatomic) BOOL automaticallyScrubs; // @dynamic automaticallyScrubs;
@property(nonatomic) double currentTimeUpdateFrequency; // @dynamic currentTimeUpdateFrequency;
@property(retain, nonatomic) QTMovie *movie; // @dynamic movie;
- (void)_updateCurrentTime:(id)arg1;
- (void)_updateCurrentTimeTimer;
- (double)_effectiveUpdateInterval;
- (void)dealloc;
- (id)init;

@end

