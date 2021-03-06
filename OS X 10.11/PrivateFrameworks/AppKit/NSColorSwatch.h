//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint, NSMutableArray;

@interface NSColorSwatch : NSView
{
    id colorPanel;
    long long mousedColor;
    NSMutableArray *colors;
    long long currentHighlight;
    long long focusedColor;
    long long numRowsToToggleVisible;
    long long draggedColorIndex;
    NSLayoutConstraint *_currentHeightConstraint;
}

+ (void)initialize;
- (void)dealloc;
- (void)updateSwatch;
- (id)_delayedUpdateSwatch:(id)arg1;
- (id)storeColorPanel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)color;
- (void)_delayedWriteColors;
- (BOOL)performDragOperation:(id)arg1;
- (void)postColorSwatchesChangedDistributedNotification;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)readColors;
- (void)writeColors;
- (BOOL)_readColorsFromLibrary;
- (void)_writeColorsToLibrary;
- (id)_packedCustomSwatchRecords;
- (void)_unpackCustomSwatchRecords:(id)arg1;
- (void)_setCustomSwatchRecord:(id)arg1 atIndex:(id)arg2;
- (id)_customSwatchRecordAtIndex:(id)arg1;
- (id)_customSwatchRecordsCreateIfNeeded:(BOOL)arg1;
- (void)_old_readColorsFromGlobalPreferences;
- (void)_old_writeColorsToGlobalPreferences;
- (BOOL)getSavedNumVisibleRows:(long long *)arg1;
- (void)saveNumVisibleRows;
- (double)swatchWidth;
- (id)highlightColor:(long long)arg1;
- (void)setFocusedColorChipIndex:(long long)arg1;
- (BOOL)drawColor:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)performClick:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveInDirection:(struct CGPoint)arg1;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_windowChangedKeyState;
- (struct CGRect)focusedSwatchRect;
- (struct CGRect)rectOfSwatchInteriorAtIndex:(long long)arg1;
- (BOOL)_isShowingKeyboardFocus;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_setAllowInteractiveHeightChanges:(BOOL)arg1;
- (double)_currentHeightConstraintConstant;
- (void)_setCurrentHeightConstraintConstant:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_reallocColors:(long long)arg1;
- (void)_constrainColorIndexToVisibleBounds:(long long *)arg1 dirtyIfNeeded:(BOOL)arg2;
- (long long)numRowsToToggleVisible;
- (void)markNumRowsToToggleVisible;
- (void)setNumRowsToToggleVisible:(long long)arg1;
- (long long)numberOfVisibleCols;
- (long long)numberOfVisibleRows;
- (double)heightForNumberOfVisibleRows:(long long)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (double)newLegalColorSwatchHeightFromHeight:(double)arg1;
- (struct CGRect)frameInBaseCoordinates;

@end

