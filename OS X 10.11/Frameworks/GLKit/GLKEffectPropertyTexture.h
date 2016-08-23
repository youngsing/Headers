//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKEffectProperty.h>

@class GLKEffectPropertyTexGen, NSMutableArray, NSString;

@interface GLKEffectPropertyTexture : GLKEffectProperty
{
    unsigned char _enabled;
    unsigned int _name;
    unsigned int _target;
    int _envMode;
    unsigned char _matrixEnabled;
    int _textureIndex;
    int _unit2dLoc;
    int _unitCubeLoc;
    NSString *_filePath;
    char *_unit2dNameString;
    char *_unitCubeNameString;
    NSMutableArray *_texGenArray;
    GLKEffectPropertyTexGen *_texGenS;
    GLKEffectPropertyTexGen *_texGenT;
    GLKEffectPropertyTexGen *_texGenR;
    struct GLKBigInt_s _allFshMasks;
}

+ (void)clearAllTexturingMasks:(struct GLKBigInt_s *)arg1 fshMask:(struct GLKBigInt_s *)arg2;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(readonly, nonatomic) struct GLKBigInt_s allFshMasks; // @synthesize allFshMasks=_allFshMasks;
@property(readonly, nonatomic) NSMutableArray *texGenArray; // @synthesize texGenArray=_texGenArray;
@property(nonatomic) int unitCubeLoc; // @synthesize unitCubeLoc=_unitCubeLoc;
@property(nonatomic) int unit2dLoc; // @synthesize unit2dLoc=_unit2dLoc;
@property(nonatomic) unsigned int name; // @synthesize name=_name;
@property(nonatomic) char *unitCubeNameString; // @synthesize unitCubeNameString=_unitCubeNameString;
@property(nonatomic) char *unit2dNameString; // @synthesize unit2dNameString=_unit2dNameString;
@property(nonatomic) int envMode; // @synthesize envMode=_envMode;
@property(nonatomic) unsigned char matrixEnabled; // @synthesize matrixEnabled=_matrixEnabled;
@property(nonatomic) int textureIndex; // @synthesize textureIndex=_textureIndex;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned int target; // @synthesize target=_target;
- (void)dealloc;
- (void)bind;
- (id)description;
@property(readonly, nonatomic) unsigned char useTexCoordAttribMask;
@property(readonly, nonatomic) unsigned char vNormalEyeMask;
@property(readonly, nonatomic) unsigned char vPositionEyeMask;
@property(readonly, nonatomic) unsigned char normalizedNormalsMask;
- (void)initializeMasks;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)setShaderBindings;
@property(readonly, nonatomic) GLKEffectPropertyTexGen *texGenR; // @synthesize texGenR=_texGenR;
@property(readonly, nonatomic) GLKEffectPropertyTexGen *texGenT; // @synthesize texGenT=_texGenT;
@property(readonly, nonatomic) GLKEffectPropertyTexGen *texGenS; // @synthesize texGenS=_texGenS;
- (void)dirtyAllUniforms;
- (id)init;

@end

