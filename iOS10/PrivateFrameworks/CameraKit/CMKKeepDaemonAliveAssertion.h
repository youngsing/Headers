//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CMKKeepDaemonAliveAssertion : NSObject
{
    NSObject<OS_xpc_object> *_keepaliveConnection;
}

+ (id)assertion;
- (void).cxx_destruct;
- (void)_setupHeartBeatForConnection:(id)arg1;
- (void)_tearDownConnection;
- (void)_setupConnection;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_unregisterForAppActiveNotifications;
- (void)_registerForAppActiveNotifications;
- (void)dealloc;
- (id)init;

@end

