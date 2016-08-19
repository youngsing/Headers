//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/_UIDocumentPickerContainedViewController-Protocol.h>

@class NSArray, NSString, NSURL, UIActivityIndicatorView, UIScrollView, UIView, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView, _UIDocumentPickerViewServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentTableViewController : UITableViewController <_UIDocumentPickerContainedViewController>
{
    _Bool _monitoring;
    _Bool _shouldHideSortBar;
    _Bool _updatesMayAnimate;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    NSURL *_observedURL;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerSortOrderView *_sortView;
    UIView *_pinnedHeaderView;
    UIActivityIndicatorView *_initialActivityView;
}

@property(retain, nonatomic) UIActivityIndicatorView *initialActivityView; // @synthesize initialActivityView=_initialActivityView;
@property(nonatomic) _Bool updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;
@property(retain, nonatomic) UIView *pinnedHeaderView; // @synthesize pinnedHeaderView=_pinnedHeaderView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic) _Bool shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSURL *observedURL; // @synthesize observedURL=_observedURL;
@property(retain, nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)supportsActions;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)scrollSortViewToVisible;
- (void)ensureSortViewInvisible;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updatePinnedHeader;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1 animated:(_Bool)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContentInset;
- (long long)displayMode;
- (void)modelChanged:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)updateRowHeight;
- (_Bool)smallCells;
- (_Bool)useIndentation;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_unlockAnimations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
