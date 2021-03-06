//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocol.h>

@class NEKeychainItem, NSArray, NSData, NSString;

@interface NEVPNProtocolIPSec : NEVPNProtocol
{
    NSData *_sharedSecretReference;
    BOOL _useExtendedAuthentication;
    BOOL _extendedAuthPasswordPrompt;
    long long _authenticationMethod;
    NSString *_localIdentifier;
    NSString *_remoteIdentifier;
    NEKeychainItem *_sharedSecretKeychainItem;
    NSArray *_legacyProposals;
    NSArray *_legacyExchangeMode;
}

+ (BOOL)supportsSecureCoding;
@property BOOL extendedAuthPasswordPrompt; // @synthesize extendedAuthPasswordPrompt=_extendedAuthPasswordPrompt;
@property(copy) NSArray *legacyExchangeMode; // @synthesize legacyExchangeMode=_legacyExchangeMode;
@property(copy) NSArray *legacyProposals; // @synthesize legacyProposals=_legacyProposals;
@property(copy) NEKeychainItem *sharedSecretKeychainItem; // @synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem;
@property(copy) NSString *remoteIdentifier; // @synthesize remoteIdentifier=_remoteIdentifier;
@property(copy) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(copy) NSData *sharedSecretReference; // @synthesize sharedSecretReference=_sharedSecretReference;
@property BOOL useExtendedAuthentication; // @synthesize useExtendedAuthentication=_useExtendedAuthentication;
@property long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
- (void).cxx_destruct;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;
- (void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(_Bool)arg2;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (struct __SCNetworkInterface *)createInterface;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

