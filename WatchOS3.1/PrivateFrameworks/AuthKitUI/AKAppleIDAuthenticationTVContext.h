//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

#import <AuthKitUI/AKTVSignInViewControllerDelegate-Protocol.h>

@class AKTVSignInViewController, NSString;

@interface AKAppleIDAuthenticationTVContext : AKAppleIDAuthenticationInAppContext <AKTVSignInViewControllerDelegate>
{
    AKTVSignInViewController *_signInViewController;
}

@property(retain, nonatomic) AKTVSignInViewController *signInViewController; // @synthesize signInViewController=_signInViewController;
- (void).cxx_destruct;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInViewControllerDidDismiss:(id)arg1;
- (void)signInViewControllerWillDismiss:(id)arg1;
- (void)signInViewControllerDidPresent:(id)arg1;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanUpBasicLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
