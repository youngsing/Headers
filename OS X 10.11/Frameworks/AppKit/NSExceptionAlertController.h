//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSAttributedString, NSButton, NSView;

@interface NSExceptionAlertController : NSWindowController
{
    BOOL _showingDetails;
    NSAttributedString *_exceptionMessage;
    struct CGSize _previousSize;
    unsigned long long _expandedViewAutoresizingMask;
    NSView *_expandedView;
    NSButton *_btnShowDetails;
}

@property BOOL showingDetails; // @synthesize showingDetails=_showingDetails;
@property(copy) NSAttributedString *exceptionMessage; // @synthesize exceptionMessage=_exceptionMessage;
- (void)windowWillClose:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)btnShowDetailsClicked:(id)arg1;
- (void)btnClicked:(id)arg1;
- (long long)runModal;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

@end

