//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HUGridLayoutOptions, NSArray, UIImageView, UILabel, UIScrollView, UIView;
@protocol HUAboutResidentDeviceViewControllerDelegate;

@interface HUAboutResidentDeviceViewController : UIViewController
{
    id <HUAboutResidentDeviceViewControllerDelegate> _delegate;
    unsigned long long _style;
    HUGridLayoutOptions *_layoutOptions;
    NSArray *_constraints;
    UIView *_statusBarBackgroundView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_atvImageView;
    UILabel *_atvTextLabel;
    UIImageView *_iPadImageView;
    UILabel *_iPadTextLabel;
}

+ (double)iPadImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;
+ (double)atvTextBaselineToiPadImageConstant;
+ (double)atvImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;
+ (double)scrollViewTopToATVImageConstant;
+ (double)subtitleBaselineToATVImageConstant;
+ (double)titleToSubtitleBaselineConstant;
@property(retain, nonatomic) UILabel *iPadTextLabel; // @synthesize iPadTextLabel=_iPadTextLabel;
@property(retain, nonatomic) UIImageView *iPadImageView; // @synthesize iPadImageView=_iPadImageView;
@property(retain, nonatomic) UILabel *atvTextLabel; // @synthesize atvTextLabel=_atvTextLabel;
@property(retain, nonatomic) UIImageView *atvImageView; // @synthesize atvImageView=_atvImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <HUAboutResidentDeviceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNavigationBarVisibility;
- (void)updateViewsAndConstraints;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize)arg1;
- (void)_createSubviews;
- (id)_backgroundColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_done:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;

@end
