//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>

@class GKPath, NSArray;

@interface GKGoal : NSObject <NSCopying>
{
    int _type;
    GKPath *_path;
    NSArray *_obstacles;
    NSArray *_agents;
    double _time;
    float _angle;
    float _distance;
    float _speed;
    BOOL _forward;
}

+ (id)goalToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3;
+ (id)goalToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToWander:(float)arg1;
+ (id)goalToReachTargetSpeed:(float)arg1;
+ (id)goalToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
+ (id)goalToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2;
+ (id)goalToFleeAgent:(id)arg1;
+ (id)goalToSeekAgent:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isTargetSpeedGoal;
- (float)speed;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
-     // Error parsing type: 32@0:8d16@24, name: getForce:agent:
- (id)initToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3;
- (id)initToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToWander:(float)arg1;
- (id)initToReachTargetSpeed:(float)arg1;
- (id)initToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (id)initToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2;
- (id)initToFleeAgent:(id)arg1;
- (id)initToSeekAgent:(id)arg1;
- (id)init;

@end

