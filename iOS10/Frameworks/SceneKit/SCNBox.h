//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry
{
    double _boxwidth;
    double _boxheight;
    double _boxlength;
    double _boxchamferRadius;
    long long _boxwidthSegmentCount;
    long long _boxheightSegmentCount;
    long long _boxlengthSegmentCount;
    long long _boxchamferSegmentCount;
    long long _boxprimitiveType;
}

+ (_Bool)supportsSecureCoding;
+ (id)box;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (id)description;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double width;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) double length;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) double chamferRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)presentationBox;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (id)init;

@end
