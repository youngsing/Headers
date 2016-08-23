//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSMapTable;

@interface QTHUDGroupView : NSView
{
    NSArray *_items;
    NSMapTable *_viewItemMap;
    struct __CFRunLoopObserver *_observer;
}

+ (BOOL)automaticallyNotifiesObserversOfItems;
+ (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)viewWillDraw;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (BOOL)needsLayout;
- (void)layoutSubviews;
- (struct CGRect)rectForItemAtIndex:(unsigned long long)arg1;
- (void)getRects:(struct CGRect *)arg1 forItemsAtIndexes:(id)arg2;
- (void)setItems:(id)arg1;
- (id)items;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

