//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSRegion, _NSTiledLayer;

__attribute__((visibility("hidden")))
@interface _NSTiledLayerContents : NSObject
{
    _NSTiledLayer *_tiledLayer;
    NSRecursiveLock *_displayLock;
    NSRegion *_dirtyRegion;
    NSMutableDictionary *_tiles;
    struct CGRect _activeRect;
    struct CGRect _coverageRect;
    struct CGRect _newCoverageRect;
    struct CGRect _presentationRect;
    struct CGSize _tileSize;
}

@property(readonly) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(readonly) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(readonly) struct CGRect coverageRect; // @synthesize coverageRect=_coverageRect;
@property(readonly) struct CGRect activeRect; // @synthesize activeRect=_activeRect;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)NS_canDrawLayer:(id)arg1;
- (void)updateContentsScaleSize:(struct CGSize)arg1;
- (void)updateContentsScale:(double)arg1;
@property _NSTiledLayer *tiledLayer;
- (void)update:(BOOL)arg1 shouldCallPrepareContent:(BOOL)arg2;
- (void)invalidateRect:(struct CGRect)arg1;
- (BOOL)_prefetchTilesWithScrollVelocity:(struct CGPoint)arg1 hasMorePrefetch:(char *)arg2;
- (BOOL)prefetchContentsInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (struct CGRect)renderedRectInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (struct CGRect)_findRenderedRectStartingAtRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (struct CGRect)_findFirstValidRectStartingAtRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (void)setPreparedContentRect:(struct CGRect)arg1;
- (void)addAllTilesWithNonPurgedContents;
- (void)purgeExcessTileContents;
- (void)_removeNonVisibleTiles;
- (void)_performWorkOnTilesOutwardFromRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_performWorkOnTilesFromVisibleAreaOutward:(CDUnknownBlockType)arg1 scrollVelocity:(struct CGPoint)arg2;
- (void)dealloc;
- (id)init;

@end

