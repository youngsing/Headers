//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CALayer, CAShapeLayer;
@protocol FMAnnotation><MKAnnotation;

@interface FMAnnotationView : MKAnnotationView
{
    _Bool _shouldPreventLargeAnnotationState;
    _Bool _isDelayed;
    _Bool _isShowingLargeSelectedAnnotation;
    _Bool _hasPhotoImage;
    CAShapeLayer *_smallRingLayer;
    CAShapeLayer *_largeRingLayer;
    CALayer *_smallCircleLayer;
    CALayer *_largeCircleLayer;
    CALayer *_locationOuterLayer;
    CALayer *_locationInnerLayer;
    CALayer *_smallPersonImageLayer;
    CALayer *_largePersonImageLayer;
}

+ (_Bool)_followsTerrain;
+ (void)setShouldMaskLayer:(_Bool)arg1;
+ (void)setThickAnnotationBorder:(_Bool)arg1;
+ (void)setLargeAnnotationBorderVisible:(_Bool)arg1;
+ (void)setImagePadding:(double)arg1;
@property(nonatomic) _Bool hasPhotoImage; // @synthesize hasPhotoImage=_hasPhotoImage;
@property(nonatomic) _Bool isShowingLargeSelectedAnnotation; // @synthesize isShowingLargeSelectedAnnotation=_isShowingLargeSelectedAnnotation;
@property(retain, nonatomic) CALayer *largePersonImageLayer; // @synthesize largePersonImageLayer=_largePersonImageLayer;
@property(retain, nonatomic) CALayer *smallPersonImageLayer; // @synthesize smallPersonImageLayer=_smallPersonImageLayer;
@property(retain, nonatomic) CALayer *locationInnerLayer; // @synthesize locationInnerLayer=_locationInnerLayer;
@property(retain, nonatomic) CALayer *locationOuterLayer; // @synthesize locationOuterLayer=_locationOuterLayer;
@property(retain, nonatomic) CALayer *largeCircleLayer; // @synthesize largeCircleLayer=_largeCircleLayer;
@property(retain, nonatomic) CALayer *smallCircleLayer; // @synthesize smallCircleLayer=_smallCircleLayer;
@property(retain, nonatomic) CAShapeLayer *largeRingLayer; // @synthesize largeRingLayer=_largeRingLayer;
@property(retain, nonatomic) CAShapeLayer *smallRingLayer; // @synthesize smallRingLayer=_smallRingLayer;
@property(nonatomic) _Bool isDelayed; // @synthesize isDelayed=_isDelayed;
@property(nonatomic) _Bool shouldPreventLargeAnnotationState; // @synthesize shouldPreventLargeAnnotationState=_shouldPreventLargeAnnotationState;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) id <FMAnnotation><MKAnnotation> annotation; // @dynamic annotation;
- (void)_setupSpringActions;
- (void)_updateAnnotationStyle;
- (void)_transitionToNewSize:(_Bool)arg1;
- (void)_selectionWasUpdated:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setTintColor:(id)arg1;
- (void)animateDelayedAnimation;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)updateStyleForAnnotation:(id)arg1;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

