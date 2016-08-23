//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NEConfiguration, NSArray, NSDictionary, NSString;
@protocol NEProfilePayloadBaseDelegate;

@protocol NEProfileIngestionDelegate
+ (void)profileMigrationComplete;
+ (NSString *)getServiceIDForPayload:(NSDictionary *)arg1;
- (NSArray *)getCertificatesForConfigurationWithIdentifier:(NSString *)arg1;
- (BOOL)updateManagedAppRules:(NSArray *)arg1;
- (BOOL)updateAppLayerVPNMappingRules:(NSDictionary *)arg1;
- (NSArray *)copyManagedConfigurationIDs;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (BOOL)lockConfigurations;
- (BOOL)isInstalled:(NSString *)arg1;
- (NEConfiguration *)setAsideConfigurationName:(NSString *)arg1 unsetAside:(BOOL)arg2;
- (BOOL)removeConfigurationWithIdentifier:(NSString *)arg1;
- (BOOL)removeIngestedConfiguration;
- (BOOL)removeConfiguration:(NEConfiguration *)arg1;
- (BOOL)saveIngestedConfiguration;
- (NEConfiguration *)ingestedConfiguration;
- (BOOL)createConfigurationFromPayload:(id <NEProfilePayloadBaseDelegate>)arg1 payloadType:(NSString *)arg2;
- (NEConfiguration *)findConfigurationByConfigurationID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByPayloadUUID:(NSString *)arg1;
- (NEConfiguration *)findConfigurationByName:(NSString *)arg1;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (void)removeOrphanConfigurations:(NSString *)arg1 profileUUID:(NSString *)arg2;
- (id)initWithNameAndAuthorization:(NSString *)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2;
- (id)initWithNameAndType:(NSString *)arg1 payloadType:(NSString *)arg2;
@end
