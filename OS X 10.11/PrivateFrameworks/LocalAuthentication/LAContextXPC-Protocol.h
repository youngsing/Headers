//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString;

@protocol LAContextXPC
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(void (^)(id, NSError *))arg2;
- (void)setCredential:(NSData *)arg1 type:(long long)arg2 onlyGet:(BOOL)arg3 reply:(void (^)(BOOL, NSError *))arg4;
- (void)enterPassword:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(NSError *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)evaluateACL:(NSData *)arg1 operation:(long long)arg2 options:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
@end

