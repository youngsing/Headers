//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HOVelocitySample;

@interface HUVelocitySampler : NSObject
{
    HOVelocitySample *_currentSample;
    HOVelocitySample *_previousSample;
}

@property(retain, nonatomic) HOVelocitySample *previousSample; // @synthesize previousSample=_previousSample;
@property(retain, nonatomic) HOVelocitySample *currentSample; // @synthesize currentSample=_currentSample;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGVector velocity;
- (void)reset;
- (void)addTouchSample:(struct CGPoint)arg1;

@end
