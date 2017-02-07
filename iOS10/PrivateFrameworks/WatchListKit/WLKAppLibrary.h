//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString, PSSSSubscriptionManagerInternal;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSDictionary *_subscriptionInfoByIdentifier;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    _Bool _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
}

+ (id)localizedNameForBundle:(id)arg1;
+ (id)defaultAppLibrary;
- (void).cxx_destruct;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)_refreshAppLibraryWithCompletion:(CDUnknownBlockType)arg1;
- (void)endIgnoringAppLibraryChanges;
- (void)beginIgnoringAppLibraryChanges;
- (void)refresh;
- (id)dictionaryRepresentation;
- (id)subscriptionInfoByBundleIdentifier;
- (id)allAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)subscribedAppBundleIdentifiers;
- (id)installedAppBundleIdentifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
