//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextureIO/TXRParserBase.h>

#import <TextureIO/TXRParser-Protocol.h>

@class NSDictionary, NSObject, NSString, TXRDeferredTextureInfo, TXRTextureInfo;
@protocol OS_dispatch_queue;

@interface TXRParserKTX : TXRParserBase <TXRParser>
{
    TXRTextureInfo *_textureInfo;
    _Bool _fileIsLittleEndian;
    unsigned int _type;
    unsigned int _typeSize;
    unsigned int _format;
    unsigned int _internalFormat;
    unsigned int _baseInternalFormat;
    unsigned int _bytesOfKeyValueData;
    _Bool _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    _Bool _shouldFlipVertically;
}

+ (_Bool)isKTXFile:(id)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (void).cxx_destruct;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (_Bool)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4 options:(id)arg5;
- (void)parseImageDataWithOptions:(id)arg1 bufferAllocator:(id)arg2;
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)initializeSizedFormatTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

