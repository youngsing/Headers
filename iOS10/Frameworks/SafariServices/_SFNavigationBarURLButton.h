//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIGestureRecognizer, UIImage, UIImageView;
@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate>
{
    UIImageView *_overlayImageView;
    UIImageView *_tintImageView;
    UIImage *_darkBackgroundImage;
    UIImage *_lightBackgroundImage;
    UIGestureRecognizer *_longPressGestureRecognizer;
    _Bool _usesLightOverlayAndTintAlpha;
    double _backgroundAlphaFactor;
    long long _backgroundStyle;
    id <_SFNavigationBarURLButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFNavigationBarURLButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usesLightOverlayAndTintAlpha; // @synthesize usesLightOverlayAndTintAlpha=_usesLightOverlayAndTintAlpha;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) double backgroundAlphaFactor; // @synthesize backgroundAlphaFactor=_backgroundAlphaFactor;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)pasteButtonTitle;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)pasteAndNavigate:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundImageAnimated:(_Bool)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

