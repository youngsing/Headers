//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNTube : SCNGeometry
{
    double _tubeinnerRadius;
    double _tubeouterRadius;
    double _tubeheight;
    double _tuberadialSpan;
    long long _tubeheightSegmentCount;
    long long _tuberadialSegmentCount;
    long long _tubeprimitiveType;
}

+ (BOOL)supportsSecureCoding;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)setRadialSpan:(double)arg1;
- (double)radialSpan;
@property(nonatomic) long long radialSegmentCount;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) double outerRadius;
@property(nonatomic) double innerRadius;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationTube;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end

