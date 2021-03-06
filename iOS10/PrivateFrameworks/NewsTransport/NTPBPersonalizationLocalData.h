//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>
{
    NSMutableArray *_closedChangeGroups;
    NSMutableArray *_openChangeGroupDeltas;
    NSData *_remoteRecordData;
}

+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;
@property(retain, nonatomic) NSData *remoteRecordData; // @synthesize remoteRecordData=_remoteRecordData;
@property(retain, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property(retain, nonatomic) NSMutableArray *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRemoteRecordData;
- (id)closedChangeGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)closedChangeGroupsCount;
- (void)addClosedChangeGroups:(id)arg1;
- (void)clearClosedChangeGroups;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)openChangeGroupDeltasCount;
- (void)addOpenChangeGroupDeltas:(id)arg1;
- (void)clearOpenChangeGroupDeltas;
- (void)dealloc;

@end

