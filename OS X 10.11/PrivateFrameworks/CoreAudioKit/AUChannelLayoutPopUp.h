//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAudioKit/AUNSFlippedView.h>

@class NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface AUChannelLayoutPopUp : AUNSFlippedView
{
    NSTextField *mTitle;
    NSTextField *mLayoutField;
    NSPopUpButton *mPopUpButton;
    struct ComponentInstanceRecord *mAudioUnit;
    struct AUListenerBase *mEventListener;
    BOOL hasEventListener;
}

+ (BOOL)channelLayoutSupportedForAU:(struct ComponentInstanceRecord *)arg1;
- (void)privUIWasAdjusted:(id)arg1;
- (void)synchronizeUI;
- (void)rebuildUI;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)removeEventListener;
- (void)addEventListener;
- (id)initWithFrame:(struct CGRect)arg1 au:(struct ComponentInstanceRecord *)arg2 listener:(struct AUListenerBase *)arg3 localizationBundle:(id)arg4;

@end

