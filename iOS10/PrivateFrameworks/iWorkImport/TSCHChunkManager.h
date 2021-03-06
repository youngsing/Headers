//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCHChunkMap, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface TSCHChunkManager : NSObject
{
    TSUWeakReference *mWeakChart;
    TSCHChunkMap *mCachedChunkMap;
}

+ (id)p_allChartDeliveryStylesLocalized:(_Bool)arg1;
+ (id)p_allNonLocalizedChartDeliveryStyles;
+ (id)p_allLocalizedChartDeliveryStyles;
+ (id)p_makeAllChartDeliveryStylesLocalized:(_Bool)arg1;
- (id)containedTextForChartDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2;
- (id)p_nameForMultiDataSetCategory:(unsigned long long)arg1 chart:(id)arg2;
- (id)p_seriesNameForSeriesAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 chart:(id)arg3;
- (id)p_backgroundStringForChartWithTitle:(id)arg1;
- (_Bool)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3;
- (void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(_Bool)arg4 valueStart:(long long *)arg5 valueCount:(long long *)arg6;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(_Bool)arg3 seriesStart:(long long *)arg4 seriesCount:(long long *)arg5;
- (unsigned long long)p_chunkCountForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 chunkMap:(id)arg3;
- (unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1;
- (_Bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (_Bool)hasBackgroundLayerForPieChart;
- (_Bool)p_hasBackgroundLayerForPieChartForChart:(id)arg1;
- (_Bool)p_hasBackgroundFillForChart:(id)arg1;
- (_Bool)p_legendOnForChart:(id)arg1;
- (_Bool)p_titleOnForChart:(id)arg1;
- (_Bool)p_isMultiDataForChart:(id)arg1;
- (_Bool)p_isPieForChart:(id)arg1;
- (unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1;
- (void)updateCache:(unsigned long long)arg1;
- (id)p_cachedChunkMap;
- (id)p_chunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 forceUpdateCache:(_Bool)arg3;
- (id)p_createChunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2;
- (id)p_chart;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

