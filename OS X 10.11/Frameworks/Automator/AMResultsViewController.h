//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AMAction, AMImageView, AMResultsTableView, IKImageBrowserView, NSArrayController, NSMutableArray, NSSearchField, NSSegmentedControl, NSSlider, NSTabView, NSTextField, NSTextView;

@interface AMResultsViewController : NSViewController
{
    NSTabView *_tabView;
    NSSegmentedControl *_segmentedControl;
    NSSearchField *_searchField;
    IKImageBrowserView *_imageBrowserView;
    NSSlider *_imageZoomSlider;
    AMImageView *_largerMan;
    AMImageView *_smallerMan;
    AMResultsTableView *_resultsTableView;
    NSTextField *_resultsCountField;
    NSTextView *_oldViewResultsView;
    NSArrayController *_resultsController;
    AMAction *_action;
    NSMutableArray *_results;
    long long _selectedSegment;
    double _zoomValue;
    BOOL _showingResultsView;
}

- (BOOL)_createListView;
- (BOOL)_createIconView;
- (BOOL)_createTextView;
- (id)_lastActionOutputTypes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)search:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)setShowingResultsView:(BOOL)arg1;
- (BOOL)isShowingResultsView;
- (id)stringValueForOutputItemsAtIndexes:(id)arg1;
- (void)updateResultsCount;
- (void)createResults;
- (void)clearResults;
- (void)setZoomValue:(double)arg1;
- (double)zoomValue;
- (id)imageZoomSlider;
- (id)imageBrowserView;
- (void)setResultsViewControlsEnabled:(BOOL)arg1;
- (id)tabView;
- (id)results;
- (void)setSelectedSegment:(long long)arg1;
- (long long)selectedSegment;
- (void)setAction:(id)arg1;
- (id)action;
- (void)dealloc;
- (void)awakeFromNib;

@end

