//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface SATVHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_activitiyIndicatorView;
    UIVisualEffectView *_activityIndicatorContainerView;
}

@property(retain, nonatomic) UIVisualEffectView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activitiyIndicatorView; // @synthesize activitiyIndicatorView=_activitiyIndicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (struct CGSize)_subtitleSizeForSize:(struct CGSize)arg1;
- (struct CGSize)_titleSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
