//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUColorSwatchView : UIView
{
    unsigned long long _selectionState;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)_updateShapePath;
@property(retain, nonatomic) UIColor *color;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end

