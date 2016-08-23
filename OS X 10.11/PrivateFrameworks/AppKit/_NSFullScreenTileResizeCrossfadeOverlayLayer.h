//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSMutableArray, _NSFullScreenTileResizeCrossfadeOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileResizeCrossfadeOverlayLayer : CALayer
{
    unsigned long long _tileID;
    unsigned long long _parentSpaceID;
    _NSFullScreenTileResizeCrossfadeOverlayWindow *_window;
    BOOL _active;
    NSMutableArray *_windowLayers;
    CALayer *_windowContentLayer;
}

- (unsigned long long)tileID;
- (void)addWindowWithID:(unsigned int)arg1;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 tileFrame:(struct CGRect)arg3 window:(id)arg4;
- (void)dealloc;

@end

