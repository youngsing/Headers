//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDGLDataBufferAccessor-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSDGLShader;

__attribute__((visibility("hidden")))
@interface TSDGLDataBuffer : NSObject <TSDGLDataBufferAccessor>
{
    unsigned long long mCurrentBufferIndex;
    NSMutableArray *mArrayBuffers;
    NSMutableDictionary *mAttributeToArrayBuffersDictionary;
    unsigned long long mElementArrayCount;
    unsigned short *mGLElementData;
    _Bool mGLElementDataBufferWasSetup;
    unsigned int mGLElementDataBuffer;
    struct CGSize mGLElementMeshSize;
    unsigned long long mGLElementQuadParticleCount;
    unsigned int mGLVertexArrayObjects[2];
    _Bool _isUpdatingRawDataBuffer;
    _Bool _didTeardown;
    _Bool _isEnabled;
    TSDGLShader *_enabledShader;
    _Bool _isDoubleBuffered;
    unsigned int _drawMode;
    unsigned long long _vertexCount;
    NSArray *_vertexAttributes;
}

@property(readonly) _Bool isDoubleBuffered; // @synthesize isDoubleBuffered=_isDoubleBuffered;
@property(nonatomic) unsigned int drawMode; // @synthesize drawMode=_drawMode;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property(readonly) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (_Bool)p_setAttributeUpdateData:(CDStruct_64113493 *)arg1 fromAttribute:(id)arg2;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)vertexAttributeNamed:(id)arg1;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_818bb265)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(_Bool)arg2;
- (void)drawWithShader:(id)arg1;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)disableElementArrayBuffer;
- (void)enableElementArrayBuffer;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)teardown;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
- (id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(_Bool)arg4;
- (void)p_setupGLElementArrayBufferIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

