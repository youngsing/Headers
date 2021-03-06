//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, TSCEFormulaRewrite_Uids, TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject
{
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    TSCEFormulaRewrite_Uids *_rowOrColumnUids;
    vector_dadc1b26 _rowOrColumnUuids;
    _Bool _isRows;
    NSArray *_rangeEntries;
    struct TSCERangeCoordinate _tableRange;
    TSCEFormulaRewriteInfo_RowColumnInfo *_auxRowColumnInfo;
    TSUMutableUUIDSet *_expandedRowColumnUuids;
    UUIDData_5fbc143e _insertAtUid;
}

@property(nonatomic) UUIDData_5fbc143e insertAtUid; // @synthesize insertAtUid=_insertAtUid;
@property(readonly, retain, nonatomic) TSUUUIDSet *expandedRowColumnUuids; // @synthesize expandedRowColumnUuids=_expandedRowColumnUuids;
@property(retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo; // @synthesize auxRowColumnInfo=_auxRowColumnInfo;
@property(readonly, nonatomic) const vector_dadc1b26 *rowOrColumnUuids; // @synthesize rowOrColumnUuids=_rowOrColumnUuids;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids; // @synthesize rowOrColumnUids=_rowOrColumnUids;
@property(readonly, nonatomic) _Bool isRows; // @synthesize isRows=_isRows;
@property(readonly, nonatomic) const UUIDData_5fbc143e *conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property(readonly, nonatomic) const UUIDData_5fbc143e *tableUID; // @synthesize tableUID=_tableUID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (vector_dadc1b26)uuidsForRowsInRange:(struct _NSRange)arg1;
- (vector_60dd006f)coordRangesForInsertRemove;
- (struct TSCERangeCoordinate)affectedRangeForMoveRows;
- (struct TSCERangeCoordinate)affectedRangeForInsertRows;
- (struct TSCERangeCoordinate)affectedRangeForRemoveRows;
- (struct TSCERangeCoordinate)tableRange;
@property(readonly, retain, nonatomic) NSIndexSet *rowOrColumnIndices;
- (unsigned short)indexForUuid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)uuidForIndex:(unsigned short)arg1;
- (_Bool)indexIsAffected:(unsigned short)arg1;
- (struct TSUCellCoord)previousCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData_5fbc143e *)arg2 updatedCellCoordinate:(struct TSUCellCoord)arg3;
- (struct TSUCellCoord)updatedCellCoordinateForRewriteType:(int)arg1 forTableUID:(const UUIDData_5fbc143e *)arg2 originalCellCoordinate:(struct TSUCellCoord)arg3;
- (unsigned short)offsetForUpdatedRowIndex:(unsigned short)arg1 isRemoveRows:(_Bool)arg2;
- (unsigned short)offsetForRowIndex:(unsigned short)arg1;
- (void)unloadIndexes;
- (void)createAuxRowColumnInfoForMove;
- (void)loadIndexesForTable:(id)arg1 forRemoveRows:(_Bool)arg2;
- (void)saveToMessage:(struct ColumnOrRowUuidsInfoArchive *)arg1;
- (id)initFromMessage:(const struct ColumnOrRowUuidsInfoArchive *)arg1;
@property(readonly, nonatomic) _Bool isColumns;
- (void)dealloc;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1 uuids:(const vector_dadc1b26 *)arg2 areRows:(_Bool)arg3;

@end

