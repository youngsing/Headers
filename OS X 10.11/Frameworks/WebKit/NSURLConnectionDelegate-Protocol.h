//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

