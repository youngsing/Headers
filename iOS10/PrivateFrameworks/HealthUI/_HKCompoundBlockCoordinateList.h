//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class HKValueRange, NSArray;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList
{
    NSArray *_subCoordinates;
    HKValueRange *_chartableDateRange;
}

- (void).cxx_destruct;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (CDStruct_6ca94699)blockPathEnd;
- (CDStruct_6ca94699)blockPathStart;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (long long)numCoordinates;
- (id)_coordinatesInChartableRange:(id)arg1;
- (id)coordinates;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableDateRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithSubCoordinates:(id)arg1 chartableDateRange:(id)arg2;

@end
