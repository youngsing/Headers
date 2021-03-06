//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class PKPassViewController;

@interface PKPassScrollView : NSScrollView
{
    BOOL _scrollEnabled;
    BOOL _disregardFurtherScrolling;
    BOOL _inMomentumScrolling;
    PKPassViewController *_selectedViewController;
}

@property(retain) PKPassViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(readonly) BOOL inMomentumScrolling; // @synthesize inMomentumScrolling=_inMomentumScrolling;
@property BOOL disregardFurtherScrolling; // @synthesize disregardFurtherScrolling=_disregardFurtherScrolling;
@property BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;

@end

