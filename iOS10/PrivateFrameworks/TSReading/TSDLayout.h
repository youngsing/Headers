//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDAbstractLayout.h>

#import <TSReading/TSDAttachmentLayout-Protocol.h>
#import <TSReading/TSKSearchTarget-Protocol.h>

@class NSMutableSet, NSObject, NSSet, NSString, TSDLayoutGeometry;
@protocol TSDInfo;

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget, TSDAttachmentLayout>
{
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    struct CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGPoint mBaseCapturedAlignmentFrameOriginForInline;
    struct CGRect mDirtyRect;
    struct {
        unsigned int position:1;
        unsigned int size:1;
    } mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    struct CGRect mInitialBoundsForStandardKnobs;
    struct CGPoint mCapturedInfoGeometryPositionForInline;
    struct CGPoint mCapturedAlignmentFrameOriginForInline;
    NSMutableSet *mConnectedLayouts;
    _Bool mHasFinishedIterativePositioning;
    id mIterativePositioningState;
}

+ (id)descendentWrappablesOfLayout:(id)arg1;
@property(readonly, nonatomic) _Bool hasFinishedIterativePositioning; // @synthesize hasFinishedIterativePositioning=mHasFinishedIterativePositioning;
@property(retain, nonatomic) id iterativePositioningState; // @synthesize iterativePositioningState=mIterativePositioningState;
@property(readonly, nonatomic) NSSet *connectedLayouts; // @synthesize connectedLayouts=mConnectedLayouts;
@property(readonly, nonatomic) int layoutState; // @synthesize layoutState=mLayoutState;
@property(readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // @synthesize originalGeometry=mBaseGeometry;
@property(readonly, nonatomic) NSObject<TSDInfo> *info; // @synthesize info=mInfo;
- (void)p_invalidateConnectedLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (_Bool)allowsConnections;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (void)p_recursiveInvalidate;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)p_registerWithLayoutController:(id)arg1;
- (id)i_externalWrapPath;
- (id)i_wrapPath;
- (struct CGRect)i_takeDirtyRect;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
@property(readonly, nonatomic) _Bool attachmentLayoutDisplacedByDropCap;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (_Bool)wantsRoundedInlinePosition;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;
- (double)inlineCenteredAlignmentOffset;
- (double)inlineVerticalOffset;
- (id)additionalGuides;
- (_Bool)shouldProvideSizingGuides;
- (_Bool)shouldDisplayGuides;
- (_Bool)orderedBefore:(id)arg1;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (id)dependentLayouts;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)searchTarget;
- (void)processChangedProperty:(int)arg1;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withGeometry:(id)arg2;
- (id)computeLayoutGeometry;
- (id)computeInfoGeometryDuringResize;
- (struct CGPoint)centerForConnecting;
- (struct CGPoint)centerForRotation;
- (struct CGRect)boundsForStandardKnobs;
- (void)validateFromLastInterimPosition;
- (_Bool)canFlip;
- (struct CGAffineTransform)originalPureTransformInRoot;
- (struct CGAffineTransform)pureTransformInRoot;
- (id)inspectorGeometry;
- (id)pureGeometryInRoot;
- (id)pureGeometry;
- (id)originalPureGeometry;
- (id)initialInfoGeometry;
- (struct CGRect)initialBoundsForStandardKnobs;
- (_Bool)isBeingManipulated;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;
- (struct CGSize)maximumSizeForChildLayout:(id)arg1;
- (struct CGSize)minimumSize;
- (void)beginResize;
@property(readonly, nonatomic) _Bool canAspectRatioLockBeChangedByUser;
@property(readonly, nonatomic) _Bool resizeMayChangeAspectRatio;
- (void)endRotate;
- (void)takeRotationFromTracker:(id)arg1;
- (void)beginRotate;
- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)originalTransformForProvidingGuides;
- (struct CGAffineTransform)originalTransformInRoot;
- (void)endDrag;
- (void)dragBy:(struct CGPoint)arg1;
- (void)dragByUnscaled:(struct CGPoint)arg1;
- (void)beginDrag;
- (_Bool)isBeingTransformed;
- (void)pauseDynamicTransformation;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (_Bool)i_useBaseCapturedAlignmentFrameOriginForInline;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
@property(readonly, nonatomic) _Bool isStrokeBeingManipulated;
- (id)stroke;
- (_Bool)isInTopLevelContainerForEditing;
- (_Bool)isInGroup;
- (_Bool)shouldBeDisplayedInShowMode;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (Class)repClassOverride;
- (void)processChanges:(id)arg1;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)layoutGeometryFromProvider;
- (id)i_layoutGeometryProvider;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
@property(readonly, nonatomic) _Bool invalidGeometry;
- (id)layoutController;
- (id)rootLayout;
- (void)wasRemovedFromLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)wasAddedToLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)setParent:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)invalidateFrame;
- (_Bool)dependentsRelyOnSize;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidate;
- (void)finishIterativePositioning;
- (_Bool)shouldValidate;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;
- (void)setAdjustedInterimPositionX:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
