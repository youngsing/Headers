//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/SafariNotificationAgentProxy-Protocol.h>

__attribute__((visibility("hidden")))
@interface RemoteNotificationAgentProxyPrivate : NSObject <SafariNotificationAgentProxy>
{
}

- (void)agentDidUnregisterForRemoteNotifications:(unsigned long long)arg1 disallowedDomains:(id)arg2;
- (void)agentDidRegisterForRemoteNotifications:(unsigned long long)arg1 allowedDomains:(id)arg2 deviceToken:(id)arg3;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)arg1 withResult:(int)arg2 websiteName:(id)arg3 lowResIcon:(id)arg4 highResIcon:(id)arg5;
- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)arg1 withResult:(int)arg2 websiteName:(id)arg3 lowResIcon:(id)arg4 highResIcon:(id)arg5 errorMessages:(id)arg6;

@end

