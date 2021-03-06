//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GLKit/GLKNamedEffect-Protocol.h>

@class GLKEffect, GLKEffectPropertyConstantColor, GLKEffectPropertyFog, GLKEffectPropertyLight, GLKEffectPropertyMaterial, GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSArray, NSMutableArray, NSString;

@interface GLKBaseEffect : NSObject <GLKNamedEffect>
{
    unsigned char _colorMaterialEnabled;
    unsigned char _fogEnabled;
    GLKEffectPropertyTransform *_transform;
    int _lightingType;
    GLKEffectPropertyLight *_light0;
    GLKEffectPropertyLight *_light1;
    GLKEffectPropertyLight *_light2;
    GLKEffectPropertyMaterial *_material;
    GLKEffectPropertyTexture *_texture2d0;
    GLKEffectPropertyTexture *_texture2d1;
    NSArray *_textureOrder;
    union _GLKVector4 _constantColor;
    GLKEffectPropertyFog *_fog;
    NSString *_label;
    unsigned char _lightModelTwoSided;
    unsigned char _useConstantColor;
    unsigned char _propertyArrayStale;
    unsigned char _effectStale;
    unsigned int _programName;
    GLKEffectPropertyConstantColor *_constantColorProp;
    NSMutableArray *_propertyArray;
    GLKEffect *_effect;
    union _GLKVector4 _lightModelAmbientColor;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int programName; // @synthesize programName=_programName;
@property(nonatomic) GLKEffect *effect; // @synthesize effect=_effect;
@property(nonatomic) unsigned char effectStale; // @synthesize effectStale=_effectStale;
@property(readonly, nonatomic) NSMutableArray *propertyArray; // @synthesize propertyArray=_propertyArray;
@property(nonatomic) unsigned char propertyArrayStale; // @synthesize propertyArrayStale=_propertyArrayStale;
@property(nonatomic) unsigned char useConstantColor; // @synthesize useConstantColor=_useConstantColor;
@property(readonly, nonatomic) GLKEffectPropertyConstantColor *constantColorProp; // @synthesize constantColorProp=_constantColorProp;
@property(copy, nonatomic) NSArray *textureOrder; // @synthesize textureOrder=_textureOrder;
@property(nonatomic) union _GLKVector4 lightModelAmbientColor; // @synthesize lightModelAmbientColor=_lightModelAmbientColor;
@property(nonatomic) int lightingType; // @synthesize lightingType=_lightingType;
@property(readonly, nonatomic) GLKEffectPropertyTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) unsigned char lightModelTwoSided; // @synthesize lightModelTwoSided=_lightModelTwoSided;
@property(nonatomic) unsigned char colorMaterialEnabled; // @synthesize colorMaterialEnabled=_colorMaterialEnabled;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;
- (void)updateBaseEffect;
- (BOOL)perPixelLightingEnabled;
- (BOOL)perVertexLightingEnabled;
@property(nonatomic) union _GLKVector4 constantColor; // @synthesize constantColor=_constantColor;
@property(readonly, nonatomic) GLKEffectPropertyFog *fog; // @synthesize fog=_fog;
@property(readonly, nonatomic) GLKEffectPropertyTexture *texture2d1; // @synthesize texture2d1=_texture2d1;
@property(readonly, nonatomic) GLKEffectPropertyTexture *texture2d0; // @synthesize texture2d0=_texture2d0;
@property(readonly, nonatomic) GLKEffectPropertyMaterial *material; // @synthesize material=_material;
@property(readonly, nonatomic) GLKEffectPropertyLight *light2; // @synthesize light2=_light2;
@property(readonly, nonatomic) GLKEffectPropertyLight *light1; // @synthesize light1=_light1;
@property(readonly, nonatomic) GLKEffectPropertyLight *light0; // @synthesize light0=_light0;
- (id)init;

@end

