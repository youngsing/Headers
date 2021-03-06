//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFApplet, NSArray, NSData, NSDictionary, NSString;

@protocol NFSecureElementManagerSessionInterface <NFSessionInterface>
- (oneway void)expressModesInfo:(void (^)(BOOL, NSString *))arg1;
- (oneway void)getFelicaAppletState:(NFApplet *)arg1 callback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)disableAuthorizationForApplet:(NFApplet *)arg1 authorization:(NSData *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)requireAuthorizationForAllAppletsExcept:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)setExpressModesEnabled:(BOOL)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)setExpressTransitApplet:(NFApplet *)arg1 authorization:(NSData *)arg2 callback:(void (^)(NSError *))arg3;
- (oneway void)getCryptogram:(void (^)(NSData *, NSData *, NSError *))arg1;
- (oneway void)refreshSecureElement:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)didExitRestrictedMode:(NSString *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)validateSEPairings:(void (^)(NSError *, NSString *))arg1;
- (oneway void)execRemoteAdminScript:(NSDictionary *)arg1 forSEID:(NSString *)arg2 callback:(void (^)(NSDictionary *, long long, NSError *))arg3;
- (oneway void)transceive:(NSData *)arg1 forSEID:(NSString *)arg2 callback:(void (^)(NSData *, NSError *))arg3;
- (oneway void)deleteAllApplets:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)deleteApplets:(NSArray *)arg1 callback:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getApplets:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)signChallenge:(NSData *)arg1 forAID:(NSString *)arg2 callback:(void (^)(NSData *, NSDictionary *, NSError *))arg3;
- (oneway void)signChallenge:(NSData *)arg1 useOSVersion:(BOOL)arg2 callback:(void (^)(NSData *, NFSignatureInfo *, NSError *))arg3;
- (oneway void)signChallenge:(NSData *)arg1 callback:(void (^)(NSData *, NSDictionary *, NSError *))arg2;
- (oneway void)stateInformation:(void (^)(NSArray *, NSError *))arg1;
@end

