//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCHChartAxis, TSCHChartSeries, TSCHChartValueAxis, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHLineAreaSeriesModelCache : NSObject
{
    unsigned long long mSeriesIndex;
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned int mLabelPosition;
    _Bool mShowLabelsInFront;
    int mSymbolType;
    TSDStroke *mSymbolStroke;
    TSDStroke *mSeriesStroke;
    TSDShadow *mSeriesShadow;
    double mDataPointSize;
    double mOpacity;
    int mLineType;
    id mSeriesFill;
    id mSymbolFill;
    _Bool mShowValueLabels;
    struct CGPath *mUnitSymbolPath;
}

@property(readonly) struct CGPath *unitSymbolPath; // @synthesize unitSymbolPath=mUnitSymbolPath;
@property(readonly) double opacity; // @synthesize opacity=mOpacity;
@property(readonly) int lineType; // @synthesize lineType=mLineType;
@property(readonly) TSDShadow *seriesShadow; // @synthesize seriesShadow=mSeriesShadow;
@property(readonly) id seriesFill; // @synthesize seriesFill=mSeriesFill;
@property(readonly) TSDStroke *seriesStroke; // @synthesize seriesStroke=mSeriesStroke;
@property(readonly) _Bool showValueLabels; // @synthesize showValueLabels=mShowValueLabels;
@property(readonly) double dataPointSize; // @synthesize dataPointSize=mDataPointSize;
@property(readonly) id symbolFill; // @synthesize symbolFill=mSymbolFill;
@property(readonly) TSDStroke *symbolStroke; // @synthesize symbolStroke=mSymbolStroke;
@property(readonly) int symbolType; // @synthesize symbolType=mSymbolType;
@property(readonly) _Bool showLabelsInFront; // @synthesize showLabelsInFront=mShowLabelsInFront;
@property(readonly) unsigned int labelPosition; // @synthesize labelPosition=mLabelPosition;
@property(readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property(readonly) TSCHChartAxis *groupAxis; // @synthesize groupAxis=mGroupAxis;
@property(readonly) TSCHChartValueAxis *valueAxis; // @synthesize valueAxis=mValueAxis;
@property(readonly) TSCHChartSeries *series; // @synthesize series=mSeries;
@property(readonly) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;

@end

