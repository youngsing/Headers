//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSColor, NSDictionary, NSString, SCNGeometry, SCNOrderedDictionary;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    struct __C3DParticleSystem *_particleSystem;
    unsigned int _isPresentationInstance:1;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    double _emissionDuration;
    double _emissionDurationVariation;
    double _idleDuration;
    double _idleDurationVariation;
    double _birthRate;
    double _birthRateVariation;
    double _warmupDuration;
    SCNGeometry *_emitterShape;
    long long _birthLocation;
    long long _birthDirection;
    struct SCNVector3 _emittingDirection;
    struct SCNVector3 _acceleration;
    double _spreadingAngle;
    BOOL _loops;
    BOOL _isLocal;
    BOOL _affectedByGravity;
    BOOL _affectedByPhysicsFields;
    BOOL _physicsCollisionsEnabled;
    BOOL _lightingEnabled;
    BOOL _softParticlesEnabled;
    BOOL _particleDiesOnCollision;
    BOOL _blackPassEnabled;
    double _particleAngle;
    double _particleAngleVariation;
    double _particleVelocity;
    double _particleVelocityVariation;
    double _particleAngularVelocity;
    double _particleAngularVelocityVariation;
    double _particleLifeSpan;
    double _particleLifeSpanVariation;
    double _particleBounce;
    double _particleBounceVariation;
    double _particleFriction;
    double _particleFrictionVariation;
    double _particleCharge;
    double _particleChargeVariation;
    id _particleImage;
    NSColor *_particleColor;
    struct SCNVector4 _particleColorVariation;
    SCNParticleSystem *_systemSpawnedOnCollision;
    SCNParticleSystem *_systemSpawnedOnDying;
    SCNParticleSystem *_systemSpawnedOnLiving;
    double _particleSize;
    double _particleSizeVariation;
    long long _seed;
    long long _blendMode;
    long long _renderingMode;
    long long _orientationMode;
    long long _imageSequenceAnimationMode;
    NSArray *_particleGeometries;
    NSArray *_colliderNodes;
    NSDictionary *_propertyControllers;
    long long _sortingMode;
    double _particleMass;
    double _particleMassVariation;
    double _dampingFactor;
    double _speedFactor;
    double _fixedTimeStep;
    double _stretchFactor;
    double _fresnelExponent;
    unsigned long long _imageSequenceColumnCount;
    unsigned long long _imageSequenceRowCount;
    double _imageSequenceInitialFrame;
    double _imageSequenceInitialFrameVariation;
    double _imageSequenceFrameRate;
    double _imageSequenceFrameRateVariation;
    NSString *_referenceName;
}

+ (BOOL)supportsSecureCoding;
+ (id)particleSystemWithParticleSystemRef:(struct __C3DParticleSystem *)arg1;
+ (id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2;
+ (id)particleSystem;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNParticleSystem:(id)arg1;
- (void)_customEncodingOfSCNParticleSystem:(id)arg1;
- (BOOL)_isAReference;
- (id)referenceName;
- (void)setReferenceName:(id)arg1;
- (void)removeAllModifiers;
- (void)removeModifiersOfStage:(long long)arg1;
- (void)addModifierForProperties:(id)arg1 atStage:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)handleEvent:(long long)arg1 forProperties:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)reset;
@property(nonatomic) struct SCNVector3 acceleration;
@property(nonatomic) struct SCNVector3 emittingDirection;
@property(nonatomic) struct SCNVector4 particleColorVariation;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property(nonatomic) double warmupDuration;
@property(nonatomic) double stretchFactor;
@property(nonatomic) double spreadingAngle;
@property(nonatomic) double speedFactor;
@property(nonatomic) long long sortingMode;
- (void)setSoftParticlesEnabled:(BOOL)arg1;
- (BOOL)softParticlesEnabled;
- (void)setSeed:(long long)arg1;
- (long long)seed;
- (void)setRenderingMode:(long long)arg1;
- (long long)renderingMode;
- (void)setPhysicsCollisionsEnabled:(BOOL)arg1;
- (BOOL)physicsCollisionsEnabled;
@property(nonatomic) double particleVelocityVariation;
@property(nonatomic) double particleVelocity;
@property(nonatomic) double particleSizeVariation;
@property(nonatomic) double particleSize;
@property(nonatomic) double particleMassVariation;
@property(nonatomic) double particleMass;
@property(nonatomic) double particleLifeSpanVariation;
@property(nonatomic) double particleLifeSpan;
@property(nonatomic) double particleFrictionVariation;
@property(nonatomic) double particleFriction;
@property(nonatomic) BOOL particleDiesOnCollision;
@property(retain, nonatomic) NSColor *particleColor;
@property(nonatomic) double particleChargeVariation;
@property(nonatomic) double particleCharge;
@property(nonatomic) double particleBounceVariation;
@property(nonatomic) double particleBounce;
@property(nonatomic) double particleAngularVelocityVariation;
@property(nonatomic) double particleAngularVelocity;
@property(nonatomic) double particleAngleVariation;
@property(nonatomic) double particleAngle;
@property(nonatomic) long long orientationMode;
@property(nonatomic) BOOL loops;
@property(nonatomic, getter=isLightingEnabled) BOOL lightingEnabled;
- (BOOL)lightingEnabled;
- (void)setIsLocal:(BOOL)arg1;
@property(nonatomic, getter=isLocal) BOOL local;
@property(nonatomic) unsigned long long imageSequenceRowCount;
@property(nonatomic) double imageSequenceInitialFrameVariation;
@property(nonatomic) double imageSequenceInitialFrame;
@property(nonatomic) double imageSequenceFrameRateVariation;
@property(nonatomic) double imageSequenceFrameRate;
@property(nonatomic) unsigned long long imageSequenceColumnCount;
@property(nonatomic) long long imageSequenceAnimationMode;
@property(nonatomic) double idleDurationVariation;
@property(nonatomic) double idleDuration;
@property(nonatomic) double fresnelExponent;
- (void)setFixedTimeStep:(double)arg1;
- (double)fixedTimeStep;
@property(retain, nonatomic) SCNGeometry *emitterShape;
@property(nonatomic) double emissionDurationVariation;
@property(nonatomic) double emissionDuration;
@property(nonatomic) double dampingFactor;
@property(nonatomic) long long blendMode;
@property(nonatomic, getter=isBlackPassEnabled) BOOL blackPassEnabled;
- (BOOL)blackPassEnabled;
@property(nonatomic) double birthRateVariation;
@property(nonatomic) double birthRate;
@property(nonatomic) long long birthLocation;
@property(nonatomic) long long birthDirection;
@property(nonatomic) BOOL affectedByPhysicsFields;
@property(nonatomic) BOOL affectedByGravity;
- (BOOL)areSoftParticlesEnabled;
@property(retain, nonatomic) id particleImage;
@property(copy, nonatomic) NSDictionary *propertyControllers;
@property(copy, nonatomic) NSArray *colliderNodes;
- (void)setParticleGeometries:(id)arg1;
- (short)typeOfProperty:(id)arg1;
- (id)particleGeometries;
- (struct __C3DParticleSystem *)particleSystemRef;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_syncObjCModel;
- (void)dealloc;
- (id)initPresentationSystemWithSystemRef:(struct __C3DParticleSystem *)arg1;
- (id)initWithParticleSystemRef:(struct __C3DParticleSystem *)arg1;
- (id)init;
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
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

