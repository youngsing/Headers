//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpectrum/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPCExpression : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)variableExpressionWithVariable:(id)arg1;
+ (id)functionExpressionWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
+ (id)operatorExpressionWithOperator:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
+ (id)literalExpressionWithObject:(id)arg1;
+ (id)nullExpression;
+ (id)expressionForString:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)referencedVariables;
- (id)variableName;
- (id)arguments;
- (id)functionName;
- (id)objectValue;
@property(readonly, copy, nonatomic) NSString *expressionString;
@property(readonly, nonatomic) long long expressionType;

@end

