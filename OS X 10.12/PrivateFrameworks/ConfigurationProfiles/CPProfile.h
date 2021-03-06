//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ConfigurationProfiles/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface CPProfile : NSObject <NSSecureCoding>
{
    NSString *name;
    NSString *organization;
    NSString *configurationDescription;
    NSString *profileIdentifier;
    NSString *profileUUID;
    unsigned long long profileVersion;
    NSString *profileType;
    BOOL removaldisallowed;
    NSDate *installationDate;
    NSString *assignedUserName;
    NSString *assignedUserGUID;
    NSMutableDictionary *internalData;
    NSArray *configurationItems;
    BOOL verificationStateCalculated;
    int verificationState;
    unsigned long long indexOfFailedVerificationSigner;
    NSString *signerName;
    struct AuthorizationOpaqueRef *authorizationRef;
}

+ (int)calculateVerificationStateForCertificatesInfo:(id)arg1 indexOfFailedSigner:(unsigned long long *)arg2;
+ (id)buildCertificateListFromSigners:(id)arg1 firstCertData:(id)arg2;
+ (id)decodeProfileData:(id)arg1 returningError:(id *)arg2;
+ (BOOL)supportsSecureCoding;
@property(retain) NSString *assignedUserGUID; // @synthesize assignedUserGUID;
@property(retain) NSString *assignedUserName; // @synthesize assignedUserName;
@property(retain) NSDate *installationDate; // @synthesize installationDate;
@property(readonly) BOOL verificationStateCalculated; // @synthesize verificationStateCalculated;
@property(readonly) unsigned long long profileVersion; // @synthesize profileVersion;
@property(readonly, retain) NSString *profileType; // @synthesize profileType;
@property(readonly) BOOL removaldisallowed; // @synthesize removaldisallowed;
@property(readonly, retain) NSArray *configurationItems; // @synthesize configurationItems;
@property(readonly, retain) NSString *profileUUID; // @synthesize profileUUID;
@property(readonly, retain) NSString *profileIdentifier; // @synthesize profileIdentifier;
@property(readonly, retain) NSString *configurationDescription; // @synthesize configurationDescription;
@property(readonly, retain) NSString *organization; // @synthesize organization;
@property(readonly, retain) NSString *name; // @synthesize name;
- (void)priv_SetConfigurationItems:(id)arg1;
- (id)getOTAIdentityProfileIdentifier;
- (BOOL)isFinalOTAProfile;
- (BOOL)isOTAProfile;
@property(retain) NSMutableDictionary *internalData;
@property(readonly, retain) NSString *signerName;
- (id)firstInvalidSignerCertificateData;
@property(readonly) int verificationState;
- (BOOL)adminRemovalDisallowed;
- (BOOL)removalPasswordMatches:(id)arg1;
- (BOOL)haveRemovalPassword;
- (id)signerCertificates:(id)arg1;
@property(readonly, nonatomic) NSDate *effectiveRemovalDate;
- (id)signerCertificatesInfo;
@property(readonly, retain) NSDictionary *consentText;
@property(readonly, retain) NSString *profileScope;
- (BOOL)payloadDisabled:(id)arg1;
@property(readonly, nonatomic) BOOL payloadIsExpired;
@property(readonly, nonatomic) NSDate *payloadExpirationDate;
- (BOOL)isSystemProfile;
- (BOOL)installFinished;
- (BOOL)installedFromDEP;
- (BOOL)installedFromOD;
- (BOOL)installedByMDM;
@property(readonly, nonatomic) BOOL wasEncrypted;
- (void)setAuthorizationFromData:(id)arg1;
@property(nonatomic) struct AuthorizationOpaqueRef *authorizationRef;
- (void)finalize;
- (void)dealloc;
- (id)initWithConfigurationProfileDictionary:(id)arg1 error:(id *)arg2;
- (id)initForProvisioningProfile:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (BOOL)_initFromDict:(id)arg1 error:(id *)arg2;
- (id)configurationProfileDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)validateKeys;
- (void)removeUserData:(id)arg1 forKey:(id)arg2;
- (void)setUserData:(id)arg1 forKey:(id)arg2;
- (id)userDataForKey:(id)arg1;
@property(readonly) BOOL requiresAdministratorAuthorizationToInstall;
@property(readonly) BOOL containsComputerItems;
- (BOOL)profileHasAccountsPayload;
- (BOOL)profileHasVPNPayload;
- (BOOL)profileHas8021XPayload;
- (int)accessBitFlagsForProfile;
- (id)getTrustedAppsForPayloadKeychainItem:(id)arg1;
- (BOOL)accountExistsInUserHomeForAccountTypes:(id)arg1 payloadID:(id)arg2 userGUID:(id)arg3;
- (BOOL)accountExistsInUserHome:(id)arg1 payloadID:(id)arg2 userGUID:(id)arg3;
- (id)getAccountInfoForAccountTypes:(id)arg1 payloadID:(id)arg2;
- (id)getAccountInfoForAccountType:(id)arg1 payloadID:(id)arg2;
- (BOOL)removeAccountInfo:(id)arg1 payloadID:(id)arg2 accountType:(id)arg3;
- (BOOL)addAccountInfo:(id)arg1 payloadID:(id)arg2 accountType:(id)arg3;
- (BOOL)userInfoFromGUID:(id)arg1 outUserName:(id *)arg2 outUserUID:(unsigned int *)arg3;
- (id)prefsFileLocationFromGUID:(id)arg1;
- (id)pathToUserAccountsFile:(id)arg1;
- (id)readUserAccountPayloadData:(id)arg1 forAccount:(id)arg2 userGUID:(id)arg3;
- (BOOL)removeUserAccountPayloadData:(id)arg1 forAccount:(id)arg2 forUser:(id)arg3;
- (BOOL)addUserAccountData:(id)arg1 payloadID:(id)arg2 forAccount:(id)arg3 forUser:(id)arg4 error:(id *)arg5;
- (BOOL)writeUserAccountArrayData:(id)arg1 forAccount:(id)arg2 forUser:(id)arg3 error:(id *)arg4;
- (id)readUserAccountArrayData:(id)arg1 forUser:(id)arg2;
- (id)createAccountInfoDict:(id)arg1 accountInfo:(id)arg2;

@end

