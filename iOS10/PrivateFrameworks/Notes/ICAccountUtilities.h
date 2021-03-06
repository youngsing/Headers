//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject
{
    _Bool _primaryICloudACAccountValid;
    ACAccount *_primaryICloudACAccount;
    ACAccountStore *_accountStore;
    NSDictionary *_currentICloudAccountState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isPrimaryICloudACAccountValid) _Bool primaryICloudACAccountValid; // @synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid;
@property(copy, nonatomic) NSDictionary *currentICloudAccountState; // @synthesize currentICloudAccountState=_currentICloudAccountState;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (void)invalidatePrimaryICloudACAccount;
- (void)internalInvalidatePrimaryICloudACAccount;
@property(readonly, nonatomic) _Bool didChooseToMigratePrimaryICloudAccount;
@property(readonly, nonatomic) _Bool primaryICloudAccountEnabled;
- (id)allICloudACAccounts;
@property(readonly) ACAccount *primaryICloudACAccount; // @synthesize primaryICloudACAccount=_primaryICloudACAccount;
- (void)updateICloudACAccountFromStore;
- (void)dealloc;
- (id)initForObservingAccountStoreChanges:(_Bool)arg1;
- (id)init;

@end

