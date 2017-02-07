//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>
{
    unsigned long long _epochTimestamp;
    NSString *_displayName;
    NSString *_domain;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_sessionIdentifier;
    NSData *_signature;
    struct {
        unsigned int epochTimestamp:1;
    } _has;
}

@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSignature;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(readonly, nonatomic) BOOL hasDomain;
@property(nonatomic) BOOL hasEpochTimestamp;
@property(readonly, nonatomic) BOOL hasNonce;
@property(readonly, nonatomic) BOOL hasSessionIdentifier;
@property(readonly, nonatomic) BOOL hasMerchantIdentifier;

@end
