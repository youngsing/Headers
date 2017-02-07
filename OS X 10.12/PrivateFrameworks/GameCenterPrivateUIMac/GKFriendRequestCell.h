//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasePlayerCell.h>

@class GKButton, NSTextField;

@interface GKFriendRequestCell : GKBasePlayerCell
{
    NSTextField *_messageLabel;
    NSTextField *_whenLabel;
    GKButton *_acceptButton;
    GKButton *_declineButton;
}

+ (void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(BOOL)arg3;
+ (Class)cellClassForPlayer:(id)arg1;
@property(retain, nonatomic) GKButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) GKButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) NSTextField *whenLabel; // @synthesize whenLabel=_whenLabel;
@property(retain, nonatomic) NSTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void)didTouchDecline:(id)arg1;
- (void)didTouchAccept:(id)arg1;
- (void)didUpdateModel;
- (void)dealloc;

@end
