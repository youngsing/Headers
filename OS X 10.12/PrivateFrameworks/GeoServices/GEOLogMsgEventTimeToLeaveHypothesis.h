//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventTimeToLeaveHypothesis : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _ttlUiNotificationShown;
    CDStruct_90e5f431 _has;
}

@property(nonatomic) double latestArrivalOffset; // @synthesize latestArrivalOffset=_latestArrivalOffset;
@property(nonatomic) double earliestArrivalOffset; // @synthesize earliestArrivalOffset=_earliestArrivalOffset;
@property(nonatomic) double latestDepartureOffset; // @synthesize latestDepartureOffset=_latestDepartureOffset;
@property(nonatomic) double earliestDepartureOffset; // @synthesize earliestDepartureOffset=_earliestDepartureOffset;
@property(nonatomic) unsigned int numberOfReroutes; // @synthesize numberOfReroutes=_numberOfReroutes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLatestArrivalOffset;
@property(nonatomic) BOOL hasEarliestArrivalOffset;
@property(nonatomic) BOOL hasLatestDepartureOffset;
@property(nonatomic) BOOL hasEarliestDepartureOffset;
- (int)StringAsTtlUiNotificationShown:(id)arg1;
- (id)ttlUiNotificationShownAsString:(int)arg1;
@property(nonatomic) BOOL hasTtlUiNotificationShown;
@property(nonatomic) int ttlUiNotificationShown; // @synthesize ttlUiNotificationShown=_ttlUiNotificationShown;
@property(nonatomic) BOOL hasNumberOfReroutes;
- (int)StringAsArrival:(id)arg1;
- (id)arrivalAsString:(int)arg1;
@property(nonatomic) BOOL hasArrival;
@property(nonatomic) int arrival; // @synthesize arrival=_arrival;
- (int)StringAsDeparture:(id)arg1;
- (id)departureAsString:(int)arg1;
@property(nonatomic) BOOL hasDeparture;
@property(nonatomic) int departure; // @synthesize departure=_departure;

@end
