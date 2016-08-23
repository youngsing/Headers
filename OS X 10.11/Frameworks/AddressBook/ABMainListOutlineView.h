//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface ABMainListOutlineView : NSOutlineView
{
    BOOL _drawGrid;
}

@property BOOL drawGrid; // @synthesize drawGrid=_drawGrid;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)printDescription:(id)arg1;
- (id)abTopLevelRowsForRows:(id)arg1;
- (long long)abTopLevelIndexOfItem:(id)arg1;
- (long long)abIndexOfTopLevelParentOfIndex:(long long)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)awakeFromNib;

@end

