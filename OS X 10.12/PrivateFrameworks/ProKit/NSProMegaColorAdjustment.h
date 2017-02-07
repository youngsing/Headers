//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProKit/NSCoding-Protocol.h>
#import <ProKit/NSCopying-Protocol.h>

@interface NSProMegaColorAdjustment : NSObject <NSCopying, NSCoding>
{
    double _saturation;
    double _luma;
    struct _NSProPolarPoint _balanceVector;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)colorAdjustmentWithSaturation:(double)arg1 luma:(double)arg2 balanceVector:(struct _NSProPolarPoint)arg3;
@property(nonatomic) struct _NSProPolarPoint balanceVector; // @synthesize balanceVector=_balanceVector;
@property(nonatomic) double luma; // @synthesize luma=_luma;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSaturation:(double)arg1 luma:(double)arg2 balanceVector:(struct _NSProPolarPoint)arg3;

@end
