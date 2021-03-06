//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFNdefMessage, NFTag, NSArray, NSData, NSDictionary;

@protocol NFReaderSessionInterface <NFSessionInterface>
- (oneway void)execRemoteAdminScript:(NSDictionary *)arg1 callback:(void (^)(NSDictionary *, unsigned long long, NSError *))arg2;
- (oneway void)felicaStateForSystemCode:(NSData *)arg1 withRequestService:(NSArray *)arg2 withBlockReadList:(NSArray *)arg3 performSearchServiceCode:(BOOL)arg4 callback:(void (^)(NSDictionary *, NSError *))arg5;
- (oneway void)ndefWrite:(NFNdefMessage *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)ndefRead:(void (^)(NSError *, NFNdefMessage *))arg1;
- (oneway void)formatNdefWithKey:(NSData *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)checkPresence:(void (^)(NSError *, BOOL))arg1;
- (oneway void)checkNdefSupport:(void (^)(NSError *, BOOL, BOOL))arg1;
- (oneway void)transceive:(NSData *)arg1 callback:(void (^)(NSData *, NSError *))arg2;
- (oneway void)disconnect:(void (^)(NSError *))arg1;
- (oneway void)connect:(NFTag *)arg1 callback:(void (^)(NSError *))arg2;
- (oneway void)stopPolling:(void (^)(NSError *))arg1;
- (oneway void)startPolling:(void (^)(NSError *))arg1;
@end

