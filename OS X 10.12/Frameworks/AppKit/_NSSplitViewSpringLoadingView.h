//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface _NSSplitViewSpringLoadingView : NSView
{
    CDUnknownBlockType _springLoadingHandler;
    CDUnknownBlockType _canSpringLoadHandler;
    long long _orientation;
    BOOL _didSpringLoad;
}

@property(copy) CDUnknownBlockType canSpringLoadHandler; // @synthesize canSpringLoadHandler=_canSpringLoadHandler;
@property(copy) CDUnknownBlockType springLoadingHandler; // @synthesize springLoadingHandler=_springLoadingHandler;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)_unSpringLoad;
- (void)_springLoad;
- (void)draggingEnded:(id)arg1;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property long long orientation;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (BOOL)_canSpringLoad;
- (BOOL)isOpaque;
- (BOOL)shouldBeArchived;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

