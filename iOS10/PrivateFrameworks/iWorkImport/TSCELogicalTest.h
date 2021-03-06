//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, TSCERegexMatcher;

__attribute__((visibility("hidden")))
@interface TSCELogicalTest : NSObject
{
    int mOperation;
    struct TSCENumberValue mValue;
    NSString *mString;
    NSDate *mDate;
    TSCERegexMatcher *mMatcher;
    struct TSCEEvaluationContext *mEvaluationContext;
}

+ (id)logicalTestWithCriterion:(struct TSCEValue)arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)cost;
- (_Bool)isEqual:(id)arg1;
- (_Bool)compare:(struct TSCEValue)arg1 withContext:(struct TSCEEvaluationContext *)arg2;
- (int)criteriaParser:(id)arg1;
- (void)dealloc;
- (void)setRegexMatcher:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setString:(id)arg1;
- (id)description;
- (id)initWithCriterion:(struct TSCEValue)arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext *)arg3;

@end

