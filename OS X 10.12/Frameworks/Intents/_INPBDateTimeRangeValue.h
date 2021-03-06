//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBDateTime, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _endCalendar;
    long long _startCalendar;
    _INPBDateTime *_endDateTime;
    _INPBDateTime *_startDateTime;
    _INPBValueMetadata *_valueMetadata;
    struct {
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDateTime *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(retain, nonatomic) _INPBDateTime *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long endCalendar; // @synthesize endCalendar=_endCalendar;
@property(nonatomic) long long startCalendar; // @synthesize startCalendar=_startCalendar;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEndDateTime;
@property(readonly, nonatomic) BOOL hasStartDateTime;
@property(nonatomic) BOOL hasEndCalendar;
@property(nonatomic) BOOL hasStartCalendar;
@property(readonly, nonatomic) BOOL hasValueMetadata;

@end

