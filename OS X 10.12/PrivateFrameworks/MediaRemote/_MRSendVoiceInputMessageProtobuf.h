//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAudioDataBlockProtobuf;

@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying>
{
    _MRAudioDataBlockProtobuf *_dataBlock;
}

@property(retain, nonatomic) _MRAudioDataBlockProtobuf *dataBlock; // @synthesize dataBlock=_dataBlock;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDataBlock;
- (void)dealloc;

@end

