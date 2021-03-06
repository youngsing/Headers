//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UIView, _UIBackdropView;

@interface _SFToolbar : UIToolbar
{
    _UIBackdropView *_backgroundView;
    UIView *_separator;
    _Bool _hasLightButtonTint;
    _Bool _hasDarkBackground;
    long long _placement;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
- (void).cxx_destruct;
- (void)updateTintColor;
@property(nonatomic) _Bool backdropComputesColorSettings;
- (void)layoutSubviews;
@property(readonly, nonatomic) double URLFieldHorizontalMargin;
@property(readonly, nonatomic) long long toolbarSize;
- (id)initWithPlacement:(long long)arg1;

@end

