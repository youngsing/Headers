//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_clientConfigs;
    NSMutableArray *_serverAbAssignments;
}

+ (Class)clientConfigType;
+ (Class)serverAbAssignmentType;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSMutableArray *serverAbAssignments; // @synthesize serverAbAssignments=_serverAbAssignments;
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
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientConfigsCount;
- (void)addClientConfig:(id)arg1;
- (void)clearClientConfigs;
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)serverAbAssignmentsCount;
- (void)addServerAbAssignment:(id)arg1;
- (void)clearServerAbAssignments;
- (void)dealloc;

@end
