//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, MKMapItem, NSArray, NSDate;

@interface MKDirectionsRequest : NSObject <NSCopying>
{
    MKMapItem *_source;
    MKMapItem *_destination;
    unsigned long long _transportType;
    BOOL _requestsAlternateRoutes;
    BOOL _includeTravelTimes;
    BOOL _includeTrafficIncidents;
    BOOL _includeZilchRoutePoints;
    BOOL _includeBasicRoutePoints;
    BOOL _includeEntryPoints;
    BOOL _includeDistanceInETA;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    NSArray *_additionalTransportTypesRequested;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
}

+ (BOOL)isDirectionsRequestURL:(id)arg1;
@property(retain, nonatomic, getter=_walkingOptions, setter=_setWalkingOptions:) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic, getter=_transitOptions, setter=_setTransitOptions:) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic, getter=_automobileOptions, setter=_setAutomobileOptions:) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic, getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:) NSArray *additionalTransportTypesRequested; // @synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested;
@property(nonatomic, getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:) BOOL includeDistanceInETA; // @synthesize includeDistanceInETA=_includeDistanceInETA;
@property(readonly, nonatomic) BOOL _includeEntryPoints; // @synthesize _includeEntryPoints;
@property(readonly, nonatomic) BOOL _includeBasicRoutePoints; // @synthesize _includeBasicRoutePoints;
@property(readonly, nonatomic) BOOL _includeZilchRoutePoints; // @synthesize _includeZilchRoutePoints;
@property(readonly, nonatomic) BOOL _includeTrafficIncidents; // @synthesize _includeTrafficIncidents;
@property(readonly, nonatomic) BOOL _includeTravelTimes; // @synthesize _includeTravelTimes;
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MKMapItem *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContentsOfURL:(id)arg1;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(BOOL)arg5 includeTrafficIncidents:(BOOL)arg6 includeEntryPoints:(BOOL)arg7 includeRoutePoints:(BOOL)arg8;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setArrivalDate:(id)arg1;
- (id)arrivalDate;
- (void)setDepartureDate:(id)arg1;
- (id)departureDate;
- (id)_arrivalDate;
- (id)_departureDate;
- (void)setRequestsAlternateRoutes:(BOOL)arg1;
- (BOOL)requestsAlternateRoutes;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)transportType;
- (unsigned long long)_transportType;
@property(readonly, nonatomic) BOOL _includeTypicalRouteDuration;

@end

