//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol BRBundleServiceProtocol
- (void)extractMetadataForContainerID:(NSString *)arg1 bundleID:(NSString *)arg2 minimumBundleVersion:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
@end
