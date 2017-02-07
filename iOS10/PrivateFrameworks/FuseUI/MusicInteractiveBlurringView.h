//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MusicInteractiveBackdropView, _UIBackdropViewSettings;

@interface MusicInteractiveBlurringView : UIView
{
    MusicInteractiveBackdropView *_backdropView;
    _UIBackdropViewSettings *_destinationSettings;
    UIView *_tintView;
    double _tintAlphaProgressMultiplier;
}

@property(nonatomic) double tintAlphaProgressMultiplier; // @synthesize tintAlphaProgressMultiplier=_tintAlphaProgressMultiplier;
@property(readonly, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
- (void).cxx_destruct;
- (_Bool)_shouldUseHighQualityGraphics;
- (void)transitionCompleted;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransition;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
