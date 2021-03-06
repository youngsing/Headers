//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView
{
    double _currentProgress;
    UIImageView *_appleLogo;
    unsigned long long _style;
    unsigned long long _version;
}

@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *appleLogo; // @synthesize appleLogo=_appleLogo;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_size;
- (void)drawRect:(struct CGRect)arg1;
- (double)_tickLength;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2;

@end

