//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PT2DGraphAxisStyle : NSObject
{
    _Bool _showsGridlines;
    _Bool _showsHashmarks;
    _Bool _showsTitle;
    UIColor *_color;
    double _lineWidth;
    double _hashmarkInterval;
    NSString *_title;
    UIColor *_gridlineColor;
    UIColor *_titleColor;
    unsigned long long _gridlineCount;
}

@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) _Bool showsHashmarks; // @synthesize showsHashmarks=_showsHashmarks;
@property(nonatomic) _Bool showsGridlines; // @synthesize showsGridlines=_showsGridlines;
@property(nonatomic) unsigned long long gridlineCount; // @synthesize gridlineCount=_gridlineCount;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *gridlineColor; // @synthesize gridlineColor=_gridlineColor;
@property(nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double hashmarkInterval; // @synthesize hashmarkInterval=_hashmarkInterval;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)init;

@end

