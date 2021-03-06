//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUnitConverter.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>
{
    double _coefficient;
    double _constant;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) double constant; // @synthesize constant=_constant;
@property(readonly) double coefficient; // @synthesize coefficient=_coefficient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (id)initWithCoefficient:(double)arg1 constant:(double)arg2;
- (id)initWithCoefficient:(double)arg1;

@end

