//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider>
{
    _Bool _implicitDuration;
    double _dampingRatio;
    double _mass;
    double _stiffness;
    double _damping;
    struct CGVector _initialVelocity;
}

@property(nonatomic) double damping; // @synthesize damping=_damping;
@property(nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property(nonatomic) double mass; // @synthesize mass=_mass;
@property(readonly, nonatomic) _Bool implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property(readonly, nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(readonly, nonatomic) double settlingDuration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDampingRatio:(double)arg1;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;
- (id)description;
- (id)effectiveTimingFunction;
- (id)_mediaTimingFunction;
@property(readonly, nonatomic) long long timingCurveType;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;

@end

