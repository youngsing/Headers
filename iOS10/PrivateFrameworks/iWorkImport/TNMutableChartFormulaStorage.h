//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TNChartFormulaStorage.h>

__attribute__((visibility("hidden")))
@interface TNMutableChartFormulaStorage : TNChartFormulaStorage
{
}

- (unsigned long long)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(struct __CFUUID *)arg2;
- (void)addFormula:(id)arg1 withFormulaID:(CDStruct_a91f2c80)arg2;
- (void)setFormulaList:(id)arg1 forKey:(unsigned long long)arg2;
- (id)mutableFormulaListForType:(unsigned long long)arg1;
- (void)clearFormulaListForKey:(unsigned long long)arg1;
- (void)setDirection:(int)arg1;
- (id)initWithChartFormulaStorage:(id)arg1;

@end

