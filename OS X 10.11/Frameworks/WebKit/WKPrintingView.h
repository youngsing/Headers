//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSPrintOperation, NSTimer;

__attribute__((visibility("hidden")))
@interface WKPrintingView : NSView
{
    NSPrintOperation *_printOperation;
    struct RetainPtr<NSView> _wkView;
    struct RefPtr<WebKit::WebFrameProxy> _webFrame;
    struct Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow, 16> _printingPageRects;
    double _totalScaleFactorForPrinting;
    struct HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap>>> _pagePreviews;
    struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> _printedPagesData;
    struct RetainPtr<PDFDocument> _printedPagesPDFDocument;
    unsigned long long _expectedComputedPagesCallback;
    struct HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect>> _expectedPreviewCallbacks;
    unsigned long long _latestExpectedPreviewCallback;
    unsigned long long _expectedPrintCallback;
    BOOL _isPrintingFromSecondaryThread;
    struct mutex _printingCallbackMutex;
    struct condition_variable _printingCallbackCondition;
    NSTimer *_autodisplayResumeTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endDocument;
- (void)beginDocument;
- (struct CGPoint)locationOfPrintRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (void)drawPageBorderWithSize:(struct CGSize)arg1;
- (void)_drawPageBorderWithSizeOnMainThread:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawPreview:(struct CGRect)arg1;
- (void)_drawPDFDocument:(id)arg1 page:(unsigned int)arg2 atPoint:(struct CGPoint)arg3;
- (unsigned int)_pageForRect:(struct CGRect)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (BOOL)_askPageToComputePageRects;
- (void)_preparePDFDataForPrintingOnSecondaryThread;
- (unsigned long long)_expectedPreviewCallbackForRect:(const struct IntRect *)arg1;
- (unsigned long long)_lastPrintedPageNumber;
- (unsigned long long)_firstPrintedPageNumber;
- (BOOL)_hasPageRects;
- (void)_updatePreview;
- (BOOL)_isPrintingPreview;
- (void)_adjustPrintingMarginsForHeaderAndFooter;
- (void)_delayedResumeAutodisplay;
- (void)_delayedResumeAutodisplayTimerFired;
- (void)_suspendAutodisplay;
- (void)_setAutodisplay:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrameProxy:(struct WebFrameProxy *)arg1 view:(id)arg2;

@end

