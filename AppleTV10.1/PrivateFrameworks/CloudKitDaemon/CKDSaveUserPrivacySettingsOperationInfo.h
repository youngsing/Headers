//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo
{
    long long _discoverable;
    NSString *_applicationBundleID;
}

@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void).cxx_destruct;
- (id)init;

@end

