//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VVCarrierParameters : NSObject
{
    NSDictionary *_parameterValues;
}

+ (_Bool)supportsPasswordChanges;
+ (_Bool)supportsGreetingChanges;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (_Bool)supportsDetachedStorage;
+ (_Bool)ignoresRoamingSwitch;
+ (id)carrierServiceName;
- (void).cxx_destruct;
- (id)parameterValueForKey:(id)arg1;
- (id)initForServiceBundleId:(id)arg1;
- (id)initForService:(id)arg1;
- (void)_initForBundle:(id)arg1;

@end

