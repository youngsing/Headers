//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class CLVisit, NSArray, NSError, RTScenarioTrigger;

@protocol RTFrameworkProtocol <NSObject>
- (void)onPredictedRooms:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onNextPredictedLocationsOfInterest:(NSArray *)arg1 withError:(NSError *)arg2;
- (void)onPredictedApplications:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onLeechedVisit:(CLVisit *)arg1 withError:(NSError *)arg2;
- (void)onVisit:(CLVisit *)arg1 withError:(NSError *)arg2;
@end

