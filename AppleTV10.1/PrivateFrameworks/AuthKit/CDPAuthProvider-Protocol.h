//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKit/NSObject-Protocol.h>

@class CDPContext;

@protocol CDPAuthProvider <NSObject>
- (void)cdpContext:(CDPContext *)arg1 performSilentRecoveryTokenRenewal:(void (^)(CDPContext *, NSError *))arg2;
@end
