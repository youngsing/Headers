//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class IKAppDocument, IKViewElementRegistry, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring;

@protocol IKApplication <NSObject>
- (id <IKAppUserDefaultsStoring>)userDefaultsStorage;
- (id <IKAppDataStoring>)vendorStorage;
- (id <IKAppDataStoring>)localStorage;
- (NSString *)vendorIdentifier;
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (_Bool)shouldIgnoreJSValidation;

@optional
- (NSDictionary *)appTraitCollection;
- (IKViewElementRegistry *)viewElementRegistry;
- (IKAppDocument *)activeDocument;
- (NSDictionary *)appLaunchParams;
- (_Bool)appIsPrivileged;
- (_Bool)appIsTrusted;
- (_Bool)shouldAllowRemoteInspection;
- (NSURL *)appLocalJSURL;
- (NSURL *)appJSCachePath;
@end

