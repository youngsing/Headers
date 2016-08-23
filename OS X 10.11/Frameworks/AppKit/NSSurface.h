//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCGSWindowLegacySurface, NSGraphicsContext, NSView, NSWindow;

@interface NSSurface : NSObject
{
    NSView *_view;
    NSWindow *_window;
    struct CGRect _frame;
    NSCGSWindowLegacySurface *_surface;
    unsigned int _surfaceID;
    unsigned int _backingStore;
    int _saveWeighting;
    NSGraphicsContext *_graphicsContext;
    int _focused;
    struct {
        unsigned int opaque:1;
        unsigned int orderedIn:1;
        unsigned int ordersOutWhileAlphaValueIsZero:1;
        unsigned int deferSync:1;
        unsigned int needsDisplay:1;
        unsigned int reserved:27;
    } _sFlags;
    int _lastScreenNumber;
    double _lastResolution;
    double _alphaValue;
    double _backgroundBlurRadius;
}

- (void)displayIfNeeded;
- (void)setNeedsDisplay;
- (BOOL)needsDisplay;
- (void)flushWithOptions:(unsigned long long)arg1;
- (void)flush;
- (void)unlockFocus;
- (void)lockFocus;
- (BOOL)lockFocusIfCanDraw;
- (BOOL)isFocused;
- (int)saveWeighting;
- (void)setSaveWeighting:(int)arg1;
- (BOOL)isVisible;
- (BOOL)isOrderedIn;
- (void)setBackgroundBlurRadius:(double)arg1;
- (double)backgroundBlurRadius;
- (double)alphaValue;
- (void)setAlphaValue:(double)arg1;
- (void)setOrdersOutWhileAlphaValueIsZero:(BOOL)arg1;
- (BOOL)ordersOutWhileAlphaValueIsZero;
- (void)updateOrderingForAlphaValue;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)deferSync;
- (void)setDeferSync:(BOOL)arg1;
- (void)clearBackingStore;
- (BOOL)hasBackingStore;
- (id)view;
- (void)setView:(id)arg1;
- (id)window;
- (void)_windowDidMove:(id)arg1;
- (void)_surfaceDidChangeScreen;
- (void)_windowDidChangeWindowNumber:(id)arg1;
- (void)_windowDidChangeScreens:(id)arg1;
- (void)_windowDidComeBack:(id)arg1;
- (void)_windowWillGoAway:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (id)screen;
- (void)setWindow:(id)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (double)_cgScaleFactor;
- (unsigned int)surfaceID;
- (void)orderSurface:(long long)arg1 relativeTo:(id)arg2;
- (void)orderOut;
- (void)orderBack;
- (void)orderFront;
- (void)_configureAutoFlattening;
- (void)updateColorSpace;
- (void)syncToView:(BOOL)arg1;
- (void)syncToViewUnconditionally;
- (struct CGRect)_currentSurfaceFrame;
- (void)syncSurfaceWantsExtendedDynamicRange;
- (void)syncSurfaceResolution;
- (void)syncBackingStoreResolution;
- (void)finalize;
- (void)dealloc;
- (void)_disposeSurface;
- (void)_createSurface;
- (struct CGSRegionObject *)_createRoundedBottomRegionForRect:(struct CGRect)arg1;
- (void)_disposeBackingStore;
- (void)_createBackingStore;
- (void)_updateLastScreenNumber;
- (id)initWithFrame:(struct CGRect)arg1 inWindow:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)description;

@end

