//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface HUNavigationBarLayoutOptions : NSObject
{
    double _topMargin;
    double _bottomMargin;
    double _height;
    UIFont *_buttonFont;
    double _minTextButtonWidth;
    long long _viewSizeSubclass;
    double _containerLeadingMargin;
    double _containerTrailingMargin;
}

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3;
@property(nonatomic) double containerTrailingMargin; // @synthesize containerTrailingMargin=_containerTrailingMargin;
@property(nonatomic) double containerLeadingMargin; // @synthesize containerLeadingMargin=_containerLeadingMargin;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
@property(nonatomic) double minTextButtonWidth; // @synthesize minTextButtonWidth=_minTextButtonWidth;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (void).cxx_destruct;
@property(readonly, nonatomic) double trailingMargin;
@property(readonly, nonatomic) double leadingMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end
