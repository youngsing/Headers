//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/_TVCollectionViewDelegate-Protocol.h>
#import <TVMLKit/_TVConfirmationPreviewInteractionControllerDelegate-Protocol.h>
#import <TVMLKit/_TVSubviewPreloading-Protocol.h>

@class IKCollectionElement, IKViewElement, NSIndexPath, NSString, UICollectionView, _TVCollectionWrappingView, _TVConfirmationPreviewInteractionController, _TVShadowViewElement;

__attribute__((visibility("hidden")))
@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, _TVConfirmationPreviewInteractionControllerDelegate, _TVCollectionViewDelegate, UICollectionViewDataSource, _TVSubviewPreloading>
{
    _Bool _ignoreNextSelect;
    _Bool _didAppear;
    double _impressionThreshold;
    _Bool _needsMoreContent;
    _TVConfirmationPreviewInteractionController *_previewInteractionController;
    UICollectionView *_collectionView;
    UIViewController *_headerViewController;
    IKCollectionElement *_collectionElement;
    IKViewElement *_headerElement;
    NSIndexPath *_lastFocusedIndexPath;
    _TVShadowViewElement *_shadowViewElement;
    struct TVCellMetrics _cellMetrics;
}

+ (id)_shadowViewElementForCollectionElement:(id)arg1;
+ (id)headerElementFromCollectionElement:(id)arg1;
@property(retain, nonatomic) _TVShadowViewElement *shadowViewElement; // @synthesize shadowViewElement=_shadowViewElement;
@property(copy, nonatomic) NSIndexPath *lastFocusedIndexPath; // @synthesize lastFocusedIndexPath=_lastFocusedIndexPath;
@property(readonly, nonatomic) struct TVCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
@property(readonly, retain, nonatomic) IKViewElement *headerElement; // @synthesize headerElement=_headerElement;
@property(readonly, retain, nonatomic) IKCollectionElement *collectionElement; // @synthesize collectionElement=_collectionElement;
@property(retain, nonatomic) UIViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_evaluateNeedsMoreContent;
- (void)_registerCellClassesInCollectionView:(id)arg1;
- (void)_updateHeaderView;
- (void)_doUpdateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (void)_confirmationPreviewInteractionControllerShouldBegin;
- (void)preloadSubviewsInRect:(struct CGRect)arg1;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (void)_cancelImpressionsUpdate;
- (void)_updateImpressions;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)tv_updateViewLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct CGSize)expectedCellSizeForElement:(id)arg1;
@property(readonly, retain, nonatomic) _TVCollectionWrappingView *collectionWrappingView;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

