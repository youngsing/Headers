//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SKShader : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    NSString *_compileLog;
    _Bool _programDirty;
    shared_ptr_394c00aa _backingProgram;
    map_a51e33c7 _attributeBuffers;
    BOOL _performFullCapture;
}

+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;
+ (id)shaderWithSource:(id)arg1;
+ (id)shader;
@property BOOL performFullCapture; // @synthesize performFullCapture=_performFullCapture;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_getShaderCompilationLog;
- (id)_getMetalFragmentFunctionName;
- (id)_getMetalVertexOutDefinition;
- (id)_generateMetalSource;
@property(readonly) shared_ptr_d7c0f433 _commands;
- (shared_ptr_d7c0f433)_commandsForBatchOffset:(int)arg1 count:(int)arg2;
@property(readonly) shared_ptr_394c00aa _backingProgram;
- (BOOL)_backingProgramIsDirty;
- (BOOL)isValid;
@property(readonly) NSArray *_textureUniforms;
- (void)removeUniformNamed:(id)arg1;
- (id)uniformNamed:(id)arg1;
- (void)addUniform:(id)arg1;
@property(copy) NSArray *uniforms;
- (id)fullMetalFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullFragmentSource;
- (id)fullVertexSource;
- (void)generateFragmentAttributeDeclares:(id *)arg1;
- (void)generateVertexAttributeDeclares:(id *)arg1 statements:(id *)arg2;
- (id)fragmentPreludeMetal;
- (id)fragmentPrelude;
@property(copy) NSString *source;
- (void)dealloc;
@property(readonly) map_a51e33c7 *_attributeBuffers;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

