//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying>
{
    NSString *_adSlotId;
    int _durationInFeed;
    int _errorCode;
    int _responseTime;
    int _screenfulsFromTop;
    _Bool _isExpanded;
    _Bool _isFilled;
    struct {
        unsigned int durationInFeed:1;
        unsigned int errorCode:1;
        unsigned int responseTime:1;
        unsigned int screenfulsFromTop:1;
        unsigned int isExpanded:1;
        unsigned int isFilled:1;
    } _has;
}

@property(nonatomic) int screenfulsFromTop; // @synthesize screenfulsFromTop=_screenfulsFromTop;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int durationInFeed; // @synthesize durationInFeed=_durationInFeed;
@property(retain, nonatomic) NSString *adSlotId; // @synthesize adSlotId=_adSlotId;
@property(nonatomic) _Bool isFilled; // @synthesize isFilled=_isFilled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool hasScreenfulsFromTop;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) _Bool hasDurationInFeed;
@property(readonly, nonatomic) _Bool hasAdSlotId;
@property(nonatomic) _Bool hasIsFilled;
@property(nonatomic) _Bool hasIsExpanded;

@end

