//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSColor, NSColorWell, NSMutableArray, NSPopUpButton, NSSegmentedControl, NSStepper, NSTextField, NSTextTable, NSTextView;

__attribute__((visibility("hidden")))
@interface NSTableOptions : NSWindowController
{
    NSTextField *rowsField;
    NSStepper *rowsStepper;
    NSTextField *columnsField;
    NSStepper *columnsStepper;
    NSButton *mergeCellsButton;
    NSButton *splitCellsButton;
    NSButton *nestTableButton;
    NSSegmentedControl *horizontalAlignment;
    NSSegmentedControl *verticalAlignment;
    NSTextField *borderField;
    NSStepper *borderStepper;
    NSColorWell *borderColorWell;
    NSPopUpButton *backgroundPopUp;
    NSColorWell *backgroundColorWell;
    NSTextView *_client;
    NSTextTable *_table;
    unsigned long long _level;
    struct _NSRange _tableRange;
    long long _numRows;
    long long _numCols;
    long long _minRow;
    long long _maxRow;
    long long _minCol;
    long long _maxCol;
    long long _spacesOccupied;
    long long _maxSpaces;
    NSMutableArray *_cellRanges;
    NSColor *_defaultBorderColor;
    BOOL _modifyingClient;
}

+ (id)sharedTableOptions;
- (BOOL)worksWhenModal;
- (void)removeClient:(id)arg1;
- (void)setClient:(id)arg1;
- (void)modifyOptionsViaPanel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDefaultBorderColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (void)setHorizontalAlignment:(unsigned long long)arg1;
- (void)splitCells;
- (void)splitCell:(id)arg1 range:(struct _NSRange)arg2;
- (void)mergeCells;
- (void)removeColumns:(long long)arg1;
- (void)addColumns:(long long)arg1;
- (void)removeRows:(long long)arg1;
- (void)addRows:(long long)arg1;
- (void)removeTable;
- (void)addDefaultTable;
- (void)_addDefaultTable;
- (BOOL)getRows:(unsigned long long *)arg1 columns:(unsigned long long *)arg2 inTabDelimitedString:(id)arg3 inRange:(struct _NSRange)arg4;
- (void)addOrNestTable;
- (void)orderFrontTableOptionsPanel:(id)arg1;
- (void)updateUI;
- (void)enableAll:(BOOL)arg1;
- (BOOL)tableParameters;
- (void)clearTableParameters;
- (BOOL)textView:(id)arg1 shouldSetColor:(id)arg2;
- (id)tableOptionsPanel:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldCascadeWindows;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;
- (id)init;

@end

