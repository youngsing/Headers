//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebTiledBackingLayer : CALayer
{
    struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController>> _tileController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderColor:(struct CGColor *)arg1;
- (void)invalidate;
- (struct TiledBacking *)tiledBacking;
- (double)contentsScale;
- (void)setContentsScale:(double)arg1;
- (_Bool)acceleratesDrawing;
- (void)setAcceleratesDrawing:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (_Bool)isOpaque;
- (void)setOpaque:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)actionForKey:(id)arg1;
- (struct TileController *)createTileController:(struct PlatformCALayer *)arg1;
- (id)initWithLayer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
