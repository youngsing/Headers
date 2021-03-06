//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUChartSeries, NSArray;

@protocol FUChartSeriesDataSource <NSObject>
- (id)maxYValueForChartSeries:(FUChartSeries *)arg1;
- (id)minYValueForChartSeries:(FUChartSeries *)arg1;
- (id)maxXValueForChartSeries:(FUChartSeries *)arg1;
- (id)minXValueForChartSeries:(FUChartSeries *)arg1;

@optional
- (NSArray *)labelsAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
@end

