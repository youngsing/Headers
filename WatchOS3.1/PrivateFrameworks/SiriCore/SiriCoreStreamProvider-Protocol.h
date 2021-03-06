//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSURL, SiriCoreAceConnectionAnalysisInfo, SiriCoreConnectionType;
@protocol SiriCoreStreamProviderDelegate;

@protocol SiriCoreStreamProvider <NSObject>
+ (void)getMetricsContext:(void (^)(NSDictionary *))arg1;
- (NSString *)getResolvedHost;
- (_Bool)shouldFallbackFromError:(NSError *)arg1;
- (_Bool)isPeerConnectionError:(NSError *)arg1;
- (void)close;
- (void)getRemoteMetrics:(void (^)(SiriCoreConnectionMetrics *))arg1;
- (SiriCoreAceConnectionAnalysisInfo *)analysisInfo;
- (SiriCoreConnectionType *)connectionType;
- (_Bool)shouldFallbackQuickly;
- (NSData *)headerData;
- (void)openStreamPairForURL:(NSURL *)arg1 withConnectionId:(NSString *)arg2 completion:(void (^)(NSInputStream *, NSOutputStream *, NSError *))arg3;
- (void)setConnectByPOPMethod:(_Bool)arg1;
- (void)setDelegate:(id <SiriCoreStreamProviderDelegate>)arg1;
@end

