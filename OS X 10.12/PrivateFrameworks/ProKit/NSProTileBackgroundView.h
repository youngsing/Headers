//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProTile;

__attribute__((visibility("hidden")))
@interface NSProTileBackgroundView : NSView
{
    NSProTile *_tile;
}

- (id)ibNearestTargetForDrag;
- (BOOL)ibIsContainer;
- (void)updateSpacing;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTile:(id)arg1;
- (id)tile;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (unsigned long long)autoresizingMask;
- (void)dealloc;
- (id)initWithTile:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end
