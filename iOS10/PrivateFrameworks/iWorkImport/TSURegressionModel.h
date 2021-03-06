//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSURegressionModel : NSObject
{
    _Bool mModelValid;
    int mErrorType;
}

- (id)formattedStringWithCoefficient:(double)arg1 locale:(id)arg2;
- (id)equationString;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;
- (int)numSuperscriptRanges;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (double)rSquared;
- (double)estimateForX:(double *)arg1;
- (double)coefficientAtIndex:(int)arg1;
- (int)numCoefficients;
- (_Bool)isModelValid;
- (int)errorType;
- (int)regressionType;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;

@end

