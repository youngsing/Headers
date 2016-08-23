//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSAttributedString, NSDictionary, NSString;

@protocol IMKTextInput
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (NSString *)stringFromRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (NSString *)uniqueClientIdentifierString;
- (BOOL)supportsProperty:(unsigned int)arg1;
- (int)windowLevel;
- (NSString *)bundleIdentifier;
- (BOOL)supportsUnicode;
- (void)selectInputMode:(NSString *)arg1;
- (void)overrideKeyboardWithKeyboardNamed:(NSString *)arg1;
- (NSArray *)validAttributesForMarkedText;
- (NSDictionary *)attributesForCharacterIndex:(unsigned long long)arg1 lineHeightRectangle:(struct CGRect *)arg2;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 tracking:(long long)arg2 inMarkedRange:(char *)arg3;
- (long long)length;
- (NSAttributedString *)attributedSubstringFromRange:(struct _NSRange)arg1;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)setMarkedText:(id)arg1 selectionRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
@end

