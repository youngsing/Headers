//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSEvent, NSLayoutManager, NSTextAttachment, NSTextContainer, NSView;

@protocol NSTextAttachmentCell <NSObject>
@property NSTextAttachment *attachment;
- (struct CGRect)cellFrameForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (BOOL)trackMouse:(NSEvent *)arg1 inRect:(struct CGRect)arg2 ofView:(NSView *)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)wantsToTrackMouseForEvent:(NSEvent *)arg1 inRect:(struct CGRect)arg2 ofView:(NSView *)arg3 atCharacterIndex:(unsigned long long)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(NSView *)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(NSLayoutManager *)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(NSView *)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (BOOL)trackMouse:(NSEvent *)arg1 inRect:(struct CGRect)arg2 ofView:(NSView *)arg3 untilMouseUp:(BOOL)arg4;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(NSView *)arg3;
- (BOOL)wantsToTrackMouse;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(NSView *)arg2;
@end
