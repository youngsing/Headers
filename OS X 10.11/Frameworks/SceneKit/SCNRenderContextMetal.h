//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNRenderContextImp.h>

#import <SceneKit/SCNBufferStream-Protocol.h>

@class CAMetalLayer, MTLRenderPassDescriptor, NSMutableArray, NSObject, NSString, SCNMetalMesh, SCNMetalMeshElement, SCNMetalRenderPipeline, SCNMetalResourceManager, SCNMetalShadable, SCNMetalShaderManager;
@protocol CAMetalDrawable, MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderCommandEncoder, MTLSamplerState, MTLTexture, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SCNRenderContextMetal : SCNRenderContextImp <SCNBufferStream>
{
    SCNMetalResourceManager *_resourceManager;
    id <MTLDevice> _device;
    int _profile;
    unsigned int _features;
    struct __C3DEngineContext *_engineContext;
    id <MTLCommandQueue> _commandQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    MTLRenderPassDescriptor *_clientRenderPassDescriptor;
    id <MTLRenderCommandEncoder> _clientRenderCommandEncoder;
    id <MTLCommandBuffer> _clientCommandBuffer;
    id <MTLTexture> _textureTarget;
    CAMetalLayer *_layerTarget;
    id <CAMetalDrawable> _drawable;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    // Error parsing type: , name: _renderSize
    SCNMetalShaderManager *_currentShaderManager;
    id <MTLCommandBuffer> _currentCommandBuffer;
    id <MTLRenderCommandEncoder> _currentRenderEncoder;
    struct __C3DFXPass *_currentPass;
    BOOL _currentPassIsMirrored;
    CDStruct_21854d8c _currentStreamBufferIndices;
    NSMutableArray *_vertexVolatileBuffers[3];
    unsigned long long _vertexVolatileBufferIndex;
    unsigned long long _vertexVolatileBufferOffset;
    id <MTLBuffer> _vertexVolatileBuffer;
    NSMutableArray *_volatileMeshes;
    NSMutableArray *_bufferPool;
    NSMutableArray *_usedVolatileMeshElements;
    NSMutableArray *_freeVolatileMeshElements;
    NSMutableArray *_frameConstantBuffers[3];
    unsigned long long _maxFrameConstantBufferIndex[3];
    unsigned long long _frameConstantBufferIndex;
    unsigned long long _frameConstantBufferOffset;
    id <MTLBuffer> _frameConstantBuffer;
    id <MTLDepthStencilState> _defaultDepthStencilState;
    id <MTLSamplerState> _defaultSamplerState;
    struct __C3DFXMetalProgram *_background2DProgram;
    struct __C3DFXMetalProgram *_backgroundCubeProgram;
    double _initialTime;
    id <MTLBuffer> _shadowKernelBuffer;
    struct {
        struct __C3DFXPassInstance *passInstance;
        struct __C3DLightingSystem *lightingSystem;
        struct __C3DDynamicBatchingSystem *dynamicBatchingSystem;
        struct __C3DFXPass *pass;
        char passRequiresLighting;
    } _processingContext;
    unsigned int _seed;
    // Error parsing type: {SCNSceneBuffer="viewTransform"{float4x4="columns"[4]}"inverseViewTransform"{float4x4="columns"[4]}"projectionTransform"{float4x4="columns"[4]}"viewProjectionTransform"{float4x4="columns"[4]}"viewToCubeTransform"{float4x4="columns"[4]}"ambientLightingColor""fogColor""fogParameters""inverseResolution""time"f"sinTime"f"cosTime"f"random01"f}, name: _frameUniforms
    struct {
        id <MTLBuffer> buffer;
        unsigned long long offset;
        unsigned long long size;
    } _sceneUniforms;
    // Error parsing type: {?="modelTransform"{float4x4="columns"[4]}"normalTransform"{float4x4="columns"[4]}"modelViewTransform"{float4x4="columns"[4]}"modelViewProjectionTransform"{float4x4="columns"[4]}"boundingBox"{float2x3="columns"[2]}"worldBoundingBox"{float2x3="columns"[2]}"instanceNode"^{__C3DNode}"flags"I"probeCacheIndex"^I}, name: _nodeUniforms
    struct {
        struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData>>> frameLightingSetDatas;
        struct {
            id <MTLBuffer> buffer;
            unsigned long long offset;
            unsigned long long size;
            id <MTLTexture> textures[8];
            id <MTLSamplerState> samplers[8];
        } currentLightingSetData;
    } _lighting;
    struct {
        struct __C3DRasterizerStates *rasterizerStates;
        struct __C3DMesh *mesh;
        SCNMetalMesh *metalMesh;
        struct __C3DMeshElement *meshElement;
        SCNMetalMeshElement *metalMeshElement;
        struct __C3DFXProgram *program;
        struct __C3DMaterial *material;
        struct __C3DGeometry *geometry;
        SCNMetalShadable *metalShadable;
        struct __C3DEffectCommonProfile *commonProfile;
        struct __C3DBlendStates *blendStates;
        struct __C3DNode *blendColor__node;
        unsigned long long vertexDescriptorHash;
        SCNMetalRenderPipeline *renderPipeline;
        struct {
            void *vertexBuffer;
            unsigned long long vertexOffset;
            void *fragmentBuffer;
            unsigned long long fragmentOffset;
        } buffers[31];
        struct {
            void *vertexTexture;
            void *fragmentTexture;
        } textures[31];
        struct {
            void *vertexSamplerState;
            void *fragmentSamplerState;
        } samplerStates[15];
    } _cache;
    BOOL _showsAuthoringEnvironment;
    double _startTimeFlush[3];
    int _startTimeFlushIndex;
    struct {
        id <MTLTexture> currentColor;
        id <MTLTexture> currentDepth;
        id <MTLTexture> currentStencil;
        id <MTLTexture> mainColor;
        id <MTLTexture> mainDepth;
        id <MTLTexture> outputColor;
        id <MTLTexture> outputDepth;
    } _renderTargets;
}

