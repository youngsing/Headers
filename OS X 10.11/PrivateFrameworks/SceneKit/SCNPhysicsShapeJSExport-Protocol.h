//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNGeometry, SCNNode;

@protocol SCNPhysicsShapeJSExport <JSExport>
+ (id)shapeWithShapes:(NSArray *)arg1 transforms:(NSArray *)arg2;
+ (id)shapeWithNode:(SCNNode *)arg1 options:(NSDictionary *)arg2;
+ (id)shapeWithGeometry:(SCNGeometry *)arg1 options:(NSDictionary *)arg2;
- (id)copy;
@end

