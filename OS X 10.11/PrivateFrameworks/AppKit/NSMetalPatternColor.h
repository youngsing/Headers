//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPatternColor.h>

@interface NSMetalPatternColor : NSPatternColor
{
    void *_pattern;
    struct CGRect _windowBounds;
    unsigned long long _style;
    double _topHeight;
    double _bottomHeight;
}

- (void)finalize;
- (void)dealloc;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)patternImage;
- (void)_setStyleForMetal:(unsigned long long)arg1;
- (void)_resizeForMetal:(struct CGRect)arg1 style:(unsigned long long)arg2 topHeight:(double)arg3 bottomHeight:(double)arg4;
- (id)initForMetal:(struct CGRect)arg1 style:(unsigned long long)arg2 topHeight:(double)arg3 bottomHeight:(double)arg4;

@end

