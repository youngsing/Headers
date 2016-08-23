//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencePanes/NSAdminPrefAuthenticator-Protocol.h>

@class NSMutableArray;

@interface NSAdminMultiAuthenticator : NSObject <NSAdminPrefAuthenticator>
{
    NSMutableArray *mAuthenticators;
}

+ (id)multiAuthenticator;
- (BOOL)isAuthenticated;
- (void)deauthenticate;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)removeAuthenticator:(id)arg1;
- (void)addAuthenticator:(id)arg1;
- (void)dealloc;
- (id)init;

@end

