//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

__attribute__((visibility("hidden")))
@interface ABNoteTextView : NSTextView
{
    BOOL _needsCardViewBorderDrawing;
}

@property(nonatomic) BOOL needsCardViewBorderDrawing; // @synthesize needsCardViewBorderDrawing=_needsCardViewBorderDrawing;
- (struct CGSize)intrinsicContentSize;
- (BOOL)resignFirstResponder;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)becomeFirstResponder;
- (BOOL)allowsVibrancy;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;

@end

