//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel;

@interface MPAVRoutingTableHeaderView : UIView
{
    struct UIEdgeInsets _edgeInsets;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
- (id)_mirroringCompactDescriptionTextAttributes;
- (id)_mirroringCompactDescription;
- (id)_mirroringTitleTextAttributes;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

@end

