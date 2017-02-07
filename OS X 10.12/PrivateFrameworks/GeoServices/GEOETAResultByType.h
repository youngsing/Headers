//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    double _expectedTimeOfDeparture;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _staticTravelTime;
    int _status;
    NSMutableArray *_summaryForPredictedDestinations;
    int _transportType;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct {
        unsigned int expectedTimeOfDeparture:1;
        unsigned int distance:1;
        unsigned int historicTravelTime:1;
        unsigned int staticTravelTime:1;
        unsigned int status:1;
        unsigned int transportType:1;
        unsigned int travelTimeAggressiveEstimate:1;
        unsigned int travelTimeBestEstimate:1;
        unsigned int travelTimeConservativeEstimate:1;
    } _has;
}

+ (Class)summaryForPredictedDestinationType;
@property(retain, nonatomic) NSMutableArray *summaryForPredictedDestinations; // @synthesize summaryForPredictedDestinations=_summaryForPredictedDestinations;
@property(nonatomic) unsigned int staticTravelTime; // @synthesize staticTravelTime=_staticTravelTime;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate; // @synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate; // @synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate;
@property(nonatomic) double expectedTimeOfDeparture; // @synthesize expectedTimeOfDeparture=_expectedTimeOfDeparture;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int historicTravelTime; // @synthesize historicTravelTime=_historicTravelTime;
@property(nonatomic) unsigned int travelTimeBestEstimate; // @synthesize travelTimeBestEstimate=_travelTimeBestEstimate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
@property(nonatomic) BOOL hasStaticTravelTime;
@property(nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property(nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property(nonatomic) BOOL hasExpectedTimeOfDeparture;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) BOOL hasTravelTimeBestEstimate;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)dealloc;

@end
