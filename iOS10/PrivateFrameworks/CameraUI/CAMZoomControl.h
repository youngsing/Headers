//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMZoomButtonDelegate-Protocol.h>

@class CAMZoomButton, CAMZoomControlButtonMaskView, CAMZoomDial, NSDate, NSString, NSTimer, UIView;
@protocol CAMZoomControlDelegate;

@interface CAMZoomControl : UIControl <CAMZoomButtonDelegate>
{
    _Bool _zoomDialEnabled;
    _Bool __eligibleForTapInEmptySpace;
    _Bool __shouldShowZoomDial;
    id <CAMZoomControlDelegate> _delegate;
    long long _layoutStyle;
    long long _orientation;
    CAMZoomButton *__zoomButton;
    CAMZoomDial *__zoomDial;
    UIView *__dialClippingView;
    CAMZoomControlButtonMaskView *__buttonMaskView;
    double __previousTouchTime;
    NSTimer *__zoomDialVisibilityTimer;
    NSDate *__startTimeForHideAnimationInProgress;
    struct CGPoint __startTouchLocation;
    struct CGPoint __previousTouchLocation;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic, setter=_setStartTimeForHideAnimationInProgress:) NSDate *_startTimeForHideAnimationInProgress; // @synthesize _startTimeForHideAnimationInProgress=__startTimeForHideAnimationInProgress;
@property(nonatomic, setter=_setShouldShowZoomDial:) _Bool _shouldShowZoomDial; // @synthesize _shouldShowZoomDial=__shouldShowZoomDial;
@property(retain, nonatomic, setter=_setZoomDialVisibilityTimer:) NSTimer *_zoomDialVisibilityTimer; // @synthesize _zoomDialVisibilityTimer=__zoomDialVisibilityTimer;
@property(nonatomic, getter=_isEligibleForTapInEmptySpace, setter=_setEligibleForTapInEmptySpace:) _Bool _eligibleForTapInEmptySpace; // @synthesize _eligibleForTapInEmptySpace=__eligibleForTapInEmptySpace;
@property(nonatomic, setter=_setPreviousTouchTime:) double _previousTouchTime; // @synthesize _previousTouchTime=__previousTouchTime;
@property(nonatomic, setter=_setPreviousTouchLocation:) struct CGPoint _previousTouchLocation; // @synthesize _previousTouchLocation=__previousTouchLocation;
@property(nonatomic, setter=_setStartTouchLocation:) struct CGPoint _startTouchLocation; // @synthesize _startTouchLocation=__startTouchLocation;
@property(readonly, nonatomic) CAMZoomControlButtonMaskView *_buttonMaskView; // @synthesize _buttonMaskView=__buttonMaskView;
@property(readonly, nonatomic) UIView *_dialClippingView; // @synthesize _dialClippingView=__dialClippingView;
@property(readonly, nonatomic) CAMZoomDial *_zoomDial; // @synthesize _zoomDial=__zoomDial;
@property(readonly, nonatomic) CAMZoomButton *_zoomButton; // @synthesize _zoomButton=__zoomButton;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isZoomDialEnabled) _Bool zoomDialEnabled; // @synthesize zoomDialEnabled=_zoomDialEnabled;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) __weak id <CAMZoomControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)zoomButtonDidLayout;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_isWithinZoomButtonBoundsWithTouch:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldInterceptTouchesForHidingZoomDial;
- (double)_normalizeValue:(double)arg1 betweenMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (double)_additionalAccelerationForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 deltaX:(double)arg3;
- (double)_accelerationForMovementFromPointFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 elapsedTime:(double)arg3;
- (double)_dampingFactorForMovementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_dampingFactorForPerpendicularityFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (double)_dampingFactorForDistanceFromDialForPoint:(struct CGPoint)arg1;
- (double)_distanceFromDialClippingViewToPoint:(struct CGPoint)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateMaskViewForZoomButtonHighlightingTransform;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_cancelDelayedZoomDialVisibilityChange;
- (void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg1;
- (void)_setShouldShowZoomDial:(_Bool)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3;
- (void)setShouldShowZoomDial:(_Bool)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3;
- (void)_setShouldShowZoomDial:(_Bool)arg1 animationSpeed:(double)arg2;
- (void)setZoomDialEnabled:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool shouldDisableValuesBelow2x;
@property(nonatomic) _Bool shouldShowLabelAt2x;
- (void)_setZoomFactor:(double)arg1 shouldNotifyDelegate:(_Bool)arg2;
@property(nonatomic) double zoomFactor;
@property(nonatomic) double maximumZoomFactor;
@property(nonatomic) double minimumZoomFactor;
- (id)initWithLayoutStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

