//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABACAccount, ACAccount, ACAccountStore, NSArray, NSString;

@protocol ABACAccountStore <NSObject>
+ (id)ABACAccountStoreFromACAccountStore:(ACAccountStore *)arg1;
- (ACAccount *)accountWithIdentifier:(NSString *)arg1 returnCachedVersion:(BOOL)arg2;
- (void)removeAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)saveVerifiedAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (BOOL)mergeLocalDataIntoParentAccountWithID:(NSString *)arg1;
- (void)discoverPropertiesForAccount:(ABACAccount *)arg1 withCompletionHandler:(void (^)(ABACAccount *, NSError *))arg2;
- (NSString *)passwordForAccount:(ABACAccount *)arg1;
- (ABACAccount *)accountWithABAccountIdentifier:(NSString *)arg1;
- (NSArray *)allContactsAccounts;
@end

