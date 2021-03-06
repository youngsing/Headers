//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface MCEDUClassroomPayload : MCPayload
{
    NSString *_organizationUUID;
    NSString *_organizationName;
    NSString *_payloadCertificateUUID;
    NSData *_payloadCertificatePersistentID;
    NSArray *_leaderPayloadCertificateAnchorUUID;
    NSArray *_leaderPayloadCertificateAnchorPersistentID;
    NSArray *_memberPayloadCertificateAnchorUUID;
    NSArray *_memberPayloadCertificateAnchorPersistentID;
    NSString *_resourcePayloadCertificateUUID;
    NSData *_resourcePayloadCertificatePersistentID;
    NSString *_userIdentifier;
    NSArray *_departments;
    NSArray *_groups;
    NSArray *_users;
    NSArray *_deviceGroups;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *deviceGroups; // @synthesize deviceGroups=_deviceGroups;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *departments; // @synthesize departments=_departments;
@property(retain, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) NSData *resourcePayloadCertificatePersistentID; // @synthesize resourcePayloadCertificatePersistentID=_resourcePayloadCertificatePersistentID;
@property(retain, nonatomic) NSString *resourcePayloadCertificateUUID; // @synthesize resourcePayloadCertificateUUID=_resourcePayloadCertificateUUID;
@property(retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID; // @synthesize memberPayloadCertificateAnchorPersistentID=_memberPayloadCertificateAnchorPersistentID;
@property(retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID; // @synthesize memberPayloadCertificateAnchorUUID=_memberPayloadCertificateAnchorUUID;
@property(retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID; // @synthesize leaderPayloadCertificateAnchorPersistentID=_leaderPayloadCertificateAnchorPersistentID;
@property(retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID; // @synthesize leaderPayloadCertificateAnchorUUID=_leaderPayloadCertificateAnchorUUID;
@property(retain, nonatomic) NSData *payloadCertificatePersistentID; // @synthesize payloadCertificatePersistentID=_payloadCertificatePersistentID;
@property(retain, nonatomic) NSString *payloadCertificateUUID; // @synthesize payloadCertificateUUID=_payloadCertificateUUID;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *organizationUUID; // @synthesize organizationUUID=_organizationUUID;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)title;
- (id)stubDictionary;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *configuration;
- (id)parseDeviceGroupFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseUserFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseGroupFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseDepartmentFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

