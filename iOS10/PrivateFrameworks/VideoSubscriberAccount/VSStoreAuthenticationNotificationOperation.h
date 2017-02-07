//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSAuthenticationBulletinOperation, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSStoreAuthenticationNotificationOperation : VSAsyncOperation
{
    VSIdentityProvider *_identityProvider;
    NSURL *_logoCacheURL;
    VSAuthenticationBulletinOperation *_authenticationBulletinOperation;
}

@property(retain, nonatomic) VSAuthenticationBulletinOperation *authenticationBulletinOperation; // @synthesize authenticationBulletinOperation=_authenticationBulletinOperation;
@property(copy, nonatomic) NSURL *logoCacheURL; // @synthesize logoCacheURL=_logoCacheURL;
@property(readonly, copy, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;
- (id)init;

@end
