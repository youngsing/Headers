//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldBypassTravelEngineThrottle;
@property(nonatomic) _Bool showVerboseMessagesForTimeToLeave;
@property(nonatomic) _Bool useAverageETAForTimeToLeave;
@property(nonatomic) _Bool showDepartureDateForTransitTimeToLeave;
@property(nonatomic) _Bool verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property(nonatomic) _Bool performAgendaEntryEqualityChecksInTravelEngine;
@property(nonatomic) _Bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property(nonatomic) _Bool preventMarkingTravelAdvisoryEntriesAsDismissed;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property(nonatomic) _Bool overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property(nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property(retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property(nonatomic) _Bool overrideTravelAdvisoryHypothesis;
@property(nonatomic) _Bool saveGeocodedLocationsInTravelEngine;
@property(nonatomic) double availabilityFreshnessWindow;
- (id)init;

@end
