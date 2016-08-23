//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NEVPNIKEv2SecurityAssociationParameters, NSArray, NSString;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec
{
    BOOL _useConfigurationAttributeInternalIPSubnet;
    BOOL _disableMOBIKE;
    BOOL _disableRedirect;
    BOOL _enablePFS;
    BOOL _enableRevocationCheck;
    BOOL _strictRevocationCheck;
    BOOL _wakeForRekey;
    int _natKeepAliveOffloadEnable;
    int _natKeepAliveOffloadInterval;
    int _disableMOBIKERetryOnWake;
    long long _deadPeerDetectionRate;
    NSString *_serverCertificateIssuerCommonName;
    NSString *_serverCertificateCommonName;
    long long _certificateType;
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;
    NSArray *_IKESecurityAssociationParametersArray;
    NSArray *_childSecurityAssociationParametersArray;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property BOOL wakeForRekey; // @synthesize wakeForRekey=_wakeForRekey;
@property int disableMOBIKERetryOnWake; // @synthesize disableMOBIKERetryOnWake=_disableMOBIKERetryOnWake;
@property int natKeepAliveOffloadInterval; // @synthesize natKeepAliveOffloadInterval=_natKeepAliveOffloadInterval;
@property int natKeepAliveOffloadEnable; // @synthesize natKeepAliveOffloadEnable=_natKeepAliveOffloadEnable;
@property(copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(retain) NSArray *childSecurityAssociationParametersArray; // @synthesize childSecurityAssociationParametersArray=_childSecurityAssociationParametersArray;
@property(retain) NSArray *IKESecurityAssociationParametersArray; // @synthesize IKESecurityAssociationParametersArray=_IKESecurityAssociationParametersArray;
@property BOOL strictRevocationCheck; // @synthesize strictRevocationCheck=_strictRevocationCheck;
@property BOOL enableRevocationCheck; // @synthesize enableRevocationCheck=_enableRevocationCheck;
@property BOOL enablePFS; // @synthesize enablePFS=_enablePFS;
@property BOOL disableRedirect; // @synthesize disableRedirect=_disableRedirect;
@property BOOL disableMOBIKE; // @synthesize disableMOBIKE=_disableMOBIKE;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters; // @synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters; // @synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters;
@property BOOL useConfigurationAttributeInternalIPSubnet; // @synthesize useConfigurationAttributeInternalIPSubnet=_useConfigurationAttributeInternalIPSubnet;
@property long long certificateType; // @synthesize certificateType=_certificateType;
@property(copy) NSString *serverCertificateCommonName; // @synthesize serverCertificateCommonName=_serverCertificateCommonName;
@property(copy) NSString *serverCertificateIssuerCommonName; // @synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName;
@property long long deadPeerDetectionRate; // @synthesize deadPeerDetectionRate=_deadPeerDetectionRate;
- (void).cxx_destruct;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPluginType:(id)arg1;
- (void)setPluginType:(id)arg1;

@end

