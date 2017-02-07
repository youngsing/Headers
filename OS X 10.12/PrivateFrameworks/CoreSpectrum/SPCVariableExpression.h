//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpectrum/SPCExpression.h>

@class NSString;

@interface SPCVariableExpression : SPCExpression
{
    NSString *_variableName;
}

+ (BOOL)supportsSecureCoding;
+ (id)expressionWithVariableNamed:(id)arg1;
@property(copy, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
- (id)referencedVariables;
- (id)expressionString;
- (long long)expressionType;
- (id)representationForSPCArchive:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariable:(id)arg1;

@end
