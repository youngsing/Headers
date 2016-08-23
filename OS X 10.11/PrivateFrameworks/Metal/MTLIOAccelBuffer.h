//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLIOAccelResource.h>

@interface MTLIOAccelBuffer : MTLIOAccelResource
{
    unsigned long long _length;
    void *_pointer;
    CDUnknownBlockType _deallocator;
    MTLIOAccelBuffer *_masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    int _masterBufferOffset;
}

@property(readonly) unsigned long long length; // @synthesize length=_length;
- (struct __CFArray *)copyAnnotations;
- (void)didModifyRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) void *contents;
- (void)dealloc;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned long long)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 pointer:(void *)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned int)arg5 vidMemSize:(unsigned int)arg6 args:(struct IOAccelNewResourceArgs *)arg7 argsSize:(unsigned int)arg8 deallocator:(CDUnknownBlockType)arg9;

@end

