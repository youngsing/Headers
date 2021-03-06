//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSMenuItem;

__attribute__((visibility("hidden")))
@interface CPKHorizontalPopupMenuCell : NSButtonCell
{
    unsigned long long _cellState;
    NSMenuItem *_associatedItem;
}

@property unsigned long long cellState; // @synthesize cellState=_cellState;
@property(retain) NSMenuItem *associatedItem; // @synthesize associatedItem=_associatedItem;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)init;

@end

