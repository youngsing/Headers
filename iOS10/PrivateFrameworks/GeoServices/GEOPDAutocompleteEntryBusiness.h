//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, PBUnknownFields;

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOPDPlace *_place;
    int _resultProviderId;
    struct {
        unsigned int muid:1;
        unsigned int resultProviderId:1;
    } _has;
}

@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
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
@property(readonly, nonatomic) _Bool hasPlace;
@property(nonatomic) _Bool hasResultProviderId;
@property(nonatomic) _Bool hasMuid;
- (void)dealloc;

@end

