//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSArray, NSImage, NSLayoutConstraint, NSTrackingArea, RolloverImageButton;
@protocol RolloverActionButtonTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface RolloverActionButtonTableCellView : NSTableCellView
{
    BOOL _cancelRemoveButtonAnimation;
    NSArray *_actionButtonLayoutConstraints;
    NSLayoutConstraint *_titleFieldTrailingConstraintWhenActionButtonIsVisible;
    BOOL _showsActionButton;
    BOOL _updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;
    int _actionButtonState;
    id <RolloverActionButtonTableCellViewDelegate> _delegate;
    RolloverImageButton *_actionButton;
    NSImage *_actionButtonImage;
    NSImage *_actionButtonRolloverImage;
    NSImage *_actionButtonPressedImage;
    double _actionButtonVerticalMargin;
    double _actionButtonHorizontalMargin;
    double _actionButtonYOffsetWhenVerticallyCentered;
    double _actionButtonAnimationDuration;
    NSTrackingArea *_trackingArea;
}

+ (id)closeActionButtonImage;
+ (double)actionButtonTrailingMarginBasedOnPreferredScrollerStyle;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) double actionButtonAnimationDuration; // @synthesize actionButtonAnimationDuration=_actionButtonAnimationDuration;
@property(nonatomic) double actionButtonYOffsetWhenVerticallyCentered; // @synthesize actionButtonYOffsetWhenVerticallyCentered=_actionButtonYOffsetWhenVerticallyCentered;
@property(nonatomic) double actionButtonHorizontalMargin; // @synthesize actionButtonHorizontalMargin=_actionButtonHorizontalMargin;
@property(nonatomic) double actionButtonVerticalMargin; // @synthesize actionButtonVerticalMargin=_actionButtonVerticalMargin;
@property(retain, nonatomic) NSImage *actionButtonPressedImage; // @synthesize actionButtonPressedImage=_actionButtonPressedImage;
@property(retain, nonatomic) NSImage *actionButtonRolloverImage; // @synthesize actionButtonRolloverImage=_actionButtonRolloverImage;
@property(retain, nonatomic) NSImage *actionButtonImage; // @synthesize actionButtonImage=_actionButtonImage;
@property(nonatomic) BOOL updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges; // @synthesize updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges=_updatesTitleTextFieldFrameWhenActionButtonVisibilityChanges;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(nonatomic) __weak RolloverImageButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) int actionButtonState; // @synthesize actionButtonState=_actionButtonState;
@property(nonatomic) __weak id <RolloverActionButtonTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTitleTextFieldFrameAccountingForActionButtonBeingVisible:(BOOL)arg1;
- (void)updateTextFieldToAccountForButtonBeingVisible:(BOOL)arg1;
- (void)_didHideActionButton;
- (void)_willShowActionButton;
- (void)_actionButtonClicked:(id)arg1;
- (void)_addTrackingArea;
- (void)_removeTrackingArea;
- (void)_positionActionButton;
- (void)_performSharedSetup;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

