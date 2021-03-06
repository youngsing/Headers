//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserViewController.h>

#import <FinderKit/NSCollectionViewDataSourcePrivate-Protocol.h>
#import <FinderKit/NSCollectionViewDelegate-Protocol.h>
#import <FinderKit/TCollectionViewDelegateProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TBaseCollectionViewController : FI_TBrowserViewController <NSCollectionViewDelegate, NSCollectionViewDataSourcePrivate, TCollectionViewDelegateProtocol>
{
    unsigned long long _pendingNodeToPropertiesToUpdateIndex;
    struct unordered_map<unsigned long, std::__1::unordered_map<TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>>>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::unordered_map<TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, std::__1::unordered_set<unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<unsigned int>>>>>>>> _pendingNodeToPropertiesToUpdateMaps;
    struct TNotificationCenterObserver _sizeChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)receiveDrop:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (unsigned long long)validateDrop:(id)arg1 proposedIndexPath:(id *)arg2 dropOperation:(long long *)arg3 dropTargetNode:(const struct TFENode *)arg4 outDropTargetNodeAcceptsDrop:(_Bool *)arg5;
- (void)draggingEnded:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingExited:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObject:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 child:(long long)arg2 ofRepresentedObject:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfChildrenOfRepresentedObject:(id)arg2;
- (_Bool)handleMouseUp:(id)arg1;
- (_Bool)handleMouseDragged:(id)arg1;
- (_Bool)handleMouseDown:(id)arg1;
- (long long)insertOrResortIndexOffset;
- (void)aboutToRemoveNodes:(const struct TFENodeVector *)arg1;
- (void)performBatchUpdatesCompletionHandler:(const unordered_set_b5868ef5 *)arg1:(unsigned long long)arg2;
- (void)dataSourceItemsDidChange:(const unordered_map_a0710478 *)arg1;
- (void)dataSourceChanged:(const vector_f56638af *)arg1;
- (void)dataSourceChanged_propChanged:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_b5868ef5 *)arg3:(unordered_map_a0710478 *)arg4;
- (void)dataSourceChanged_move:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2;
- (void)dataSourceChanged_insert:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_b5868ef5 *)arg3:(_Bool *)arg4;
- (void)dataSourceChanged_remove:(const struct TFENode *)arg1:(const struct TBVDSChangedPayload *)arg2:(unordered_set_b5868ef5 *)arg3:(unordered_map_a0710478 *)arg4:(_Bool *)arg5;
- (struct CGRect)frameForSection:(unsigned long long)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (unsigned long long)itemCount;
- (unsigned int)viewStyle;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (id)indexPathsForNodes:(const struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (id)indexPathForNode:(const struct TFENode *)arg1;
- (struct TFENodeVector)nodesForIndexPaths:(id)arg1 upTo:(unsigned long long)arg2;
- (struct TFENode)nodeForSectionIndex:(unsigned long long)arg1;
- (struct TFENode)nodeForIndexPath:(id)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (_Bool)isLTRLocalization;
- (_Bool)isKeepArranged;
- (void)configureCollectionViewItem:(id)arg1 forNode:(const struct TFENode *)arg2;
- (void)registerCollectionViewItemClassOrNib;
- (id)itemIdentifier;
- (id)collectionView;
- (id)nibName;
- (void)aboutToTearDown;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

