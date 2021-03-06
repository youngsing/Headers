//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableHeaderView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TableHeaderView : NSTableHeaderView
{
    NSDictionary *_referenceColumnWidths;
    BOOL _noSeparatorLines;
}

+ (id)updateHeaderViewForTableView:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_drawingEndSeparator;
- (void)setDrawsSeparatorLines:(BOOL)arg1;
- (BOOL)drawsSeparatorLines;
- (id)referenceColumnWidths;
- (void)resetReferenceColumnWidths;
- (void)mouseDown:(id)arg1;
- (void)setReferenceColumnWidths:(id)arg1;

@end

