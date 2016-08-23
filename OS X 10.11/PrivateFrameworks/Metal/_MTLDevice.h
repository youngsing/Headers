//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLCompiler, MTLIOMemoryInfo, NSString;

@interface _MTLDevice : NSObject
{
    long long limits_init;
    CDStruct_b1035cc9 *_limits;
    MTLCompiler *_compiler;
    struct dispatch_queue_s *_serialQueue;
    MTLIOMemoryInfo *_memoryInfo;
    unsigned long long _globalTraceObjectID;
    int _commandQueueCount;
}

+ (BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2;
@property(readonly) struct dispatch_queue_s *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
- (void)_purgeDevice;
- (void)_decrementCommandQueueCount;
- (void)_incrementCommandQueueCount;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(struct NSObject *)arg1;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (CDStruct_596dc0d1)pipelineFlagsWithComputeVariant:(struct NSObject *)arg1;
- (CDStruct_672a0776)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(struct NSObject *)arg2;
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;
- (id)vertexVariantWithCompilerOutput:(struct dispatch_data_s *)arg1;
- (struct NSObject *)computeVariantWithCompilerOutput:(struct dispatch_data_s *)arg1;
- (id)fragmentVariantWithCompilerOutput:(struct dispatch_data_s *)arg1;
- (void)freeComputeFunctionKey:(void *)arg1 keySize:(unsigned long long)arg2;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long *)arg3;
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long *)arg2;
- (void)freeVertexFunctionKey:(void *)arg1 vertexKeySize:(unsigned long long)arg2;
- (void)freeFragmentFunctionKey:(void *)arg1 fragmentKeySize:(unsigned long long)arg2;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long *)arg4;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long *)arg2 nextStageVariant:(id)arg3;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long *)arg4;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long *)arg2 previousStateVariant:(id)arg3;
@property(readonly) MTLCompiler *compiler; // @synthesize compiler=_compiler;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
@property(readonly) unsigned int acceleratorPort;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) const CDStruct_b1035cc9 *limits;
- (void)initLimits;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)validateComputeFunction:(id)arg1;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithData:(struct dispatch_data_s *)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id)productName;
- (id)familyName;
- (id)vendorName;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
@property(readonly) NSString *name;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)init;

@end
