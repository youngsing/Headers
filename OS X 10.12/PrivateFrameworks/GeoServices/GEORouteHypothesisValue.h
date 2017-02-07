//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedWaypoint, GEOMapServiceTraits, GEORouteHypothesis, GEORouteHypothesisMonitor, NSDate;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding>
{
    GEORouteHypothesisMonitor *_monitor;
    GEORouteHypothesis *_currentHypothesis;
    double _updatedTimeStamp;
    BOOL _prediction;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    int _transportType;
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    GEOMapServiceTraits *_traits;
    double _valueRefreshTimeStamp;
    long long _rowId;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
@property(nonatomic) double valueRefreshTimeStamp; // @synthesize valueRefreshTimeStamp=_valueRefreshTimeStamp;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) double updatedTimeStamp; // @synthesize updatedTimeStamp=_updatedTimeStamp;
@property(nonatomic) BOOL prediction; // @synthesize prediction=_prediction;
@property(retain, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(readonly, retain, nonatomic) GEORouteHypothesisMonitor *monitor; // @synthesize monitor=_monitor;
- (id)description;
- (BOOL)canBePersistedToDisk;
@property(readonly) BOOL isStaleToPurgeFromDisk;
@property(readonly) BOOL isStaleToRefresh;
- (BOOL)aggresiveArrivalIsAfterExpiration;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 expirationDate:(id)arg5 traits:(id)arg6;

@end
