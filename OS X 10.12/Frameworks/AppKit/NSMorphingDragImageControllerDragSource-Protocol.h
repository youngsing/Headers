//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSMorphingDragImageController, NSWindow;

@protocol NSMorphingDragImageControllerDragSource <NSObject>

@optional
- (NSWindow *)dragDestinationWindowForMorphingDragImage:(NSMorphingDragImageController *)arg1;
- (void)morphingDragImage:(NSMorphingDragImageController *)arg1 wasDroppedAtPointOnScreen:(struct CGPoint)arg2;
- (void)morphingDragImage:(NSMorphingDragImageController *)arg1 movedToPointOnScreen:(struct CGPoint)arg2;
@end

