//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSMutableCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithFormat:(id)arg1;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)string;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)pathWithComponents:(id)arg1;
+ (id)localizedNameOfStringEncoding:(unsigned long long)arg1;
+ (const unsigned long long *)availableStringEncodings;
+ (unsigned long long)defaultCStringEncoding;
+ (id)_web_stringRepresentationForBytes:(long long)arg1;
+ (unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id *)arg3 usedLossyConversion:(_Bool *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned long long *)arg2;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 usedEncoding:(unsigned long long *)arg4;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2 encoding:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)getExternalRepresentation:(id *)arg1 extendedAttributes:(id *)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id *)arg5;
- (id)displayableString;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubstringsInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)paragraphRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (void)getParagraphStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (void)getLineStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4;
- (void)_getBlockStart:(unsigned long long *)arg1 end:(unsigned long long *)arg2 contentsEnd:(unsigned long long *)arg3 forRange:(struct _NSRange)arg4 stopAtLineSeparators:(_Bool)arg5;
- (id)stringByApplyingTransform:(id)arg1 reverse:(_Bool)arg2;
- (id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2;
- (id)precomposedStringWithCompatibilityMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)precomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCanonicalMapping;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)capitalizedString;
- (id)lowercaseString;
- (id)uppercaseString;
- (_Bool)boolValue;
- (long long)integerValue;
- (long long)longLongValue;
- (int)intValue;
- (float)floatValue;
- (double)doubleValue;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (struct _NSRange)localizedStandardRangeOfString:(id)arg1;
- (_Bool)localizedStandardContainsString:(id)arg1;
- (_Bool)localizedCaseInsensitiveContainsString:(id)arg1;
- (_Bool)containsString:(id)arg1;
- (_Bool)localizedHasSuffix:(id)arg1;
- (_Bool)localizedHasPrefix:(id)arg1;
- (_Bool)hasSuffix:(id)arg1;
- (_Bool)hasPrefix:(id)arg1;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)rangeOfComposedCharacterSequencesForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1;
- (long long)localizedStandardCompare:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)quotedStringRepresentation;
- (id)_stringRepresentation;
- (_Bool)_isCString;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (id)init;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
- (id)variantFittingPresentationWidth:(long long)arg1;
- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (unsigned int)_fastestEncodingInCFStringEncoding;
- (unsigned int)_smallestEncodingInCFStringEncoding;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (unsigned long long)_cfTypeID;
- (id)stringByConvertingURLToPath;
- (id)stringByConvertingPathToURL;
- (unsigned long long)completePathIntoString:(id *)arg1 caseSensitive:(_Bool)arg2 matchesIntoArray:(id *)arg3 filterTypes:(id)arg4;
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (const char *)fileSystemRepresentation;
- (id)stringsByAppendingPaths:(id)arg1;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)lastPathComponent;
- (_Bool)isAbsolutePath;
- (id)pathComponents;
- (_Bool)isNSString__;
- (id)propertyListFromStringsFileFormat;
- (id)propertyList;
- (id)formatConfiguration;
- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (_Bool)getBytes:(char *)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(_Bool)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (_Bool)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;
- (_Bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (const char *)lossyCString;
- (unsigned long long)cStringLength;
- (const char *)cString;
- (const char *)UTF8String;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)getCString:(char *)arg1 maxLength:(unsigned long long)arg2 range:(struct _NSRange)arg3 remainingRange:(struct _NSRange *)arg4;
- (unsigned long long)__graphemeCount;
- (id)stringByAddingPercentEscapes;
- (id)stringByRemovingPercentEscapes;
- (id)standardizedURLPath;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;
@property(readonly, copy) NSString *stringByRemovingPercentEncoding;
- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (CDStruct_5fe7aead)decimalValue;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;
- (id)_web_HTTPStyleLanguageCode;
- (unsigned int)_web_extractFourCharCode;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_URLFragment;
- (_Bool)_web_isFileURL;
- (_Bool)_web_looksLikeAbsoluteURL;
- (struct _NSRange)_web_rangeOfURLHost;
- (struct _NSRange)_web_rangeOfURLUserPasswordHostPort;
- (id)_web_fixedCarbonPOSIXPath;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByTrimmingWhitespace;
- (id)_web_domainFromHost;
- (_Bool)_web_domainMatches:(id)arg1;
- (_Bool)_web_hasCountryCodeTLD;
- (_Bool)_web_looksLikeIPAddress;
- (long long)_web_countOfString:(id)arg1;
- (_Bool)_web_hasCaseInsensitivePrefix:(id)arg1;
- (_Bool)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (_Bool)_web_isJavaScriptURL;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (struct _NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange)_web_rangeOfURLScheme_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(_Bool)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (_Bool)_getBytesAsData:(id *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (id)_getCharactersAsStringInRange:(struct _NSRange)arg1;
- (void)_flushRegularExpressionCaches;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;
- (struct _NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (struct _NSRange)significantText;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)__escapeString5991;
- (void)enumerateLinguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)linguisticTagsInRange:(struct _NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id *)arg5;

@end

