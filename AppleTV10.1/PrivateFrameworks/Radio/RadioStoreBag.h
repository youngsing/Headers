//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, SSVPlatformContext;

@interface RadioStoreBag : NSObject
{
    NSArray *_amdDomains;
    NSString *_leaseCertificateURLString;
    NSDictionary *_mescalRequestWhitelist;
    NSDictionary *_mescalResponseWhitelist;
    NSString *_mescalSetupCertURLString;
    NSString *_mescalSetupURLString;
    SSVPlatformContext *_platformContext;
    NSNumber *_shouldSendKBSyncDataValue;
    NSString *_srdnldURLString;
    NSString *_storeFrontSuffix;
    NSDictionary *_tiltDictionary;
}

@property(readonly, nonatomic) NSString *leaseCertificateURLString; // @synthesize leaseCertificateURLString=_leaseCertificateURLString;
@property(readonly, nonatomic) NSString *streamingDownloadURLString; // @synthesize streamingDownloadURLString=_srdnldURLString;
@property(readonly, nonatomic) NSString *storeFrontSuffix; // @synthesize storeFrontSuffix=_storeFrontSuffix;
@property(readonly, nonatomic) NSDictionary *radioConfigurationDictionary; // @synthesize radioConfigurationDictionary=_tiltDictionary;
@property(readonly, nonatomic) NSString *mescalSetupURLString; // @synthesize mescalSetupURLString=_mescalSetupURLString;
@property(readonly, nonatomic) NSString *mescalCertificateURLString; // @synthesize mescalCertificateURLString=_mescalSetupCertURLString;
- (void).cxx_destruct;
- (id)_platformContext;
- (id)_cacheRepresentation;
- (id)_initWithCacheRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *URLBagDictionary;
@property(readonly, nonatomic) _Bool shouldSendKBSyncData;
- (_Bool)shouldMescalVerifyResponseFromURL:(id)arg1;
- (_Bool)shouldMescalSignRequestWithURL:(id)arg1;
@property(readonly, nonatomic) NSString *platformLookupURLString;
@property(readonly, nonatomic, getter=isAdFreeRadioEnabled) _Bool adFreeRadioEnabled;
@property(readonly, nonatomic) NSURL *baseURL;
- (id)_initWithURLBagDictionary:(id)arg1;

@end

