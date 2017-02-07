//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ATVAuthenticationContext, SSAccount;
@protocol OS_dispatch_queue;

@interface TVSStoreAccountManager : NSObject
{
    ATVAuthenticationContext *_pendingAuthenticationContext;
    ATVAuthenticationContext *_activeAuthenticationContext;
    SSAccount *_activeAccount;
    _Bool _makingAccountChanges;
    _Bool _isActiveAccountUpdateScheduled;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    NSObject<OS_dispatch_queue> *_authenticationQueue;
}

+ (_Bool)automaticallyNotifiesObserversOfActiveAccount;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_performSynchronizedBlock:(CDUnknownBlockType)arg1;
- (void)_updateActiveAccount;
- (void)_accountStoreChanged;
- (void)_authenticateActivityChanged:(id)arg1;
- (void)_handleAuthenticationContext:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_setAuthenticationContext:(id)arg1;
- (id)_popAuthenticationContext;
- (void)_dequeueAuthenticationContextAndAuthenticate;
- (void)fetchFamilyInfoForActiveAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticateAccount:(id)arg1 withPassword:(id)arg2 allowPrompt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)authenticateAccount:(id)arg1 allowPrompt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateWithName:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccount:(id)arg1;
- (void)signOutAccount:(id)arg1;
- (void)_signOutAccount:(id)arg1 eraseKeyChainData:(_Bool)arg2;
@property(readonly, nonatomic) SSAccount *activeAccount;
- (id)setActiveAccount:(id)arg1;
- (id)accountWithAccountName:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)accounts;
- (id)init;

@end
