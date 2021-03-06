//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface CNRepeatingGradientSeparatorView : UIView
{
    UIColor *_startColor;
    UIColor *_endColor;
    long long _lineCount;
}

@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *gradientColors;
- (void)layoutSubviews;
- (void)_updateGradients;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

