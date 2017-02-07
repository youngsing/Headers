//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBPriceRangeValue, _INPBRangeValue;

@interface _INPBRidePartySizeOption : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBRangeValue *_partySizeRange;
    _INPBPriceRangeValue *_priceRange;
    NSString *_sizeDescription;
}

+ (id)options;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(retain, nonatomic) _INPBRangeValue *partySizeRange; // @synthesize partySizeRange=_partySizeRange;
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
@property(readonly, nonatomic) _Bool hasPriceRange;
@property(readonly, nonatomic) _Bool hasSizeDescription;
@property(readonly, nonatomic) _Bool hasPartySizeRange;

@end
