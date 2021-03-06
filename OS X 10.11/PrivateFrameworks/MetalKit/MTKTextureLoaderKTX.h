//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalKit/MTKTextureLoaderData.h>

@class NSDictionary;

@interface MTKTextureLoaderKTX : MTKTextureLoaderData
{
    BOOL _fileIsLittleEndian;
    unsigned int _type;
    unsigned int _typeSize;
    unsigned int _format;
    unsigned int _internalFormat;
    unsigned int _baseInternalFormat;
    unsigned int _bytesOfKeyValueData;
    NSDictionary *_internalSizedFormatLookup;
}

+ (BOOL)isKTXFile:(id)arg1;
- (BOOL)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4 options:(id)arg5;
- (id)uploadDataWithOptions:(id)arg1;
- (BOOL)loadData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)initializeSizedFormatTable;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

