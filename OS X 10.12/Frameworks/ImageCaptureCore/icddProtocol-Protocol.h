//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableDictionary;

@protocol icddProtocol
- (void)messageFromICDD:(NSMutableDictionary *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
- (void)messageFromDevice:(NSMutableDictionary *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
- (void)messageFromClient:(NSMutableDictionary *)arg1 withReply:(void (^)(NSMutableDictionary *))arg2;
@end

