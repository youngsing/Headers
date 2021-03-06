//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DMaterial *_material;
    SCNMaterialProperty *_ambient;
    SCNMaterialProperty *_diffuse;
    SCNMaterialProperty *_specular;
    SCNMaterialProperty *_emission;
    SCNMaterialProperty *_reflective;
    SCNMaterialProperty *_transparent;
    SCNMaterialProperty *_multiply;
    SCNMaterialProperty *_normal;
    SCNMaterialProperty *_ambientOcclusion;
    SCNMaterialProperty *_selfIllumination;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    float _shininess;
    float _transparency;
    float _indexOfRefraction;
    float _fresnelExponent;
    long long _transparencyMode;
    NSString *_lightingModelName;
    long long _cullMode;
    SCNShadableHelper *_shadableHelper;
    BOOL _isPresentationInstance;
    BOOL _litPerPixel;
    BOOL _doubleSided;
    BOOL _locksAmbientWithDiffuse;
    BOOL _avoidsOverLighting;
    BOOL _writesToDepthBuffer;
    BOOL _readsFromDepthBuffer;
    long long _fillMode;
    long long _blendMode;
}

+ (BOOL)supportsSecureCoding;
+ (id)materialNamed:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)materialWithContents:(id)arg1;
+ (id)materialWithColor:(id)arg1;
+ (id)material;
+ (id)materialWithMaterialRef:(struct __C3DMaterial *)arg1;
+ (id)materialWithMDLMaterial:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customEncodingOfSCNMaterial:(id)arg1;
- (void)_customDecodingOfSCNMaterial:(id)arg1;
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)_setupShadableHelperIfNeeded;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setAttributes:(id)arg1;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
@property(readonly, copy) NSString *description;
- (long long)fillMode;
- (void)setFillMode:(long long)arg1;
@property(nonatomic) long long cullMode;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setContents:(id)arg1;
- (id)contents;
@property(nonatomic) BOOL readsFromDepthBuffer;
@property(nonatomic) BOOL writesToDepthBuffer;
- (BOOL)avoidsOverLighting;
- (void)setAvoidsOverLighting:(BOOL)arg1;
@property(nonatomic) BOOL locksAmbientWithDiffuse;
@property(nonatomic, getter=isLitPerPixel) BOOL litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) long long blendMode;
@property(nonatomic) double fresnelExponent;
- (double)indexOfRefraction;
- (void)setIndexOfRefraction:(double)arg1;
@property(nonatomic) double transparency;
@property(nonatomic) double shininess;
@property(nonatomic) long long transparencyMode;
@property(readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property(readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
- (id)_property:(id *)arg1;
- (id)properties;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setupMaterialProperty:(id *)arg1;
- (Class)_materialPropertyClass;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (struct __C3DMaterial *)materialRef;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterial;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)dealloc;
- (id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)initWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)init;
- (id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(CDUnknownBlockType)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

