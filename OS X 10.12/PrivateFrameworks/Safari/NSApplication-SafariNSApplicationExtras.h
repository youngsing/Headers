//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@interface NSApplication (SafariNSApplicationExtras)
- (unsigned long long)_presentationOptionsByValidatingOptions:(unsigned long long)arg1;
- (void)_setPresentationOptionsThatHideMenuBar;
- (void)_setPresentationOptionsThatAutoHideMenuBar;
- (long long)safari_runModalSheet:(id)arg1 presentingWindow:(id)arg2;
- (long long)safari_runModalSheet:(id)arg1;
- (void)safari_setFullScreenMenuHidingMode:(long long)arg1;
@property(readonly, nonatomic, getter=safari_isVoiceOverEnabled) BOOL safari_voiceOverEnabled;
@end

