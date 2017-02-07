//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, MMInfoCapacityPopoverViewController, NSArray, NSLayoutConstraint, NSMutableArray, NSPopover;

@interface MMInfoCapacityBarView : NSView
{
    unsigned long long _capacity;
    NSMutableArray *_categories;
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_maskLayer;
    CALayer *_itemsContainerLayer;
    NSArray *_itemTrackingAreas;
    NSLayoutConstraint *_minimumWidthLayoutConstraint;
    NSLayoutConstraint *_requiredHeightLayoutConstraint;
    NSPopover *_toolTipPopover;
    MMInfoCapacityPopoverViewController *_toolTipPopoverViewController;
}

@property(retain) MMInfoCapacityPopoverViewController *toolTipPopoverViewController; // @synthesize toolTipPopoverViewController=_toolTipPopoverViewController;
@property(retain) NSPopover *toolTipPopover; // @synthesize toolTipPopover=_toolTipPopover;
@property(retain) NSLayoutConstraint *requiredHeightLayoutConstraint; // @synthesize requiredHeightLayoutConstraint=_requiredHeightLayoutConstraint;
@property(retain) NSLayoutConstraint *minimumWidthLayoutConstraint; // @synthesize minimumWidthLayoutConstraint=_minimumWidthLayoutConstraint;
@property(retain) NSArray *itemTrackingAreas; // @synthesize itemTrackingAreas=_itemTrackingAreas;
@property(retain) CALayer *itemsContainerLayer; // @synthesize itemsContainerLayer=_itemsContainerLayer;
@property(retain) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain) CALayer *foregroundLayer; // @synthesize foregroundLayer=_foregroundLayer;
@property(retain) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain) NSMutableArray *categories; // @synthesize categories=_categories;
@property unsigned long long capacity; // @synthesize capacity=_capacity;
- (BOOL)isVoiceOverEnabled;
- (void)createPopover;
- (struct CGRect)rectForItem:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)updateConstraints;
- (void)layout;
- (void)updateLayer;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (BOOL)wantsUpdateLayer;
- (void)updateLabels;
- (void)setValue:(unsigned long long)arg1 forCategory:(long long)arg2;
- (void)resetValues;
- (void)dealloc;
- (void)awakeFromNib;
- (void)initCategories;
- (id)initWithFrame:(struct CGRect)arg1;

@end
