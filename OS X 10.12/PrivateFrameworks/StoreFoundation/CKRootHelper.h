//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface CKRootHelper : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)proxy;
- (id)init;
- (id)_connection;

@end

