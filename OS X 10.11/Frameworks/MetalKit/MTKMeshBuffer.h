//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/MDLMeshBuffer-Protocol.h>

@class MTKMeshBufferAllocator, MTKMeshBufferZone, NSString;
@protocol MDLMeshBufferZone, MTLBuffer;

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer>
{
    MTKMeshBufferZone *_zone;
    unsigned long long _length;
    MTKMeshBufferAllocator *_allocator;
    id <MTLBuffer> _buffer;
    unsigned long long _offset;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) MTKMeshBufferAllocator *allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) id <MDLMeshBufferZone> zone; // @synthesize zone=_zone;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)_initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 offset:(unsigned long long)arg3 allocator:(id)arg4 zone:(id)arg5 type:(unsigned long long)arg6;
- (id)_initWithData:(id)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 allocator:(id)arg2 type:(unsigned long long)arg3;
- (id)_initWithLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 zone:(id)arg3 type:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

