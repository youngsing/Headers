//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSBitmapImageRep, NSColor;

@protocol NSMagnifierWindowContentView <NSObject>
+ (struct CGSize)magnifierViewSize;
@property(retain) NSBitmapImageRep *contentImageRep;
- (void)setNextMode;
- (NSColor *)color;
- (double)magnifyingGlassRadius;
- (struct CGPoint)magnifyingGlassCenterPosition;
- (double)magnifiedPointsPerPixel;
@end

