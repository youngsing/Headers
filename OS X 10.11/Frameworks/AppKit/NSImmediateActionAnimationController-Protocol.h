//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSImmediateActionGestureRecognizer;

@protocol NSImmediateActionAnimationController <NSObject>

@optional
- (void)recognizerDidDismissAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCompleteAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCancelAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidUpdateAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerWillBeginAnimation:(NSImmediateActionGestureRecognizer *)arg1;
@end

