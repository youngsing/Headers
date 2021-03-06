//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CXCallDirectoryManagerHostProtocol <NSObject>
- (oneway void)setPrioritizedExtensionIdentifiers:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)getPrioritizedExtensionIdentifiersWithReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)synchronizeExtensionsWithReply:(void (^)(NSError *))arg1;
- (oneway void)firstIdentificationEntriesForPhoneNumbers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getEnabledStatusForCallDirectoryExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (oneway void)removeDataForCallDirectoryExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)reloadCallDirectoryExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

