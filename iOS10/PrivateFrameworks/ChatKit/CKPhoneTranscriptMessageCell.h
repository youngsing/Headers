//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell
{
    CKAvatarView *_avatarView;
}

@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setShowAvatarView:(_Bool)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;
- (void)layoutSubviewsForContents;
- (id)contactImageView;
- (void)dealloc;

@end

