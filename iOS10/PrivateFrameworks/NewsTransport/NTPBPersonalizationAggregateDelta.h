//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _events;
    double _defaultClicks;
    double _defaultImpressions;
    unsigned long long _timestamp;
    NSString *_featureKey;
    struct {
        unsigned int defaultClicks:1;
        unsigned int defaultImpressions:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double defaultImpressions; // @synthesize defaultImpressions=_defaultImpressions;
@property(nonatomic) double defaultClicks; // @synthesize defaultClicks=_defaultClicks;
@property(retain, nonatomic) NSString *featureKey; // @synthesize featureKey=_featureKey;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimestamp;
- (void)setEvents:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)eventsAtIndex:(unsigned long long)arg1;
- (void)addEvents:(unsigned int)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) unsigned int *events;
@property(readonly, nonatomic) unsigned long long eventsCount;
@property(nonatomic) _Bool hasDefaultImpressions;
@property(nonatomic) _Bool hasDefaultClicks;
@property(readonly, nonatomic) _Bool hasFeatureKey;
- (void)dealloc;

@end

