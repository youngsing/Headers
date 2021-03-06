//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDWorkoutEventCollector.h>

#import <HealthDaemon/CMWorkoutManagerDelegate-Protocol.h>

@class CMWorkoutManager, NSString;

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector <CMWorkoutManagerDelegate>
{
    CMWorkoutManager *_cmWorkoutManager;
}

- (void).cxx_destruct;
- (void)workoutManagerDidFail:(id)arg1 workout:(id)arg2 error:(id)arg3;
- (void)workoutManagerWillResumeWorkout:(id)arg1 workout:(id)arg2 resumeDate:(id)arg3;
- (void)workoutManagerWillPauseWorkout:(id)arg1 workout:(id)arg2 pauseDate:(id)arg3;
- (void)workoutManagerDidStopWorkout:(id)arg1 workout:(id)arg2 stopDate:(id)arg3;
- (void)workoutManagerDidStartWorkout:(id)arg1 workout:(id)arg2 startDate:(id)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

