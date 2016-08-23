//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSCell, NSTableHeaderView;

@interface NSTableHeaderCellView : NSView
{
    NSTableHeaderView *_tableHeaderView;
    NSCell *_cell;
    BOOL _selected;
}

@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain) NSCell *cell; // @synthesize cell=_cell;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;

@end

