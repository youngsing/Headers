//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying>
{
    int _serviceType;
    NSString *_tag;
    struct {
        unsigned int serviceType:1;
    } _has;
}

+ (id)defaultTag;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void)dealloc;

@end

