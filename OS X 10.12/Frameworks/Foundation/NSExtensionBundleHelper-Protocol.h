//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSUUID;

@protocol NSExtensionBundleHelper
- (void)__queryPhotoServiceAuthorizationStatusForPlugInUUID:(NSUUID *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)__localizedInfoDictionaryObjectForKeys:(NSArray *)arg1 withPlugInUUID:(NSUUID *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end
