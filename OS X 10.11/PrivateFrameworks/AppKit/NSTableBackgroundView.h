//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSGradient, NSImage, NSTableView;

__attribute__((visibility("hidden")))
@interface NSTableBackgroundView : NSView
{
    NSColor *_firstAlternatingColor;
    NSColor *_secondAlternatingColor;
    NSTableView *_tableView;
    NSImage *_backgroundImage;
    NSGradient *_gradient;
    struct CGSize _cachedSize;
    BOOL _isOpaque;
    BOOL _shouldDrawVerticalGrid;
    BOOL _forRubberBanding;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property BOOL forRubberBanding; // @synthesize forRubberBanding=_forRubberBanding;
@property BOOL shouldDrawVerticalGrid; // @synthesize shouldDrawVerticalGrid=_shouldDrawVerticalGrid;
@property(retain) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSColor *secondAlternatingColor; // @synthesize secondAlternatingColor=_secondAlternatingColor;
@property(retain) NSColor *firstAlternatingColor; // @synthesize firstAlternatingColor=_firstAlternatingColor;
- (void)setLayer:(id)arg1;
- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_canDisableBaseVibrancy;
- (void)_drawAlternatingBackgroundAndGridInRect:(struct CGRect)arg1;
- (void)_callPublicDrawBackground:(BOOL)arg1 drawGrid:(BOOL)arg2 inRect:(struct CGRect)arg3;
- (void)_drawRect:(struct CGRect)arg1 inTableCoordsWithHandler:(CDUnknownBlockType)arg2;
- (void)_drawVerticalGridInDirtyRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_drawGradientBackground;
@property(getter=isOpaque) BOOL opaque; // @dynamic opaque;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

