//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class _HMFCFHTTPServer, _HMFCFHTTPServerConnection;

@protocol _HMFCFHTTPServerDelegate <NSObject>
- (void)server:(_HMFCFHTTPServer *)arg1 didCloseConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)server:(_HMFCFHTTPServer *)arg1 didOpenConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)serverDidInvalidate:(_HMFCFHTTPServer *)arg1;
@end

