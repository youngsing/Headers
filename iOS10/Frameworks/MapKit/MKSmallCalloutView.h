//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/CalloutViewControllerProtocol-Protocol.h>

@class MKCalloutBackgroundView, NSArray, NSLayoutConstraint, NSString, UILayoutGuide, _MKSmallCalloutPassthroughButton, _MKUILabel;
@protocol _MKCalloutAccessoryView;

__attribute__((visibility("hidden")))
@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol>
{
    _MKUILabel *_titleLabel;
    _MKUILabel *_subtitleLabel;
    UIView<_MKCalloutAccessoryView> *_leftView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    struct CGSize _preferredContentSize;
    _Bool _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    UIView *_unmaskedContainerView;
    MKCalloutBackgroundView *_calloutBackgroundView;
    CDStruct_80aa614a _mapDisplayStyle;
    _Bool _needsPreferredContentSizeUpdate;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;
    NSArray *_titleLabelConstraints;
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;
    NSLayoutConstraint *_titleBaselineFromTopConstraint;
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;
    UILayoutGuide *_centerContentLeadingGuide;
    UILayoutGuide *_centerContentTrailingGuide;
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;
    UILayoutGuide *_leftViewTopSpacer;
    UILayoutGuide *_leftViewLeftSpacer;
    NSLayoutConstraint *_rightViewMinCalloutWidthConstraint;
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;
    UILayoutGuide *_rightViewTopSpacer;
    UILayoutGuide *_rightViewRightSpacer;
    NSLayoutConstraint *_detailViewMinTopConstraint;
    NSLayoutConstraint *_detailViewBottomConstraint;
    NSLayoutConstraint *_detailViewTrailingConstraint;
}

@property(retain, nonatomic) MKCalloutBackgroundView *calloutBackgroundView; // @synthesize calloutBackgroundView=_calloutBackgroundView;
@property(nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void).cxx_destruct;
- (void)_updateAccessoryViewStyles;
- (_Bool)canDisplayCompleteTitleWhenExpanded;
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *detailView;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *calloutTitle;
- (id)_maskedContainerView;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_setNeedsUpdatePreferredContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)beginMapsTransitionMovingSideways;
- (void)reset;
- (void)dealloc;
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumWidth;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

