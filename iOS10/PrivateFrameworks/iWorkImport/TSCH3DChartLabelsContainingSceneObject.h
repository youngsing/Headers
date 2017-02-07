//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DLabelsRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartLabelsContainingSceneObject : TSCH3DSceneObject
{
    TSCH3DLabelsRenderer *mLabelsRenderer;
}

- (void)renderLabelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg1;
- (void)renderLabelsResourcesSessionWithResources:(id)arg1 expectedSize:(const tvec2_3b141483 *)arg2 pipeline:(id)arg3 renderBlock:(CDUnknownBlockType)arg4;
- (void)dispatchElementLabelHandler:(CDUnknownBlockType)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (int)knobsModeForLabelType:(int)arg1 scene:(id)arg2;
- (void)rayPick:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postRenderBounds:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)postrender:(id)arg1;
- (void)render:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (void)renderLabels:(id)arg1;
- (void)p_render:(id)arg1 selector:(SEL)arg2;
- (id)labelsRenderer;
- (void)dealloc;
- (id)init;

@end
