//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol MTLDevice;

@interface CAMetalLayer : CALayer
{
    struct _CAMetalLayerPrivate *_priv;
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property BOOL presentsWithTransaction;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)newDrawable;
- (id)nextDrawable;
@property struct CGColorSpace *colorspace;
@property BOOL framebufferOnly;
@property unsigned long long pixelFormat;
@property struct CGSize drawableSize;
@property(retain) id <MTLDevice> device;
- (id)init;
- (void)finalize;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
@property unsigned long long maximumDrawableCount;

// Remaining properties
@property BOOL wantsExtendedDynamicRangeContent; // @dynamic wantsExtendedDynamicRangeContent;

@end

