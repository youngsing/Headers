//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOFeatureStyleAttributes, NSArray;
@protocol VKCustomFeatureDataSourceObserver;

@protocol VKCustomFeatureDataSource <NSObject>
- (NSArray *)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (unsigned char)sceneState;
- (unsigned char)sceneID;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (GEOFeatureStyleAttributes *)clusterStyleAttributes;
- (BOOL)isClusteringEnabled;
- (void)removeObserver:(id <VKCustomFeatureDataSourceObserver>)arg1;
- (void)addObserver:(id <VKCustomFeatureDataSourceObserver>)arg1;
@end

