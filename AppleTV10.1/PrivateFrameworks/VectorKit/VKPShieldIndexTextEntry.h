//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexTextEntry : PBCodable <NSCopying>
{
    NSString *_artworkIdentifier;
    NSMutableArray *_shieldTexts;
    int _shieldType;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *shieldTexts; // @synthesize shieldTexts=_shieldTexts;
@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldTextAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldTextsCount;
- (void)addShieldText:(id)arg1;
- (void)clearShieldTexts;
@property(nonatomic) _Bool hasShieldType;
@property(readonly, nonatomic) _Bool hasArtworkIdentifier;
- (void)dealloc;

@end

