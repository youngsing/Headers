//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVContentKeyRequest, AVContentKeySession, NSError;

@protocol AVContentKeySessionDelegate <NSObject>
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySession:(AVContentKeySession *)arg1 request:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
@end
