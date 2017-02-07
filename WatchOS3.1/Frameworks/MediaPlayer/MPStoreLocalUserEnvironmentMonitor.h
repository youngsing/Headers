//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPStoreUserEnvironment, NSString;
@protocol OS_dispatch_queue;

@interface MPStoreLocalUserEnvironmentMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accountIdentifier;
    MPStoreUserEnvironment *_currentEnvironment;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSString *_storeFrontIdentifier;
}

+ (id)sharedMoniter;
- (void).cxx_destruct;
- (void)_postDidChangeNotification;
- (void)_deviceStoreFrontDidChangeNotification:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
@property(readonly, copy, nonatomic) MPStoreUserEnvironment *currentEnvironment;
- (void)dealloc;
- (id)init;

@end
