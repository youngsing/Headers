//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreFoundation/ISAuthenticationChallenge.h>

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
{
    NSURLAuthenticationChallenge *_challenge;
}

- (void).cxx_destruct;
- (void)useCredential:(id)arg1;
- (id)user;
- (id)sender;
- (id)password;
- (BOOL)hasPassword;
- (long long)failureCount;
- (void)cancelAuthentication;
- (void)dealloc;
- (id)initWithAuthenticationChallenge:(id)arg1;

@end

