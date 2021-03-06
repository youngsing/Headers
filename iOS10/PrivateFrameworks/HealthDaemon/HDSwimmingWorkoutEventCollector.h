//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDWorkoutEventCollector.h>

@class CMSwimData, CMSwimTracker, NSObject;
@protocol OS_dispatch_queue;

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector
{
    CMSwimTracker *_swimTracker;
    CMSwimData *_referenceSwimData;
    NSObject<OS_dispatch_queue> *_workoutEventQueue;
}

+ (_Bool)isAvailableInCurrentHardware;
- (void).cxx_destruct;
- (void)_queue_errorOccurred:(id)arg1;
- (void)_queue_addLapEventForSwimData:(id)arg1;
- (void)_queue_processSwimData:(id)arg1 error:(id)arg2;
- (void)_queue_querySwimDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_stopCollection;
- (void)_queue_startCollectionWithSessionId:(id)arg1;
- (void)immediateUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)supportsWorkoutActivityType:(unsigned long long)arg1;
- (void)stop;
- (void)startWithSessionId:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

