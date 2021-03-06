//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InternetAccounts/IAPlugin.h>

#import <InternetAccounts/IAAppTableControllerDelegateProtocol-Protocol.h>

@class IAAccount, IAAppCheckboxMatrixController, IAAppTableController, IASheetMorpher, NSArray, NSButton, NSDictionary, NSImageView, NSPrefCrossFadeWindow, NSTextField, NSView;

@interface IAAListPlugin : IAPlugin <IAAppTableControllerDelegateProtocol>
{
    IAAppTableController *_appTableController;
    IAAppCheckboxMatrixController *_appCheckboxMatrixController;
    IAAccount *_provisionalAccount;
    IASheetMorpher *_sheetMorpher;
    NSPrefCrossFadeWindow *_hostSheet;
    NSDictionary *_cachedDomains;
    NSArray *_topLevelObjects;
    NSArray *_appSelectionPanelNibObjects;
    unsigned long long _style;
    NSView *_validationView;
    NSView *_appSelectionView;
    NSView *_appTableContainer;
    NSTextField *_appSelectionAccountName;
    NSButton *_appSelectionOKButton;
    NSImageView *_appSelectionImage;
}

@property unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)help:(id)arg1;
- (void)back:(id)arg1;
- (void)continueButton:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)accountWasDeselected:(id)arg1;
- (void)accountWasSelected:(id)arg1;
- (BOOL)appToggle:(id)arg1;
- (id)_currentAppTableController;
- (id)accessoryViewForAccount:(id)arg1;
- (void)prepAppSelectionPanel;
- (unsigned long long)displayTypeForRegion:(id)arg1;
- (BOOL)showMigrationSyncAlertForService:(id)arg1;
- (BOOL)shouldShowMigrationSyncAlertForService:(id)arg1;
- (id)detailsUIControllerClassName;
- (id)domains;
- (BOOL)supportsDomain:(id)arg1;
- (BOOL)supportsDataMigration;
- (id)displayNameForApplication:(id)arg1;
- (id)serviceDisplayNameForService:(id)arg1;
- (id)supportURL;
- (id)brandName;
- (BOOL)shouldShowPasswordField;
- (id)badgeImage;
- (id)bannerImageLarge;
- (id)bannerImage;
- (id)accountDescriptionForSettings:(id)arg1;
- (id)defaultAccountDescription;
- (id)autodiscoverDomainForService:(id)arg1;
- (id)autodiscoverDomainForService:(id)arg1 options:(id)arg2;
- (id)autodiscoverDomain;
- (id)userNameFieldLabel;
- (id)accountFromSettings:(id)arg1;
- (id)imageForAccount:(id)arg1;
- (void)didDeleteAccount:(id)arg1;
- (void)willDeleteAccount:(id)arg1;
- (void)signInAccount:(id)arg1 inWindow:(id)arg2;
- (void)createAccountInWindow:(id)arg1 withSafariArgs:(id)arg2;
- (void)createAccountInWindow:(id)arg1;
- (BOOL)canSignOutForAccount:(id)arg1;
- (void)setEnabled:(BOOL)arg1 application:(id)arg2 account:(id)arg3 inWindow:(id)arg4;
- (void)configViewDidLoad;
- (void)configViewWillLoad;
- (id)signInView;
- (void)showAppSelectionPanel:(BOOL)arg1;
- (void)showValidationPanel:(BOOL)arg1;
- (void)showView:(id)arg1 animate:(BOOL)arg2;
- (id)initWithBundle:(id)arg1;

@end

