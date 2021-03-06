//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, NSURLCredential;

@interface TSHAccount : NSObject
{
    NSURLCredential *mCredentials;
    NSURL *mBaseURL;
}

- (id)baseURL;
- (id)credentials;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4;
- (void)dealloc;

@end

