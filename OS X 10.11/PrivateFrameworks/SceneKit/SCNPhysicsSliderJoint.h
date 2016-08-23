//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 axisA;
        struct SCNVector3 anchorA;
        struct SCNVector3 axisB;
        struct SCNVector3 anchorB;
        double minLinearLimit;
        double maxLinearLimit;
        double minAngularLimit;
        double maxAngularLimit;
        double motorTargetLinearVelocity;
        double motorMaximumForce;
        double motorTargetAngularVelocity;
        double motorMaximumTorque;
    } _definition;
    struct btSliderConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
@property(nonatomic) double motorMaximumTorque;
@property(nonatomic) double motorTargetAngularVelocity;
@property(nonatomic) double motorMaximumForce;
@property(nonatomic) double motorTargetLinearVelocity;
@property(nonatomic) double maximumAngularLimit;
@property(nonatomic) double minimumAngularLimit;
@property(nonatomic) double maximumLinearLimit;
@property(nonatomic) double minimumLinearLimit;
@property(nonatomic) struct SCNVector3 anchorB;
@property(nonatomic) struct SCNVector3 anchorA;
@property(nonatomic) struct SCNVector3 axisB;
@property(nonatomic) struct SCNVector3 axisA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
- (void)dealloc;

@end

