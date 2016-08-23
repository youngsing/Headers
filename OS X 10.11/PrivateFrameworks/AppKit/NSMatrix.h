//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSUserInterfaceValidations-Protocol.h>

@class NSArray, NSCell, NSColor, NSMutableArray;
@protocol NSMatrixDelegate;

@interface NSMatrix : NSControl <NSUserInterfaceValidations>
{
    id _reserved2;
    SEL _reserved3;
    SEL _doubleAction;
    SEL _errorAction;
    id _delegate;
    id _selectedCell;
    long long _selectedRow;
    long long _selectedCol;
    long long _numRows;
    long long _numCols;
    struct CGSize _cellSize;
    struct CGSize _intercell;
    id _font;
    id _protoCell;
    id _cellClass;
    NSColor *_backgroundColor;
    id _private;
    NSMutableArray *_cells;
    struct __MFlags {
        unsigned int reservedMatrix:2;
        unsigned int cellSizeNeedsAutorecalc:1;
        unsigned int autorecalculatesCellSize:1;
        unsigned int drawingContextMenuHighlightOnAllSelectedRows:1;
        unsigned int drawingContextMenuHighlight:1;
        unsigned int browserOptimizationsEnabled:1;
        unsigned int needsRedrawBeforeFirstLiveResizeCache:1;
        unsigned int tmpAllowNonVisibleCellsToBecomeFirstResponder:1;
        unsigned int subclassIsSafeForLiveResize:1;
        unsigned int hasCachedSubclassIsSafeForLiveResize:1;
        unsigned int liveResizeImageCacheingEnabled:1;
        unsigned int checkForSimpleTrackingMode:1;
        unsigned int useSimpleTrackingMode:1;
        unsigned int refusesFirstResponder:1;
        unsigned int dontScroll:1;
        unsigned int changingSelectionWithKeyboard:1;
        unsigned int onlySetKeyCell:1;
        unsigned int currentlySelectingCell:1;
        unsigned int allowsIncrementalSearching:1;
        unsigned int tabKeyTraversesCellsExplicitlySet:1;
        unsigned int tabKeyTraversesCells:1;
        unsigned int drawingAncestor:1;
        unsigned int autosizeCells:1;
        unsigned int drawsBackground:1;
        unsigned int drawsCellBackground:1;
        unsigned int selectionByRect:1;
        unsigned int autoscroll:1;
        unsigned int allowEmptySel:1;
        unsigned int listMode:1;
        unsigned int radioMode:1;
        unsigned int highlightMode:1;
    } _mFlags;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (id)_dropHighlightColor;
+ (void)initialize;
+ (BOOL)accessibilityIsSingleCelled;
- (void)heartBeat:(CDStruct_d41e72e8 *)arg1;
- (BOOL)_wantsHeartBeat;
- (void)_windowChangedKeyState;
- (void)_rightMouseUpOrDown:(id)arg1;
- (void)_resetBrowserClickedRowAndColumn;
- (void)_menuDidEndTracking:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)helpRequested:(id)arg1;
- (void)_doResetOfCursorRects:(BOOL)arg1 revealovers:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_selectCellIfRequired;
- (void)_checkForSimpleTrackingMode;
- (void)_setUseSimpleTrackingMode:(BOOL)arg1;
- (BOOL)_useSimpleTrackingMode;
- (id)toolTipForCell:(id)arg1;
- (void)setToolTip:(id)arg1 forCell:(id)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)selectTextAtRow:(long long)arg1 column:(long long)arg2;
- (void)selectText:(id)arg1;
- (id)_selectTextOfCell:(id)arg1;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property id <NSMatrixDelegate> delegate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)sendDoubleAction;
- (void)_sendDoubleActionToCellAt:(struct CGPoint)arg1;
- (BOOL)sendAction;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)_setWindow:(id)arg1;
- (id)_recursiveFindDefaultButtonCell;
- (BOOL)_performKeyEquivalent:(id)arg1 conditionally:(BOOL)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_keyEquivalentModifierMask:(unsigned long long)arg1 matchesModifierFlags:(unsigned long long)arg2;
- (void)_allowAnimationInCells:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
@property(readonly) long long mouseDownFlags;
- (void)_mouseLoop:(id)arg1:(id)arg2:(long long)arg3:(long long)arg4:(struct _SelectionAnchor *)arg5:(BOOL)arg6;
- (id)_normalListmodeDown:(id)arg1:(id)arg2:(long long)arg3:(long long)arg4;
- (id)_alternateDown:(id)arg1:(id)arg2:(long long)arg3:(long long)arg4;
- (id)_shiftDown:(id)arg1:(id)arg2:(long long)arg3:(long long)arg4;
- (long long)_cellFurthestFrom:(long long)arg1 andCol:(long long)arg2;
- (id)_firstHighlightedCell;
- (id)_selectRowRange:(struct _SelectionAnchor *)arg1:(BOOL)arg2;
- (id)_selectRectRange:(struct _SelectionAnchor *)arg1:(BOOL)arg2;
- (id)_selectRange:(struct _SelectionAnchor *)arg1 oldArea:(struct _SelectionAnchor *)arg2 lit:(BOOL)arg3 includeX:(BOOL)arg4;
- (id)_setSelectionRange:(struct _SelectionAnchor *)arg1:(BOOL)arg2;
- (void)setSelectionFrom:(long long)arg1 to:(long long)arg2 anchor:(long long)arg3 highlight:(BOOL)arg4;
- (id)_mouseDownSimpleTrackingMode:(id)arg1;
- (id)_mouseDownNonListmode:(id)arg1;
- (void)_mouseDownListmode:(id)arg1;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (void)altModifySelection:(id)arg1;
- (void)shiftModifySelection:(id)arg1;
- (id)_makeEditable:(id)arg1:(long long)arg2:(long long)arg3:(id)arg4;
- (BOOL)_hasEditableCell;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_setAllowsNonVisibleCellsToBecomeFirstResponder:(BOOL)arg1;
- (BOOL)_browserOptimizationsEnabled;
- (void)_setBrowserOptimizationsEnabled:(BOOL)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_pageUpWithEvent:(id)arg1;
- (void)_pageDownWithEvent:(id)arg1;
- (void)_keyboardModifyRow:(long long)arg1 column:(long long)arg2 withEvent:(id)arg3;
- (long long)_acceptableRowAboveRow:(long long)arg1 tryBelowPoint:(struct CGPoint)arg2;
- (long long)_acceptableRowBelowRow:(long long)arg1 tryAbovePoint:(struct CGPoint)arg2;
- (long long)_acceptableRowAboveKeyInVisibleRect:(struct CGRect)arg1;
- (long long)_acceptableRowBelowKeyInVisibleRect:(struct CGRect)arg1;
- (long long)_acceptableRowBelowRow:(long long)arg1 maxRow:(long long)arg2;
- (long long)_acceptableRowAboveRow:(long long)arg1 minRow:(long long)arg2;
- (id)_cellForRow:(long long)arg1 browser:(id)arg2 browserColumn:(long long)arg3;
- (id)_browserColumnController;
- (void)_getBrowser:(id *)arg1 browserColumn:(long long *)arg2;
- (void)_setKeyCellFromBottom;
- (void)_setKeyCellFromTop;
- (void)_moveLeftWithEvent:(id)arg1;
- (void)_moveRightWithEvent:(id)arg1;
- (void)_moveUpWithEvent:(id)arg1;
- (void)_moveDownWithEvent:(id)arg1;
- (void)_changeSelectionWithEvent:(id)arg1;
- (BOOL)_changingSelectionWithKeyboard;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)selectPreviousKeyView:(id)arg1;
- (void)selectNextKeyView:(id)arg1;
- (void)_makeDownCellKey;
- (void)_makeUpCellKey;
- (void)_makeRightCellKey;
- (void)_makeLeftCellKey;
- (void)_makePreviousCellOrViewKey;
- (BOOL)_makePreviousCellKey;
- (void)_makeNextCellOrViewKey;
- (BOOL)_makeNextCellKey;
- (BOOL)_selectNextCellKeyStartingAtRow:(long long)arg1 column:(long long)arg2;
- (void)_selectKeyCellAtRow:(long long)arg1 column:(long long)arg2;
- (id)keyCell;
- (long long)__keyCol;
- (long long)__keyRow;
- (void)setKeyCell:(id)arg1;
- (void)_clearKeyCell;
- (void)_setKeyCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)_setKeyCellNeedsDisplay;
- (void)performClick:(id)arg1;
- (void)setTabKeyTraversesCells:(BOOL)arg1;
- (BOOL)tabKeyTraversesCells;
- (BOOL)acceptsFirstResponder;
- (BOOL)refusesFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)_shouldShowFirstResponderForCell:(id)arg1;
- (BOOL)_shouldShowFirstResponderAtRow:(long long)arg1 column:(long long)arg2 ignoringWindowKeyState:(BOOL)arg3;
- (void)_deselectAllExcept:(long long)arg1:(long long)arg2 andDraw:(BOOL)arg3;
- (id)_findFirstOne:(long long *)arg1:(long long *)arg2;
- (BOOL)_radioHit:(struct CGPoint)arg1 row:(long long *)arg2 col:(long long *)arg3;
- (BOOL)_loopHit:(struct CGPoint)arg1 row:(long long *)arg2 col:(long long *)arg3;
- (BOOL)_mouseHit:(struct CGPoint)arg1 row:(long long *)arg2 col:(long long *)arg3;
- (void)scrollCellToVisibleAtRow:(long long)arg1 column:(long long)arg2;
- (id)_scrollRowToCenter:(long long)arg1;
@property(getter=isAutoscroll) BOOL autoscroll;
- (void)_toolTipManagerWillRecomputeToolTipsByRemoving:(BOOL)arg1 adding:(BOOL)arg2;
- (void)drawContextMenuHighlightForCellIndexes:(id)arg1;
- (BOOL)_shouldDrawContextMenuHighlightForRow:(long long)arg1 column:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawCellAtRow:(long long)arg1 column:(long long)arg2 inFrame:(struct CGRect)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)_propagateDownNeedsDisplayInRect:(struct CGRect)arg1;
- (BOOL)_needsRedrawForMovement;
- (void)_drawRect:(struct CGRect)arg1 liveResizeFill:(struct CGRect)arg2:(struct CGRect)arg3:(struct CGRect)arg4:(struct CGRect)arg5 cacheCoveredArea:(struct CGRect)arg6;
- (void)_liveResizeHighlightSelectionInClipRect:(struct CGRect)arg1;
- (void)_getRowRange:(struct _NSRange *)arg1 andColumnRange:(struct _NSRange *)arg2 intersectingRect:(struct CGRect)arg3;
- (BOOL)_shouldAttemptIdleTimeDisposeOfLiveResizeCacheWithFrame:(struct CGRect)arg1;
- (BOOL)_wantsLiveResizeToUseCachedImage;
- (BOOL)_liveResizeImageCacheingEnabled;
- (void)_setLiveResizeImageCacheingEnabled:(BOOL)arg1;
- (BOOL)_needsRedrawBeforeFirstLiveResizeCache;
- (void)_setNeedsRedrawBeforeFirstLiveResizeCache:(BOOL)arg1;
- (BOOL)_selectFirstEnabledCell;
- (long long)_firstSelectableRow;
- (void)_removeAllCellMouseTracking;
- (void)_clearMouseTrackingForCell:(id)arg1;
- (void)_setMouseTrackingForCell:(id)arg1;
- (void)updateTrackingAreas;
- (void)highlightCell:(BOOL)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)_highlightCell:(BOOL)arg1 atRow:(long long)arg2 column:(long long)arg3 andDraw:(BOOL)arg4;
- (void)drawCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)_drawCellAt:(long long)arg1 col:(long long)arg2 insideOnly:(BOOL)arg3;
- (void)drawCellInside:(id)arg1;
- (void)updateCellInside:(id)arg1;
- (void)_updateCellImage:(id)arg1;
- (void)invalidateIntrinsicContentSizeForCell:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)_setNeedsDisplayForSelectedCells;
- (void)_getVisibleRowRange:(struct _NSRange *)arg1 columnRange:(struct _NSRange *)arg2;
- (void)_setNeedsDisplayInRow:(long long)arg1 column:(long long)arg2;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)drawCell:(id)arg1;
- (void)calcSize;
- (void)setValidateSize:(BOOL)arg1;
- (void)sizeToFit;
- (void)sizeToCells;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
@property BOOL autorecalculatesCellSize;
- (void)_autorecalculateCellSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)resetCursorRects;
- (void)_recursiveWindowDidEnableToolTipCreationAndDisplay;
- (void)_computeAllRevealovers;
- (void)viewDidEndLiveResize;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
@property BOOL autosizesCells;
- (void)setTag:(long long)arg1 target:(id)arg2 action:(SEL)arg3 atRow:(long long)arg4 column:(long long)arg5;
- (void)setAction:(SEL)arg1 atRow:(long long)arg2 column:(long long)arg3;
@property SEL doubleAction;
- (void)setTarget:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (BOOL)_shouldDelegateTargetActionForSelector:(SEL)arg1;
- (void)setTag:(long long)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (id)cellWithTag:(long long)arg1;
- (void)removeColumn:(long long)arg1;
- (void)insertColumn:(long long)arg1 withCells:(id)arg2;
- (void)_needsDisplayfromColumn:(long long)arg1;
- (void)insertColumn:(long long)arg1;
- (void)addColumnWithCells:(id)arg1;
- (void)addColumn;
- (void)removeRow:(long long)arg1;
- (void)insertRow:(long long)arg1 withCells:(id)arg2;
- (void)_needsDisplayfromRow:(long long)arg1;
- (void)insertRow:(long long)arg1;
- (void)addRowWithCells:(id)arg1;
- (void)addRow;
- (void)putCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)renewRows:(long long)arg1 columns:(long long)arg2;
- (void)_getRow:(long long *)arg1 column:(long long *)arg2 nearPoint:(struct CGPoint)arg3;
- (BOOL)getRow:(long long *)arg1 column:(long long *)arg2 forPoint:(struct CGPoint)arg3;
- (BOOL)getRow:(long long *)arg1 column:(long long *)arg2 ofCell:(id)arg3;
- (BOOL)_getRow:(long long *)arg1 andCol:(long long *)arg2 ofCell:(id)arg3 atRect:(const struct CGRect *)arg4;
- (id)_getDrawingRow:(long long *)arg1 andCol:(long long *)arg2;
- (struct CGRect)_boundsRectOccupiedByCells;
- (struct CGRect)cellFrameAtRow:(long long)arg1 column:(long long)arg2;
- (id)cellAtRow:(long long)arg1 column:(long long)arg2;
@property(readonly) long long numberOfColumns;
@property(readonly) long long numberOfRows;
- (void)getNumberOfRows:(long long *)arg1 columns:(long long *)arg2;
- (void)setState:(long long)arg1 atRow:(long long)arg2 column:(long long)arg3;
@property BOOL drawsCellBackground;
@property(copy) NSColor *cellBackgroundColor;
@property BOOL drawsBackground;
@property(copy) NSColor *backgroundColor;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setScrollable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
@property struct CGSize intercellSpacing;
@property struct CGSize cellSize;
@property(getter=isSelectionByRect) BOOL selectionByRect;
- (BOOL)selectCellWithTag:(long long)arg1;
- (void)selectCell:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)_selectAllNoRecurse:(id)arg1;
- (void)selectCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)deselectAllCells;
- (void)deselectSelectedCell;
- (BOOL)_clearSelectedCell;
@property(readonly) long long selectedColumn;
@property(readonly) long long selectedRow;
@property(readonly, copy) NSArray *selectedCells;
@property(readonly) NSCell *selectedCell;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
@property(readonly, copy) NSArray *cells;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forAllCells:(BOOL)arg3;
@property BOOL allowsEmptySelection;
- (id)allowEmptySel:(BOOL)arg1;
@property unsigned long long mode;
- (BOOL)isR2L;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (id)makeCellAtRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_containedInSingleColumnClipView;
@property(copy) NSCell *prototype;
@property Class cellClass;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 prototype:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initialize:(long long)arg1:(long long)arg2:(long long)arg3;
- (void)_maintainCell;
- (void)_setSelectedCell:(id)arg1;
- (void)_setSelectedCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)_setFont:(id)arg1 forCell:(id)arg2;
- (void)_allocAndInitPrivateIvars;
- (void)setErrorAction:(SEL)arg1;
- (SEL)errorAction;
- (BOOL)_isAccessibilityTopLevelNavigatorSectionCandidate;
- (BOOL)_isAccessibilityContentNavigatorSectionCandidate;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (void)accessibilitySetFocus:(id)arg1 forChild:(id)arg2;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilityVisibleChildrenAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (void)accessibilitySetSelectedChildrenAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (id)accessibilitySelectedChildrenAttribute;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (id)accessibilityChildrenAttribute;
- (id)accessiblityChildCells;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)_accessibilityLoadBrowserCellsAtRow:(long long)arg1 count:(long long)arg2;
- (id)_accessibilityCorrectlyParentedCells:(id)arg1;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)_accessibilityIsRadioGroup;
- (id)accessibilityCurrentEditorForCell:(id)arg1;

@end

