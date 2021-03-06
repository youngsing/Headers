//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <BridgePreferences/BPSInternalGlanceObserverDelegate-Protocol.h>

@class BBSectionInfo, BPSInternalGlanceManager, NGSGlance, NPSDomainAccessor, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier;

@interface BPSNotificationAppController : PSListController <BPSInternalGlanceObserverDelegate>
{
    _Bool _mirrorSettings;
    NSString *_bundleIdentifier;
    BBSectionInfo *_bbSectionInfo;
    NSMutableArray *_notificationApplicationSpecifiers;
    NGSGlance *_glance;
    BPSInternalGlanceManager *_manager;
    BPSInternalGlanceManager *_oldManager;
    NPSDomainAccessor *_bbAppsSettings;
    NSMutableArray *_notificationSpecifiers;
    NSMutableDictionary *_sectionInfo;
    unsigned long long _settingsMode;
}

@property(nonatomic) unsigned long long settingsMode; // @synthesize settingsMode=_settingsMode;
@property(readonly, nonatomic) NSMutableDictionary *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(readonly, nonatomic) _Bool mirrorSettings; // @synthesize mirrorSettings=_mirrorSettings;
@property(readonly, nonatomic) NSMutableArray *notificationSpecifiers; // @synthesize notificationSpecifiers=_notificationSpecifiers;
@property(retain, nonatomic) NPSDomainAccessor *bbAppsSettings; // @synthesize bbAppsSettings=_bbAppsSettings;
@property(retain, nonatomic) BPSInternalGlanceManager *oldManager; // @synthesize oldManager=_oldManager;
@property(retain, nonatomic) BPSInternalGlanceManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NGSGlance *glance; // @synthesize glance=_glance;
@property(retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers; // @synthesize notificationApplicationSpecifiers=_notificationApplicationSpecifiers;
@property(retain, nonatomic) BBSectionInfo *bbSectionInfo; // @synthesize bbSectionInfo=_bbSectionInfo;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)localizedPreviewGroupFooter;
- (id)localizedPreviewGroupLabel;
- (_Bool)wantsPreviewChoice;
- (id)localizedPreviewChoiceTitle;
@property(readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
- (long long)alertType;
@property(readonly, nonatomic) _Bool showPreview;
@property(readonly, nonatomic) _Bool showAlerts;
- (id)vibrationValue:(id)arg1;
- (void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2;
- (id)soundsValue:(id)arg1;
- (void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2;
- (id)showPreviewValue:(id)arg1;
- (void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2;
- (id)showAlertsValue:(id)arg1;
- (void)setShowAlertsValue:(id)arg1 forSpecifier:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setMirrorSettings:(_Bool)arg1;
- (void)writeSectionState;
- (id)localizedMirroringDetailFooter;
- (id)applicationGroupSpecifiers;
- (id)mirroredApplicationGroupSpecifiers;
- (void)mirrorSettingsChanged:(_Bool)arg1;
- (_Bool)wantsGlanceRowIfApplicable;
- (_Bool)suppressAllMirrorSpecifiers;
- (_Bool)suppressAlertSpecifiers;
- (_Bool)suppressMirrorOption;
- (void)settingsManagerReloadedGlances:(id)arg1;
- (id)showsGlance:(id)arg1;
- (void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2;
- (id)applicationBundleIdentifier;
- (id)localizedPaneTitle;
- (void)removeAlertOptions;
- (void)removeMirrorOptions;
- (void)updateSubsections;
- (id)sectionInfoForBBSectionInfo:(id)arg1;
- (void)_showSettingsNotifications;
- (id)customGroupSpecifierForDescription:(id)arg1;
- (id)specifiers;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (id)bulletinBoardSettings;
- (_Bool)caresAboutSubsections;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)viewWillAppear:(_Bool)arg1;
- (id)bundle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

