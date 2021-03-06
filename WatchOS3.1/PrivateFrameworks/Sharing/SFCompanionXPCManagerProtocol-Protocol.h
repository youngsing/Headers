//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;
@protocol SFActivityAdvertiserClient, SFAirDropTransferDataProviderClient, SFCompanionServiceManagerClient, SFContinuityScannerClient;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)userDidSelectAppWithIndex:(NSNumber *)arg1 forRecordID:(NSString *)arg2;
- (void)userDidPerformActionWithType:(unsigned long long)arg1 andRecordID:(NSString *)arg2;
- (void)addAirDropClientToManager:(id <SFAirDropTransferDataProviderClient>)arg1;
- (void)createAirDropTransferDataProviderForClientProxy:(id <SFAirDropTransferDataProviderClient>)arg1 WithReply:(void (^)(id <SFAirDropTransferDataProviderProtocol>, NSError *))arg2;
- (void)createUnlockManagerWithReply:(void (^)(id <SFUnlockProtocol>, NSError *))arg1;
- (void)createContinuityScannerForClientProxy:(id <SFContinuityScannerClient>)arg1 reply:(void (^)(id <SFContinuityScannerProtocol>, NSError *))arg2;
- (void)createActivityAdvertiserForClientProxy:(id <SFActivityAdvertiserClient>)arg1 reply:(void (^)(id <SFActivityAdvertiserProtocol>, NSError *))arg2;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id <SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id <SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
@end

