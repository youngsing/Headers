//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton
{
    _Bool _allowsAutomaticFlash;
    _Bool _unavailable;
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
}

+ (long long)flashModeForTorchMode:(long long)arg1;
+ (long long)torchModeForFlashMode:(long long)arg1;
@property(readonly, nonatomic) UIImageView *_warningIndicatorView; // @synthesize _warningIndicatorView=__warningIndicatorView;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic, getter=isUnavailable) _Bool unavailable; // @synthesize unavailable=_unavailable;
@property(nonatomic) _Bool allowsAutomaticFlash; // @synthesize allowsAutomaticFlash=_allowsAutomaticFlash;
- (void).cxx_destruct;
- (double)collapsedSelectedLabelHorizontalMargin;
- (_Bool)shouldIgnoreMenuInteraction;
- (_Bool)wantsSelectedItemToBeVisible;
- (void)reloadData;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImage;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
@property(nonatomic) long long flashMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMFlashButtonInitialization;

@end

