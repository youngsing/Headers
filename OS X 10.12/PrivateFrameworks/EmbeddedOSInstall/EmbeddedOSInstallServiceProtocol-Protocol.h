//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EOSRestoreBundleSpecifier, NSArray, NSDictionary, NSString;

@protocol EmbeddedOSInstallServiceProtocol
- (void)lockRestoreQueueForCLIRestoreWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getLocalFDRDataWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)shouldHealEmbeddedDeviceWithCompletionHandler:(void (^)(BOOL, NSError *, BOOL))arg1;
- (void)restoreWithBundleSpecifier:(EOSRestoreBundleSpecifier *)arg1 options:(NSDictionary *)arg2 handlingProgressForUUID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)preflightBundleForHealingWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)preflightPackageSpecifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 tagPrefix:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

