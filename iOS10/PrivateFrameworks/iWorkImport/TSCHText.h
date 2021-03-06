//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUCache;

__attribute__((visibility("hidden")))
@interface TSCHText : NSObject
{
    TSUCache *mTSWPTextCache;
    TSUCache *mTSWPColumnCache;
    TSUCache *mNumberWidthCache;
    TSUCache *mDigitWidthFonts;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedText;
+ (id)_singletonAlloc;
- (struct __CTFont *)retainedCTFontForParagraphStyle:(id)arg1;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 viewScale:(double)arg4;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 range:(struct _NSRange)arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 viewScale:(double)arg5;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(double)arg6;
- (void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 wrapWidth:(double)arg4 atPosition:(struct CGPoint)arg5 range:(struct _NSRange)arg6 viewScale:(double)arg7;
- (void)drawAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 intoContext:(struct CGContext *)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(double)arg6;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3;
- (struct CGRect)frameForRange:(struct _NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(struct CGRect *)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4 checkNumberTemplates:(_Bool)arg5;
- (struct CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGSize)measureAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2 outErasableFrame:(struct CGRect *)arg3;
- (id)p_wpStorageForAttributedString:(struct __CFAttributedString *)arg1 paragraphStyle:(id)arg2;
- (struct CGSize)p_wpWidthForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2;
- (_Bool)p_styleSupportsEqualDigits:(id)arg1;
- (id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(_Bool)arg3 wrapWidth:(double)arg4;
- (id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(double)arg3;
- (id)p_wpTextForParagraphStyle:(id)arg1 textBlack:(_Bool)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

