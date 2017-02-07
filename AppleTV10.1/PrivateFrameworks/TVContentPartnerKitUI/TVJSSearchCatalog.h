//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <TVContentPartnerKitUI/TVJSSearchCatalog-Protocol.h>

@class PSSSSubscriptionManagerInternal;

@interface TVJSSearchCatalog : IKJSObject <TVJSSearchCatalog>
{
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

@property(retain, nonatomic) PSSSSubscriptionManagerInternal *subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
- (void).cxx_destruct;
- (id)entitlementForAppWithBundleID:(id)arg1:(id)arg2;
- (_Bool)canSubscribeInAppWithBundleID:(id)arg1;
- (void)fetchActiveSubscriptionServices:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)initWithAppContext:(id)arg1;

@end
