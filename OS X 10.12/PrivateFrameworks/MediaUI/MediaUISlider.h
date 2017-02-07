//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaUI/MediaUIControl.h>

@interface MediaUISlider : MediaUIControl
{
    double _minValue;
    double _maxValue;
    double _value;
}

+ (void)initialize;
- (void)pageDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)trackRect;
- (struct CGRect)knobRect;
- (void)getKnobRect:(struct CGRect *)arg1 trackRect:(struct CGRect *)arg2;
- (id)_QTUIDrawingOptions;
- (BOOL)isFlipped;
@property(nonatomic) double value;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end
