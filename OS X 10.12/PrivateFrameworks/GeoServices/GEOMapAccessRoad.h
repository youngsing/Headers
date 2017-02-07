//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapAccessLine.h>

#import <GeoServices/GEOMapRoad-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad>
{
    shared_ptr_92bc9970 _roadEdge;
    unsigned long long _roadID;
}

+ (double)estimatedWidthForRoad:(CDStruct_ffa96740 *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tileKeys;
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) NSString *internalRoadName;
- (id)findRoadsToNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFrom:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)roadEdgesWithHandler:(CDUnknownBlockType)arg1;
- (void)roadFeaturesWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) BOOL isRail;
@property(readonly, nonatomic) BOOL isBridge;
@property(readonly, nonatomic) BOOL isTunnel;
@property(readonly, nonatomic) BOOL speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
- (id)initWithMap:(id)arg1 roadEdge:(shared_ptr_92bc9970)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double length;
@property(readonly) Class superclass;

@end
