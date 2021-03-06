//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DChartBoundsLayoutSceneDelegate, TSCH3DChartGetProjectedBoundsPipeline, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBoundsLayout : NSObject
{
    TSCH3DScene *mScene;
    TSCH3DScene *mBounds;
    Class mGetBoundsClass;
    TSCH3DChartGetProjectedBoundsPipeline *mGetBounds;
    TSCH3DChartBoundsLayoutSceneDelegate *mSceneDelegate;
    box_80622335 mLayoutInPage;
    box_80622335 mBodyLayoutInPage;
    tvec2_3b141483 mOriginalContainingViewport;
    int mMode;
    CDStruct_339a9a6e mLayoutSettings;
}

@property(readonly, nonatomic) CDStruct_339a9a6e layoutSettings; // @synthesize layoutSettings=mLayoutSettings;
@property(retain, nonatomic) Class getBoundsClass; // @synthesize getBoundsClass=mGetBoundsClass;
@property(nonatomic) int mode; // @synthesize mode=mMode;
@property(nonatomic) tvec2_3b141483 originalContainingViewport; // @synthesize originalContainingViewport=mOriginalContainingViewport;
@property(nonatomic) box_80622335 bodyLayoutInPage; // @synthesize bodyLayoutInPage=mBodyLayoutInPage;
@property(nonatomic) box_80622335 layoutInPage; // @synthesize layoutInPage=mLayoutInPage;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
- (id).cxx_construct;
- (id)debugBounds;
- (void)cacheLabels;
- (void)resetContainingViewport;
- (const struct ChartProjectedBoundsSpaces *)projectedBounds;
- (const struct ChartProjectedBoundsSpaces *)p_projectedBoundsWithLabelsMode:(int)arg1;
- (struct ResizingSize)resizingSize;
- (void)p_updateLabelWrapBoundsPass;
- (_Bool)isSage;
- (_Bool)isInward;
@property(nonatomic) tvec2_3b141483 containingViewport;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;
- (void)invalidateBounds;
- (id)cacheableGetBoundsPipeline;
- (void)resetSceneDelegate;
- (void)dealloc;
- (id)init;
- (id)initWithScene:(id)arg1 containingViewport:(const tvec2_3b141483 *)arg2 originalContainingViewport:(const tvec2_3b141483 *)arg3 layoutSettings:(const CDStruct_339a9a6e *)arg4;

@end

