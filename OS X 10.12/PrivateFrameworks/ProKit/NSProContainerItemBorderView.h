//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProContainerItemView;

__attribute__((visibility("hidden")))
@interface NSProContainerItemBorderView : NSView
{
    NSProContainerItemView *_itemView;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isOpaque;
- (id)initWithItemView:(id)arg1;

@end

