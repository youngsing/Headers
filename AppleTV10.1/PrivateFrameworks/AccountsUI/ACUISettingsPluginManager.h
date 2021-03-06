//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PSViewController;
@protocol ACUISettingsPluginParentProtocol;

@interface ACUISettingsPluginManager : NSObject
{
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}

- (void).cxx_destruct;
- (id)_loadSettingsPluginFromBundleWithName:(id)arg1;
- (id)_settingsPluginFromBundleWithName:(id)arg1;
- (id)contactsSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)mailSettingsPlugin;
- (void)parentViewControllerWillDisappear;
- (id)initWithParentViewController:(id)arg1;

@end

