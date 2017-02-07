//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GraphKit/NSCoding-Protocol.h>
#import <GraphKit/NSCopying-Protocol.h>

@class GRChartView, NSMutableDictionary;

@interface GRAxes : NSObject <NSCoding, NSCopying>
{
    struct CGRect _canvasRect;
    struct CGRect _plotRect;
    NSMutableDictionary *_axesProperties;
    NSMutableDictionary *_subTitleTextAttributes;
    id _owner;
    id _delegate;
    GRChartView *_chart;
    id _identifier;
    BOOL _needsLayout;
    struct {
        struct CGRect _field1;
        struct CGSize _field2;
        struct CGRect *_field3;
        id _field4;
        id _field5;
        char _field6;
    } *_extraData;
    unsigned long long _reserved1;
    unsigned long long _reserved2;
    unsigned long long _reserved3;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)setDefaultProperties:(id)arg1;
+ (void)setDefaultProperty:(id)arg1 forKey:(id)arg2;
+ (id)defaultPropertyForKey:(id)arg1;
+ (id)defaultProperties;
+ (void)initialize;
- (struct CGPoint)locationForXValue:(double)arg1 yValue:(double)arg2;
- (double)yValueAtPoint:(struct CGPoint)arg1;
- (double)xValueAtPoint:(struct CGPoint)arg1;
- (double)_valueAtPoint:(struct CGPoint)arg1 axis:(unsigned short)arg2;
- (double)yPixelValue;
- (double)xPixelValue;
- (double)_pixelValueForAxis:(unsigned short)arg1;
- (BOOL)clickPoint:(struct CGPoint)arg1;
- (BOOL)selectPoint:(struct CGPoint)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)deselectAllPoints;
- (BOOL)_autoscale;
- (BOOL)_zoomOut;
- (BOOL)_zoomInRect:(struct CGRect)arg1;
- (void)drawAxesRect:(struct CGRect)arg1;
- (void)drawGridRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawLegendRect:(struct CGRect)arg1;
- (void)drawLegendSampleInRect:(struct CGRect)arg1 forDataSet:(unsigned long long)arg2 withHighlight:(BOOL)arg3;
- (BOOL)_supportsCopyOnScroll;
- (BOOL)needsLayout;
- (void)setNeedsLayout:(BOOL)arg1;
- (BOOL)computeLayout;
- (struct CGRect)legendRect;
- (id)legendLabels;
- (void)setPlotRect:(struct CGRect)arg1;
- (struct CGRect)plotRect;
- (struct CGRect)canvasRect;
- (void)setCanvasRect:(struct CGRect)arg1;
- (void)_updateTextProperties;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)dataSet:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)chart:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)didSetProperty:(id)arg1 forKey:(id)arg2 replacingOldValue:(id)arg3 andShouldReload:(char *)arg4 andRelayout:(char *)arg5 andRedisplay:(char *)arg6;
- (id)valueForUndefinedKey:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)_literalPropertyForKey:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chart;
- (id)owner;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)_setOwner:(id)arg1;

@end
