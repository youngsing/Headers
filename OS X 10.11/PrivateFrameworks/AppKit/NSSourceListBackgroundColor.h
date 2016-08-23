//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCatalogColor.h>

@class NSColor;

@interface NSSourceListBackgroundColor : NSCatalogColor
{
    NSColor *_activeColor;
    NSColor *_inactiveColor;
}

+ (id)inactiveColor;
+ (id)activeColor;
+ (id)inactiveGradient;
+ (id)activeGradient;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (id)colorUsingColorSpaceName:(id)arg1;
- (id)_legacyCurrentDisplayColor;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (void)drawSwatchInRect:(struct CGRect)arg1;
- (BOOL)isUniform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_currentDisplayColor;
- (void)dealloc;
- (BOOL)_isSourceListColor;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3;
- (id)init;

@end

