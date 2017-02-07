//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/SATVViewController.h>

#import <SetupAssistantTV/BuddyController-Protocol.h>
#import <SetupAssistantTV/SATVBuddyController-Protocol.h>

@class NSString, SATVLoginView, TVActivityIndicatorViewController, TVSStateMachine, TVSiCloudAccountManager, UISystemInputViewController;

@interface SATVLoginViewController : SATVViewController <SATVBuddyController, BuddyController>
{
    _Bool _iCloudLoggedIn;
    _Bool _didLoginOrSkipFromAppleID;
    _Bool _comingFromTapToSetup;
    TVSStateMachine *_loginStateMachine;
    UISystemInputViewController *_systemInputViewController;
    SATVLoginView *_loginView;
    TVActivityIndicatorViewController *_activityIndicatorViewController;
    NSString *_appleIDUsername;
    NSString *_iCloudUsername;
    NSString *_iTunesUsername;
    TVSiCloudAccountManager *_iCloudAccountManager;
}

@property(nonatomic) _Bool comingFromTapToSetup; // @synthesize comingFromTapToSetup=_comingFromTapToSetup;
@property(nonatomic) _Bool didLoginOrSkipFromAppleID; // @synthesize didLoginOrSkipFromAppleID=_didLoginOrSkipFromAppleID;
@property(nonatomic, getter=isiCloudLoggedIn) _Bool iCloudLoggedIn; // @synthesize iCloudLoggedIn=_iCloudLoggedIn;
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(retain, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(retain, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(retain, nonatomic) NSString *appleIDUsername; // @synthesize appleIDUsername=_appleIDUsername;
@property(retain, nonatomic) TVActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)_loginComplete;
- (void)_postLoginSucceeded;
- (void)_postLoginFailed;
- (void)_postAuthenticationResults:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)_authenticateiCloudAccountWithUsername:(id)arg1 password:(id)arg2;
- (void)_authenticateStoreAccountWithUsername:(id)arg1 password:(id)arg2;
- (void)_authenticateAppleIDWithUsername:(id)arg1 password:(id)arg2;
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;
- (void)_setUsernamePlaceholder;
- (void)_setPasswordPlaceholder;
- (void)_showiCloudPasswordScreen;
- (void)_showiCloudUsernameScreen;
- (void)_showiTunesPasswordScreen;
- (void)_showiTunesUsernameScreen;
- (void)_showAppleIDPasswordScreen;
- (void)_showAppleIDUsernameScreen;
- (void)_reloadForStateChange;
- (void)_setTextFieldText:(id)arg1;
- (void)_clearTextField;
- (id)_textFieldText;
- (void)_hideLoginView;
- (void)_hideActivityIndicator;
- (void)_showActivityIndicator;
- (void)_updatePreferredFocusedViewForGridLayoutGuide;
- (void)_rememberEmailRecentInput:(id)arg1;
- (void)_textDidChange;
- (void)_menuSelected;
- (void)_useSeparateIDsSelected;
- (void)_skipButtonSelected;
- (void)_continueButtonSelected;
- (void)_setControlTargets;
- (void)_setViewsForInitialState;
- (void)_registerStateMachineEvents;
- (void)_doneButtonPressed:(id)arg1;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (id)preferredFocusEnvironments;
- (void)customMenuAction;
- (void)navigationResultedFromBackAction;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupSystemInputViewController;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isStandardNavigation) _Bool standardNavigation;
@property(readonly) Class superclass;

@end
