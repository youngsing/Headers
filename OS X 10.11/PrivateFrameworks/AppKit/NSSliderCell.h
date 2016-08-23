//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface NSSliderCell : NSActionCell
{
    id _sliderCellPrivateData;
    double _previousValue;
    double _knobOffset;
    int _numberOfTickMarks;
    double _altIncValue;
    double _value;
    double _maxValue;
    double _minValue;
    struct CGRect _trackRect;
    struct __sliderCellFlags {
        unsigned int weAreVertical:1;
        unsigned int weAreVerticalSet:1;
        unsigned int reserved1:1;
        unsigned int isPressed:1;
        unsigned int allowsTickMarkValuesOnly:1;
        unsigned int tickMarkPosition:1;
        unsigned int sliderType:2;
        unsigned int drawing:1;
        unsigned int snappedToTickMark:1;
        unsigned int snappedToPreviousValue:1;
        unsigned int snappedToDefaultValue:1;
        unsigned int snappingAllowed:1;
        unsigned int reserved2:19;
    } _scFlags;
}

+ (struct __CFDictionary *)_coreUIDialKnobCallbacksMap;
+ (struct __CFDictionary *)_coreUIDialCallbacksMap;
+ (struct __CFDictionary *)_coreUILinearKnobCallbacksMap;
+ (struct __CFDictionary *)_coreUILinearBarCallbacksMap;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)initialize;
- (id)titleCell;
- (void)setTitleCell:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)_setKnobThickness:(double)arg1 usingInsetRect:(BOOL)arg2;
- (void)setKnobThickness:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)_vibrancyBlendModeForControlView:(id)arg1;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (struct __CFDictionary *)_copyCoreUILinearKnobDrawOptionsWithView:(id)arg1;
- (struct __CFDictionary *)_copyCoreUILinearBarDrawOptionsWithView:(id)arg1;
- (struct __CFDictionary *)_copyCoreUIDialKnobDrawOptionsWithView:(id)arg1;
- (struct __CFDictionary *)_copyCoreUIDialDrawOptionsWithView:(id)arg1;
- (id)_coreUICircularValue:(id)arg1;
- (struct __CFString *)_coreUICircularState:(id)arg1;
- (id)_tickMarkCUIOptions;
- (struct __CFString *)_coreUILinearKnobWidget:(id)arg1;
- (struct __CFString *)_coreUILayoutDirection:(id)arg1;
- (struct __CFBoolean *)_coreUILinearBarFillsValue:(id)arg1;
- (struct CGStyle *)_coreUILinearBarFocusStyleWithView:(id)arg1;
- (struct __CFBoolean *)_coreUILinearBarIsFocused:(id)arg1;
- (struct __CFString *)_coreUILinearDirection:(id)arg1;
- (struct __CFString *)_coreUILinearOrientation:(id)arg1;
- (id)_coreUILinearValue:(id)arg1;
- (struct __CFString *)_coreUILinearState:(id)arg1;
- (struct __CFBoolean *)_coreUIBarNoIndicator:(id)arg1;
- (struct __CFBoolean *)_coreUIKnobIndicatorOnly:(id)arg1;
- (struct __CFBoolean *)_coreUIIsFlippedWithView:(id)arg1;
- (struct CGStyle *)_coreUIFocusStyleWithView:(id)arg1;
- (struct __CFBoolean *)_coreUIIsFocused:(id)arg1;
- (struct __CFString *)_coreUISize:(id)arg1;
- (struct __CFString *)_coreUIWidget:(id)arg1;
- (void)invalidateRect:(struct CGRect)arg1 forControlView:(id)arg2;
- (BOOL)_noteTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)_vetoMouseDragActionDispatch;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)_hasSnappingBehavior;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_calcTrackRect:(struct CGRect *)arg1 andAdjustRect:(BOOL)arg2;
- (struct CGRect)_resetTrackRect:(struct CGRect)arg1;
@property(readonly) struct CGRect trackRect;
- (void)_drawCustomTrackWithTrackRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_usesCustomTrackImage;
- (void)_drawLiveResizeHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_drawTickMarks;
- (void)drawTickMarks;
- (void)drawKnob:(struct CGRect)arg1;
- (void)drawKnob;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (BOOL)_barShowsValue;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
- (struct CGRect)barRectFlipped:(BOOL)arg1;
- (struct CGRect)_oldGetBarBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_postBarLength;
- (double)_preBarLength;
- (double)_knobPointOverhang;
- (double)_knobTailOverhang;
- (long long)closestTickMarkIndexToValue:(double)arg1;
- (double)closestTickMarkValueToValue:(double)arg1;
- (long long)indexOfTickMarkAtPoint:(struct CGPoint)arg1;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (void)setTickMarkIsProminent:(BOOL)arg1 atIndex:(long long)arg2;
- (BOOL)tickMarkIsProminentAtIndex:(long long)arg1;
- (BOOL)allowsTickMarkValuesOnly;
- (void)setAllowsTickMarkValuesOnly:(BOOL)arg1;
- (unsigned long long)tickMarkPosition;
- (void)setTickMarkPosition:(unsigned long long)arg1;
- (long long)numberOfTickMarks;
- (void)setNumberOfTickMarks:(long long)arg1;
- (void)setDefaultValue:(double)arg1;
- (double)defaultValue;
@property double maxValue;
@property double minValue;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
@property(readonly, getter=isVertical) long long vertical;
- (void)setVertical:(BOOL)arg1;
@property double altIncrementValue;
@property unsigned long long sliderType;
@property(readonly) double knobThickness;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
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
- (void)_moveInDirection:(unsigned long long)arg1;
- (BOOL)_isR2L;
- (BOOL)_applicableShowsFocus;
- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityIndicatorRect;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (BOOL)accessibilityIsAllowedValuesAttributeSettable;
- (id)accessibilityAllowedValuesAttribute;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsValueIndicatorAttributeSettable;
- (id)accessibilityValueIndicatorAttribute;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

