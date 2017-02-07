//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSString, PSSpecifier;

@interface HangTracerController : PSListController <UITextFieldDelegate>
{
    _Bool _enabled;
    float _runloopDuration;
    float _launchDuration;
    int _logLevel;
    PSSpecifier *_textSpec;
    PSSpecifier *_runloopDurationSlider;
    PSSpecifier *_runloopDurationLabel;
    PSSpecifier *_launchDurationText;
    PSSpecifier *_launchDurationSlider;
    PSSpecifier *_launchDurationLabel;
    PSSpecifier *_logLevelText;
    PSSpecifier *_logLevelSlider;
    PSSpecifier *_logLevelLabel;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (id)specifiers;
- (void)setTakeStackshots:(id)arg1 specifier:(id)arg2;
- (id)isEnabledTakeStackshots:(id)arg1;
- (void)setExcResourceHUD:(id)arg1 specifier:(id)arg2;
- (id)isEnabledExcResourceHUD:(id)arg1;
- (void)setHUDEnabled:(id)arg1 specifier:(id)arg2;
- (id)isEnabledHUD:(id)arg1;
- (id)launchDurationText:(id)arg1;
- (id)launchDuration:(id)arg1;
- (void)setLaunchDuration:(id)arg1 specifier:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)durationText:(id)arg1;
- (id)runloopDuration:(id)arg1;
- (void)setRunloopDuration:(id)arg1 specifier:(id)arg2;
- (id)logLevelText:(id)arg1;
- (id)getLogLevel:(id)arg1;
- (void)setLogLevel:(id)arg1 specifier:(id)arg2;
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;
- (id)tracingEnabled:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
