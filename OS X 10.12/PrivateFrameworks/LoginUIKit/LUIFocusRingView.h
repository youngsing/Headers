//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSBitmapImageRep;

@interface LUIFocusRingView : NSView
{
    NSView *_focusedView;
    NSBitmapImageRep *_focusRingImageRep;
}

+ (void)showForView:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)_focusRingImageRepForView:(id)arg1;
- (void)setFocusedView:(id)arg1;

@end

