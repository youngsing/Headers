//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFHTTPClientConnection, HMFHTTPRequest, NSError;

@protocol HMFHTTPClientConnectionDelegate <NSObject>
- (void)connection:(HMFHTTPClientConnection *)arg1 didReceiveRequest:(HMFHTTPRequest *)arg2;

@optional
- (void)connection:(HMFHTTPClientConnection *)arg1 didCloseWithError:(NSError *)arg2;
@end
