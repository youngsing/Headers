//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class NSArray, NSMapTable, NSMutableArray, VKVectorTile;

__attribute__((visibility("hidden")))
@interface VKOverlayTile : VKTile
{
    NSMutableArray *_overlays;
    VKVectorTile *_roadTile;
    NSMapTable *_tileForOverlay;
    float _maximumStyleZ;
}

@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
@property(retain, nonatomic) VKVectorTile *roadTile; // @synthesize roadTile=_roadTile;
@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (id)tileForOverlay:(id)arg1;
- (void)setTile:(id)arg1 forOverlay:(id)arg2;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;
- (void)addOverlay:(id)arg1;
- (void)dealloc;

@end

