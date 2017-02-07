//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNNavigationAudioSession, NSBundle, NSHashTable, NSLocale, NSString;

@interface MNVoiceController : NSObject
{
    MNNavigationAudioSession *_activeNavigationSession;
    long long _currentLanguageSource;
    NSString *_currentLanguage;
    NSLocale *_currentLocale;
    NSBundle *_spokenBundle;
    NSString *_uiLanguage;
    BOOL _isPersistentConnectionOpen;
    long long _audioSessionState;
    NSHashTable *_observers;
    double _lastSpeechStartTime;
    NSString *_lastSpeech;
    unsigned long long _charactersSpokenCount;
    double _charactersSpokenDuration;
    BOOL _deviceMuted;
}

+ (id)defaultVoiceLanguageWithSource:(long long *)arg1;
+ (id)_uiLanguage;
+ (id)localizedStringForKey:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL deviceMuted; // @synthesize deviceMuted=_deviceMuted;
@property(retain, nonatomic) MNNavigationAudioSession *activeNavigationSession; // @synthesize activeNavigationSession=_activeNavigationSession;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setMaintainInactivePersistentConnection:(BOOL)arg1;
- (void)_setLoggingEnabled:(BOOL)arg1;
- (void)setAudioSessionProperties;
- (void)setVolume:(double)arg1;
- (void)endAnnounce;
- (void)prepareToAnnounce;
- (void)warmUpTTS;
- (void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1;
- (BOOL)isPlayingAudio;
- (BOOL)isSpeaking;
- (void)clearAllEvents;
- (void)stop;
- (void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_setGender;
- (void)_defaultsDidChange;
@property(readonly, nonatomic) BOOL speechMuted;
- (void)_updateCurrentVoiceLanguage;
- (double)durationToSpeak:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) NSLocale *currentVoiceLocale;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
- (id)init;
- (void)dealloc;

@end
