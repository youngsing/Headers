//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKStrategist-Protocol.h>

@class NSString;
@protocol GKGameModel, GKRandom;

@interface GKMonteCarloStrategist : NSObject <GKStrategist>
{
    struct GKCMonteCarloStrategist *_monteCarloStrategist;
}

- (id)bestMoveForActivePlayer;
- (BOOL)validateRandomSource;
- (BOOL)validateGameModel:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned long long explorationParameter;
@property(nonatomic) unsigned long long budget;
@property(retain, nonatomic) id <GKRandom> randomSource;
@property(retain, nonatomic) id <GKGameModel> gameModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

