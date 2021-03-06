//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>

@class IKColor, NSArray, NSIndexPath, NSSet, NSString, SKUIPageComponent, SKUIProductPageOverlayController, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate>
{
    _Bool _bottomSection;
    SKUIPageComponent *_component;
    SKUIStorePageSectionContext *_context;
    _Bool _hasValidRelevantEntityProviders;
    SKUIProductPageOverlayController *_overlayController;
    NSSet *_relevantEntityProviders;
    long long _sectionIndex;
    _Bool _topSection;
    IKColor *_backgroundColorForSection;
    NSArray *_indexPathsForBackgroundItems;
}

@property(readonly, nonatomic) NSArray *indexPathsForBackgroundItems; // @synthesize indexPathsForBackgroundItems=_indexPathsForBackgroundItems;
@property(readonly, nonatomic) IKColor *backgroundColorForSection; // @synthesize backgroundColorForSection=_backgroundColorForSection;
@property(nonatomic, getter=isTopSection) _Bool topSection; // @synthesize topSection=_topSection;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) SKUIPageComponent *pageComponent; // @synthesize pageComponent=_component;
@property(readonly, nonatomic) SKUIStorePageSectionContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isBottomSection) _Bool bottomSection; // @synthesize bottomSection=_bottomSection;
- (void).cxx_destruct;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg1 toSet:(id)arg2;
- (long long)_itemPinningStyle;
- (id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3;
- (void)_setContext:(id)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (long long)updateWithContext:(id)arg1 pageComponent:(id)arg2;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (void)showProductViewControllerWithItem:(id)arg1;
- (void)showPageWithLink:(id)arg1;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets sectionContentInset;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
@property(readonly, copy, nonatomic) NSSet *relevantEntityProviders;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)playVideoWithURL:(id)arg1;
- (void)playVideoForElement:(id)arg1;
- (long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (_Bool)performDefaultActionForViewElement:(id)arg1;
@property(readonly, nonatomic) long long numberOfCells;
- (struct _NSRange)itemRangeForIndexPathRange:(struct SKUIIndexPathRange)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)invalidateCachedLayoutInformation;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool fitsToHeight;
@property(readonly, nonatomic) NSIndexPath *firstAppearanceIndexPath;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)didAppearInContext:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
@property(readonly, nonatomic) long long defaultItemPinningStyle;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (_Bool)containsElementWithIndexBarEntryID:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

