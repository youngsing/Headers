//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSColorPickerPageableNameList, NSImage;

@interface NSColorPickerPageableNameListScrollView : NSScrollView
{
    NSColorPickerPageableNameList *picker;
    NSImage *_scrollerCaps;
    long long _partMouseDown;
    long long _arrowPlacement;
    long long _tint;
}

- (long long)_arrowPlacement;
- (long long)_partMouseDown;
- (void)pageUp:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;
- (void)drawScroller:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)reflectScrolledClipView:(id)arg1;
- (void)updateWithFocusRingForWindowKeyChange;
- (BOOL)isFirstAndKey;
- (id)colorList;
- (unsigned long long)pageCount;
- (BOOL)isPaged;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)timer:(id)arg1;
- (void)mouse:(id)arg1;
- (long long)partHit:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;
- (void)appearanceChanged:(id)arg1;
- (struct CGRect)rectForPart:(long long)arg1;
- (struct CGRect)scrollerRect;

@end
