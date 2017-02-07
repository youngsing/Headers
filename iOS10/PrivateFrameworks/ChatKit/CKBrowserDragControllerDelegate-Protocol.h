//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserDragManager, UIView;
@protocol CKBrowserItem;

@protocol CKBrowserDragControllerDelegate <NSObject>
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canPeelItem:(id)arg2;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canRotateItem:(id)arg2;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4 wasCancelled:(_Bool *)arg5;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (void)dragManager:(CKBrowserDragManager *)arg1 didDragItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3;
- (void)dragManager:(CKBrowserDragManager *)arg1 didBeginDraggingItem:(id)arg2;

@optional
- (_Bool (^)(struct CGPoint, double, double))commitBlockForItem:(UIView<CKBrowserItem> *)arg1;
@end
