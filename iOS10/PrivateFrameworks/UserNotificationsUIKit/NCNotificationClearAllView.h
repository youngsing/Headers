//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface NCNotificationClearAllView : UIView
{
    UILabel *_clearAllLabel;
    CDUnknownBlockType _clearAllHandler;
}

- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToSuperview;
- (id)initWithClearAllHandler:(CDUnknownBlockType)arg1;

@end

