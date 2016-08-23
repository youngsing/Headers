//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface QTHUDSliderCell : NSActionCell
{
    double _minValue;
    double _maxValue;
    double _currentValue;
    struct CGRect *_cellFrameForTrackingMousePtr;
}

+ (void)initialize;
+ (BOOL)prefersTrackingUntilMouseUp;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 mouseIsUp:(BOOL)arg5;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)QTHUD_markAreasNeedingDisplayForAction:(void *)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGPoint)pointAtValue:(double)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (double)valueAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)knobRectAtValue:(double)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)mouseTrackingRectWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)_QTHUDSliderValidateUserValue:(double)arg1;
- (id)_QTHUDSliderHighlightedRanges;
- (id)_QTUIState;
- (id)_QTUISize;
- (BOOL)isTrackingMouse;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)_setDoubleValue:(double)arg1 minValue:(double)arg2 maxValue:(double)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_markControlViewDirtyIfNecessesaryForNewFraction:(double)arg1 oldFraction:(double)arg2;

@end

