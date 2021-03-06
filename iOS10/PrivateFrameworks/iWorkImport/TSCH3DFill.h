//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDFill.h>

@class NSNumber, TSCH3DFillSetIdentifier, TSCH3DLightingModel;

__attribute__((visibility("hidden")))
@interface TSCH3DFill : TSDFill
{
    TSCH3DLightingModel *_lightingModel;
    TSCH3DFillSetIdentifier *_identifier;
    TSDFill *_fallbackFill;
    NSNumber *_percentage;
    TSDFill *_cachedImageFill;
    struct CGSize _cachedImageFillSize;
}

+ (id)fillWithIdentifier:(id)arg1;
+ (id)fill;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;
+ (id)fillWithSageFillData:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
@property(retain, nonatomic) NSNumber *percentage; // @synthesize percentage=_percentage;
@property(retain, nonatomic) TSCH3DFillSetIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)didInitFromSOS;
- (int)fillType;
- (id)referenceColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)setFallbackFill:(id)arg1;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)p_imageFillForSize:(struct CGSize)arg1 context:(id)arg2;
- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (void)nonatomicallySetLightingModel:(id)arg1;
@property(readonly) TSCH3DLightingModel *lightingModel;
- (_Bool)identifierReferencesUnavailableLocalBundle;
- (id)p_lazyLightingModel;
@property(readonly, nonatomic) float percentageValue;
- (id)lightenByPercent:(float)arg1;
- (_Bool)isOpaque;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (id)init;
- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)sageFillData;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)tsch_hasAllResources;

@end

