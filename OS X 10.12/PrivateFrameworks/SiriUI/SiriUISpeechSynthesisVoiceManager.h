//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SiriUISpeechSynthesisVoiceManager : NSObject
{
    NSDictionary *_voiceLanguageDict;
}

+ (void)adjustDownloadedVoiceStatusAfterSiriEnabled:(BOOL)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)preferredGenderForLanguage:(id)arg1;
- (id)voicesForLanguage:(id)arg1;
- (id)voicesForLanguage:(id)arg1 ignoringRegion:(BOOL)arg2 stripVoiceName:(BOOL)arg3;
- (id)voicesForLanguage:(id)arg1 ignoringRegion:(BOOL)arg2;
- (id)init;

@end
