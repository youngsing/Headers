//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, TVBadgeView;

@interface TVBadgeOverlayView : UIView
{
    NSString *_badgeValue;
    double _maximumBadgeWidth;
    TVBadgeView *_badgeView;
}

@property(retain, nonatomic) TVBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) double maximumBadgeWidth; // @synthesize maximumBadgeWidth=_maximumBadgeWidth;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
