//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, MSPTransitLineBookmark, NSString, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    NSString *_identifier;
    MSPPlaceBookmark *_placeBookmark;
    MSPRegionBookmark *_regionBookmark;
    MSPRouteBookmark *_routeBookmark;
    MSPTransitLineBookmark *_transitLineBookmark;
    int _type;
    CDStruct_dd13975a _has;
}

+ (id)__test_newBookmarkStorageForLineWithMuid:(unsigned long long)arg1;
+ (id)__test_newBookmarkStorageForLine;
@property(retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark; // @synthesize transitLineBookmark=_transitLineBookmark;
@property(retain, nonatomic) MSPRegionBookmark *regionBookmark; // @synthesize regionBookmark=_regionBookmark;
@property(retain, nonatomic) MSPRouteBookmark *routeBookmark; // @synthesize routeBookmark=_routeBookmark;
@property(retain, nonatomic) MSPPlaceBookmark *placeBookmark; // @synthesize placeBookmark=_placeBookmark;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitLineBookmark;
@property(readonly, nonatomic) _Bool hasRegionBookmark;
@property(readonly, nonatomic) _Bool hasRouteBookmark;
@property(readonly, nonatomic) _Bool hasPlaceBookmark;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
