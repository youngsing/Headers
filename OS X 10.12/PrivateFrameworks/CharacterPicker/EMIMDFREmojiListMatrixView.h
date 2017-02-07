//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CharacterPicker/NSAccessibilityGroup-Protocol.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EMIMDFREmojiListMatrixView : NSView <NSAccessibilityGroup>
{
    BOOL _nonPurgeableCache;
    long long _categoryIndex;
    long long _characterCount;
    long long _highlightedCharacterIndex;
    NSArray *_cachedCharacters;
    NSMutableArray *_emojiAccessibilityElements;
}

@property(retain) NSMutableArray *emojiAccessibilityElements; // @synthesize emojiAccessibilityElements=_emojiAccessibilityElements;
@property BOOL nonPurgeableCache; // @synthesize nonPurgeableCache=_nonPurgeableCache;
@property(retain) NSArray *cachedCharacters; // @synthesize cachedCharacters=_cachedCharacters;
@property long long highlightedCharacterIndex; // @synthesize highlightedCharacterIndex=_highlightedCharacterIndex;
@property long long characterCount; // @synthesize characterCount=_characterCount;
@property long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)_characters;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)refresh;
- (void)highlightCharacterAtIndex:(long long)arg1;
- (struct CGRect)cellFrameForCharacterIndex:(long long)arg1;
- (long long)characterIndexAtLocation:(double)arg1;
- (id)characterAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithCharacters:(id)arg1;
- (id)initWithCategoryIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
