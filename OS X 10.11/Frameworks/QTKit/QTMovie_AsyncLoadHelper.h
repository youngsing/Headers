//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QTKit/QTMovieMediaHelper.h>

@class NSColor, NSDictionary, NSError, NSString, QTMovie;

__attribute__((visibility("hidden")))
@interface QTMovie_AsyncLoadHelper : QTMovieMediaHelper
{
    QTMovie *_parent;
    QTMovieMediaHelper *_loadingMediaHelper;
    BOOL _instantiateOnLoadingThread;
    Class _loadingMediaHelperClass;
    NSDictionary *_initAttributesForLoadingMediaHelper;
    NSError *_loadingError;
    BOOL _wasInvalidated;
    BOOL _autoplayWasRequested;
    BOOL _autoplayAtRateWasRequested;
    float _autoplayRate;
    BOOL _delegateWasSet;
    BOOL _volumeWasSet;
    BOOL _mutedWasSet;
    BOOL _activeWasSet;
    BOOL _activeAndVisibleWasSet;
    BOOL _apertureModeWasSet;
    BOOL _editableWasSet;
    BOOL _languageWasSet;
    BOOL _loopsWasSet;
    BOOL _loopsBackAndForthWasSet;
    BOOL _playsAllFramesWasSet;
    BOOL _playsSelectionOnlyWasSet;
    BOOL _usesPreferredLanguageWasSet;
    BOOL _visualHueWasSet;
    BOOL _visualSaturationWasSet;
    BOOL _visualBrightnessWasSet;
    BOOL _visualContrastWasSet;
    BOOL _visualBackgroundColorWasSet;
    BOOL _visualMovieBoxBackgroundColorWasSet;
    BOOL _visualDrawsMovieBoxBackgroundColorWasSet;
    BOOL _balanceWasSet;
    BOOL _bassWasSet;
    BOOL _gainWasSet;
    BOOL _trebleWasSet;
    float _volume;
    BOOL _muted;
    BOOL _active;
    BOOL _activeAndVisible;
    NSString *_apertureMode;
    BOOL _editable;
    long long _language;
    BOOL _loops;
    BOOL _loopsBackAndForth;
    BOOL _playsAllFrames;
    BOOL _playsSelectionOnly;
    BOOL _usesPreferredLanguage;
    float _visualHue;
    float _visualSaturation;
    float _visualBrightness;
    float _visualContrast;
    NSColor *_visualBackgroundColor;
    NSColor *_visualMovieBoxBackgroundColor;
    BOOL _visualDrawsMovieBoxBackgroundColor;
    float _balance;
    float _bass;
    float _gain;
    float _treble;
}

- (void)setTreble:(float)arg1;
- (float)treble;
- (void)setGain:(float)arg1;
- (float)gain;
- (void)setBass:(float)arg1;
- (float)bass;
- (void)setBalance:(float)arg1;
- (float)balance;
- (void)setVisualDrawsMovieBoxBackgroundColor:(BOOL)arg1;
- (BOOL)visualDrawsMovieBoxBackgroundColor;
- (void)setVisualMovieBoxBackgroundColor:(id)arg1;
- (id)visualMovieBoxBackgroundColor;
- (void)setVisualBackgroundColor:(id)arg1;
- (id)visualBackgroundColor;
- (void)setVisualContrast:(float)arg1;
- (float)visualContrast;
- (void)setVisualBrightness:(float)arg1;
- (float)visualBrightness;
- (void)setVisualSaturation:(float)arg1;
- (float)visualSaturation;
- (void)setVisualHue:(float)arg1;
- (float)visualHue;
- (void)setUsesPreferredLanguage:(BOOL)arg1;
- (void)setPlaysSelectionOnly:(BOOL)arg1;
- (BOOL)playsSelectionOnly;
- (void)setPlaysAllFrames:(BOOL)arg1;
- (BOOL)playsAllFrames;
- (void)setLoopsBackAndForth:(BOOL)arg1;
- (BOOL)loopsBackAndForth;
- (void)setLoops:(BOOL)arg1;
- (BOOL)loops;
- (void)setLanguage:(long long)arg1;
- (long long)language;
- (void)setEditable:(BOOL)arg1;
- (BOOL)editable;
- (void)setApertureMode:(id)arg1;
- (id)apertureMode;
- (void)setActiveAndVisible:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (BOOL)isActive;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)autoplay:(float)arg1;
- (void)autoplay;
- (CDStruct_900afa40)maxTimeLoaded;
- (BOOL)usesVisualContext;
- (CDStruct_900afa40)duration;
- (BOOL)wouldUseVisualContext;
- (id)loadStateError;
- (int)status;
- (long long)loadState;
- (void)setCurrentTime:(CDStruct_900afa40)arg1;
- (void)setRate:(float)arg1;
- (id)diagnosticString;
- (void)transferStateToMediaHelper:(id)arg1;
- (void)copyStateFromMediaHelper:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 forParent:(id)arg2;
- (void)_mediaHelperFinishedLoadingWithError:(id)arg1;
- (void)_loadMediaHelperOnBackgroundThreadWithAttributes:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 error:(id *)arg2 forParent:(id)arg3;

@end

