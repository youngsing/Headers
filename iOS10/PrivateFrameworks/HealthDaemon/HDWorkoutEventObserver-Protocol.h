//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDWorkoutManager, _HKWorkoutEvent;

@protocol HDWorkoutEventObserver <NSObject>
- (void)workoutManager:(HDWorkoutManager *)arg1 didReceiveEvent:(_HKWorkoutEvent *)arg2;
@end

