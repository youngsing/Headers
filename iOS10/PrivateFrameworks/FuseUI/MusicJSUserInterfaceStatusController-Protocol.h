//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/JSExport-Protocol.h>

@class NSString;

@protocol MusicJSUserInterfaceStatusController <JSExport>
- (NSString *)tabState;
- (_Bool)canShowSubscriptionContent;
- (_Bool)canShowRadio;
- (_Bool)canShowConnect;
- (void)setHasUserRequestedSubscriptionHidden:(_Bool)arg1;
- (_Bool)hasUserRequestedSubscriptionHidden;
- (void)setHasUserAcknowledgedWelcomeScreen:(_Bool)arg1;
- (_Bool)hasUserAcknowledgedWelcomeScreen;
@end
