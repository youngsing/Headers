//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection *_connection;
    BOOL _hasConfiguredRemoteAccountStore;
    BOOL _notificationsEnabled;
    NSString *_spoofedBundleID;
}

@property(nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(copy, nonatomic) NSString *spoofedBundleID; // @synthesize spoofedBundleID=_spoofedBundleID;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)_configureRemoteAccountStoreIfNecessary;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end

