//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@interface SHKCompletionTableView : NSTableView
{
    BOOL _lastMousePositionWasOverList;
}

- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (long long)_rowFromMouseEvent:(id)arg1;
- (void)_performCancelForCell:(id)arg1;
- (void)_performClickForCell:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

