//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSColor, SKAction, SKKeyframeSequence, SKShader, SKTexture;

@interface SKEmitterNode : SKNode
{
    SKTexture *_particleTexture;
    // Error parsing type: ^{SKCEmitterNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@QfB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}BqBffBB{?=[4]}{?=[4]}BB@@@^{SKCParticleSystemNode}^{SKCParticleSystem}dB^{SKCKeyframeSequence}^{SKCKeyframeSequence}^{SKCKeyframeSequence}^{SKCKeyframeSequence}^{SKCKeyframeSequence}^{SKCKeyframeSequence}QQiidddd{CGSize=dd}fffff{?=ffff}{?=ffff}{?=ffff}fff{list<PKPoint, std::__1::allocator<PKPoint> >={__list_node_base<PKPoint, void *>=^{__list_node<PKPoint, void *>}^{__list_node<PKPoint, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<PKPoint, void *> > >=Q}}{?=ff}{?=ff}ffff{?=ff}ffffffffffff@qI}, name: _skcEmitterNode
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
    SKKeyframeSequence *_fieldInfluenceSequence;
    unsigned long long _particleRenderOrder;
}

@property(nonatomic) unsigned long long particleRenderOrder; // @synthesize particleRenderOrder=_particleRenderOrder;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) SKShader *shader;
- (void)advanceSimulationTime:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) unsigned int fieldBitMask;
- (void)resetSimulation;
@property(nonatomic) unsigned long long numParticlesToEmit;
@property(copy, nonatomic) SKAction *particleAction;
@property(nonatomic) long long particleBlendMode;
@property(retain, nonatomic) SKTexture *particleTexture;
@property(nonatomic) double emissionAngleRange;
@property(nonatomic) double emissionAngle;
@property(nonatomic) double particleSpeedRange;
@property(nonatomic) double particleSpeed;
@property(nonatomic) double particleAlphaSpeed;
@property(nonatomic) double particleAlphaRange;
@property(nonatomic) double particleAlpha;
@property(nonatomic) double particleScaleSpeed;
@property(nonatomic) double particleScaleRange;
@property(nonatomic) double particleScale;
@property(nonatomic) double particleRotationSpeed;
@property(nonatomic) double particleRotationRange;
@property(nonatomic) double particleRotation;
@property(nonatomic) double particleLifetimeRange;
@property(nonatomic) double particleLifetime;
@property(nonatomic) double particleColorBlendFactorSpeed;
@property(nonatomic) double particleColorBlendFactorRange;
@property(nonatomic) double particleColorBlendFactor;
@property(nonatomic) double particleBirthRate;
@property(nonatomic) double yAcceleration;
@property(nonatomic) double xAcceleration;
@property(nonatomic) struct CGVector particlePositionRange;
@property(nonatomic) struct CGPoint particlePosition;
@property(nonatomic) double particleColorAlphaSpeed;
@property(nonatomic) double particleColorBlueSpeed;
@property(nonatomic) double particleColorGreenSpeed;
@property(nonatomic) double particleColorRedSpeed;
@property(nonatomic) double particleColorAlphaRange;
@property(nonatomic) double particleColorBlueRange;
@property(nonatomic) double particleColorGreenRange;
@property(nonatomic) double particleColorRedRange;
@property(retain, nonatomic) NSColor *particleColor;
@property(nonatomic) double particleZPositionRange;
@property(nonatomic) double particleZPosition;
- (void)setZPosition:(double)arg1;
@property(nonatomic) struct CGSize particleSize;
@property(nonatomic) double particleZPositionSpeed;
@property(nonatomic) __weak SKNode *targetNode;
- (double)particleDensity;
- (void)setParticleDensity:(double)arg1;
- (BOOL)densityBased;
- (void)setDensityBased:(BOOL)arg1;
- (BOOL)wantsNewParticles;
- (void)setWantsNewParticles:(BOOL)arg1;
- (double)emissionDistanceRange;
- (void)setEmissionDistanceRange:(double)arg1;
- (double)emissionDistance;
- (void)setEmissionDistance:(double)arg1;
- (id)particleRotationSequence;
- (unsigned int)activeParticleCount;
- (void)setParticleRotationSequence:(id)arg1;
@property(retain, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleColorSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property(retain, nonatomic) SKKeyframeSequence *particleAlphaSequence;
- (id)description;
- (void)setPhysicsWorld:(id)arg1;
- (id)physicsWorld;
- (BOOL)isEqualToNode:(id)arg1;
- (void)setFieldInfluenceSequence:(id)arg1;
- (id)fieldInfluenceSequence;
- (void)_didMakeBackingNode;
-     // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@QfB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}BqBffBB{?=[4]}{?=[4]}}16@0:8, name: _makeBackingNode

@end

