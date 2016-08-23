//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASKDataColumn, NSArray, NSMutableArray;

@interface ASKDataSource : NSObject
{
    NSMutableArray *_views;
    NSMutableArray *_columns;
    NSMutableArray *_rows;
    NSMutableArray *_items;
    NSArray *_sortedRows;
    NSArray *_draggedItems;
    BOOL _shouldUpdateViews;
    BOOL _sorted;
    BOOL _localizedSort;
    BOOL _contentsAsRecords;
    ASKDataColumn *_sortColumn;
    BOOL _useSortIndicators;
    BOOL _allowsReordering;
}

+ (unsigned long long)dragOperationWithType:(unsigned int)arg1;
+ (unsigned int)typeWithDragOperation:(unsigned long long)arg1;
+ (unsigned long long)dropOperationWithType:(unsigned int)arg1;
+ (unsigned int)typeWithDropOperation:(unsigned long long)arg1;
- (id)handleAppendScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (id)valueInRowsWithUniqueID:(long long)arg1;
- (id)valueInColumnsWithUniqueID:(long long)arg1;
- (id)valueInCellsWithUniqueID:(long long)arg1;
- (void)replaceInItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllItems;
- (void)removeFromItemsAtIndex:(unsigned long long)arg1;
- (void)removeItem:(id)arg1;
- (void)insertInItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInItems:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)replaceInRows:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllRows;
- (void)removeFromRowsAtIndex:(unsigned long long)arg1;
- (void)removeRow:(id)arg1;
- (void)insertInRows:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInRows:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)replaceInColumns:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllColumns;
- (void)removeFromColumnsAtIndex:(unsigned long long)arg1;
- (void)removeColumn:(id)arg1;
- (void)insertInColumns:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInColumns:(id)arg1;
- (id)columnAtIndex:(unsigned long long)arg1;
- (id)columnWithName:(id)arg1;
- (void)replaceInCells:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllCells;
- (void)removeFromCellsAtIndex:(unsigned long long)arg1;
- (void)removeCell:(id)arg1;
- (void)insertInCells:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInCells:(id)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (void)updateSortIndicators;
- (void)invalidateSort;
- (void)sort;
- (BOOL)hasView:(id)arg1;
- (void)updateViews;
- (void)removeAllViews;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setAllowsReordering:(BOOL)arg1;
- (BOOL)allowsReordering;
- (void)setUseSortIndicators:(BOOL)arg1;
- (BOOL)useSortIndicators;
- (void)setContents:(id)arg1;
- (void)_setContents:(id)arg1 removeExisting:(BOOL)arg2;
- (id)contents;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setContentsAsRecords:(BOOL)arg1;
- (BOOL)contentsAsRecords;
- (void)setSortColumn:(id)arg1;
- (id)sortColumn;
- (void)setLocalizedSort:(BOOL)arg1;
- (BOOL)localizedSort;
- (void)setSorted:(BOOL)arg1;
- (BOOL)sorted;
- (void)setShouldUpdateViews:(BOOL)arg1;
- (BOOL)shouldUpdateViews;
- (void)setDraggedItems:(id)arg1;
- (id)draggedItems;
- (id)sortedRows;
- (id)items;
- (id)cells;
- (id)rows;
- (id)columns;
- (id)views;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;

@end

