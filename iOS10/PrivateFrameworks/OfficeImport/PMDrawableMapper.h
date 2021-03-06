//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class CMDrawingContext, OADShape;

__attribute__((visibility("hidden")))
@interface PMDrawableMapper : CMDrawableMapper
{
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    _Bool mTopLevelMapper;
}

- (void)mapBounds;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)slideRect;
- (_Bool)isTopLevelMapper;
- (void)setTopLevelMapper:(_Bool)arg1;
- (id)drawingContext;
- (void)setDrawingContext:(id)arg1;
- (void)dealloc;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;
- (struct CGRect)shapeTextBoxWithState:(id)arg1;
- (void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(struct CGRect *)arg3 state:(id)arg4;
- (void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;

@end

