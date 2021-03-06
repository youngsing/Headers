//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GQDTCell, GQDTOverlapCell, GQDTTable;

__attribute__((visibility("hidden")))
@interface GQSTable : NSObject
{
    GQDTTable *mTable;
    GQDTOverlapCell *mCurrentOverlapCell;
    GQDTCell *mLastCellRead;
    _Bool mIsStreaming;
    _Bool mAlwaysPutReadCellsInArray;
    long long mCellCount;
    _Bool mIsCounting;
}

- (_Bool)isCounting;
- (void)setIsCountingCount:(_Bool)arg1;
- (void)incrementCellPosition;
- (void)skipCells:(long long)arg1;
- (long long)column;
- (long long)row;
- (void)setAlwaysPutReadCellsInArray:(_Bool)arg1;
- (_Bool)alwaysPutReadCellsInArray;
- (id)table;
- (_Bool)isStreaming;
- (void)setLastCellRead:(id)arg1;
- (id)lastCellRead;
- (void)setCurrentOverlapCell:(id)arg1;
- (id)currentOverlapCell;
- (void)dealloc;
- (id)initWithStreaming:(_Bool)arg1 table:(id)arg2;

@end

