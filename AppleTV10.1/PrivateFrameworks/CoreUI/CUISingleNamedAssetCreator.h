//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIMutableCommonAssetStorage, NSMutableArray, NSString;

@interface CUISingleNamedAssetCreator : NSObject
{
    NSString *_primaryName;
    unsigned long long _primaryIndex;
    NSMutableArray *_names;
    NSMutableArray *_generators;
    CUIMutableCommonAssetStorage *_store;
    double _radiosityCompressionQuaility;
    double _flattenedCompressionQuality;
    double _layersCompressionQuality;
    long long _compressionType;
}

@property(retain) CUIMutableCommonAssetStorage *store; // @synthesize store=_store;
@property(retain) NSMutableArray *generators; // @synthesize generators=_generators;
@property(retain) NSMutableArray *names; // @synthesize names=_names;
@property unsigned long long primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property(retain) NSString *primaryName; // @synthesize primaryName=_primaryName;
- (_Bool)distillAndSave:(id *)arg1;
- (_Bool)_distillRenditions:(id *)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken *)arg1;
- (_Bool)_distillNameEntries:(id *)arg1;
- (_Bool)_extractFlattenedImages:(id *)arg1;
- (void)_finalizeNameIdentifiers;
- (void)_configureDefaultStorageParameters;
- (const struct _renditionkeyfmt *)_keyFormat;
- (void)addFlattenedImage:(struct CGImage *)arg1 forLayerStackWithName:(id)arg2;
- (void)addLayerReference:(id)arg1 forImage:(struct CGImage *)arg2 toLayerStackWithName:(id)arg3;
- (void)addLayerStackWithSize:(struct CGSize)arg1 stackData:(id)arg2 name:(id)arg3;
- (void)addImageAsJPEG:(struct CGImage *)arg1 withName:(id)arg2;
- (void)_addImageAsJPEG:(struct CGImage *)arg1 withBaseKey:(id)arg2 withName:(id)arg3;
- (void)addImage:(struct CGImage *)arg1 withName:(id)arg2;
- (id)_addImage:(struct CGImage *)arg1 withBaseKey:(id)arg2 name:(id)arg3;
- (id)_generatorForName:(id)arg1;
- (id)_radiosityImageBaseKey;
- (id)_flattenedImageBaseKey;
- (id)_defaultBaseKey;
- (void)dealloc;
- (id)path;
- (id)initWithOutputURL:(id)arg1 versionString:(id)arg2;
- (long long)compressionType;
- (void)setCompressionType:(long long)arg1;
- (double)layersLossyCompressionQuality;
- (void)setLayersLossyCompressionQuality:(double)arg1;
- (double)flattenedLossyCompressionQuality;
- (void)setFlattenedLossyCompressionQuality:(double)arg1;
- (double)radiosityLossyCompressionQuality;
- (void)setRadiosityLossyCompressionQuality:(double)arg1;
- (double)compressionQuality;
- (void)setCompressionQuality:(double)arg1;

@end

