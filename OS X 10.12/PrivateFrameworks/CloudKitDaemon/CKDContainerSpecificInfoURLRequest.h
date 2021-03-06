//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDContainerInfo, NSString;

__attribute__((visibility("hidden")))
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    BOOL _needUserID;
    NSString *_containerIdentifier;
    CKDContainerInfo *_containerInfo;
    NSString *_iCloudAuthToken;
}

@property(copy, nonatomic) NSString *iCloudAuthToken; // @synthesize iCloudAuthToken=_iCloudAuthToken;
@property(copy, nonatomic) CKDContainerInfo *containerInfo; // @synthesize containerInfo=_containerInfo;
@property(nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) BOOL needUserID; // @synthesize needUserID=_needUserID;
- (void).cxx_destruct;
- (void)requestDidParseJSONObject:(id)arg1;
- (id)additionalHeaderValues;
- (BOOL)hasRequestBody;
- (id)url;
- (id)sourceApplicationSecondaryIdentifier;
- (id)sourceApplicationBundleIdentifier;
- (long long)partitionType;
- (long long)serverType;
- (BOOL)allowsAuthedAccount;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresSignature;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;
- (void)prepareRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContainerIdentifier:(id)arg1;

@end

