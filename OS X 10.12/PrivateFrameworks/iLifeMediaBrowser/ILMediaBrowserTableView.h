//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSColor, NSMutableArray;

@interface ILMediaBrowserTableView : NSTableView
{
    NSMutableArray *_ILMBAlternatingRowBackgroundColorsArray;
    NSColor *_ILMBCellHighlightColor;
    Class _tableHeaderCellClass;
}

- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (id)_highlightColorForCell:(id)arg1;
- (void)setCustomHighlightColor:(id)arg1;
- (id)_alternatingRowBackgroundColors;
- (void)setAlternatingRowBackgroundColorsArray:(id)arg1;
- (id)arrayWithIndexes:(id)arg1;
- (void)copy:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)keyDown:(id)arg1;
- (long long)clickedIndex;
- (void)selectNone:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)setTableHeaderCellClass:(Class)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
