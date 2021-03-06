//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder
{
    unsigned int _unknownStoreActions;
    MTLRenderPassDescriptor *_descriptor;
}

@property(readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)description;
- (void)endEncoding;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end

