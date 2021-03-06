//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBCacheCoordinatorHints, NTPBDate, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying>
{
    NTPBCacheCoordinatorHints *_cacheCoordinatorHintsValue;
    NSData *_dataValue;
    NTPBDate *_dateValue;
    NSString *_key;
    NTPBNetworkSessionList *_networkSessionList;
    NTPBPersonalizationLocalData *_personalizationLocalData;
    NTPBReadingHistoryItem *_readingHistoryItem;
    NSData *_recordData;
    NSString *_stringValue;
    int _valueType;
    struct {
        unsigned int valueType:1;
    } _has;
}

@property(retain, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData; // @synthesize personalizationLocalData=_personalizationLocalData;
@property(retain, nonatomic) NTPBNetworkSessionList *networkSessionList; // @synthesize networkSessionList=_networkSessionList;
@property(retain, nonatomic) NTPBReadingHistoryItem *readingHistoryItem; // @synthesize readingHistoryItem=_readingHistoryItem;
@property(retain, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property(retain, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue; // @synthesize cacheCoordinatorHintsValue=_cacheCoordinatorHintsValue;
@property(retain, nonatomic) NTPBDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPersonalizationLocalData;
@property(readonly, nonatomic) _Bool hasNetworkSessionList;
@property(readonly, nonatomic) _Bool hasReadingHistoryItem;
@property(readonly, nonatomic) _Bool hasRecordData;
@property(readonly, nonatomic) _Bool hasCacheCoordinatorHintsValue;
@property(readonly, nonatomic) _Bool hasDateValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;

@end

