//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface ABOverlayView : NSView
{
    NSView *_overlaidView;
}

@property(retain) NSView *overlaidView; // @synthesize overlaidView=_overlaidView;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isOverlayDrawingNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (id)constraintsAttachingOverlayToOverlaidView;
- (id)effectiveOverlaidView;
- (void)dealloc;

@end

