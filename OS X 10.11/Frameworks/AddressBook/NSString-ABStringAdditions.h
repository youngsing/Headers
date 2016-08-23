//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (ABStringAdditions)
+ (BOOL)abIsBlank:(id)arg1;
+ (id)abUniqueString;
- (struct _NSRange)_ab_entireRange;
- (BOOL)_ab_containsDiacritics;
- (BOOL)_ab_containsSubstring:(id)arg1;
- (void)abEnumerateCharactersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_abTrimmedString;
- (id)abSha1HashString;
- (BOOL)abIsBlank;
- (id)abNormalizedUID;
- (id)abUIDWithTableName:(id)arg1;
- (id)abWords;
- (id)abStringByRemovingPunctuation;
- (id)abStandardizedPhoneNumber;
- (id)_ab_stringByReplacingStrings:(id)arg1;
- (id)_ab_rangesOfStrings:(id)arg1;
- (id)abVCardDataRepresentation;
- (unsigned long long)abEndOfParagraphStartingAtIndex:(unsigned long long)arg1;
- (id)abCaseNormalizedCopy;
- (id)abNameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;
- (id)abNameComponentTokens;
- (id)abTokens;
@end

