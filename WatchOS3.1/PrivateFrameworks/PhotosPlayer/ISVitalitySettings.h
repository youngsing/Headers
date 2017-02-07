//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISSettings.h>

#import <PhotosPlayer/ISVitalitySettings-Protocol.h>

@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings>
{
    _Bool _shouldPreroll;
    _Bool _useLegacyBehavior;
    ISVitalitySpecificSettings *_oneUpSettings;
    ISVitalitySpecificSettings *_shareViewSettings;
    ISVitalitySpecificSettings *_activityViewSettings;
    ISVitalitySpecificSettings *_orbPreviewSettings;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(retain, nonatomic) ISVitalitySpecificSettings *orbPreviewSettings; // @synthesize orbPreviewSettings=_orbPreviewSettings;
@property(retain, nonatomic) ISVitalitySpecificSettings *activityViewSettings; // @synthesize activityViewSettings=_activityViewSettings;
@property(retain, nonatomic) ISVitalitySpecificSettings *shareViewSettings; // @synthesize shareViewSettings=_shareViewSettings;
@property(retain, nonatomic) ISVitalitySpecificSettings *oneUpSettings; // @synthesize oneUpSettings=_oneUpSettings;
@property(nonatomic) _Bool useLegacyBehavior; // @synthesize useLegacyBehavior=_useLegacyBehavior;
@property(nonatomic) _Bool shouldPreroll; // @synthesize shouldPreroll=_shouldPreroll;
- (void).cxx_destruct;
- (id)_defaultSettings;
- (double)minimumDurationForColorMismatch;
- (double)maximumDelayBeforePlayback;
- (double)minimumVisibilityFactor;
- (double)endTimeOffset;
- (double)playbackRate;
- (long long)maximumNumberOfFrames;
- (double)relativeEnd;
- (double)relativeStart;
- (double)maximumDeceleration;
- (double)maximumRate;
- (double)postDuration;
- (double)preDuration;
- (long long)behavior;
- (void)setDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
