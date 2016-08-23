//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution
{
    float _mean;
    float _deviation;
}

@property(readonly, nonatomic) float deviation; // @synthesize deviation=_deviation;
@property(readonly, nonatomic) float mean; // @synthesize mean=_mean;
- (long long)nextInt;
- (id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;

@end

