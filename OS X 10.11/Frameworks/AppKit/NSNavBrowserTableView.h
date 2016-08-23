//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBrowserTableView.h>

@class NSCell;

@interface NSNavBrowserTableView : NSBrowserTableView
{
    long long _fauxHighlightedCellRow;
    long long _fauxHighlightedCellCol;
    NSCell *_fauxHighlightedCell;
}

- (BOOL)_supportsTrackingAreasForCells;
- (struct CGRect)labelRectOfRow:(long long)arg1;
- (BOOL)needsPanelToBecomeKey;
- (void)mouseDown:(id)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)_isEnabledRow:(long long)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)setFauxHighlightedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)sendMouseUpActionForDisabledCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

