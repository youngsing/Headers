//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABConstraintDescription : NSObject
{
    NSString *_viewName1;
    long long _attribute1;
    long long _relation;
    NSString *_viewName2;
    long long _attribute2;
    double _constantSign;
    double _constantValue;
    NSString *_constantName;
    float _priorityValue;
    NSString *_priorityName;
}

+ (long long)relationFromString:(id)arg1;
+ (long long)attributeFromString:(id)arg1;
+ (id)descriptionWithString:(id)arg1 match:(id)arg2 viewName1Range:(struct _NSRange)arg3 atribute1Range:(struct _NSRange)arg4 relationRange:(struct _NSRange)arg5 viewName2Range:(struct _NSRange)arg6 attriute2Range:(struct _NSRange)arg7 requiresConstantSign:(_Bool)arg8 constantSignRange:(struct _NSRange)arg9 constantValueRange:(struct _NSRange)arg10 constantNameRange:(struct _NSRange)arg11 priorityValueRange:(struct _NSRange)arg12 priorityNameRange:(struct _NSRange)arg13;
+ (id)singleAttributeConstraintDescriptionWithString:(id)arg1;
+ (id)twoAttributeConstraintDescriptionWithString:(id)arg1;
+ (id)constraintDescriptionWithString:(id)arg1;
+ (id)constraintWithGenericFormat:(id)arg1 metrics:(id)arg2 views:(id)arg3;
@property(readonly) NSString *priorityName; // @synthesize priorityName=_priorityName;
@property(readonly) float priorityValue; // @synthesize priorityValue=_priorityValue;
@property(readonly, copy) NSString *constantName; // @synthesize constantName=_constantName;
@property(readonly) double constantSign; // @synthesize constantSign=_constantSign;
@property(readonly) double constantValue; // @synthesize constantValue=_constantValue;
@property(readonly) long long attribute2; // @synthesize attribute2=_attribute2;
@property(readonly, copy) NSString *viewName2; // @synthesize viewName2=_viewName2;
@property(readonly) long long relation; // @synthesize relation=_relation;
@property(readonly) long long attribute1; // @synthesize attribute1=_attribute1;
@property(readonly, copy) NSString *viewName1; // @synthesize viewName1=_viewName1;
- (id)constraintWithMetrics:(id)arg1 views:(id)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithViewName1:(id)arg1 attribute1:(long long)arg2 relation:(long long)arg3 viewName2:(id)arg4 attribute2:(long long)arg5 constantSign:(double)arg6 constantValue:(double)arg7 constantName:(id)arg8 priorityValue:(float)arg9 priorityName:(id)arg10;

@end

