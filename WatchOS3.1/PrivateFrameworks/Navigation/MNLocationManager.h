//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <Navigation/MNLocationProviderDelegate-Protocol.h>

@class CLHeading, GEOLocationShifter, MNLocation, NSBundle, NSDate, NSError, NSHashTable, NSLock, NSString;
@protocol MNLocationProvider, MNLocationRecorder;

__attribute__((visibility("hidden")))
@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate>
{
    id <MNLocationProvider> _locationProvider;
    id <MNLocationRecorder> _locationRecorder;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    MNLocation *_lastGoodLocation;
    GEOLocationShifter *_locationShifter;
    double _lastLocationUpdateTime;
    double _lastLocationReportTime;
    double _locationUpdateStartTime;
    CLHeading *_heading;
    NSDate *_lastUpdatedHeadingDate;
    _Bool _hasCustomDesiredAccuracy;
    _Bool _enabled;
    _Bool _trackingLocation;
    _Bool _logStartStopLocationUpdates;
    _Bool _isLastLocationStale;
    _Bool _lastLocationPushed;
    _Bool _useCourseForHeading;
    _Bool _trackingHeading;
    NSError *_locationError;
    CDUnknownBlockType _locationCorrector;
}

+ (id)sharedLocationManager;
@property(retain, nonatomic) id <MNLocationRecorder> locationRecorder; // @synthesize locationRecorder=_locationRecorder;
@property(copy, nonatomic) CDUnknownBlockType locationCorrector; // @synthesize locationCorrector=_locationCorrector;
@property(readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property(readonly, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
- (void).cxx_destruct;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (_Bool)isLocationServicesAvailable;
- (_Bool)isLocationServicesApproved;
- (_Bool)isLocationServicesAuthorizationNeeded;
- (_Bool)isLocationServicesPossiblyAvailable:(id *)arg1;
@property(readonly, nonatomic) _Bool isHeadingServicesAvailable;
- (_Bool)isLocationServicesPossiblyAvailable;
- (void)reset;
- (_Bool)isLocationServicesRestricted;
- (_Bool)isLocationServicesDenied;
- (void)_setTrackingHeading:(_Bool)arg1;
- (void)_setTrackingLocation:(_Bool)arg1;
- (void)_syncLocationProviderWithTracking;
@property(nonatomic) int headingOrientation;
- (void)setActivityType:(long long)arg1;
- (long long)activityType;
@property(readonly, nonatomic) _Bool isLastLocationStale;
- (id)lastGoodLocation;
- (void)setLastLocation:(id)arg1;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) double timeScale;
- (int)lastLocationSource;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)_setLastLocationReceivedFromMaps:(id)arg1;
- (void)stopListeningForLocationUpdates:(id)arg1;
- (void)listenForLocationUpdates:(id)arg1;
@property(retain, nonatomic) id <MNLocationProvider> locationProvider;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)pushLocation:(id)arg1;
- (void)_useCoreLocationProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

