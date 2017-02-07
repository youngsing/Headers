//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKGradientShapeLayer : CAShapeLayer
{
    CAGradientLayer *_gradient;
    CAShapeLayer *_shapeMask;
}

@property(retain, nonatomic) CAShapeLayer *shapeMask; // @synthesize shapeMask=_shapeMask;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
- (void)p_flatten;
- (void)p_createGradientTreeIfNeeded;
- (_Bool)isGradientTree;
@property(copy) NSString *type;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (void)setFillRule:(id)arg1;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setPath:(struct CGPath *)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
