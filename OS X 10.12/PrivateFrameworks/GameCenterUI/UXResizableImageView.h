//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface UXResizableImageView : NSView
{
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)setContentScaleFactor:(double)arg1;
- (double)contentScaleFactor;
- (void)_setContentStretchInPixels:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
