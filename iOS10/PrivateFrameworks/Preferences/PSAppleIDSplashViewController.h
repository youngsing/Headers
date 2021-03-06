//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/RemoteUIControllerDelegate-Protocol.h>

@class ABMonogrammer, AKAppleIDAuthenticationController, NSString, NSTimer, PSSpecifier, RemoteUIController, UIActivityIndicatorView, UIBarButtonItem, UIImageView;

@interface PSAppleIDSplashViewController : PSListController <RemoteUIControllerDelegate>
{
    AKAppleIDAuthenticationController *_authController;
    UIImageView *_silhouetteView;
    UIActivityIndicatorView *_spinner;
    UIBarButtonItem *_spinnerBarItem;
    UIBarButtonItem *_nextButtonBarItem;
    UIBarButtonItem *_cancelButtonBarItem;
    ABMonogrammer *_monogrammer;
    PSSpecifier *_createNewAccountButtonSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    NSString *_username;
    NSString *_password;
    id _textFieldTextDidChangeObserver;
    _Bool _isPasswordDirty;
    _Bool _shouldHideBackButton;
    void *_powerAssertion;
    NSTimer *_idleJiggleTimer;
    RemoteUIController *_remoteUIController;
    CDUnknownBlockType _remoteUICompletion;
    _Bool _isPresentedModally;
    _Bool _shouldShowCreateAppleIDButton;
}

@property(nonatomic) _Bool shouldShowCreateAppleIDButton; // @synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton;
@property(nonatomic, setter=setPresentedModally:) _Bool isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
- (void).cxx_destruct;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)_idleTimerFired;
- (void)_allowSleepAndDimming;
- (void)_preventSleepAndDimming;
- (_Bool)_shouldShowCancelDone;
- (_Bool)_runningInMail;
- (id)_monogrammer;
@property(readonly, nonatomic) AKAppleIDAuthenticationController *authenticationController;
- (void)_presentInvalidUsernameAlert;
- (void)_signInButtonWasTapped:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)returnPressedAtEnd;
- (void)_createNewAppleIDButtonWasTapped:(id)arg1;
- (void)_iForgotButtonWasTapped:(id)arg1;
- (void)_setInteractionEnabled:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)hideBusyUI;
- (void)showBusyUI;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)_updateSignInButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_openWebBasedCredentialRecoveryFlow;
- (void)createNewAppleIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)willBeginAuthWithContext:(id)arg1;
- (void)_signInWithUsername:(id)arg1 password:(id)arg2;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameForSpecifier:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_presentAppleIDPrivacyInformationPane;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForSignInButton;
- (id)_specifiersForLoginForm;
- (id)specifiers;
- (void)dealloc;
- (id)serviceIcon;
- (id)serviceDescription;
- (id)serviceName;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

