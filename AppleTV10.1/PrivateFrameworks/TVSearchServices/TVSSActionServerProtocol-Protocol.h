//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVSearchServices/NSObject-Protocol.h>

@class NSUUID, TVSSPlaybackActionOperationRequest;

@protocol TVSSActionServerProtocol <NSObject>
- (void)cancelPlaybackRequestWithID:(NSUUID *)arg1;
- (void)startPlaybackRequest:(TVSSPlaybackActionOperationRequest *)arg1 withRequestID:(NSUUID *)arg2 replyHandler:(void (^)(NSArray *, NSError *))arg3;
@end
