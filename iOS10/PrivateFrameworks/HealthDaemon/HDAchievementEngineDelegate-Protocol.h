//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKQuantity, NSArray, NSDate;

@protocol HDAchievementEngineDelegate <NSObject>
- (long long)mostRecentWorkoutAnchor;
- (NSArray *)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long *)arg2;
- (unsigned long long)stepsTakenToday;
- (unsigned long long)stepsTakenYesterday;
- (unsigned long long)standingHoursToday;
- (unsigned long long)standingHoursYesterday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (HKQuantity *)energyBurnedGoalToday;
- (HKQuantity *)energyBurnedGoalYesterday;
- (long long)activitySummaryIndexToday;
- (NSDate *)currentDate;
@end

