//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOMotionContextProvider-Protocol.h>
#import <Navigation/MNLocationProvider-Protocol.h>
#import <Navigation/MNTracePlayerObserver-Protocol.h>

@class MNTracePlayer, MNTraceRecorder, NSBundle, NSString;
@protocol GEOMotionContextProviderDelegate, MNLocationProviderDelegate, MNNavigationTraceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, MNLocationProvider, GEOMotionContextProvider>
{
    MNTracePlayer *_tracePlayer;
    MNTraceRecorder *_traceRecorder;
    int _navigationType;
    id <MNNavigationTraceManagerDelegate> _traceManagerDelegate;
    id <MNLocationProviderDelegate> _locationProviderDelegate;
    id <GEOMotionContextProviderDelegate> _motionContextProviderDelegate;
}

@property(readonly, nonatomic) MNTraceRecorder *traceRecorder; // @synthesize traceRecorder=_traceRecorder;
@property(readonly, nonatomic) MNTracePlayer *tracePlayer; // @synthesize tracePlayer=_tracePlayer;
@property(nonatomic) __weak id <MNNavigationTraceManagerDelegate> traceManagerDelegate; // @synthesize traceManagerDelegate=_traceManagerDelegate;
@property(nonatomic) __weak id <GEOMotionContextProviderDelegate> motionDelegate; // @synthesize motionDelegate=_motionContextProviderDelegate;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_locationProviderDelegate;
- (void).cxx_destruct;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool isSimulation;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 destination:(id)arg4;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (unsigned long long)_startIndexForNavigation;
- (_Bool)_isNavigating;
- (void)close;
- (void)openWithRoutePlanningDetails:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
