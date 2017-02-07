//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable <NSCopying>
{
    double _centerX;
    double _centerY;
    double _size;
    unsigned int _faceState;
    NSString *_personIdentifier;
    NSMutableArray *_rejectedPersonIdentifiers;
    struct {
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int size:1;
        unsigned int faceState:1;
    } _has;
}

+ (Class)rejectedPersonIdentifiersType;
@property(retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers; // @synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers;
@property(nonatomic) unsigned int faceState; // @synthesize faceState=_faceState;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
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
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (void)clearRejectedPersonIdentifiers;
@property(nonatomic) BOOL hasFaceState;
@property(nonatomic) BOOL hasSize;
@property(nonatomic) BOOL hasCenterY;
@property(nonatomic) BOOL hasCenterX;
@property(readonly, nonatomic) BOOL hasPersonIdentifier;
- (BOOL)_isFaceStateBitSet:(unsigned int)arg1;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(BOOL)arg2;
@property(nonatomic, getter=isConfirmed) BOOL confirmed;
@property(nonatomic, getter=isNameSourceAuto) BOOL nameSourceAuto;
@property(nonatomic, getter=isRepresentativeFace) BOOL representativeFace;
@property(nonatomic, getter=isManual) BOOL manual;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic, getter=isNoneState) BOOL noneState;
- (void)clearState;
- (long long)compare:(id)arg1;

@end
