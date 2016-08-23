//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CJKCandidateController, CJKCandidateUnitView, NSPopover, NSTimer, NSURL, WebView;

@interface CJKCandidatePopoverController : NSObject
{
    CJKCandidateController *_controller;
    NSPopover *_popover;
    WebView *_webView;
    CJKCandidateUnitView *_descriptionTargetView;
    NSURL *_stylesheetURL;
    NSTimer *_popoverTimer;
}

@property(retain, nonatomic) NSTimer *popoverTimer; // @synthesize popoverTimer=_popoverTimer;
@property(retain, nonatomic) NSURL *stylesheetURL; // @synthesize stylesheetURL=_stylesheetURL;
@property(retain, nonatomic) CJKCandidateUnitView *descriptionTargetView; // @synthesize descriptionTargetView=_descriptionTargetView;
- (void)hide;
- (void)_setupWebview;
- (void)_setupPopover;
- (void)_hidePopover;
- (void)_showPopover;
- (void)stopPopoverShowTimer;
- (void)startPopoverShowTimerWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
