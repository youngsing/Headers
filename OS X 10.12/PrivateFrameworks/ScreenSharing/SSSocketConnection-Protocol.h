//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/NSObject-Protocol.h>

@class NSString;

@protocol SSSocketConnection <NSObject>
- (void)server_MicrophoneMuteFlag:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)server_setMicrophoneMuteFlag:(NSString *)arg1 mute:(_Bool)arg2;
- (void)server_audioChatEnabled:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)socketForConnectionID:(NSString *)arg1 reply:(void (^)(NSFileHandle *))arg2;
@end

