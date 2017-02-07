//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTrafficBannerText, NSData, NSMutableArray;

@interface GEOETARoute : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _incidentEndOffsetsInETARoutes;
    CDStruct_9f2792e4 _trafficColorOffsets;
    CDStruct_9f2792e4 _trafficColors;
    unsigned int _historicTravelTime;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    unsigned int _staticTravelTime;
    NSMutableArray *_steps;
    GEOTrafficBannerText *_trafficBannerText;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    NSData *_zilchPoints;
    BOOL _routeNoLongerValid;
    struct {
        unsigned int historicTravelTime:1;
        unsigned int staticTravelTime:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeBestEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
        unsigned int routeNoLongerValid:1;
    } _has;
}

+ (Class)incidentsOffReRoutesType;
+ (Class)incidentsOnReRoutesType;
+ (Class)incidentsOnETARouteType;
+ (Class)invalidSectionZilchPointsType;
+ (Class)reroutedRouteType;
+ (Class)stepType;
@property(nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property(nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeBestEstimate; // @synthesize travelTimeBestEstimate=_travelTimeBestEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property(retain, nonatomic) GEOTrafficBannerText *trafficBannerText; // @synthesize trafficBannerText=_trafficBannerText;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(retain, nonatomic) NSMutableArray *incidentsOffReRoutes; // @synthesize incidentsOffReRoutes=_incidentsOffReRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnReRoutes; // @synthesize incidentsOnReRoutes=_incidentsOnReRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnETARoutes; // @synthesize incidentsOnETARoutes=_incidentsOnETARoutes;
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints; // @synthesize invalidSectionZilchPoints=_invalidSectionZilchPoints;
@property(retain, nonatomic) NSMutableArray *reroutedRoutes; // @synthesize reroutedRoutes=_reroutedRoutes;
@property(nonatomic) BOOL routeNoLongerValid; // @synthesize routeNoLongerValid=_routeNoLongerValid;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasStaticTravelTime;
@property(nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property(nonatomic) BOOL hasTravelTimeBestEstimate;
@property(nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property(readonly, nonatomic) BOOL hasTrafficBannerText;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInETARoutes;
@property(readonly, nonatomic) unsigned int *incidentEndOffsetsInETARoutes;
@property(readonly, nonatomic) unsigned long long incidentEndOffsetsInETARoutesCount;
@property(nonatomic) BOOL hasHistoricTravelTime;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffReRoutesCount;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)clearIncidentsOffReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnReRoutesCount;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)clearIncidentsOnReRoutes;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnETARoutesCount;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)clearIncidentsOnETARoutes;
- (void)setTrafficColorOffsets:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearTrafficColorOffsets;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
- (void)setTrafficColors:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)clearTrafficColors;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)clearInvalidSectionZilchPoints;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)reroutedRoutesCount;
- (void)addReroutedRoute:(id)arg1;
- (void)clearReroutedRoutes;
@property(nonatomic) BOOL hasRouteNoLongerValid;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(readonly, nonatomic) BOOL hasRouteID;
- (void)dealloc;
- (void)setDebugBannerTitle:(id)arg1 bannerDescription:(id)arg2 bannerSpoken:(id)arg3;
- (void)_addDebugArguments:(id)arg1;
- (id)bannerSpoken;
- (id)bannerDescription;
- (id)bannerTitle;
- (unsigned long long)stepIndexOfStepWithID:(unsigned int)arg1;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
@property(readonly, nonatomic) double expectedTime;

@end
