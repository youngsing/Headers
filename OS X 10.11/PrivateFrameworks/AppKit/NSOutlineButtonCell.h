//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSOutlineView;

__attribute__((visibility("hidden")))
@interface NSOutlineButtonCell : NSButtonCell
{
    BOOL _isSourceList;
    BOOL _isGroupRow;
    NSOutlineView *_outlineView;
}

@property(nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) BOOL isGroupRow; // @synthesize isGroupRow=_isGroupRow;
@property(nonatomic) BOOL isSourceList; // @synthesize isSourceList=_isSourceList;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)_fillBackground:(struct CGRect)arg1 withAlternateColor:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)_updateTitle;
- (id)_textAttributes;
- (void)_addSourceListAttributes:(id)arg1 darkBackground:(BOOL)arg2;
- (void)_addLegacySourceListAttributes:(id)arg1 darkBackground:(BOOL)arg2;
- (BOOL)_hasRolloverContentArt;
- (BOOL)_shouldUseStyledTextInView:(id)arg1;

@end

