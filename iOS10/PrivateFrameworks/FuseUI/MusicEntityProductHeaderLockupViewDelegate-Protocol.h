//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicEntityProductHeaderLockupView, UIButton;

@protocol MusicEntityProductHeaderLockupViewDelegate <NSObject>

@optional
- (void)productHeaderLockupViewTintColorDidChange:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupView:(MusicEntityProductHeaderLockupView *)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)productHeaderLockupViewDidSelectShareButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectDownloadProgressButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectContextualActionsButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupView:(MusicEntityProductHeaderLockupView *)arg1 didSelectCameraButton:(UIButton *)arg2;
- (void)productHeaderLockupViewDidSelectAddSongsButton:(MusicEntityProductHeaderLockupView *)arg1;
@end

