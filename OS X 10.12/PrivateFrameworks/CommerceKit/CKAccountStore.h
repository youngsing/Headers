//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>

#import <CommerceKit/ISStoreURLOperationDelegate-Protocol.h>

@class ISStoreAccount, NSArray, NSString;

@interface CKAccountStore : CKServiceInterface <ISStoreURLOperationDelegate>
{
}

+ (id)sharedAccountStore;
- (void)removePrimaryAccountObserver:(id)arg1;
- (id)addPrimaryAccountObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)getTouchIDStateForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setTouchIDStateForAccount:(id)arg1 state:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updatePasswordSettings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getPasswordSettingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUnfilteredPasswordSettingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getEligibilityForService:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)eligibilityForService:(long long)arg1;
- (void)signOut;
- (void)viewAccount;
- (void)signIn;
- (void)signInWithSuggestedAppleID:(id)arg1 allowChangeOfAppleID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAccount:(id)arg1;
- (id)accountWithAppleID:(id)arg1;
- (id)accountForDSID:(id)arg1;
@property(readonly) BOOL primaryAccountIsPresentAndSignedIn;
@property(readonly) ISStoreAccount *primaryAccount;
@property(readonly) NSArray *accounts;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
