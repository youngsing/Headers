//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol HFCharacteristicOperationContextProviding;

@interface HFAggregatedCharacteristicValueBatchReadResponse : NSObject
{
    NSMutableSet *_allCharacteristics;
    NSMutableSet *_allCharacteristicTypes;
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSMutableDictionary *_valuesByCharacteristicType;
    NSMutableDictionary *_errorsByCharacteristicType;
    CDUnknownBlockType _aggregationPolicyBlock;
}

+ (id)aggregatedResponseFromResponse:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType aggregationPolicyBlock; // @synthesize aggregationPolicyBlock=_aggregationPolicyBlock;
@property(readonly, nonatomic) NSMutableDictionary *errorsByCharacteristicType; // @synthesize errorsByCharacteristicType=_errorsByCharacteristicType;
@property(readonly, nonatomic) NSMutableDictionary *valuesByCharacteristicType; // @synthesize valuesByCharacteristicType=_valuesByCharacteristicType;
@property(retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(readonly, nonatomic) NSSet *allCharacteristicTypes; // @synthesize allCharacteristicTypes=_allCharacteristicTypes;
@property(readonly, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;
- (void).cxx_destruct;
- (void)addError:(id)arg1 forCharacteristic:(id)arg2;
- (void)addValue:(id)arg1 forCharacteristic:(id)arg2;
- (void)addCharacteristic:(id)arg1;
- (id)_averageValueForValues:(id)arg1 metadata:(id)arg2;
- (id)_mostCommonValueForValues:(id)arg1;
- (id)_aggregatedValueForValues:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 metadata:(id)arg3;
- (id)_metadataForCharacteristicType:(id)arg1;
- (_Bool)hasErrorForEveryCharacteristic;
- (_Bool)hasAnyErrors;
- (id)errorForCharacteristicType:(id)arg1;
- (_Bool)isValueAggregatedForCharacteristicType:(id)arg1;
- (id)allValuesForCharacteristicType:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1;
- (id)init;

@end

