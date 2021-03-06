//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface _INPBPlatformSupport : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_minimumOsVersion;
    int _supportedPlatform;
    struct {
        unsigned int supportedPlatform:1;
    } _has;
}

@property(retain, nonatomic) NSString *minimumOsVersion; // @synthesize minimumOsVersion=_minimumOsVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMinimumOsVersion;
@property(nonatomic) BOOL hasSupportedPlatform;
@property(nonatomic) int supportedPlatform; // @synthesize supportedPlatform=_supportedPlatform;

@end

