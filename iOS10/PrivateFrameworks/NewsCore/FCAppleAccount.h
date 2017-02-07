//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppleAccount-Protocol.h>

@class NSString;

@interface FCAppleAccount : NSObject <FCAppleAccount>
{
    _Bool _iCloudAccountChanged;
    NSString *_DSID;
    NSString *_userStoreFrontID;
    NSString *_contentStoreFrontID;
    NSString *_overrideContentStoreFrontID;
}

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;
@property(copy, nonatomic) NSString *overrideContentStoreFrontID; // @synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID;
@property(nonatomic) _Bool iCloudAccountChanged; // @synthesize iCloudAccountChanged=_iCloudAccountChanged;
@property(copy, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property(copy, nonatomic) NSString *userStoreFrontID; // @synthesize userStoreFrontID=_userStoreFrontID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
- (void).cxx_destruct;
- (void)t_stopOverridingContentStoreFrontID;
- (void)t_startOverridingContentStoreFrontID:(id)arg1;
- (void)_refreshUbiquityIdentityToken;
- (void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(_Bool)arg1;
- (id)currentStoreFrontID;
@property(readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, nonatomic) _Bool isContentStoreFrontSupported;
- (_Bool)isUserSignedIntoiTunes;
- (id)iTunesAccountName;
@property(readonly, nonatomic) NSString *endpointConnectionClientID;
@property(readonly, nonatomic, getter=isUserSignedInToiCloud) _Bool userSignedInToiCloud;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
- (void)loadStoreFrontIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
