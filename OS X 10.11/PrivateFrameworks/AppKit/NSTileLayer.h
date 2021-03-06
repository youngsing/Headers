//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface NSTileLayer : CALayer
{
    unsigned int _isVisibleTile:1;
    unsigned int _ignoreLayoutCall:1;
    unsigned int _purged:1;
    unsigned int _contentsAreInvalid:1;
}

- (BOOL)NS_hasPrefetchedContents;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (BOOL)NS_contentsAligningEnabled;
- (void)setNeedsLayout;
- (void)NS_setVisibleTile:(BOOL)arg1;
- (void)NS_setPurged:(BOOL)arg1;
- (BOOL)NS_isPurged;
- (void)visibleTileStateChanged;
- (BOOL)NS_isVisibleTile;
- (id)init;

@end

