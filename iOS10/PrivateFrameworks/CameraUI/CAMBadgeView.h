//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CAMBadgeView : UIView
{
    double __fillCornerRadius;
    UIColor *__fillColor;
    UIColor *__contentColor;
}

@property(retain, nonatomic, setter=_setContentColor:) UIColor *_contentColor; // @synthesize _contentColor=__contentColor;
@property(retain, nonatomic, setter=_setFillColor:) UIColor *_fillColor; // @synthesize _fillColor=__fillColor;
@property(nonatomic, setter=_setFillCornerRadius:) double _fillCornerRadius; // @synthesize _fillCornerRadius=__fillCornerRadius;
- (void).cxx_destruct;
- (id)_maskImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

