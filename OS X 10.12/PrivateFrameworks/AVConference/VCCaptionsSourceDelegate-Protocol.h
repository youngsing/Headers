//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSError;

@protocol VCCaptionsSourceDelegate <NSObject>
- (void)streamToken:(long long)arg1 didUpdateCaptions:(NSData *)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(NSError *)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(NSError *)arg3;
@end

