//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCommandBufferSPI-Protocol.h>

@class MTLToolsPointerArray, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI>
{
    MTLToolsPointerArray *_renderCommandEncoders;
    MTLToolsPointerArray *_computeCommandEncoders;
    MTLToolsPointerArray *_blitCommandEncoders;
    MTLToolsPointerArray *_parallelRenderCommandEncoders;
}

@property(readonly, nonatomic) MTLToolsPointerArray *parallelRenderCommandEncoders; // @synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *blitCommandEncoders; // @synthesize blitCommandEncoders=_blitCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *computeCommandEncoders; // @synthesize computeCommandEncoders=_computeCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *renderCommandEncoders; // @synthesize renderCommandEncoders=_renderCommandEncoders;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)commit;
- (void)enqueue;
@property(copy) NSString *label;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) BOOL retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly) Class superclass;

@end

