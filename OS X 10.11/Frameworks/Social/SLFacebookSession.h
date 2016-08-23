//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SLFacebookRemoteSessionProtocol;

@interface SLFacebookSession : NSObject
{
    id <SLFacebookRemoteSessionProtocol> _remoteSession;
}

+ (id)_remoteInterface;
+ (id)sharedSession;
- (void).cxx_destruct;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unlikeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)likeURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)uploadProfilePicture:(id)arg1 error:(id *)arg2;
- (void)revokeAllAccessTokensForDevice;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)uploadsInProgress:(CDUnknownBlockType)arg1;
- (void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(CDUnknownBlockType)arg3;
- (BOOL)uploadPost:(id)arg1 forPID:(int)arg2;
- (BOOL)uploadPost:(id)arg1;
- (void)injectCompletedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id *)arg1;
- (id)init;

@end

