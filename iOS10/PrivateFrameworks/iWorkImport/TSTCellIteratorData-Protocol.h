//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSTCell;

@protocol TSTCellIteratorData <NSObject>
@property(readonly, nonatomic) _Bool cellHasCommentStorage;
@property(readonly, nonatomic) _Bool cellHasCustomFormat;
@property(readonly, nonatomic) _Bool cellHasConditionalStyle;
@property(readonly, nonatomic) _Bool cellHasFormula;
@property(readonly, nonatomic) int cellValueType;
@property(readonly, nonatomic) _Bool columnHidden;
@property(readonly, nonatomic) _Bool rowHidden;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool commentStorageOnly;
@property(readonly, nonatomic) _Bool styleOnly;
@property(readonly, nonatomic) struct TSUCellRect mergeRange;
@property(readonly, nonatomic) struct TSTCellStorage *cellRef;
@property(readonly, nonatomic) TSTCell *cell;
@property(readonly, nonatomic) struct TSUCellCoord cellID;
- (void)expandCell;
- (void)expandCellSuppressingFormulaInflation:(_Bool)arg1;
@end

