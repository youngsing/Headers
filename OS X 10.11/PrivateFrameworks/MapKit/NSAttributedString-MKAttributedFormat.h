//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MKAttributedFormat)
+ (void)_handleFormattingError:(id)arg1 forString:(id)arg2;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 defaultReplacementAttributes:(id)arg3 startTokenDelimiter:(id)arg4 endTokenDelimiter:(id)arg5 error:(id *)arg6;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 startTokenDelimiter:(id)arg3 endTokenDelimiter:(id)arg4 error:(id *)arg5;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 error:(id *)arg3;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 error:(id *)arg2;
@end

