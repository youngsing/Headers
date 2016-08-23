//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSMenuItem, NSString;

@interface _NSMenuServicesView : NSView
{
    NSString *_bundlePath;
    NSString *_categoryName;
    double _minimumWidths[3];
    double _actualWidths[3];
    double _categoryNameWidth;
    NSImage *_image;
    NSMenuItem *_explicitMenuItem;
    struct {
        unsigned int _shouldDrawCategoryArea:1;
        unsigned int _shouldDrawCategoryName:1;
        unsigned int _imageLoadHasBegun:1;
        unsigned int _imageIsLoaded:1;
        unsigned int _inDrawRect:1;
        unsigned int _isSpacer:1;
        unsigned int _isEditServicesItem:1;
        unsigned int _isNoServiceApplyItem:1;
        unsigned int _iconIsDefaultBrowser:1;
        unsigned int reserved:23;
    } _flags;
}

+ (void)initialize;
@property(retain, nonatomic) NSMenuItem *explicitMenuItem; // @synthesize explicitMenuItem=_explicitMenuItem;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawKeyEquivalentForItem:(id)arg1 inRect:(struct CGRect)arg2 highlighted:(BOOL)arg3 backgroundStyle:(long long)arg4 clipRect:(struct CGRect)arg5;
- (void)drawTitle:(id)arg1 inRect:(struct CGRect)arg2 highlighted:(BOOL)arg3 enabled:(BOOL)arg4 backgroundStyle:(long long)arg5 clipRect:(struct CGRect)arg6;
- (void)drawCategoryNameInRect:(struct CGRect)arg1 highlighted:(BOOL)arg2 backgroundStyle:(long long)arg3 clipRect:(struct CGRect)arg4;
- (void)drawImageInRect:(struct CGRect)arg1 backgroundStyle:(long long)arg2 clipRect:(struct CGRect)arg3;
- (void)loadedImage:(id)arg1;
- (void)setActualWidths:(const double *)arg1;
- (void)getMinimumWidths:(double *)arg1;
- (void)computeMinimumWidthsIfNecessary;
- (void)getMetrics:(struct NSMenuServicesViewMetrics *)arg1 forWidths:(const double *)arg2;
- (void)computeMinimumMetrics:(struct NSMenuServicesViewMetrics *)arg1;
- (double)roundUpForTextMeasurement:(double)arg1;
- (id)categoryAttributes;
- (id)highlightedCategoryAttributes;
- (id)categoryColor;
- (id)categoryHighlightColor;
- (id)getKeyEquivalentCellForItem:(id)arg1;
@property(copy, nonatomic) NSString *categoryName;
- (id)representingMenuItem;
- (BOOL)isFlipped;
- (id)title;
- (struct CGRect)flipHorizontallyIfNecessary:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL iconIsDefaultBrowser;
@property(nonatomic) BOOL shouldDrawCategoryArea;
@property(nonatomic) BOOL isNoServicesApplyItem;
@property(nonatomic) BOOL isEditServicesItem;
@property(nonatomic) BOOL isSpacer;
@property(nonatomic) BOOL shouldDrawCategoryName;

@end

