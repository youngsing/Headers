//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

@class UIImage, UIView;

@interface _SiriTVUIFloatingContentView : _UIFloatingContentView
{
    UIView *_unfocusedShadowView;
    UIImage *_unfocusedShadowImage;
    UIView *_focusedShadowView;
    UIImage *_focusedShadowImage;
}

- (void).cxx_destruct;
- (void)updateShadowOpacityForFocus:(_Bool)arg1;
- (struct CGRect)_shadowFrameForShadowImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
