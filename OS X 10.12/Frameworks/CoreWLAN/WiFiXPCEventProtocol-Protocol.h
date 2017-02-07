//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CWNetwork, CWTetherDevice, NSArray, NSData, NSDictionary, NSError, NSSet, NSString;

@protocol WiFiXPCEventProtocol
- (void)internal_joinWiFiNetworkWithUserAgent:(CWNetwork *)arg1 interfaceName:(NSString *)arg2 dialogToken:(long long)arg3 reply:(void (^)(NSError *, BOOL))arg4;
- (void)internal_enableTetherDevice:(CWTetherDevice *)arg1 reply:(void (^)(NSError *, SFRemoteHotspotInfo *))arg2;
- (void)internal_stopBrowsingForTetherDevicesAndReply:(void (^)(NSError *))arg1;
- (void)internal_startBrowsingForTetherDevicesAndReply:(void (^)(NSError *))arg1;
- (void)internal_showDHCPMessage:(NSString *)arg1 networkName:(NSString *)arg2;
- (void)internal_showMICErrorWithNetworkName:(NSString *)arg1;
- (void)internal_showAvailableWiFiNetworks:(NSSet *)arg1 interfaceName:(NSString *)arg2;
- (void)internal_setWiFiPasswordForUserKeychain:(NSString *)arg1 ssid:(NSData *)arg2 reply:(void (^)(NSError *))arg3;
- (void)internal_startLoginWindowMode8021XWithProfile:(NSDictionary *)arg1 username:(NSString *)arg2 password:(NSString *)arg3 interfaceWithName:(NSString *)arg4 reply:(void (^)(NSError *))arg5;
- (void)internal_startUserMode8021XWithPasspointDomainName:(NSString *)arg1 interfaceWithName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)internal_startUserMode8021XWithSSID:(NSData *)arg1 username:(NSString *)arg2 password:(NSString *)arg3 identity:(NSData *)arg4 remember:(BOOL)arg5 interfaceWithName:(NSString *)arg6 reply:(void (^)(NSError *))arg7;
- (void)internal_startUserMode8021XUsingKeychainWithSSID:(NSData *)arg1 interfaceWithName:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)willShowJoinUIForWiFiNetwork:(CWNetwork *)arg1 interfaceName:(NSString *)arg2 reply:(void (^)(void))arg3;
- (void)foundTetherDevices:(NSSet *)arg1;
- (void)realTimeModeDidEndForWiFiInterfaceWithName:(NSString *)arg1;
- (void)realTimeModeDidStartForWiFiInterfaceWithName:(NSString *)arg1;
- (void)autoJoinDidCompleteForWiFiInterfaceWithName:(NSString *)arg1;
- (void)autoJoinDidStartForWiFiInterfaceWithName:(NSString *)arg1;
- (void)rsnHandshakeDidCompleteForWiFiInterfaceWithName:(NSString *)arg1;
- (void)interfaceRemovedWithName:(NSString *)arg1;
- (void)interfaceAddedWithName:(NSString *)arg1;
- (void)rangingReportEventForWiFiInterfaceWithName:(NSString *)arg1 data:(NSArray *)arg2 error:(NSError *)arg3;
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(NSString *)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(NSString *)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(NSString *)arg1;
- (void)countryCodeDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)bssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
@end
