//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface _INPBDuration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _seconds;
    int _nanos;
    CDStruct_fd810184 _has;
}

+ (id)options;
@property(nonatomic) int nanos; // @synthesize nanos=_nanos;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNanos;
@property(nonatomic) _Bool hasSeconds;

@end
