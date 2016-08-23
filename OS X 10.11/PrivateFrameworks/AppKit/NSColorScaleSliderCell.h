//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSBitmapImageRep, NSColor;

@interface NSColorScaleSliderCell : NSSliderCell
{
    int _scaleType;
    NSBitmapImageRep *_scaleBitmap;
    BOOL _scaleBitmapValid;
    NSColor *_scaleColor;
    BOOL _flippedHorizontally;
}

- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setColor:(id)arg1;
- (void)setDrawsTrackAsColorScaleType:(int)arg1;
- (BOOL)isOpaque;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
- (void)drawTickMarks;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (void)_computeColorScaleIfNecessaryWithSize:(struct CGSize)arg1;
@property BOOL flippedHorizontally;

@end

