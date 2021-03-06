//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCEFormulaOwning-Protocol.h>

@class NSString, TSCECalculationEngine, TSCECellCoordinateVector, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning>
{
    TSTTableInfo *mTableInfo;
    TSCECalculationEngine *mCalculationEngine;
    struct __CFUUID *mOwnerID;
    TSCECellCoordinateVector *mCellsToInvalidate;
    TSCECellCoordinateVector *mCellsToRewrite;
}

- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_22e7ec3e)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;
- (int)registerWithCalculationEngine:(id)arg1;
- (void)changedConditionForCellID:(struct TSUCellCoord)arg1;
- (void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (void)removeFormulasInRange:(struct TSUCellRect)arg1;
- (void)removeFormulaAtCellID:(struct TSUCellCoord)arg1;
- (void)addFormulaForConditionalStyle:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)tableInfo;
- (void)setTableInfo:(id)arg1;
- (void)setOwnerID:(struct __CFUUID *)arg1;
- (struct __CFUUID *)ownerID;
- (_Bool)checkConditionForCellID:(struct TSUCellCoord)arg1 withConditionalStyle:(id)arg2 withIndex:(unsigned long long *)arg3;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithTableInfo:(id)arg1 ownerID:(struct __CFUUID *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

