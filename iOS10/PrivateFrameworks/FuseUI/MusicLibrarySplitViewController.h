//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicSplitViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicNoContentViewDelegate-Protocol.h>
#import <FuseUI/MusicSwitcherButtonContainerViewDelegate-Protocol.h>
#import <FuseUI/SKUITabBarItemRootViewController-Protocol.h>

@class MusicClientContext, MusicLibraryTopBarController, MusicLibraryViewController, MusicNoContentView, MusicSwitcherButtonContainerView, NSString, SKUIClientContext, UIAlertController, UISwitch;

@interface MusicLibrarySplitViewController : MusicSplitViewController <MusicClientContextConsuming, MusicSwitcherButtonContainerViewDelegate, MusicNoContentViewDelegate, SKUITabBarItemRootViewController>
{
    UISwitch *_alertShowOfflineSwitch;
    UIAlertController *_filterAlertController;
    MusicSwitcherButtonContainerView *_librarySwitcherButtonContainerView;
    MusicLibraryViewController *_musicLibraryViewController;
    MusicNoContentView *_noContentView;
    _Bool _shouldShowMatchLoadingViewController;
    _Bool _shouldShowNoContentViewController;
    _Bool _shouldShowTurnOnCloudMediaSwitchInNoContentView;
    MusicLibraryTopBarController *_topBarController;
    MusicClientContext *_clientContext;
}

@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (void)_updateSizeOfLibrarySwitcherButtonContainerView;
- (void)_updatePrimaryWidthForTraitCollection;
- (void)_updatePrimaryViewController;
- (void)_updateNoContentViewVisibility;
- (void)_updateMatchLoadingViewVisibility;
- (void)_updateInclusionOfLibrarySwitcherButtonContainerView;
- (void)_presentHomeSharingPicker;
- (void)_setClientContextForViewController:(id)arg1;
- (id)_selectViewConfiguration:(id)arg1;
- (void)_registerForNotifications;
- (void)_handleFilterAlertControllerDismissal;
- (void)_delayedDismissFilterAlertController;
- (void)_musicDefaultsDidChangeNotification:(id)arg1;
- (void)_handleLibraryContentQuantityDidChangeNotification:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_cloudUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_accountStoreChangedNotification:(id)arg1;
- (void)_alertShowOfflineSwitchValueChangedAction:(id)arg1;
- (id)selectViewConfigurationWithIdentifier:(id)arg1;
- (void)presentViewSwitcherSheet;
@property(readonly, nonatomic) MusicLibraryViewController *libraryViewController;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)switcherButtonWasSelectedInContainerView:(id)arg1;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)_willChangePrimaryViewController:(id)arg1;
- (void)_willChangeDetailViewController:(id)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
