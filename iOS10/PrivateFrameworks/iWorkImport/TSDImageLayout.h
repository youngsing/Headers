//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

@class TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDImageLayout : TSDMediaLayout
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath *mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    _Bool mMaskIntersectsImage;
    TSUBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    int mMaskEditMode;
    _Bool mScalingInMaskMode;
    _Bool mInInstantAlphaMode;
    _Bool mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (_Bool)supportsRotation;
- (id)i_computeWrapPath;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (_Bool)isDynamicallyChangingImageAdjustments;
- (id)imageAdjustments;
- (id)maskLayout;
- (struct CGAffineTransform)imageDataToVisualSizeTransform;
- (struct CGAffineTransform)layoutToMaskTransform;
- (struct CGAffineTransform)layoutToImageTransform;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
- (struct CGPath *)pathToStroke;
- (_Bool)hasMaskingPath;
- (id)imageGeometryInRoot;
- (id)originalImageGeometry;
- (id)imageGeometry;
- (id)imageInfo;
- (struct CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (_Bool)isInvisible;
- (_Bool)hasAlpha;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)updateChildrenFromInfo;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