+ (void)registerBindings;
@property(retain, nonatomic) id <MTLCommandBuffer> clientCommandBuffer; // @synthesize clientCommandBuffer=_clientCommandBuffer;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> clientRenderCommandEncoder; // @synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder;
@property(retain, nonatomic) MTLRenderPassDescriptor *clientRenderPassDescriptor; // @synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)writeBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)currentCommandBuffer;
- (id)currentRenderPassDescriptor;
- (id)currentRenderCommandEncoder;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
- (void)resetVolatileMeshElements;
-     // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__CFData}III^{__C3DMeshElement}CCCc^v^{__C3DMeshSource}[2]}36@0:8c16q20q28, name: createVolatileMeshElementOfType:primitiveCount:bytesPerIndex:
- (void)_recycleMTLBufferToPool:(id)arg1;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1;
- (void)resetVolatileMeshes;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1;
- (BOOL)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (id)__reserveVolatileBufferForSize:(unsigned long long)arg1 offset:(unsigned long long *)arg2;
- (void)setShowsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)showsAuthoringEnvironment;
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (void)_execute:(CDStruct_0571b4d5)arg1;
- (void)processRendererElement:(struct __C3DRendererElement *)arg1;
- (void)stopProcessingRendererElements;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_256c7a3c *)arg1;
-     // Error parsing type: v148@0:8^{__C3DMesh={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}[9^{__CFArray}]^{C3DSphere}^^{__CFArray}b1b1b1b4q}16^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__CFData}III^{__C3DMeshElement}CCCc^v^{__C3DMeshSource}[2]}24^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}ib1b1^{__C3DFXProgramDelegate}}32^{__C3DEngineContext=}40(C3DMatrix4x4=[16f][4])48r^{C3DColor4=(?=[4f]{?=ffff})}112^{__C3DRasterizerStates=}120^{__C3DBlendStates=}128^{__C3DImage=}136c144, name: renderMesh:meshElement:withProgram:engineContext:transform:color:rasterizerStates:blendState:texture:depthBias:
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)_setMeshBuffers:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setRasterizerStates:(struct __C3DRasterizerStates *)arg1;
- (void)_setConstantBufferBytes:(void *)arg1 size:(long long)arg2 atIndices:(CDStruct_21854d8c)arg3;
- (void)_setZeroConstantBufferOfSize:(unsigned long long)arg1 atIndices:(CDStruct_21854d8c)arg2;
- (char *)_allocateConstantBufferSize:(long long)arg1 buffer:(id *)arg2 offset:(unsigned long long *)arg3;
- (void)_purgeUnusedContantBuffers;
- (void)_setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setTexture:(id)arg1 atIndices:(CDStruct_21854d8c)arg2;
- (void)_setSamplerState:(id)arg1 atIndices:(CDStruct_21854d8c)arg2;
- (void)_setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)_setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)_setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)_setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndices:(CDStruct_21854d8c)arg3;
- (void)_logLightingInformation;
- (void)_uploadLightingSetBuffer:(CDStruct_57e43c6a)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (id)newRenderTargetWithDescription:(CDStruct_2e3d5ba3 *)arg1 size: /* Error: Ran out of types for this method. */;
- (void)endRenderPass;
- (void)__C3DFXContextDidApplyPass:(struct __C3DFXPass *)arg1;
- (BOOL)beginRenderPass:(struct __C3DFXPass *)arg1 isFinalTechnique:(BOOL)arg2;
- (void)_clearRenderCommanderEncoderCache;
- (BOOL)_setupDescriptor:(id)arg1 forPass:(struct __C3DFXPass *)arg2 isFinalTechnique:(BOOL)arg3;
- (id)_finalRenderTexture;
- (id)_renderTargetWithDescription:(CDStruct_2e3d5ba3)arg1 size:(id)arg2 name:(long long)arg3 useCount: /* Error: Ran out of types for this method. */;
- (void)endFrameWaitingUntilCompleted:(BOOL)arg1;
- (void)beginFrame:(id)arg1;
- (void)_clearUnusedBindingPoints;
- (id)resourceManager;
- (int)profile;
- (unsigned int)features;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

