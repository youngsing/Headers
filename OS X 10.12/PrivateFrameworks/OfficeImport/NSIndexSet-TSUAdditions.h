//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)
+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg1;
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg1;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)tsu_intersectsIndexesInIndexSet:(id)arg1;
@property(readonly, nonatomic) BOOL tsu_isSingleContiguousRange;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
@end
