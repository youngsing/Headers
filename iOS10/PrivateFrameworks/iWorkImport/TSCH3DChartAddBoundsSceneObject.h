//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAddBoundsSceneObject : TSCH3DSceneObject
{
}

+ (void)setRadialBoundsFactor:(float)arg1 forScene:(id)arg2;
+ (void)setXYRotationBoundsForScene:(id)arg1;
+ (void)setYRotationBoundsForScene:(id)arg1;
+ (id)p_rotationBoundsModeForScene:(id)arg1;
+ (void)setDepthBoundsForScene:(id)arg1;
+ (id)p_setBoundsModeClass:(Class)arg1 forScene:(id)arg2;
- (void)render:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;

@end
