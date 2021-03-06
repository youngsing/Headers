//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UIActivityIndicatorView, UIColor, UIImage, UIPDFAnnotationController, UIPDFDocument, UIPDFPage, UIPDFPageContentDelegate, UIPDFSearchHighlightsController, UIPDFSelectionController, UIPDFViewTouchHandler;
@protocol NSObject><UIPDFPageViewDelegate;

@interface UIPDFPageView : UIView
{
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIPDFViewTouchHandler *_touchHandler;
    struct CGAffineTransform _pageToViewTransform;
    struct CGAffineTransform _viewToPageTransform;
    struct CGRect _cropBox;
    double _margin;
    _Bool _allowSelection;
    UIPDFSelectionController *_selectionController;
    id <NSObject><UIPDFPageViewDelegate> _delegate;
    struct CGRect zoomRect;
    _Bool _useBackingLayer;
    CALayer *_backingLayer;
    UIImage *_backgroundImage;
    _Bool _backgroundIsScheduled;
    unsigned long long _backgroundScheduleCount;
    _Bool _backgroundIsFullResolution;
    _Bool _boundsChanged;
    _Bool _useTiledContent;
    _Bool _enableLightMemoryFootprint;
    CALayer *_contentLayer;
    CALayer *_effectsLayer;
    UIPDFPageContentDelegate *_contentDelegate;
    UIPDFAnnotationController *_annotationController;
    _Bool _scalePageOnDraw;
    struct CGColor *_highLightColor;
    _Bool _animateSetFrame;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _showActivityIndicator;
    UIColor *_backingLayerColor;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_highlights;
    double _cachedScale;
    _Bool _allowHighlighting;
    UIPDFSearchHighlightsController *_searchHighlightController;
    NSMutableArray *_searchHiglightLayers;
    UIPDFPage *_page;
    _Bool showAnnotations;
    _Bool _allowTwoFingerSelection;
    _Bool _showTextAnnotations;
    _Bool _showLinkAnnotationUnderline;
}

@property(nonatomic) _Bool showLinkAnnotationUnderline; // @synthesize showLinkAnnotationUnderline=_showLinkAnnotationUnderline;
@property(nonatomic) _Bool showTextAnnotations; // @synthesize showTextAnnotations=_showTextAnnotations;
@property(nonatomic) _Bool allowTwoFingerSelection; // @synthesize allowTwoFingerSelection=_allowTwoFingerSelection;
@property(readonly, nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) _Bool useBackingLayer; // @synthesize useBackingLayer=_useBackingLayer;
@property(nonatomic) _Bool showAnnotations; // @synthesize showAnnotations;
@property(retain, nonatomic) UIColor *backingLayerColor; // @synthesize backingLayerColor=_backingLayerColor;
@property(nonatomic) _Bool animateSetFrame; // @synthesize animateSetFrame=_animateSetFrame;
@property UIPDFSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) _Bool allowSelection; // @synthesize allowSelection=_allowSelection;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) id <NSObject><UIPDFPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool allowMenu; // @dynamic allowMenu;
- (void)suspendInstantTouchHighlighting;
@property(nonatomic) _Bool allowHighlighting; // @dynamic allowHighlighting;
- (void)addWidgetToSelection;
- (id)searchHighlightSelectionAt:(struct CGPoint)arg1;
- (_Bool)hasSearchHighlights;
- (void)clearSearchHighlights;
- (void)highlightSearchSelection:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
- (void)showSelection;
- (void)hideSelection;
@property(readonly) struct CGColor *highLightColor;
- (void)clearSelection;
- (void)displayContent;
- (struct CGRect)rectangleOfInterestAt:(struct CGPoint)arg1 kind:(int *)arg2;
- (struct CGRect)fitRect:(struct CGRect)arg1;
- (struct CGRect)fitWidth:(struct CGRect)arg1 atVertical:(double)arg2;
- (struct CGRect)convertRectFromPDFPageSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToPDFPageSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromPDFPageSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToPDFPageSpace:(struct CGPoint)arg1;
- (void)setTransforms;
- (_Bool)willDoSomethingWithTap:(struct CGPoint)arg1;
- (void)singleTapAt:(struct CGPoint)arg1;
- (void)twoFingerDoubleTapAt:(struct CGPoint)arg1;
- (void)doubleTapAt:(struct CGPoint)arg1;
- (void)ignoreTouches:(_Bool)arg1;
- (void)drawAnnotations:(struct CGContext *)arg1;
@property UIPDFPage *page; // @dynamic page;
- (void)addPage:(id)arg1;
- (void)layoutTextEffects;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (void)enableLightMemoryFootprint;
- (void)showContent;
- (void)stopActivityIndicator;
- (void)layoutSubviews;
- (id)createBackingLayer;
- (void)removeBackingLayer;
- (void)viewDidZoom:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)scheduleBackgroundImage;
@property(retain) UIImage *backgroundImage; // @dynamic backgroundImage;
- (void)willMoveToSuperview:(id)arg1;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
@property(readonly, retain) UIPDFDocument *document; // @dynamic document;
@property(readonly) unsigned long long pageIndex; // @dynamic pageIndex;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)initWithPageLimitedMemory:(id)arg1;
- (id)initWithPage:(id)arg1 tiledContent:(_Bool)arg2;
- (id)initWithPage:(id)arg1;
- (void)addLayers:(_Bool)arg1;
- (id)init;
- (struct CGPDFDictionary *)_annotForPoint:(struct CGPoint)arg1 rect:(struct CGRect *)arg2;

@end

