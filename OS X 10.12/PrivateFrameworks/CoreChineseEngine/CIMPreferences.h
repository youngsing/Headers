//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer, NSUbiquitousKeyValueStore;

@interface CIMPreferences : NSObject
{
    BOOL _ubiquityEnabled;
    double _localTimeStamp;
    unsigned long long _scriptType;
    BOOL _usesDynamicPrompt;
    BOOL _usesCangjieDynamicPrompt;
    BOOL _usesSuchengDynamicPrompt;
    BOOL _showsAssociatedWords;
    BOOL _adjustsWordFrequency;
    BOOL _adjustsWordFrequencyZhuyin;
    BOOL _WBHInputKeysRemapped;
    BOOL _usesWBHSCIM;
    BOOL _usesWBHTCIM;
    BOOL _autocorrectionEnabled;
    BOOL _addSpacesForLatinWords;
    BOOL _shuangpinModeEnabled;
    BOOL _fuzzyPinyinEnabled;
    NSArray *_fuzzyPinyinPairs;
    unsigned long long _candidateWindowOrientation;
    unsigned long long _candidateWindowOrientationSCIM;
    unsigned long long _candidateWindowOrientationTCIM;
    double _fontSize;
    double _SCIMFontSize;
    double _TCIMFontSize;
    BOOL _SCIMShowsTraditionalCharacters;
    BOOL _TCIMShowsSimplifiedCharacters;
    NSArray *_enabledExpertDictionaryKeys;
    NSUbiquitousKeyValueStore *_defaultStore;
    NSString *_inputMode;
    BOOL _fromiCloudUpdate;
    NSString *_applicationIdentifier;
    NSString *_showsAssociatedWordsDefaultsKey;
    NSString *_adjustsWordFrequencyDefaultsKey;
    NSString *_shuangpinModeEnabledDefaultsKey;
    NSString *_fontSizeDefaultsKey;
    NSTimer *_loggingTimer;
    BOOL _loggingEnabled;
    unsigned long long _logLevel;
}

