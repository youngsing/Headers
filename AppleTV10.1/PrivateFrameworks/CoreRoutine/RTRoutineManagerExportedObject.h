//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>
{
    RTRoutineManager *_routineManager;
}

@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void).cxx_destruct;
- (void)onPredictedRooms:(id)arg1 error:(id)arg2;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;
- (void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)initWithRoutineManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

