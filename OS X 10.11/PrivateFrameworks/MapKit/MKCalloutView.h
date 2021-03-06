//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer, NSColor, NSMutableArray, NSTextField, NSTimer, NSVisualEffectView, _MKFlippedView;

@interface MKCalloutView : NSView
{
    struct CGRect _boundary;
    NSTextField *_title;
    NSView *_subtitle;
    NSView *_leftView;
    NSColor *_leftViewColor;
    NSView *_rightView;
    struct {
        struct CGPoint origin;
        struct CGPoint offset;
        int position;
        struct CGPoint desiredPoint;
        struct CGRect desiredBounds;
    } _anchor;
    struct CGRect _frame;
    id _delegate;
    struct {
        unsigned int animated:1;
        unsigned int didMoveCalled:1;
        unsigned int hasPendingAnimatedLayout:1;
        unsigned int canAnchorFromBottom:1;
        unsigned int reserved:28;
    } _flags;
    NSMutableArray *_fadeInViews;
    NSMutableArray *_fadeOutViews;
    NSTimer *_layoutAnimationTimer;
    double _maximumWidth;
    NSVisualEffectView *_backdropView;
    CAShapeLayer *_contentMaskLayer;
    CAShapeLayer *_backdropMaskLayer;
    _MKFlippedView *_contentView;
    NSView *_leftViewBackground;
    NSView *_shadowView;
}

+ (id)sharedCalloutView;
+ (double)defaultHeight;
+ (id)_bottomAnchorImage;
+ (id)_topAnchorImage;
+ (id)_rightCapImage;
+ (id)_leftCapImage;
+ (id)_backgroundImage;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(retain, nonatomic) NSView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) NSView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardBackgroundMouseAction:(SEL)arg1 toAccessoryViewWithEvent:(id)arg2;
- (id)_accessoryViewReceivingBackgroundMouseEvents;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)isFlipped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)completeBounceAnimation;
- (void)_markDidMoveCalled;
- (void)fadeOutWithDuration:(double)arg1;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setAnchorPoint:(struct CGPoint)arg1 boundaryRect:(struct CGRect)arg2 animate:(BOOL)arg3;
@property(readonly, nonatomic, getter=isLeftAnchored) BOOL leftAnchored;
- (void)_runBounceAnimation;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)forceAnchorPosition:(int)arg1;
- (struct CGPath *)newMaskCGPath;
- (void)_updateMask;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setOriginForScale:(double)arg1;
- (struct CGPoint)_originForScale:(double)arg1;
- (void)getActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 position:(int *)arg3 forDesiredAnchorPoint:(struct CGPoint)arg4 boundaryRect:(struct CGRect)arg5;
@property(nonatomic) BOOL canAnchorFromBottom;
- (struct CGPoint)anchorPoint;
- (struct CGPoint)offset;
- (void)setOffset:(struct CGPoint)arg1;
@property(nonatomic) unsigned long long subtitleTextAlignment;
@property(nonatomic) unsigned long long titleTextAlignment;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_makeSubtitle;
- (void)_fadeViewsIn:(BOOL)arg1;
- (void)_scheduleLayoutAnimation;
- (void)_layoutAnimation;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSView *detailView;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(BOOL)arg3;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_setRightView:(id)arg1;
- (void)_setLeftView:(id)arg1;

@end