+ (void)setLogLevel:(unsigned long long)arg1;
+ (unsigned long long)logLevel;
+ (void)setLoggingEnabled:(BOOL)arg1;
+ (BOOL)loggingEnabled;
+ (BOOL)isAppleInternal;
+ (id)expertTCIMDictionaryDefaultsKeys;
+ (id)expertSCIMDictionaryDefaultsKeys;
+ (id)validFuzzyPinyinPairs;
+ (id)sharedUserDefaults;
+ (id)preferencesForInputMode:(id)arg1;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) BOOL loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(retain, nonatomic) NSTimer *loggingTimer; // @synthesize loggingTimer=_loggingTimer;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *defaultStore; // @synthesize defaultStore=_defaultStore;
@property(readonly, nonatomic) NSString *shuangpinModeEnabledDefaultsKey; // @synthesize shuangpinModeEnabledDefaultsKey=_shuangpinModeEnabledDefaultsKey;
@property(readonly, nonatomic) NSString *adjustsWordFrequencyDefaultsKey; // @synthesize adjustsWordFrequencyDefaultsKey=_adjustsWordFrequencyDefaultsKey;
@property(readonly, nonatomic) NSString *showsAssociatedWordsDefaultsKey; // @synthesize showsAssociatedWordsDefaultsKey=_showsAssociatedWordsDefaultsKey;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) double localTimeStamp; // @synthesize localTimeStamp=_localTimeStamp;
@property(nonatomic) BOOL ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
- (void).cxx_destruct;
- (void)logStats:(id)arg1;
- (void)logStatistics;
- (void)postDistributedNotificationName:(id)arg1 withUserInfo:(id)arg2;
@property(readonly, nonatomic) NSString *wubihuaKeyMappingToolTip;
@property(readonly, nonatomic) NSString *fontSizeDefaultsKey; // @synthesize fontSizeDefaultsKey=_fontSizeDefaultsKey;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) BOOL usesTonelessZhuyin;
@property(readonly, nonatomic) BOOL usesSessionText;
@property(nonatomic) BOOL collapseOnEdit;
@property(nonatomic) BOOL sendUsageStatistics;
@property(readonly, nonatomic) NSArray *expertDictionaryKeys;
@property(retain, nonatomic) NSArray *enabledExpertDictionaryKeys; // @synthesize enabledExpertDictionaryKeys=_enabledExpertDictionaryKeys;
@property(nonatomic) BOOL TCIMShowsSimplifiedCharacters; // @synthesize TCIMShowsSimplifiedCharacters=_TCIMShowsSimplifiedCharacters;
@property(nonatomic) BOOL SCIMShowsTraditionalCharacters; // @synthesize SCIMShowsTraditionalCharacters=_SCIMShowsTraditionalCharacters;
@property(nonatomic) double TCIMFontSize; // @synthesize TCIMFontSize=_TCIMFontSize;
@property(nonatomic) double SCIMFontSize; // @synthesize SCIMFontSize=_SCIMFontSize;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned long long candidateWindowOrientationTCIM;
@property(nonatomic) unsigned long long candidateWindowOrientationSCIM;
@property(readonly, nonatomic) unsigned long long candidateWindowOrientation;
- (void)saveToiCloud;
@property(retain, nonatomic) NSArray *fuzzyPinyinPairs; // @synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs;
@property(nonatomic) BOOL fuzzyPinyinEnabled; // @synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled;
@property(nonatomic) BOOL shuangpinModeEnabled; // @synthesize shuangpinModeEnabled=_shuangpinModeEnabled;
@property(nonatomic) BOOL autocorrectionEnabled; // @synthesize autocorrectionEnabled=_autocorrectionEnabled;
@property(nonatomic) BOOL addSpacesForLatinWords; // @synthesize addSpacesForLatinWords=_addSpacesForLatinWords;
@property(nonatomic) BOOL WBHInputKeysRemapped; // @synthesize WBHInputKeysRemapped=_WBHInputKeysRemapped;
@property(nonatomic) BOOL usesWBHTCIM; // @synthesize usesWBHTCIM=_usesWBHTCIM;
@property(nonatomic) BOOL usesWBHSCIM; // @synthesize usesWBHSCIM=_usesWBHSCIM;
@property(nonatomic) BOOL adjustsWordFrequencyWubixing;
@property(nonatomic) BOOL adjustsWordFrequencyStroke;
@property(nonatomic) BOOL adjustsWordFrequencySucheng;
@property(nonatomic) BOOL adjustsWordFrequency; // @synthesize adjustsWordFrequency=_adjustsWordFrequency;
@property(nonatomic) BOOL adjustsWordFrequencyZhuyin; // @synthesize adjustsWordFrequencyZhuyin=_adjustsWordFrequencyZhuyin;
@property(nonatomic) BOOL showsAssociatedWords; // @synthesize showsAssociatedWords=_showsAssociatedWords;
@property(nonatomic) BOOL usesSuchengDynamicPrompt; // @synthesize usesSuchengDynamicPrompt=_usesSuchengDynamicPrompt;
@property(nonatomic) BOOL usesCangjieDynamicPrompt; // @synthesize usesCangjieDynamicPrompt=_usesCangjieDynamicPrompt;
@property(readonly, nonatomic) BOOL usesDynamicPrompt; // @synthesize usesDynamicPrompt=_usesDynamicPrompt;
@property(readonly, nonatomic) unsigned long long scriptType; // @synthesize scriptType=_scriptType;
- (void)disableUbiquity;
- (void)updateiCloud:(id)arg1;
- (void)pushToCloud;
- (void)updatePreferences:(id)arg1 shouldMerge:(BOOL)arg2 localTimestamp:(unsigned long long)arg3;
- (void)initialSync;
- (void)toSynchronize;
- (void)synchronize;
- (void)enableUbiquity;
- (void)migratePreferences;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;

@end
