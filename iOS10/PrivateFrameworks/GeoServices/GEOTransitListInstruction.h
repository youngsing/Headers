//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface GEOTransitListInstruction : PBCodable <NSCopying>
{
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
}

+ (Class)priceFormattedType;
+ (Class)detailFormattedType;
+ (Class)commandFormattedType;
+ (Class)noticeFormattedType;
@property(retain, nonatomic) NSMutableArray *priceFormatteds; // @synthesize priceFormatteds=_priceFormatteds;
@property(retain, nonatomic) NSMutableArray *detailFormatteds; // @synthesize detailFormatteds=_detailFormatteds;
@property(retain, nonatomic) NSMutableArray *commandFormatteds; // @synthesize commandFormatteds=_commandFormatteds;
@property(retain, nonatomic) NSMutableArray *noticeFormatteds; // @synthesize noticeFormatteds=_noticeFormatteds;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)priceFormattedsCount;
- (void)addPriceFormatted:(id)arg1;
- (void)clearPriceFormatteds;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailFormattedsCount;
- (void)addDetailFormatted:(id)arg1;
- (void)clearDetailFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandFormattedsCount;
- (void)addCommandFormatted:(id)arg1;
- (void)clearCommandFormatteds;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)noticeFormattedsCount;
- (void)addNoticeFormatted:(id)arg1;
- (void)clearNoticeFormatteds;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *serverFormattedPrices;
@property(readonly, nonatomic) NSArray *serverFormattedNotices;
@property(readonly, nonatomic) NSArray *serverFormattedDetails;
@property(readonly, nonatomic) NSArray *serverFormattedCommands;

@end

