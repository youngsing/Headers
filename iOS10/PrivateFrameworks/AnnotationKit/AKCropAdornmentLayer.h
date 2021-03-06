//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKAdornmentLayer.h>

@class CAShapeLayer;

@interface AKCropAdornmentLayer : AKAdornmentLayer
{
    CAShapeLayer *_guideLayer;
    CAShapeLayer *_handlesLayer;
}

@property(retain) CAShapeLayer *handlesLayer; // @synthesize handlesLayer=_handlesLayer;
@property(retain) CAShapeLayer *guideLayer; // @synthesize guideLayer=_guideLayer;
- (void).cxx_destruct;
- (void)_removeHandles;
- (void)_updateHandles;
- (void)_addHandles;
- (_Bool)_shouldShowHandles;
- (void)_removeGuides;
- (void)_updateGuides;
- (void)_addGuides;
- (void)updateSublayersWithScale:(double)arg1;
- (void)updateAdornmentElements;
- (_Bool)needsUpdateWhenDraggingStartsOrEnds;

@end

