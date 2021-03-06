//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl
{
    long long mRating;
    long long mRatingOnFingerDown;
    int mStyle;
    TSKHorizontalDragRecognizer *mDragGesture;
    _Bool mShowsDots;
    TSUColor *mColor;
}

+ (struct CGPath *)newStarPath:(double)arg1;
+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 style:(int)arg4 showDots:(_Bool)arg5;
@property(copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property(nonatomic) _Bool showsDots; // @synthesize showsDots=mShowsDots;
@property(nonatomic) int style; // @synthesize style=mStyle;
- (Class)renderClass;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) long long value;
- (void)willMoveToSuperview:(id)arg1;
- (void)p_horizontalDrag:(id)arg1;
- (void)p_tapped:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)p_starRatingForGesture:(id)arg1;
- (long long)p_starRatingForLocation:(double)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_setupGestureRecognizers;

@end

