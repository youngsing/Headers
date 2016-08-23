//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBrowserColumnViewController.h>

#import <AppKit/NSTableViewDataSource-Protocol.h>
#import <AppKit/NSTableViewDelegate-Protocol.h>

@class NSIndexSet, NSMutableArray, NSString;

@interface _NSBrowserTableColumnViewController : NSBrowserColumnViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *_selectedItems;
    NSIndexSet *_selectedIndexes;
}

- (void)didChangeColumnSize;
- (void)didEndResizingColumn:(long long)arg1;
- (void)willBeginResizingColumn:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)_autoExpandItemUnderCursor;
- (void)_expandItemUnderMouse:(id)arg1;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)_cancelExpandItemUnderMouse;
- (void)_autoExpandFlashOnce;
- (void)_startAutoExpandingItemFlash;
- (void)_stopAutoExpandingFlash;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)tableView:(id)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 forString:(id)arg4;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
- (double)widthThatFits;
- (id)dragImageForRowsWithIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (void)editRow:(long long)arg1 withEvent:(id)arg2 select:(BOOL)arg3;
- (struct CGRect)frameOfRow:(long long)arg1;
- (long long)rowAtPoint:(struct CGPoint)arg1;
- (void)setNeedsDisplayInRow:(long long)arg1;
- (id)preparedCellAtRow:(long long)arg1;
- (id)titleOfSelectedRow;
- (void)scrollRowToCenter:(long long)arg1;
- (void)reloadDataForRowIndexes:(id)arg1;
- (void)reloadData;
- (void)synchSelectionCache;
- (void)setSelectionIndexes:(id)arg1;
- (id)selectionIndexes;
- (long long)nextValidRowIndexAfterIndex:(long long)arg1;
- (long long)firstValidRowIndex;
- (unsigned long long)numberOfRows;
- (id)currentTypeSelectSearchString;
- (void)setAllowsTypeSelect:(BOOL)arg1;
- (BOOL)allowsTypeSelect;
- (void)setBackgroundColor:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (BOOL)allowsEmptySelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (id)tableView;
- (void)loadView;
- (void)setView:(id)arg1;
- (id)selectedItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

