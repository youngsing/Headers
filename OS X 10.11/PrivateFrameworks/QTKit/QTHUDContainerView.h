//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface QTHUDContainerView : NSView
{
    struct {
        unsigned int leftEdgeRounded:1;
        unsigned int rightEdgeRounded:1;
        unsigned int style:1;
        unsigned int reserved:29;
    } _internal;
}

- (void)setRightEdgeRounded:(BOOL)arg1;
- (BOOL)isRightEdgeRounded;
- (void)setLeftEdgeRounded:(BOOL)arg1;
- (BOOL)isLeftEdgeRounded;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
