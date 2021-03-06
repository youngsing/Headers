//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/MUContentViewController.h>

#import <MarkupUI/MUContentViewControllerAKControllerSubdelegate-Protocol.h>
#import <MarkupUI/MUContentViewControllerProtocol-Protocol.h>
#import <MarkupUI/PDFPageVisibilityDelegate-Protocol.h>
#import <MarkupUI/PDFViewDelegatePrivate-Protocol.h>

@class MUCGPDFReader, MUPDFPageLabelView, NSArray, NSLayoutConstraint, NSString, PDFDocument, PDFPage, PDFThumbnailView, PDFView, UIVisualEffectView;
@protocol MUPDFContentViewControllerDelegate;

@interface MUPDFContentViewController : MUContentViewController <PDFViewDelegatePrivate, PDFPageVisibilityDelegate, MUContentViewControllerProtocol, MUContentViewControllerAKControllerSubdelegate>
{
    PDFDocument *_pdfDocument;
    _Bool _showsThumbnailView;
    _Bool _navigationModeHorizontal;
    _Bool _forcesPDFViewTopAlignment;
    _Bool _constraintsAreHorizontal;
    _Bool _viewIsTransitioningBetweenSizes;
    _Bool _viewTransitionPreviousAutoscalingState;
    _Bool _didSetup;
    id <MUPDFContentViewControllerDelegate> _delegate;
    NSArray *_sourceContentReplacedAnnotationMaps;
    PDFView *_pdfView;
    PDFThumbnailView *_thumbnailView;
    MUCGPDFReader *_pdfReader;
    UIVisualEffectView *_thumbnailViewHolder;
    NSArray *_thumbnailViewHolderConstraints;
    NSLayoutConstraint *_thumbnailViewHolderRevealConstraint;
    MUPDFPageLabelView *_pageLabelView;
    PDFPage *_viewTransitionPageToCenter;
    double _viewTransitionPreviousScale;
    struct CGPoint _viewTransitionPointOnPageToCenter;
    struct UIEdgeInsets _edgeInsets;
}

@property _Bool didSetup; // @synthesize didSetup=_didSetup;
@property _Bool viewTransitionPreviousAutoscalingState; // @synthesize viewTransitionPreviousAutoscalingState=_viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale; // @synthesize viewTransitionPreviousScale=_viewTransitionPreviousScale;
@property struct CGPoint viewTransitionPointOnPageToCenter; // @synthesize viewTransitionPointOnPageToCenter=_viewTransitionPointOnPageToCenter;
@property __weak PDFPage *viewTransitionPageToCenter; // @synthesize viewTransitionPageToCenter=_viewTransitionPageToCenter;
@property _Bool viewIsTransitioningBetweenSizes; // @synthesize viewIsTransitioningBetweenSizes=_viewIsTransitioningBetweenSizes;
@property(retain) MUPDFPageLabelView *pageLabelView; // @synthesize pageLabelView=_pageLabelView;
@property(retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint; // @synthesize thumbnailViewHolderRevealConstraint=_thumbnailViewHolderRevealConstraint;
@property(retain) NSArray *thumbnailViewHolderConstraints; // @synthesize thumbnailViewHolderConstraints=_thumbnailViewHolderConstraints;
@property _Bool constraintsAreHorizontal; // @synthesize constraintsAreHorizontal=_constraintsAreHorizontal;
@property(retain) UIVisualEffectView *thumbnailViewHolder; // @synthesize thumbnailViewHolder=_thumbnailViewHolder;
@property(retain) MUCGPDFReader *pdfReader; // @synthesize pdfReader=_pdfReader;
@property(nonatomic) _Bool forcesPDFViewTopAlignment; // @synthesize forcesPDFViewTopAlignment=_forcesPDFViewTopAlignment;
@property(retain) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain) PDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(nonatomic) _Bool navigationModeHorizontal; // @synthesize navigationModeHorizontal=_navigationModeHorizontal;
@property(nonatomic) _Bool showsThumbnailView; // @synthesize showsThumbnailView=_showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps; // @synthesize sourceContentReplacedAnnotationMaps=_sourceContentReplacedAnnotationMaps;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) id <MUPDFContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (void).cxx_destruct;
- (struct CGAffineTransform)_compensatingAffineTransformForPage:(id)arg1;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (void)_updateMinMaxZoomFactor;
- (struct CGSize)_medianSizeForCurrentDocumentInPDFViewWithGetter:(CDUnknownBlockType)arg1;
- (struct CGPoint)_minimumContentOffset;
- (struct CGPoint)_maximumContentOffset;
- (void)_recoverFromRotation;
- (void)_prepareToRotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)highlight:(id)arg1;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)contentSnapshot;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id)arg1;
- (struct CGRect)visibleContentRect;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)clearHighlightableSelection;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1;
- (_Bool)hasHighlightableSelection;
- (void)didExitToolMode;
- (void)didEnterToolMode;
- (_Bool)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (_Bool)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (_Bool)shouldDetectFormElements;
- (void)willPlaceSingleShotAnnotation:(id)arg1 onProposedPageModelController:(id *)arg2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (void)pdfViewDidChangeCurrentSelection:(id)arg1;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_loadContentForAnnotationController:(id)arg1;
- (void)_teardownPDFViewIfNecessary;
- (void)_createPDFView;
@property(readonly, nonatomic) NSString *documentUnlockedWithPassword;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_updatePDFViewDisplayMode;
@property(readonly) unsigned long long pageCount;
- (_Bool)shouldShowAnnotationsOfType:(id)arg1;
- (_Bool)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (_Bool)pdfViewShouldPopulateMenu:(id)arg1;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
- (void)loadDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)teardown;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPDFDocument:(id)arg1 andPDFReader:(id)arg2 annotationController:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool centersIgnoringContentInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

