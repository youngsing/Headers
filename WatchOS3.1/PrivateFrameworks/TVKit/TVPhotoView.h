//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVKit/PHLivePhotoViewDelegate-Protocol.h>

@class NSString, PHLivePhotoView, UIActivityIndicatorView, UIGestureRecognizer, UIImageView;

@interface TVPhotoView : UIView <PHLivePhotoViewDelegate>
{
    _Bool _isVideoView;
    UIActivityIndicatorView *_spinner;
    UIImageView *_imageView;
    UIImageView *_badgeImageView;
    PHLivePhotoView *_playerView;
    UIView *_overlayView;
    UIView *_currentView;
    UIView *_irisGestureRecognizerView;
}

@property(nonatomic) _Bool isVideoView; // @synthesize isVideoView=_isVideoView;
@property(nonatomic) __weak UIView *irisGestureRecognizerView; // @synthesize irisGestureRecognizerView=_irisGestureRecognizerView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) PHLivePhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (unsigned long long)_autoresizingMask;
- (void)_removeLivePhotoGesture;
@property(readonly, nonatomic) UIGestureRecognizer *livePhotoGestureRecognizer;
- (void)_removeVideoOverlayViews;
- (void)_removeAllSubviews;
- (void)setUpVideoOverlayWithSpinner;
- (void)setUpBadgeImageViewWithImage:(id)arg1;
- (void)setUpVideoOverlayWithImage:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didAnimateToFullScreenMode;
- (void)didAnimateToCaptionMode;
- (void)willAnimateToFullScreenMode;
- (void)willAnimateToCaptionMode;
- (id)displayedImage;
- (void)removeBadgeImageView;
- (void)playVitalityHint;
- (void)seekForVitalityHintIfNeeded;
- (void)displayLivePhoto:(id)arg1;
- (void)displayVideoOverlayIcon:(id)arg1 isVideoBadge:(_Bool)arg2;
- (void)displayVideoLoadingSpinnerOverlay;
- (void)displayImage:(id)arg1;
- (void)displaySpinner;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

