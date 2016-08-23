//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, NSString;

@interface CLLocation (MapKitAdditions)
+ (id)_mapkit_stringWithType:(int)arg1;
+ (double)_mapkit_timeToExpire;
@property(readonly, nonatomic, getter=_mapkit_legacyHasMatch) BOOL legacyHasMatch;
@property(readonly, nonatomic, getter=_mapkit_hasMatch) BOOL hasMatch;
@property(readonly, nonatomic, getter=_mapkit_speedAccuracy) double speedAccuracy;
@property(readonly, nonatomic, getter=_mapkit_courseAccuracy) double courseAccuracy;
- (BOOL)_mapkit_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic, getter=_mapkit_locationDescription) NSString *locationDescription;
@property(readonly, nonatomic, getter=_mapkit_routeMatch) GEORouteMatch *routeMatch;
@property(readonly, nonatomic, getter=_mapkit_hasValidCourse) BOOL hasValidCourse;
@property(readonly, nonatomic, getter=_mapkit_isStale) BOOL isStale;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 rawCoordinate:(struct CLLocationCoordinate2D)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 matchInfo:(id)arg13;
@end

