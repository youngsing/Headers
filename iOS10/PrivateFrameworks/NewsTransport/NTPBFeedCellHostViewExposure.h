//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying>
{
    int _areaPresentationReason;
    int _feedCellHostType;
    struct {
        unsigned int areaPresentationReason:1;
        unsigned int feedCellHostType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasAreaPresentationReason;
@property(nonatomic) int areaPresentationReason; // @synthesize areaPresentationReason=_areaPresentationReason;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;

@end

