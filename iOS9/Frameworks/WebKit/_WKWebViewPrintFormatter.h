//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewPrintFormatter.h>

@class WKWebView, _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface _WKWebViewPrintFormatter : UIViewPrintFormatter
{
    double _totalScaleFactor;
    struct PrintInfo _printInfo;
    _WKFrameHandle *_frameToPrint;
}

@property(retain, nonatomic) _WKFrameHandle *frameToPrint; // @synthesize frameToPrint=_frameToPrint;
- (id).cxx_construct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
@property(readonly, nonatomic) WKWebView *webView;
- (void)dealloc;

@end

