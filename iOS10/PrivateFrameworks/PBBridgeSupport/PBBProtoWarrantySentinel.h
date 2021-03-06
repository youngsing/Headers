//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying>
{
    NSMutableArray *_appleLanguages;
    NSString *_appleLocale;
    NSString *_deviceName;
    _Bool _removeSentinel;
    _Bool _sentinelExists;
    struct {
        unsigned int removeSentinel:1;
        unsigned int sentinelExists:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *appleLocale; // @synthesize appleLocale=_appleLocale;
@property(retain, nonatomic) NSMutableArray *appleLanguages; // @synthesize appleLanguages=_appleLanguages;
@property(nonatomic) _Bool removeSentinel; // @synthesize removeSentinel=_removeSentinel;
@property(nonatomic) _Bool sentinelExists; // @synthesize sentinelExists=_sentinelExists;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceName;
@property(readonly, nonatomic) _Bool hasAppleLocale;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appleLanguagesCount;
- (void)addAppleLanguages:(id)arg1;
- (void)clearAppleLanguages;
@property(nonatomic) _Bool hasRemoveSentinel;
@property(nonatomic) _Bool hasSentinelExists;

@end

