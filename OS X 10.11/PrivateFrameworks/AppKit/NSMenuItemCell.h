//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSMenuItem;

@interface NSMenuItemCell : NSButtonCell
{
    id _extraData;
    struct CGSize _stateImageSize;
    struct CGSize _imageSize;
    struct CGSize _titleSize;
    struct CGSize _size;
    struct __micFlags {
        unsigned int needsSizing:1;
        unsigned int reserved:1;
        unsigned int needsDisplay:1;
        unsigned int keyEquivGlyphWidth:16;
        unsigned int uniqueAgainstMain:1;
        unsigned int RESERVED:12;
    } _micFlags;
}

+ (void)_systemColorsChanged:(id)arg1;
+ (id)_dimmedImage:(id)arg1;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)initialize;
- (void)setBordered:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (long long)state;
- (id)image;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
@property long long tag; // @dynamic tag;
- (unsigned long long)mnemonicLocation;
- (id)title;
- (id)_highlightTextColor;
- (id)_highlightColor;
- (BOOL)isOpaque;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawKeyEquivalentWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)keyEquivalentAttributedString;
- (struct _NSRange)_characterRangeForPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawStateImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSeparatorItemWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_separatorRectForCellFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (struct CGRect)keyEquivalentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)stateImageRectForBounds:(struct CGRect)arg1;
- (void)_resetMeasuredCell;
- (struct CGRect *)_rectsForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (short)_keyEquivalentGlyphWidth;
@property(readonly) double keyEquivalentWidth;
@property(readonly) double titleWidth;
@property(readonly) double imageWidth;
@property(readonly) double stateImageWidth;
- (void)calcSize;
- (struct CGSize)_borderInset;
- (BOOL)_obeysHiddenBit;
@property BOOL needsDisplay;
@property BOOL needsSizing;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (id)_specialControlView;
@property(retain) NSMenuItem *menuItem;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)_sharedTextCell;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initImageCell:(id)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;

@end

