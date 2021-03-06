//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying>
{
    long long _authorizationStatus;
    double _modificationDate;
    NSData *_sourceUUID;
    struct {
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
    } _has;
}

@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(retain, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
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
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasAuthorizationStatus;
@property(readonly, nonatomic) _Bool hasSourceUUID;

@end

