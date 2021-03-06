//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying>
{
    int _httpStatus;
    NSData *_responseDictionary;
    unsigned int _resultCode;
    struct {
        unsigned int httpStatus:1;
    } _has;
}

@property(nonatomic) int httpStatus; // @synthesize httpStatus=_httpStatus;
@property(retain, nonatomic) NSData *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) unsigned int resultCode; // @synthesize resultCode=_resultCode;
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
@property(nonatomic) _Bool hasHttpStatus;
@property(readonly, nonatomic) _Bool hasResponseDictionary;

@end

