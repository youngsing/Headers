//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPTextHostLayout.h>

#import <iWorkImport/TSKSearchTarget-Protocol.h>
#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSMutableDictionary, NSString, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableInfo, TSTTableModel, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>
{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    struct CGRect mCanvasVisibleRect;
    struct CGRect mPreviousVisibleStrokeFrame;
    _Bool mProcessChangesFiltering;
    _Bool mTabsVisible;
    _Bool mTableNameVisibilityIsValid;
    _Bool mTableNameVisible;
    _Bool mNewCanvasRevealedHorizontally;
    _Bool mNewCanvasRevealedVertically;
    _Bool mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        struct CGSize scaleToFitParent;
        struct CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    struct CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    NSMutableDictionary *mAttachmentCellLayouts;
    struct UIEdgeInsets mCachedPaddingForEditingCell;
    struct CGRect mComputedEditingCellContentFrame;
    int mCachedVerticalAlignmentForEditingCell;
    struct CGSize mAdjustableTableSize;
    struct CGSize mFixedTableSize;
    struct CGSize mCapturedStrokeFrameSizeForInline;
    struct TSUCellRect mEditingSpillingTextRange;
    struct TSUCellRect mPrevEditingSpillingTextRange;
    int mContainedTextEditorParagraphAlignment;
    _Bool mContainedTextEditorTextWraps;
    _Bool mRemovingContainedTextEditorLayout;
    _Bool mContainedTextEditorSpills;
    struct CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
    _Bool mShouldUpdateAttachmentChildren;
}

@property(nonatomic) _Bool processChangesFiltering; // @synthesize processChangesFiltering=mProcessChangesFiltering;
@property(retain, nonatomic) TSTLayoutHint *layoutHint; // @synthesize layoutHint=mLayoutHint;
@property(retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=mMasterLayout;
@property(readonly, nonatomic) _Bool layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(nonatomic) struct TSUCellRect prevEditingSpillingTextRange; // @synthesize prevEditingSpillingTextRange=mPrevEditingSpillingTextRange;
@property(readonly, nonatomic) struct TSUCellRect editingSpillingTextRange; // @synthesize editingSpillingTextRange=mEditingSpillingTextRange;
@property(retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // @synthesize spaceBundle=mSpaceBundle;
@property(readonly, nonatomic) struct UIEdgeInsets paddingForEditingCell; // @synthesize paddingForEditingCell=mCachedPaddingForEditingCell;
@property(retain, nonatomic) TSWPLayout *containedTextEditingLayout; // @synthesize containedTextEditingLayout=mContainedTextEditingLayout;
@property(nonatomic) _Bool newCanvasRevealedVertically; // @synthesize newCanvasRevealedVertically=mNewCanvasRevealedVertically;
@property(nonatomic) _Bool newCanvasRevealedHorizontally; // @synthesize newCanvasRevealedHorizontally=mNewCanvasRevealedHorizontally;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
- (_Bool)p_getLayoutDirectionLeftToRight;
- (int)p_defaultAlignmentForTableWritingDirection;
- (int)reapCoordinatesChangedMaskForChrome;
- (struct CGSize)initialTextSize;
- (struct CGRect)p_maskRectForRichTextLayout:(id)arg1;
- (struct CGRect)p_maskRectForTextEditingLayout:(id)arg1;
- (struct CGRect)maskRectForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (id)dependentLayouts;
- (struct CGRect)p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(struct CGSize)arg2 editingSpillRange:(struct TSUCellRect *)arg3;
- (struct CGRect)p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (_Bool)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
- (struct CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (struct CGRect)p_nonAutosizedFrameForRichTextLayout:(id)arg1;
- (struct CGRect)p_nonAutosizedFrameForTextEditingLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
- (struct TSUCellCoord)p_cellIDForWPLayout:(id)arg1;
- (int)naturalAlignmentForCellID:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) struct CGRect computedEditingCellContentFrame;
- (struct CGRect)p_textFrameForWrappingCell:(struct TSUCellCoord)arg1 defaultRowHeight:(_Bool *)arg2;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forScrollingToSelectionPath:(id)arg2;
- (_Bool)textIsVertical;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (_Bool)canvasShouldScrollForSelectionPath:(id)arg1;
- (_Bool)orderedBefore:(id)arg1;
- (struct CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (void)layoutSearchForSpellingErrorsWithHitBlock:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (void)removeAttachmentCellLayouts;
- (void)removeContainedTextEditingLayout;
- (void)updateChildrenFromInfo;
- (id)children;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (void)p_prepareAttachmentCells;
- (void)setupContainedTextEditingLayout:(struct TSUCellCoord)arg1;
- (void)p_updateCachedStyleInformationFromCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)p_spillRangeForMaskingRichTextLayout:(id)arg1;
- (struct TSUCellRect)p_spillRangeToRightForCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellRect)p_maximumSpillRangeForCellID:(struct TSUCellCoord)arg1;
- (_Bool)isBeingManipulated;
- (void)validateTableNameVisibility;
- (void)invalidateTableNameVisibility;
- (void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned int)arg2 transform:(struct CGAffineTransform)arg3 viewScale:(double)arg4 inset:(double)arg5 clipToVisibleRect:(_Bool)arg6 block:(CDUnknownBlockType)arg7;
- (void)invalidatePosition;
- (void)invalidateSize;
- (void)invalidate;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)validate;
- (_Bool)isStrokeEditing;
- (_Bool)isZoomedEditing;
- (_Bool)inFindReplaceMode;
- (_Bool)inPrintPreviewMode;
- (struct CGRect)alignmentFrame;
- (int)wrapFitType;
- (id)initialInfoGeometry;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (_Bool)isDraggable;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canRotateChildLayout:(id)arg1;
- (_Bool)supportsRotation;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
@property(nonatomic) struct CGSize scaleToFit;
- (void)iterateCellsInRange:(struct TSUCellRect)arg1 withFlags:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)iterateCellsInRange:(struct TSUCellRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)iterateCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(unsigned long long)arg2;
- (id)cellIteratorWithRange:(struct TSUCellRect)arg1;
- (id)cellIterator;
- (id)textWrapper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double textScaleFactor;

@end

