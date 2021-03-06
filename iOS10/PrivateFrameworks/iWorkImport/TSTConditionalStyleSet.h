//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleSet : TSPObject <TSTCellDiffing, TSPCopying>
{
    NSMutableArray *mConditionalStyleSetRules;
}

+ (id)cellDiffProperties;
+ (id)noRuleConditionalStyleSetWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (unsigned long long)ruleCount;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)rules;
- (id)description;
- (_Bool)isEqualForInspector:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (_Bool)containsUidReferences;
- (id)copyByRepairingBadReferences:(id)arg1 tableIDHistory:(id)arg2 tableID:(struct __CFUUID *)arg3 inCellCoordinate:(struct TSUCellCoord)arg4 offset:(CDStruct_1ef3fb1f)arg5;
- (id)copyToGeometricFormForTableModel:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2;
- (id)copyToGeometricFormWithCalcEngine:(id)arg1 tableID:(struct __CFUUID *)arg2 containingCell:(struct TSUCellCoord)arg3;
- (id)copyToUidFormForTableModel:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(_Bool)arg3;
- (void)setHostCell:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyByClearingUids:(id)arg1 containingTableID:(struct __CFUUID *)arg2;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_8a451d2c *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rules:(id)arg2;
- (id)initWithConditionalStyleSet:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;

@end

