//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSMutableDictionary, _NSTiledLayer;

__attribute__((visibility("hidden")))
@interface NSTileScrollingInfoLayer : CALayer
{
    _NSTiledLayer *_tileLayer;
    NSMutableDictionary *_tiles;
    CALayer *_coverageRectLayer;
    CALayer *_activeRectLayer;
}

@property _NSTiledLayer *tileLayer; // @synthesize tileLayer=_tileLayer;
- (void)layoutSublayers;
- (void)_updateTileRepresentation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)display;
- (void)dealloc;
- (id)init;

@end

