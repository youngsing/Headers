//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@interface NSFontPanelTableView : NSTableView
{
}

- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (BOOL)_wantsUserCancelledOperation;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;

@end
