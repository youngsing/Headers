//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    _Bool mShowThousandsSeparator;
    _Bool mUseAccountingStyle;
    _Bool mRequiresFractionReplacement;
    _Bool mIsConditional;
    _Bool mFormatContainsIntegerToken;
    _Bool mIsComplexFormat;
    unsigned short mCurrencyCodeIndex;
    int mFractionAccuracy;
    NSString *mFormatString;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    double mScaleFactor;
}

+ (id)customFormatData;
@property(nonatomic) _Bool isComplexFormat; // @synthesize isComplexFormat=mIsComplexFormat;
@property(nonatomic) _Bool formatContainsIntegerToken; // @synthesize formatContainsIntegerToken=mFormatContainsIntegerToken;
@property(nonatomic) _Bool isConditional; // @synthesize isConditional=mIsConditional;
@property(nonatomic) _Bool requiresFractionReplacement; // @synthesize requiresFractionReplacement=mRequiresFractionReplacement;
@property(nonatomic) _Bool useAccountingStyle; // @synthesize useAccountingStyle=mUseAccountingStyle;
@property(nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=mShowThousandsSeparator;
@property(nonatomic) unsigned short currencyCodeIndex; // @synthesize currencyCodeIndex=mCurrencyCodeIndex;
@property(nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; // @synthesize totalNumberOfDecimalPlaceholdersInFormat=mTotalNumberOfDecimalPlaceholdersInFormat;
@property(nonatomic) unsigned char numberOfHashDecimalPlaceholders; // @synthesize numberOfHashDecimalPlaceholders=mNumberOfHashDecimalPlaceholders;
@property(nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; // @synthesize indexFromRightOfLastDigitPlaceholder=mIndexFromRightOfLastDigitPlaceholder;
@property(nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; // @synthesize numberOfNonSpaceDecimalPlaceholderDigits=mNumberOfNonSpaceDecimalPlaceholderDigits;
@property(nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; // @synthesize numberOfNonSpaceIntegerPlaceholderDigits=mNumberOfNonSpaceIntegerPlaceholderDigits;
@property(nonatomic) unsigned char decimalWidth; // @synthesize decimalWidth=mDecimalWidth;
@property(nonatomic) unsigned char minimumIntegerWidth; // @synthesize minimumIntegerWidth=mMinimumIntegerWidth;
@property(nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=mFractionAccuracy;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=mScaleFactor;
@property(copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes; // @synthesize interstitialStringInsertionIndexes=mInterstitialStringInsertionIndexes;
@property(copy, nonatomic) NSArray *interstitialStrings; // @synthesize interstitialStrings=mInterstitialStrings;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=mFormatString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)p_copySelfTo:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCustomFormatData:(id)arg1;

@end

