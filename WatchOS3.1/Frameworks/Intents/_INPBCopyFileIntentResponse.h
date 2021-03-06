//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBString;

@interface _INPBCopyFileIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_destinationName;
    _INPBString *_entityName;
    int _entityType;
    _Bool _overwrite;
    _Bool _success;
    CDStruct_be739ab4 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
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
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasOverwrite;

@end

