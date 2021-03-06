//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying>
{
    unsigned int _maxChangedZones;
    NSData *_syncContinuationToken;
    struct {
        unsigned int maxChangedZones:1;
    } _has;
}

+ (id)options;
@property(nonatomic) unsigned int maxChangedZones; // @synthesize maxChangedZones=_maxChangedZones;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxChangedZones;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;

@end

