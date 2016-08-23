//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBezierPath, NSColor, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AUHistoryView : NSView
{
    NSColor *graphFillColor;
    NSColor *graphBorderColor;
    NSColor *graphPeaksColor;
    NSColor *graphLinesColor;
    float historySeconds;
    float refreshRate;
    unsigned int displayStyle;
    NSMutableArray *values;
    float minValue;
    float maxValue;
    BOOL displayOnBlack;
    NSBezierPath *graphPath;
}

@property(retain) NSColor *graphLinesColor; // @synthesize graphLinesColor;
@property(retain) NSColor *graphPeaksColor; // @synthesize graphPeaksColor;
@property(retain) NSColor *graphBorderColor; // @synthesize graphBorderColor;
@property(retain) NSColor *graphFillColor; // @synthesize graphFillColor;
- (BOOL)isOpaque;
- (void)addValue:(float)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (double)lineLocationForIndex:(double)arg1;
- (void)setDisplayStyle:(unsigned int)arg1;
@property float refreshRate; // @synthesize refreshRate;
- (void)setHistory:(float)arg1;
- (void)updateValuesArray:(float)arg1;
- (void)setGraphRange:(float)arg1 max:(float)arg2;
@property BOOL displayOnBlack; // @synthesize displayOnBlack;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

