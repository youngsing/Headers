//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKAgent.h>

@interface GKAgent2D : GKAgent
{
}

-     // Error parsing type: 32@0:8@16d24, name: steerToStayOnPath:maxPredictionTime:
-     // Error parsing type: 36@0:8@16d24B32, name: steerToFollowPath:maxPredictionTime:forward:
-     // Error parsing type: 32@0:8@16d24, name: steerForIntercept:maxPredictionTime:
-     // Error parsing type: 28@0:8d16f24, name: steerForWander:speed:
-     // Error parsing type: 20@0:8f16, name: steerForTargetSpeed:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForCohesion:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForAlignment:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForSeparation:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16d24, name: steerToAvoidAgents:timeBeforeCollisionToAvoid:
-     // Error parsing type: 32@0:8@16d24, name: steerToAvoidObstacles:timeBeforeCollisionToAvoid:
-     // Error parsing type: 24@0:816, name: steerForFlee:
-     // Error parsing type: 24@0:816, name: steerForSeek:
- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;
- (void)applySteeringForce:(double)arg1 deltaTime: /* Error: Ran out of types for this method. */;
- (void)updateWithDeltaTime:(double)arg1;
@property(nonatomic) float rotation;
- (struct float2)velocity_;
- (struct float2)position_;
- (void)setPosition_:(struct float2)arg1;
// Error parsing type for property position:
// Property attributes: T,N

// Error parsing type for property velocity:
// Property attributes: T,R,N

- (id)init;

@end

